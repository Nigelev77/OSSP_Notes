
# Process Concept

- An OS executes many a variety of programs
	- Batch systems
	- Time-shared aka user programs or tasks

> Process - a program in execution. Program can be thought of as an "inactive" or "passive" object whilst process is an "active" object.

Processes include
_text (code) section and program counter (PC)_
_stack_
_data section_

![[Pasted image 20230105131924.png]]

## Process States

States a process takes:
*New* - Process is created
_Running_ - Process is being executed
_Waiting_ - Process waiting for an event
_Ready_ - Process waiting to be assigned to processor
_Terminated_ - Process finished execution

![[Pasted image 20230105132154.png|Process Lifetime]]

## Process Control block

Information about processes are stored in a kernel data structure as a **Process control block**:
- State
- PC
- CPU register content
- CPU scheduling information
- Mem management info
- Accounting info (processID, how much data, how far along etc)
- IO status info


![[Pasted image 20230105132425.png|Control block structure]]


## Taskstruct (Linux)


[code](https://elixir.bootlin.com/linux/latest/source/include/linux/sched.h#L737)

In linux, task_struct holds information about a process which can be requested from the kernel and can inspect data on processes in the directory `/proc/pid`


## Process Creation

Parent process creates child processes which can create other children, forming tree

Generally, processes identified and managed via pid

3 different types of resource sharing:
	Parent and child share all resources
	Children share subset of parent
	Parent and Children share no resources

2 different types of execution:
	Parent and children execute concurrently
	Parent waits for children

In **UNIX**, you can create new processes with system call `fork()` and exec system call used after to replace memory space with new program


![[Pasted image 20230105133356.png|fork process lifecycle]]

## Process Termination

After process returns, asks OS to delete (exit) it
	Output data from child to parent in wait
	It's resources are deallocated
Parent may terminate child processes via abort in situations such as:
	Child exceeded allocated resouces
	Child is no longer required
	If parent is terminating too (cascading termination)

# Concurrency via Context Switching

## Context Switch

When CPU switches processes, system must save state of old process and load state of new via _context switch_

Context of process represented in **Process Control Block (PCB)**

Context switch time is overhead; no useful work whilst switching

Switch time depends on HW

![[Pasted image 20230105133757.png| Context switch timeline]]

# Summary

-A process is a program in execution (active program)

-Process managed by OS and can has different states

-System calls exist to create processes (fork children)

-CPU "context switches" between process determined by OS which are costly (unlike potentially threads) 



