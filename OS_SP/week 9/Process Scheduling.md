
# Scheduling

## Scheduling problem

Processes compete for resources (eg CPU time)

OS must define a scheduling system to manage process access time to these resources, typically through a queuing system for a resource

## Process Scheduling Queues

-**Job queue** - set of all processes in system
-**Ready queue** - set of all processes in memory ready and waiting to execute
-**Device queues** - set of processes waiting for IO device

Processes move between these queues


![[Pasted image 20230105143114.png | scheduling queue example]]


![[Pasted image 20230105143142.png | scheduling workflow]]


## CPU Scheduling

Os needs to determine which ready process the CPU

_Prerequisites_

**CPU-IO-Burst Cycles**
IO usually occurs after _fixed amount of time_. At this stage, appropriate to reschedule

**Preemptive Scheduling**
Processes forced to relinquish processor

## Criteria

Many criteria often conflict which measure scheduling success

-**CPU Utilisation**
-**Throughput** - Number of processes complete within a given time
-**Turnaround time** - Time taken for each process to be executed
-**Waiting time** - Time spent in ready queue
-**Response time** - time between request submission and producing first response

Two categories of processes:
_IO bound_ - spends more time doing IO, many short CPU bursts
_CPU bound_ - spends more time doing computations, few but long CPU bursts

# Scheduling algorithms

## First Come First Serve (FCFS)

Jobs put in queue and _served according to arrival order_

✔️
Easy to implement

❌
CPU bound processes cause long wait time

FCFS with **preemption** is called **Round Robin**, allows jobs to share time on CPU

## Round Robin
Similar to FCFS but pre-empts jobs to switch to next job to share the CPU

Requires a **time quantum (time before preemption)**.
If the **time quantum** is:
	_too short_ - too many context switches (expensive)
	_too long_ - processes monopolise/hog CPU 


## Shortest Job First

✔️
Theoretical smallest average wait time
Useful comparison algorithm

❌
Unimplementable
With extrapolation, need to calculate smoothing factor and predictions


Next job is one with **shortest CPU burst time**

**Unimplementable** (requires knowing the future) but would be algorithm with the _smallest average waiting time_, useful to _compare_ with others

Only hope to simulate/implement this is **extrapolation** from past behaviour. Done by applying a weighting to recent times more than older using:

$$\tau_{n+1} = \alpha t_n + (1-\alpha)\tau_n$$

where 
$\alpha$ is [smoothing factor](https://en.wikipedia.org/wiki/Exponential_smoothing),  basically alpha assumes that the next burst time should decrease as job processed
$\tau_n$ is predicted burst time for nth process
$t_n$ is actual burst time for nth process




## Priority Scheduling

Assume each process has a priority. CPU allocated _process with highest priority_ first with equal priority scheduled in a FCFS manner

Variations:
	_Preemption_ - newly arrived processes with >priority gain CPU immediately against < priority process
	_No Preemption_ - newly arrived processes always wait

✔️
(Preemption also) good for quick **response time** for high priority processes
**High throughput** (and possible **Low turnover time**) for high priority 

❌
**Starvation** of low priority processes **possible**/**Wait** time for low priority high and **High turnover time**

To solve the **starvation** problem, _increase_ priority of processes over time (**Ageing**)

## Multilevel Queue Scheduling

Applicable when _partitioning into groups_ possible (eg interactive and batch processes)

_Split_ ready queue into several separate queues with separate scheduling algos

Scheduling between queues implemented as preemptive priority scheduling (aka we split CPU time between all queues)

_Possible setups_
	-System processes
	-Interactive processes
	-Interactive editing processes
	-Batch processes

Alternative is organising _according to ~CPU burst length_, aka queues for different burst times, eg

![[Pasted image 20230105150814.png]]

# Scheduling for multiprocessor systems

More complex with more CPUs, most common uses **Symmetric multiprocessing (SMP)**
	-All processors identical, schedule independently
	-Separate ready queues for each processor (Linux) or share ready queue

## Processor Affinity

Process affinity for CPU on which its currently running
	-_Soft_ affinity - Current CPU preferred when rescheduled
	-_Hard_ affinity - Process bound to specific CPU
		**Advantage** - cache remains valid so avoid long cache invalidation and recovery

## Load Balancing

Idea is to use all CPUs equally (contrast to **processor affinity**)

_Push migration_: periodically check load and push processes to less loaded CPUs
_Pull migration_: idle CPUs pull processes from busy ones


## Linux implementation

Several schedulers may exist, assign percentage of CPU time to each

Important ones:
	_Round robin + priorities_ (default)
	_Real time_ (process must be assigned explicity to this one, typically FIFO)

## Round robin + priorities

Maintains tree of processes ordered by runtime allocated and picks next process as one with least runtime allocated
Inserts new process at appropriate place in tree and priorities are done by giving weights to runtimes.

# Summary

-Several algorithms exist for scheduling: **FCFS**, **Round Robin**, **Priority Scheduling**, **SJF**
-Distributes processes among several CPU/cores
-Linux implements **Round robin + priorities**





