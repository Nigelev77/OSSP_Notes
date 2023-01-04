
# Linux Device Drivers

## User side
Device drivers have a special file in `/dev` directory and have 5 system calls
- `Open`: Make device available
- `read`: Read from device
- `write`: Write to device
- `ioctl`: Input Output Control (Optional)
- `close`: Make device unavailable

## Kernel side

Each file has functions associated with it and are called when corresponding system calls made
`linux/fs.h` shows all ops on files
Device drivers implement at least `open`, `read`, `write`, `close`

## Categorisation

Kernel tracks:
	**Physical Dependencies** between devices (E.g. devices on USB hub)
	**Buses** Channels between processor and devices. Physical or logical
	**Classes** Sets of same type devices


## Handling interrupts

Cycle for interrupt handling:
- Device sends interrupt
- CPU selects interrupt handler
- Handler processes interrupt to do two tasks:
	- Data transferred between device
	- Wake up processes waiting for transfer to finish
- Handler clears interrupt bit of device for next interrupt

Interrupt processing must be as short as possible
Data transfer fast but processing slow
	Interrupt processing has 2 halves:
		**Top half** called directly by handler and transfers data between device and kernel buffer and schedules software interrupt to start bottom half
		**Bottom half** runs in interrupt context and does rest of processing (eg working thru protocol stack, wake up processes)

# Memory Management

Memory is a **limited resource** and memory hunger of applications increases with more memory
Requires **sophisticated algorithms**, with support from HW, compiler and loader

Both programs (**logical**) and HW (**physical**) view memory the same, a set of memory cells starting at 0x0 and ending at some value. Problem occurs when we want to store multiple programs simultaneously, all who views memory as starting at 0x0.
This requires a _mapping between logical and physical addresses_

This mapping can occur at different times:
**Compile time**
	_absolute references_ generated
**Load time**
	mapping done by _special program (loader)_
**Execution time**
	_HW support_

Address mapping can take a step further with **dynamic linking**, allowing a _single copy of a system library to be shared among other programs_. Requires OS support for code to be accessible to multiple processes

## Swapping
If **memory demand too high**, memory for some processes **transferred to disk**
With _scheduling_, low priority processes are swapped out

Problems:
**Long transfer times**
**Pending IO?**

Therefore, _swapping is not a principle memory management technique_, meaning is not a solution for management

## Fragmentation

Swapping creates problems:
- Over time, **small holes** appear in memory (_external frag_)
- Programs smaller than those holes do not fill them and **leftover space too small to be a hole** (_internal frag_)

![[Drawing 2023-01-03 13.13.01.excalidraw|800]]


**Strategies** for choosing holes:
	_First fit_ Start from beginning and use first available hole
	_Rotating first fit_ start after last assigned part of memory
	_Best fit_ find smallest usable hole
	_Buddy system_ Free holes admistered according to tree structure; smallest chunk used

## Paging

Approach: 
Assign **memory of fixed size** (_page_) which avoids _external frag_
_Page table_ **translates** logical to physical addresses

**HW support mandatory**:
If page table small, use _fast registers_. Store large atbles in main mem but _cache entries_. This is the **general principle**

**Memory protection** easily added as protection info stored in table


## Segmentation

**Divide memory according to usage**:
	_Data_ **mutable, different** foreach instance
	_Program Code_ **immutable, same** foreach instance
	_Symbol Table_ **immutable, same** foreach instance (_debugging_)

**Requires HW support**:
Same as _paging_ but overflow check needed

_Paging_ for ease of allocation, _segmentation_ for memory use so most systems use **both**

## Virtual memory
Completely **separates logical and physical memory** and programs to use a lot of memory
Works as most programs don't use that much
**Efficient implementation tricky** as difference between memory and disk access immense

## Demand Paging
Virtual memory implemented as _demand paging_: memory divided into _pages of same length_, with _validation bit_. This bit describes if a page is valid (in memory) or invalid (not in memory or not in the address space of the process)

Decisions to make:
	-Which processes to _swap out_ which moves memory to disk and blocks process (swapper)
	-_Which pages to move to disk_ when new page required (pager)

For an OS using Demand Paging, to load a program, only pages required to load it are loaded. Thus a process begins execution with no pages and page faults occur often until enough are loaded in. [lazy loading](https://en.wikipedia.org//wiki/Demand_paging)


**Page fault rate must be minimised** (page has to be fetched from disk) [Page Fault handling](https://www.geeksforgeeks.org/page-fault-handling-in-operating-system/)

## Page replacement algos

**FIFO**
✔️
-_easy to implement_
❌
-_locality not considered_
-_Belady's anomaly_: Increase in number of frames increases number of page faults

==NOT EXPLAINED BUT PAGE FRAMES = PHYSICAL MEMORY, PAGE = VIRTUAL MEMORY==

**Optimal algorithm**
Replace pages which won't be used or used last
✔️
-_Nice to compare_
❌
-_Unimplementable_

**Least recently used**
Replace page which has been unused the longest

✔️
-_Likely to have low page fult rate_
❌
-_Requires a lot of HW support_

Possible HW solutions:
	_Use a stack in "microcode"_ (stack within the [MMU](https://en.wikipedia.org/wiki/Memory_management_unit) or HW itself)
	_Reference bit approximation_: HW sets bits to 1 when page referenced, FIFO through pages and use first page with bit=0 and reset pages with bit=1 to 0 as you go along [_second chance algo_](https://www.geeksforgeeks.org/second-chance-or-clock-page-replacement-policy/)


## Thrashing
If a process lacks **frames it uses constantly**, page fault rate high
_CPU throughput decreases thus negatively affects performance_

Solutions:
[*Working set model*](https://www.geeksforgeeks.org/techniques-to-handle-thrashing/) (locality based)
	A _Locality_ is a set of pages used together, locality model assumes programs execute move from locality to locality.
	Define _working set_ as pages used in most recent "X" page references and keep these in memory
	Achieves high CPU utilisation and prevents thrashing if X >= current locality size
_Page-Fault Frequency_
	-Give process more frames if page frequency rate high
	-remove frame from process if fault rate low
	![[Pasted image 20230103141730.png]]

## Memory management  in linux kernel

4 Segments:
_Kernel code_
_Kernel data_
_User code_
_User data_
Paging used with permission system

## Kernel and user memory

Separate _logical_ addresses for kernel and user memory
For 32bit arch
	kernel space is upper 1 GB
	user space is lower 3 GB
kernel memory always mapped but protected from user process access
For 64 bit arch
	kernel space is upper half
	user space is lower half

## Page caches (Prolly won't be tested)

Often, there are repeated cycles of alloc and free of similar objects (inodes, dentries)

Pool of pages used as a cache [_slab cache_](https://en.wikipedia.org/wiki/Slab_allocation) maintained by application (eg file system)

`kmalloc` uses slab cache for commonly used sizes


# Summary

**Device Drivers**
	implement `open`, `read`, `write`, `close`, with common structure
**Mem management**
	-Serious effort to manage limited resource
	-Isolate mem for each process
	-If mem damand high, swap out parts of process memory
	-_Paging_ and _segmentation_
	-Requires HW support