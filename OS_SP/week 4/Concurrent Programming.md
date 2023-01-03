# Concurrent Programming

## Example of Sequential Server
![[Pasted image 20230101194951.png]]

**Solution**, use concurrent server to server multiple clients so a client "cannot" block another


## Example of Concurrent Server

![[Pasted image 20230101195041.png]]


# Concurrency using Threads

```c
#include <stdio.h>

void do_one_thing(int*);
void do_another_thing(int*);
void do_wrap_up(int, int);


int r1 = 0, r2 = 0;

int main(void)
{
	do_one_thing(&r1);
	do_another_thing(&r2);
	do_wrap_up(r1, r2);
	return 0;
}
```
In a serial system, we see the above as a _sequence of instructions_ executed serially. 
In a concurrent perspective, we view program as a collections of tasks and if it is possible to execute some tasks at the same time, result is unchanged but **overall execution time reduced**

In the example, `do_one_thing` and `do_another_thing` can be viewed as a task.


## Threads
> A thread is the smallest sequence of programmed instructions that can be independently managed by a scheduler

![[Pasted image 20230101195753.png]]
![[Pasted image 20230101195842.png]]

Threads have their own _stacks_ but _share heap, global data and opened files or sockets_

### PThreads

To use pthreads on posix systems, use `#include <pthread.h` and to spawn a thread, use `pthread_create()` which has the  function signature:
```c
int pthread_create(
	pthread_t* thread_id,       //ID for thread
	const pthread_attr_t* attr, //controls thread attr
	void* (*function)(void*),   //function to be executed
	void* arg                   //argument for function
);
```
`pthread_create()` returns 0 if creation successful, otherwise nonzero value returns (indicates error)

![[Pasted image 20230101200432.png]]

![[Pasted image 20230101201158.png]]

![[Pasted image 20230101201413.png]]
If main thread does not `sleep(1)` then most likely does not print anything since main thread would return before thread1 and thread2 could finish executing their own functions.

![[Pasted image 20230101201516.png]]

## Shared data objects in concurrent system
Cooperation of threads leads to sharing of:
- _Global data objects_
- _Heap objects_
- _Files_

Lack of synchronization leads to wrong calculations and potential undefined behaviour
**Synchronization** makes sure some events happen in order

## Synchronization methods in Pthreads
Pthread lib provides three sync mechanisms:

- _Joins_
- _Mutual exclusions (Mutexes)_
- _Condition variables_

### Using `pthread_join()`

`pthread_join()` is a blocking function and syntax is:
```c
int pthread_join(
	pthread_t thread_id,    //ID of thread
	void** value_pntr       //address of function return value
);
```
![[Pasted image 20230101203010.png]]

There will be issues when threads update shared data
![[Pasted image 20230101203128.png]]


### Race conditions and prevention
- A race condition occurs when multiple threads perform operations on shared data but results depend on order they are performed in.
- Problem solved using _mutual exclusion_, so threads get exclusive access to shared data in turn
- Pthread lib offers _mutex_ objects to enforce this for a variable or set of variables

### Mutual exclusion in Pthread
- Syntax for mutex objects are:
```c
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
```
- Generally, mutexes are _global_
- To use a mutex for a set of variables, enclose the variable with a lock and unlock as:
![[Pasted image 20230101203550.png]]
The section between a lock and unlock is called the **critical region**

### Deadlocks
![[Pasted image 20230101203651.png]]

### Using `pthread_mutex_trylock()`
- Syntax is:
```c
int pthread_mutex_trylock(pthread_mutex_t* mutex);
```
- Tries to lock mutex and if available, locks it and returns 0
- Otherwise, returns nonzero but will not wait for mutex to be freed

Example
![[Pasted image 20230101203841.png]]

### Using condition variables
- Condition variables can be used to synchronize threads based on value
- One thread waits until data reaches particular value or certain event occurs 
- Another active thread sends signal when event occurs
- Receiving the signal, waiting thread wakes up
![[Pasted image 20230101204517.png]]

- Condition variable is of type `pthread_cond_t`
- Syntax is:
```c
pthread_cond_t condition_cond = PTHREAD_COND_INITIALIZER;
```
- Thread goes to waiting state based on condition to happen by:
```c
pthread_cond_wait(&condition_cond, &condition_mutex);
```
`pthread_cond_wait` takes two args, condition variable and mutex variable
- Waking thread based on condition:
```c
pthread_cond_signal(&condition_cond);
```
An example would be:

```c
int count = 0;
#define COUNT_DONE 10
#define COUNT_HALT1 3
#define COUNT_HALT2 6
pthread_mutex_t condition_mutex = PTHREAD_MUTEX_INITIALIZER;

void* functionCount1()
{
	for(;;)
	{
		pthread_mutex_lock(&condition_mutex);
		while(count >= COUNT_HALT1 && count <= COUNT_HALT2)
		{
			pthread_cond_wait(&condition_cond, &condition_mutex);
		}
		pthread_mutex_unlock(&condition_mutex);
		pthread_mutex_lock(&count_mutex);
		count++;
		printf("Counter value functionCount1: %d\n", count);
		pthread_mutex_unlock(&count_mutex);
		if(count >= COUNT_DONE) return NULL;
	}
}

void* functionCount2()
{
	for(;;)
	{
		pthread_mutex_lock(&condition_mutex);
		if(count > COUNT_HALT2)
		{
			pthread_cond_signal(&condition_cond);
		}
		pthread_mutex_unlock(&condition_mutex);
		pthread_mutex_lock(&count_mutex);
		count++;
		printf("Counter value functionCount2:%d\n", count);
		pthread_mutex_unlock(&count_mutex);
		if(count >= COUNT_DONE) return NULL;
	}

}
```
When `functionCount1()` sees count for the first time, out of range so goes to wait state

`pthread_cond_wait()` releases condition mutex so condition variable can be used by other thread

Only `functionCount2()` increments count from `COUNT_HALT1` to `COUNT_HALT2` and after signals the waiting thread to wake up using the condition variable. 

`functionCount2()` releases the condition mutex

#### Need to mutex condition variable

![[Pasted image 20230101210152.png]]
- Presence of a signal is checked only in 'waiting' state.
- If signal arrives before Thread1 moves to 'waiting', then Thread1 will miss that so Thread1 will wait indefinitely

Condition mutex _serializes_ access to condition variable properly

## Concurrent operations on shared linked list

Consider sorted linked list with operations:
- **Insert**
- **Delete**
- **Member**

For concurrent threads to perform operations on a shared linked list, reads can occur conccurrently but writes cannot occur concurrently

![[Pasted image 20230101211352.png]]
![[Pasted image 20230101211358.png]]

Simply only allowing one thread access will mean reads fail to exploit parallelism but writes would be fine. _Defeats the purpose of multi-threading_

Locking each node (Granular access) would make solution complicated and slower. _major performance problem and complication_

Pthreads provide another solution, **read-write locks**

### Using read-write locks
- Read-write locks used as:
```c
pthread_rwlock_t lock = PTHREAD_RWLOCK_INITIALIZER;
```
- RW lock similar to a mutex excepts provides two lock functions:
	- for reading:
	```c 
		pthread_rwlock_rdlock()
	```
	- for read-write access:
	```c
		pthread_rwlock_wrlock()
	```
- RW locks have only one unlock function:
```c
	pthread_rwlock_unlock();
```
Goal is to allow multiple threads to read, but only one to write at a time

![[Pasted image 20230101211931.png]]

