
# The Critical Section Problem

Concurrent access to shared data results in data inconsistency

Maintaining consistency requires checks to ensure proper cooperation and execution

_Problem_: Consumer and Producer share finite buffer
	_Producer_ produces items and puts into buffer
	_Consumer_ takes out items
Situations when producer waiting with full buffer and consumers waiting with empty buffer

## Producer
```c

while(true)
{
	// produce item and put in nextProduced
	while(count == BUFFER_SIZE); //wait at full buffer
	buffer[in] = nextProduced; // store new item
	in = (in + 1) % BUFFER_SIZE; // increment new pointer
	count++; // increment counter
}
```
## Consumer
```c
while(true)
{
	while(count == 0); //do nothing
	nextConsumerd = buffer[out];
	out = (out + 1) % BUFFER_SIZE;
	count--;
	//consumer item in nextConsumed
}
```

## Race condition

In the code above, `count++` and `count--` can lead to inconsistencies since producer and consumer race to update the value.

## Synchronisation primitives for critical sections

Solutions for concurrent modification of data in _critical sections_ require
	**Mutual exclusion** - If process Pi is in critical section (cs) with variables that can be modified, no other process can be in the cs
	**Progress** - No process outside should (remainder section, rs), should block another waiting to enter
	**Bounded waiting** - Limits exist on number of processes entering cs before the current one can enter (aka entry should be fair for all processes)
Should also not matter how fast or slow each process is

## Peterson's Solution
[gfg](https://www.geeksforgeeks.org/petersons-algorithm-in-process-synchronization/)

Two process solution assuming CPU's LOAD and STORE instructions are **atomic** (complete fully and cannot be stopped part way)

Processes share variables
	`int turn;` - indicates whose turn in cs
	`bool wants_in[2];` - indicate if process wants to enter cs

