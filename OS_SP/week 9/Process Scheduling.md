
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

