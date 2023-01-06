

Main nonvolatile/permanent data storage but also a **speed bottleneck**

_Capacity is not a problem_ as storage relatively cheap but **backup** is a problem

Logical view: _Tree structure_ of files with read/write operations and directory creation

Physical view: _sequence of blocks_, which can be read and written

OS must map the logical to physical, imposing tree structure and assign blocks for each file

Two main ways:
**Linked list**: Each block contains pointer to next, but random access (`seek()`) is costly

**Indexed allocation**: Store points in on location (_index block_). To cope with different file sizes, introduce _indirect index block_

Index blocks are `inodes` in UNIX and store additional info about file (size, permissions etc)

# FAT

**F**(ile) **A**(llocation) **T**(ahble) 
Useful for explaining filesystem concepts but modern systems are complicated

Variants are FAT12, FAT16, FAT32 to define # of bits per entry

Sector == disk unit, aka a block
Cluster = multiple sectors
Uses linked list (_"cluster chain"_) to group clusters


![[Pasted image 20230106114300.png | FAT Example]]

![[Pasted image 20230106114334.png]]


## Limits

MAX volume size = 2GB
MAX file size = 2GB
Max # of files = 62,460 (32kB clusters)
Max filename length = 8+3
FAT32/exFAT have higher limits
New filesystems (NTFS, ext4) overcome limits using other data structures (B-trees, bitmaps)

# Further aspects

## Caching

Disk blocks used for directories or recently used files are cached in memory with blocks _periodically_ written to disk which is an efficiency gain. **Inconsistencies** arise during crashs thus should be shutdown properly

## Journaling
To minimise data loss on crashes, database ideas adopted:
	Define _Transaction points_: points where cache written to disk
		Improve consistency
	Keep log file for writes. Log enough info to unravel changes after last transaction point
## Disk access

Three parts to disk access:
	_Seek_: Moves head to appropriate track
	_Latency_: Correct block is under head
	_Transfer_: Data transfer
	HDDs: seek and latency very slow compared to transfer thus data distribution and scheduling vital for HDDs

# Disk scheduling algorithms

Apply _standard algorithms_ depending on situation

## First Come First Serve (FCFS)

✔️
Easy to implement

❌
(May) require many head movements


## Shortest Seek Time first (SSTF)
Select job with minimal head movement first

✔️
(May) lead to a higher number of jobs written initially

❌
May cause _starvation_
Tracks in middle of disk preferred

Does **not** actually minimise # of head movements


## SCAN scheduling

Head continuously scans disk from end to end (_lift strategy_)


✔️
Solves fairness from SSTF
Solves starvation from SSTF





