
# Q1

**Is it a good idea to have access to peripheral devices as part of a  
  critical section?**
No, accessing a peripheral may take a while (obviously since needs to travel via bus to a perhiperal device which may take thousands of CPU cycles) and requests may put process to sleep. Furthermore, interrupt may occur from peripheral after context switching so that would be lost.
✔️
_No - the access operation can take some time, and may even sleep._

# Q2
**Are race conditions possible if there is only one process running at the same time?**

Yes, since a process may be pre-empted by another by the OS which may cause data inconsistencies between the two processes

_Yes, because the scheduler might pre-empt one process and run another one._


# Q3
**Can the C compiler find race conditions?**

No, race conditions are not a syntax error, more of a logical/runtime error

_ No - race conditions cannot be prevented by checking the syntax of a program._

# Q4

**Is it possible for testing to show the absence of race conditions?**

No, it is not possible for testing to show this, since it is not possible to generate all execution paths, thus untestable

_No, as it is impossible to create all possible sequences in which programs can be executed._

# Q5

**A program has no deadlock when only function 1 or function 2, but  
  never function 1 and function 2, are executed. Can you guarantee  
  that the program still has no deadlock when function and function 2  
  are both executed?**

No, deadlock is not a property of a function but a global property, they must be tested together


_No - deadlock is a global property. You will need to check function1 and function2 together to rule out deadlocks._