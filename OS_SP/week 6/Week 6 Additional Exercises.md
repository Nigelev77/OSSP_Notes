# Q1 

**How does the distinction between kernel mode and user mode function as a rudimentary form of protection (security) system?**

It ensures that user programs cannot run privileged code and so cannot cause the whole system to crash and also ensures that user processes cannot overwrite each other since the kernel would stop that from occuring ✅
==All CPU instructions which might affect other users or access devices directly may be only executed in kernel mode. Hence the operating system can prevent user 1 from executing instructions which might affect user 2.==

# Q2

**Which of the following instructions should be privileged?**

1.  **Set value of timer.**
2.  **Read the clock.**
3.  **Clear memory.**
4.  **Issue a trap instruction.**
5.  **Turn off interrupts.**
6.  **Modify entries in device-status table.**
7.  **Switch from user to kernel mode.**
8.  **Access I/O device.**


1. yes ✅
2. no ✅
3. yes ✅
4. no  ❌and ✅
5. yes ✅
6. yes ✅
7. no ❌and ✅
8. yes ✅
> 1. yes
> 2. no
> 3. of own process no, otherwise yes
> 4. generally yes but for issuing system call no
> 5. yes
> 6. yes
> 7. in general yes but ones in connection with system calls no
> 8. yes

# Q3

**Why is it important not to have memory leaks in the kernel?**

If memory leaks occur in the kernel, they are not cleaned up or can be recovered so the system will continue using up memory and eventually run out of memory with no way of reclaiming it until system is rebooted 
✅
==The kernel never stops and has no garbage collector. Hence any memory lost to a memory leak will not be reclaimed==

# Q4

**What is the effect of calling a routine which may send the current process to sleep in interrupt mode?**

The routine may be pre-empted/interrupted by an interrupt and thus may take longer to execute the routine. If such an event occurred, address of process is pushed onto the system stack to return to once interrupt handled. ❌

==The interrupt may occur while any process is executing. If the current process is sent to sleep, this process might not be woken up and therefore will never continue.== 


To correct answer, 
_routine may be pre-empted and thus if process sent to sleep, may not be woken up so never continue_