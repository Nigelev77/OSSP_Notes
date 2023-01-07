---

excalidraw-plugin: parsed
tags: [excalidraw]

---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Text Elements
No, it will not lead to a memory leak since in line 6, be is assigned to the
same pointer as A, when in line 7, B is freed, the memory that A and B both
point to will be freed ^psE4V8de

Leads to a "dangling" pointer, in that in line 6 when 
a pointer to the start of `array` is returned, that 
memory is freed once that function is returned (stack 
deallocated) and thus the pointer is referencing 
memory that has been deallocated/freed which will lead
to segmentation errors/read access violations

To correct this do
int* randomArray(void)
{
    int* array = (int*)malloc(sizeof(int))
    int i;
    for(i = 0; i< 10; i++)
    {
        array[i] = rand();
    }
    return array;
} ^8P2HlN7R

sum2Darray2 would be able to exploit memory hierarchy more since sum2Darray2
adds them in a row major order and thus since in memory, 2D arrays would be stored
row at a time, it would be able to make use of spatial locality and in the same cache
line the whole row would be loaded and so the next addition will not need to go to main
mem whereas sum2Darray1 does it in a column major order and thus would be less likely to 
get cache hits ^bMUVcrc6

Set of registers are fast and close to the processor so can hold
data here instead of having to store in memory so improves performance ^dquBNsnd

ready, running (and technically suspend when swapped to 
swap file in secondary storage)  ^0pxMSZTs

No, actually may lead to more page faults (in a FIFO) (Bélady's anomaly)  ^wNoq2xvQ

Installing more main memory would work as  more frames available and thus less need to 
swap pages out thus less paging disk and more CPU utilisation

Installing faster disk will lead to faster swap paging and thus higher CPU utilisation

Decreasing multiprogramming degree as less processes and thus less context switching thus
less paging leading to more CPU utilisation ^ZtyGpwre

If a buffer overflow occurs in the kernel, since the kernel operates in privileged mode, it could
overwrite data in other processes in the kernel and thus could lead to corruption since there are
no checks to prevent this unlike in user mode. This corruption could lead to the system crashing if trying to 
run or access the overwritten area in memory. Furthermore, allowing buffer overflow leads to security
vulnerabilities that may lead to malicious code being run if it writes in specific areas  ^TxA5UUBM

Firstly, total_transferred is not updated and transferred updated twice so need to delete line 9
and change line 19 to total_transferred += count; and a critical section probably needed
around total_transferred using a semaphore (since it is not in a situation in interrupt mode) if we wanted
to update on line 9 instead, use a spinlock to avoid sleeping in interrupt mode. Appears as though
the transferred variable is not really needed in this situation unless transfer_finished can receive a different value
opposed to count in kernelWrite


 ^XVUeJDt4

 ^o0MFjm21

In this scenario, use STRF (or SJF) in a preemptive manner since P2 and P3 are IO bound and thus short burst time so can
do those first and since P4 arrives last then it will ensure the highest throughput/response time

I would avoid FCFS here since P1 would hog the CPU for a long time and thus P2, P3 and P4 would take a while to get a response, 
especially P2 and P3 since they are short burst times ^98X1Kp3k

 ^jGJmIfoy

process
process
process ^UguilSHJ

process
process ^pIms1V4d

nothing printed ^APEDcjMo

Variations only occur if fork() fails at any iteration


if line 16 commented out, parent processes would not wait for
their child processes to terminate and thus if the child processes finish executing, would
become zombie processes which will be reaped/cleaned up by init, otherwise if the child process
still executing would become orphans and would be adopted by init process which would wait
on them and then the child processes would be terminated ^RufC8ZOW

process ^AkptFutE

New processes which arrive would have a longer waiting time since time quantum 
increased and so takes longer for new processes to get execution time
and thus response time has increased thus performing worse ^8P288dke

race condition possible since y = y + 2 and y = y - 2 can be written as multiple 
instructions. If either process sleeps or is preempted during the execution of these steps, 
the new process may have stale data and thus lead to data inconsistency aka each process
would be racing to update this variable/

To fix this, can use any mutual exclusion technique to synchronise access to y, for example
using a spinlock around this y assignment or semaphore
and example may be 

mutex_lock(yLock)
y = y + 2
mutex_unlock(yLock)

thus blocking the other process from changing y if one is sleeping in the critical section between
mutex_* calls ^g6ymS6yz

thus sum2Darray2 more efficient ^0GiqfqkR

since at top of memory hierarchy ^0Mg9xlDH

if transferred used then should be declared and init to 0 in kernelWrite

so it should be 

lock()
transferred = count
unlock()

startTransfer()

lock()
total_transferred += transferred
unlock()
return transferred

data copied from buffer to kernel space needs to use copy_from_user so should kmalloc space for that
in kernel space and then free it afterwards


kernelWrite probably should return amount transferred
 ^VX4AthD3

More context switches occurring and since context switching incurs an overhead, this leads to
a poorer performing system ^kFdMzPtG


# Embedded files
281c596f11250c986325e8aeac2552d87a526394: [[Pasted Image 20230107112744_273.png]]
4607c8933c16db72501d5e29cc732e41aa6a5772: [[Pasted Image 20230107112858_706.png]]
1921c424f0b9f9643e6cd721db13c3ff4a930789: [[Pasted Image 20230107113158_868.png]]
4d05376c1bc0fd707aeffee2c6a988640a082777: [[Pasted Image 20230107113158_878.png]]
8af368b5fd643034b778df6adfa18edae1d130c0: [[Pasted Image 20230107113734_097.png]]
4f24839e36c4f640724366b1aba72e28bf12fec8: [[Pasted Image 20230107113841_540.png]]
fd730bc2d802f59d16e60d5475dcc3c4ff1233d1: [[Pasted Image 20230107115040_024.png]]
613d4bed9a66ea61ad8c908e49be65c5416c546d: [[Pasted Image 20230107115121_085.png]]
08d346b4db8c4c79519d309f6152f3cf6a18b85a: [[Pasted Image 20230107115524_571.png]]
69fbc99c3c9094b15f3b3907344e470e0fe83cbd: [[Pasted Image 20230107121226_943.png]]
911ee57b39900a2f518d950bb650736ff1bedba1: [[Pasted Image 20230107121237_976.png]]
45dc0e2a1eea3035ba3e6cb4a7b9bc25b5bd9db2: [[Pasted Image 20230107121258_018.png]]
64e7b40662237266168bca3fa81867593c7801b9: [[Pasted Image 20230107122310_613.png]]
ad416a87b1af17d2471addad7ba142dfb3cd161b: [[Pasted Image 20230107123031_605.png]]
ae1785caf6180d31f8acc30594867f26b47829b7: [[Pasted Image 20230107123932_170.png]]
d5feae77348ea89f4983322559b9d4a6a1488b0d: [[Pasted Image 20230107124213_038.png]]

%%
# Drawing
```json
{
	"type": "excalidraw",
	"version": 2,
	"source": "https://excalidraw.com",
	"elements": [
		{
			"type": "image",
			"version": 91,
			"versionNonce": 2020577577,
			"isDeleted": false,
			"id": "JcO9OfndsqW3uuCEckLIE",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -292,
			"y": -255.5,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 626,
			"height": 260,
			"seed": 472077415,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "281c596f11250c986325e8aeac2552d87a526394",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "text",
			"version": 233,
			"versionNonce": 887894503,
			"isDeleted": false,
			"id": "psE4V8de",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -278.55555555555554,
			"y": 37.94444444444446,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 762,
			"height": 75,
			"seed": 605209159,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "No, it will not lead to a memory leak since in line 6, be is assigned to the\nsame pointer as A, when in line 7, B is freed, the memory that A and B both\npoint to will be freed",
			"rawText": "No, it will not lead to a memory leak since in line 6, be is assigned to the\nsame pointer as A, when in line 7, B is freed, the memory that A and B both\npoint to will be freed",
			"baseline": 68,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "No, it will not lead to a memory leak since in line 6, be is assigned to the\nsame pointer as A, when in line 7, B is freed, the memory that A and B both\npoint to will be freed"
		},
		{
			"type": "image",
			"version": 128,
			"versionNonce": 76907529,
			"isDeleted": false,
			"id": "f52sb-VPOA37gFwt3xZv-",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -156.4951267056536,
			"y": 138.72222222222217,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 384.990253411306,
			"height": 175.55555555555554,
			"seed": 1120419911,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "4607c8933c16db72501d5e29cc732e41aa6a5772",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "text",
			"version": 640,
			"versionNonce": 1551588615,
			"isDeleted": false,
			"id": "8P2HlN7R",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -159.0000000000005,
			"y": 329.7222222222222,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 547,
			"height": 450,
			"seed": 1379843977,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Leads to a \"dangling\" pointer, in that in line 6 when \na pointer to the start of `array` is returned, that \nmemory is freed once that function is returned (stack \ndeallocated) and thus the pointer is referencing \nmemory that has been deallocated/freed which will lead\nto segmentation errors/read access violations\n\nTo correct this do\nint* randomArray(void)\n{\n    int* array = (int*)malloc(sizeof(int))\n    int i;\n    for(i = 0; i< 10; i++)\n    {\n        array[i] = rand();\n    }\n    return array;\n}",
			"rawText": "Leads to a \"dangling\" pointer, in that in line 6 when \na pointer to the start of `array` is returned, that \nmemory is freed once that function is returned (stack \ndeallocated) and thus the pointer is referencing \nmemory that has been deallocated/freed which will lead\nto segmentation errors/read access violations\n\nTo correct this do\nint* randomArray(void)\n{\n    int* array = (int*)malloc(sizeof(int))\n    int i;\n    for(i = 0; i< 10; i++)\n    {\n        array[i] = rand();\n    }\n    return array;\n}",
			"baseline": 443,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Leads to a \"dangling\" pointer, in that in line 6 when \na pointer to the start of `array` is returned, that \nmemory is freed once that function is returned (stack \ndeallocated) and thus the pointer is referencing \nmemory that has been deallocated/freed which will lead\nto segmentation errors/read access violations\n\nTo correct this do\nint* randomArray(void)\n{\n    int* array = (int*)malloc(sizeof(int))\n    int i;\n    for(i = 0; i< 10; i++)\n    {\n        array[i] = rand();\n    }\n    return array;\n}"
		},
		{
			"type": "image",
			"version": 216,
			"versionNonce": 1094327017,
			"isDeleted": false,
			"id": "lsJvc0MJkeTydu0zycSW2",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -274.94503707033334,
			"y": 844.5114818123473,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 637,
			"height": 95,
			"seed": 760930889,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "1921c424f0b9f9643e6cd721db13c3ff4a930789",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "image",
			"version": 353,
			"versionNonce": 456664103,
			"isDeleted": false,
			"id": "7CDlxIjUUJNpOyzh6K93n",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -277.22490144174697,
			"y": 1024.7371629529398,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 642.7459531986011,
			"height": 433.24331655475333,
			"seed": 266931015,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "4d05376c1bc0fd707aeffee2c6a988640a082777",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "text",
			"version": 727,
			"versionNonce": 1860752841,
			"isDeleted": false,
			"id": "bMUVcrc6",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -260.76086285873373,
			"y": 1491.7560128470402,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 911,
			"height": 150,
			"seed": 1292450025,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "sum2Darray2 would be able to exploit memory hierarchy more since sum2Darray2\nadds them in a row major order and thus since in memory, 2D arrays would be stored\nrow at a time, it would be able to make use of spatial locality and in the same cache\nline the whole row would be loaded and so the next addition will not need to go to main\nmem whereas sum2Darray1 does it in a column major order and thus would be less likely to \nget cache hits",
			"rawText": "sum2Darray2 would be able to exploit memory hierarchy more since sum2Darray2\nadds them in a row major order and thus since in memory, 2D arrays would be stored\nrow at a time, it would be able to make use of spatial locality and in the same cache\nline the whole row would be loaded and so the next addition will not need to go to main\nmem whereas sum2Darray1 does it in a column major order and thus would be less likely to \nget cache hits",
			"baseline": 143,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "sum2Darray2 would be able to exploit memory hierarchy more since sum2Darray2\nadds them in a row major order and thus since in memory, 2D arrays would be stored\nrow at a time, it would be able to make use of spatial locality and in the same cache\nline the whole row would be loaded and so the next addition will not need to go to main\nmem whereas sum2Darray1 does it in a column major order and thus would be less likely to \nget cache hits"
		},
		{
			"type": "image",
			"version": 51,
			"versionNonce": 1896810311,
			"isDeleted": false,
			"id": "0lYc__oYW3FrU7Zn-nRdM",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 875.7123369897313,
			"y": -327.64602760324544,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 634,
			"height": 83,
			"seed": 1529637353,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "8af368b5fd643034b778df6adfa18edae1d130c0",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "text",
			"version": 254,
			"versionNonce": 817706153,
			"isDeleted": false,
			"id": "dquBNsnd",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 874.117310662459,
			"y": -194.29480603518917,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 721,
			"height": 50,
			"seed": 1421915273,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Set of registers are fast and close to the processor so can hold\ndata here instead of having to store in memory so improves performance",
			"rawText": "Set of registers are fast and close to the processor so can hold\ndata here instead of having to store in memory so improves performance",
			"baseline": 43,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Set of registers are fast and close to the processor so can hold\ndata here instead of having to store in memory so improves performance"
		},
		{
			"type": "image",
			"version": 74,
			"versionNonce": 744261223,
			"isDeleted": false,
			"id": "Yz6WiNoJFLnMcoLTsjJzN",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 871.1254834063524,
			"y": -117.1360020527224,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 583,
			"height": 44,
			"seed": 946289543,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "4f24839e36c4f640724366b1aba72e28bf12fec8",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "text",
			"version": 189,
			"versionNonce": 979548041,
			"isDeleted": false,
			"id": "0pxMSZTs",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 891.8620948894302,
			"y": -46.639237994044606,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 560,
			"height": 50,
			"seed": 1496929961,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "ready, running (and technically suspend when swapped to \nswap file in secondary storage) ",
			"rawText": "ready, running (and technically suspend when swapped to \nswap file in secondary storage) ",
			"baseline": 43,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "ready, running (and technically suspend when swapped to \nswap file in secondary storage) "
		},
		{
			"id": "nVBw5i_ndXmsP7zD4rj2S",
			"type": "image",
			"x": 862.2170247395992,
			"y": 42.43630575321046,
			"width": 572,
			"height": 58,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 748320201,
			"version": 89,
			"versionNonce": 468525447,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "fd730bc2d802f59d16e60d5475dcc3c4ff1233d1",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "wNoq2xvQ",
			"type": "text",
			"x": 887.3079338305083,
			"y": 127.8908512077559,
			"width": 750,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1524655881,
			"version": 97,
			"versionNonce": 1041555049,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "No, actually may lead to more page faults (in a FIFO) (Bélady's anomaly) ",
			"rawText": "No, actually may lead to more page faults (in a FIFO) (Bélady's anomaly) ",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": "No, actually may lead to more page faults (in a FIFO) (Bélady's anomaly) "
		},
		{
			"id": "PhYUpxow775qptY5gCx2_",
			"type": "image",
			"x": 848.2170247395989,
			"y": 189.48176029866502,
			"width": 810.8972073677954,
			"height": 213.90909090909088,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 462995783,
			"version": 190,
			"versionNonce": 16603303,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "613d4bed9a66ea61ad8c908e49be65c5416c546d",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "ZtyGpwre",
			"type": "text",
			"x": 892.7624792850536,
			"y": 450.6181239350286,
			"width": 905,
			"height": 175,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 552797031,
			"version": 503,
			"versionNonce": 446638409,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "Installing more main memory would work as  more frames available and thus less need to \nswap pages out thus less paging disk and more CPU utilisation\n\nInstalling faster disk will lead to faster swap paging and thus higher CPU utilisation\n\nDecreasing multiprogramming degree as less processes and thus less context switching thus\nless paging leading to more CPU utilisation",
			"rawText": "Installing more main memory would work as  more frames available and thus less need to \nswap pages out thus less paging disk and more CPU utilisation\n\nInstalling faster disk will lead to faster swap paging and thus higher CPU utilisation\n\nDecreasing multiprogramming degree as less processes and thus less context switching thus\nless paging leading to more CPU utilisation",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 168,
			"containerId": null,
			"originalText": "Installing more main memory would work as  more frames available and thus less need to \nswap pages out thus less paging disk and more CPU utilisation\n\nInstalling faster disk will lead to faster swap paging and thus higher CPU utilisation\n\nDecreasing multiprogramming degree as less processes and thus less context switching thus\nless paging leading to more CPU utilisation"
		},
		{
			"id": "5fdLQnW0Yf6M54LCk6C2f",
			"type": "image",
			"x": 870.0806611032352,
			"y": 704.436305753211,
			"width": 983.0786240786241,
			"height": 119.45454545454547,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 458811271,
			"version": 158,
			"versionNonce": 1094298567,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "08d346b4db8c4c79519d309f6152f3cf6a18b85a",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "TxA5UUBM",
			"type": "text",
			"x": 884.5806611032351,
			"y": 871.52721484412,
			"width": 1084,
			"height": 125,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 327340519,
			"version": 694,
			"versionNonce": 1230837801,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "If a buffer overflow occurs in the kernel, since the kernel operates in privileged mode, it could\noverwrite data in other processes in the kernel and thus could lead to corruption since there are\nno checks to prevent this unlike in user mode. This corruption could lead to the system crashing if trying to \nrun or access the overwritten area in memory. Furthermore, allowing buffer overflow leads to security\nvulnerabilities that may lead to malicious code being run if it writes in specific areas ",
			"rawText": "If a buffer overflow occurs in the kernel, since the kernel operates in privileged mode, it could\noverwrite data in other processes in the kernel and thus could lead to corruption since there are\nno checks to prevent this unlike in user mode. This corruption could lead to the system crashing if trying to \nrun or access the overwritten area in memory. Furthermore, allowing buffer overflow leads to security\nvulnerabilities that may lead to malicious code being run if it writes in specific areas ",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 118,
			"containerId": null,
			"originalText": "If a buffer overflow occurs in the kernel, since the kernel operates in privileged mode, it could\noverwrite data in other processes in the kernel and thus could lead to corruption since there are\nno checks to prevent this unlike in user mode. This corruption could lead to the system crashing if trying to \nrun or access the overwritten area in memory. Furthermore, allowing buffer overflow leads to security\nvulnerabilities that may lead to malicious code being run if it writes in specific areas "
		},
		{
			"id": "vmDDnaIeh2pQLBxEk6Pfi",
			"type": "image",
			"x": 864.4897520123259,
			"y": 1031.254487571393,
			"width": 1051.35606060606,
			"height": 235.8181818181817,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1092239367,
			"version": 139,
			"versionNonce": 1488886503,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "69fbc99c3c9094b15f3b3907344e470e0fe83cbd",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "3x0zOqnnS_5xTC3WtbEPn",
			"type": "image",
			"x": 862.3552637108435,
			"y": 1286.8908512077564,
			"width": 1034.4972307632904,
			"height": 1044.7601001161008,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1401941799,
			"version": 148,
			"versionNonce": 205138697,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "911ee57b39900a2f518d950bb650736ff1bedba1",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "FuDpvPOjfBcPfozGIs_NS",
			"type": "image",
			"x": 859.666249918514,
			"y": 2376.8103978504555,
			"width": 1044.8557942808625,
			"height": 215.54717434465343,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 906029991,
			"version": 115,
			"versionNonce": 202941959,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "45dc0e2a1eea3035ba3e6cb4a7b9bc25b5bd9db2",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "XVUeJDt4",
			"type": "text",
			"x": 868.843187589092,
			"y": 2666.723718535957,
			"width": 1163,
			"height": 225,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1891943369,
			"version": 935,
			"versionNonce": 1538384361,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "Firstly, total_transferred is not updated and transferred updated twice so need to delete line 9\nand change line 19 to total_transferred += count; and a critical section probably needed\naround total_transferred using a semaphore (since it is not in a situation in interrupt mode) if we wanted\nto update on line 9 instead, use a spinlock to avoid sleeping in interrupt mode. Appears as though\nthe transferred variable is not really needed in this situation unless transfer_finished can receive a different value\nopposed to count in kernelWrite\n\n\n",
			"rawText": "Firstly, total_transferred is not updated and transferred updated twice so need to delete line 9\nand change line 19 to total_transferred += count; and a critical section probably needed\naround total_transferred using a semaphore (since it is not in a situation in interrupt mode) if we wanted\nto update on line 9 instead, use a spinlock to avoid sleeping in interrupt mode. Appears as though\nthe transferred variable is not really needed in this situation unless transfer_finished can receive a different value\nopposed to count in kernelWrite\n\n\n",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 218,
			"containerId": null,
			"originalText": "Firstly, total_transferred is not updated and transferred updated twice so need to delete line 9\nand change line 19 to total_transferred += count; and a critical section probably needed\naround total_transferred using a semaphore (since it is not in a situation in interrupt mode) if we wanted\nto update on line 9 instead, use a spinlock to avoid sleeping in interrupt mode. Appears as though\nthe transferred variable is not really needed in this situation unless transfer_finished can receive a different value\nopposed to count in kernelWrite\n\n\n"
		},
		{
			"id": "2o_08WVLqB5M6gUwCg5K8",
			"type": "image",
			"x": 2455.8538853785303,
			"y": -262.6387668613422,
			"width": 1711.1488634265804,
			"height": 577.0485315729036,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1237194249,
			"version": 166,
			"versionNonce": 1514425639,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "64e7b40662237266168bca3fa81867593c7801b9",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "o0MFjm21",
			"type": "text",
			"x": 2591.711611281662,
			"y": 279.2077428474911,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1460012585,
			"version": 16,
			"versionNonce": 349158601,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		},
		{
			"id": "98X1Kp3k",
			"type": "text",
			"x": 2540.461611281662,
			"y": 372.9577428474911,
			"width": 1333,
			"height": 125,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 138501577,
			"version": 524,
			"versionNonce": 783159367,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "In this scenario, use STRF (or SJF) in a preemptive manner since P2 and P3 are IO bound and thus short burst time so can\ndo those first and since P4 arrives last then it will ensure the highest throughput/response time\n\nI would avoid FCFS here since P1 would hog the CPU for a long time and thus P2, P3 and P4 would take a while to get a response, \nespecially P2 and P3 since they are short burst times",
			"rawText": "In this scenario, use STRF (or SJF) in a preemptive manner since P2 and P3 are IO bound and thus short burst time so can\ndo those first and since P4 arrives last then it will ensure the highest throughput/response time\n\nI would avoid FCFS here since P1 would hog the CPU for a long time and thus P2, P3 and P4 would take a while to get a response, \nespecially P2 and P3 since they are short burst times",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 118,
			"containerId": null,
			"originalText": "In this scenario, use STRF (or SJF) in a preemptive manner since P2 and P3 are IO bound and thus short burst time so can\ndo those first and since P4 arrives last then it will ensure the highest throughput/response time\n\nI would avoid FCFS here since P1 would hog the CPU for a long time and thus P2, P3 and P4 would take a while to get a response, \nespecially P2 and P3 since they are short burst times"
		},
		{
			"id": "VQJc0gDbNrgeJwOtODWsz",
			"type": "image",
			"x": 2503.8312980825567,
			"y": 614.4577428474911,
			"width": 1189.5106263982102,
			"height": 919.9156574394462,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1484102825,
			"version": 178,
			"versionNonce": 1731148713,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "ad416a87b1af17d2471addad7ba142dfb3cd161b",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "jGJmIfoy",
			"type": "text",
			"x": 2515.461611281662,
			"y": 1585.457742847491,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 267641095,
			"version": 16,
			"versionNonce": 1395814247,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		},
		{
			"id": "UguilSHJ",
			"type": "text",
			"x": 2541.711611281662,
			"y": 1586.707742847491,
			"width": 73,
			"height": 75,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1426073639,
			"version": 68,
			"versionNonce": 50060937,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "process\nprocess\nprocess",
			"rawText": "process\nprocess\nprocess",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 68,
			"containerId": null,
			"originalText": "process\nprocess\nprocess"
		},
		{
			"id": "pIms1V4d",
			"type": "text",
			"x": 2748.961611281662,
			"y": 1587.957742847491,
			"width": 73,
			"height": 50,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 536757607,
			"version": 38,
			"versionNonce": 572385927,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "process\nprocess",
			"rawText": "process\nprocess",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 43,
			"containerId": null,
			"originalText": "process\nprocess"
		},
		{
			"id": "APEDcjMo",
			"type": "text",
			"x": 3216.711611281662,
			"y": 1592.957742847491,
			"width": 142,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1666059433,
			"version": 85,
			"versionNonce": 116467049,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "nothing printed",
			"rawText": "nothing printed",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": "nothing printed"
		},
		{
			"id": "RufC8ZOW",
			"type": "text",
			"x": 2529.211611281662,
			"y": 1692.957742847491,
			"width": 926,
			"height": 200,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1603475303,
			"version": 693,
			"versionNonce": 2016215463,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "Variations only occur if fork() fails at any iteration\n\n\nif line 16 commented out, parent processes would not wait for\ntheir child processes to terminate and thus if the child processes finish executing, would\nbecome zombie processes which will be reaped/cleaned up by init, otherwise if the child process\nstill executing would become orphans and would be adopted by init process which would wait\non them and then the child processes would be terminated",
			"rawText": "Variations only occur if fork() fails at any iteration\n\n\nif line 16 commented out, parent processes would not wait for\ntheir child processes to terminate and thus if the child processes finish executing, would\nbecome zombie processes which will be reaped/cleaned up by init, otherwise if the child process\nstill executing would become orphans and would be adopted by init process which would wait\non them and then the child processes would be terminated",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 193,
			"containerId": null,
			"originalText": "Variations only occur if fork() fails at any iteration\n\n\nif line 16 commented out, parent processes would not wait for\ntheir child processes to terminate and thus if the child processes finish executing, would\nbecome zombie processes which will be reaped/cleaned up by init, otherwise if the child process\nstill executing would become orphans and would be adopted by init process which would wait\non them and then the child processes would be terminated"
		},
		{
			"id": "AkptFutE",
			"type": "text",
			"x": 2910.461611281662,
			"y": 1592.957742847491,
			"width": 73,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1707092263,
			"version": 23,
			"versionNonce": 777687113,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "process",
			"rawText": "process",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": "process"
		},
		{
			"id": "8sqekCHwnR-eElNGAuypM",
			"type": "image",
			"x": 2524.461611281662,
			"y": 1918.207742847491,
			"width": 1090.1428571428582,
			"height": 130.00000000000014,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1313625255,
			"version": 97,
			"versionNonce": 1720464583,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "ae1785caf6180d31f8acc30594867f26b47829b7",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "8P288dke",
			"type": "text",
			"x": 2534.211611281662,
			"y": 2096.7077428474913,
			"width": 797,
			"height": 75,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 177353225,
			"version": 280,
			"versionNonce": 1058250537,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "New processes which arrive would have a longer waiting time since time quantum \nincreased and so takes longer for new processes to get execution time\nand thus response time has increased thus performing worse",
			"rawText": "New processes which arrive would have a longer waiting time since time quantum \nincreased and so takes longer for new processes to get execution time\nand thus response time has increased thus performing worse",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 68,
			"containerId": null,
			"originalText": "New processes which arrive would have a longer waiting time since time quantum \nincreased and so takes longer for new processes to get execution time\nand thus response time has increased thus performing worse"
		},
		{
			"id": "8BOqJsZqELot-N9h4XIWv",
			"type": "image",
			"x": 2544.961611281662,
			"y": 2196.2077428474913,
			"width": 1076.3389830508493,
			"height": 110.25000000000018,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 832595975,
			"version": 112,
			"versionNonce": 618136551,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "d5feae77348ea89f4983322559b9d4a6a1488b0d",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "g6ymS6yz",
			"type": "text",
			"x": 2554.211611281662,
			"y": 2364.2077428474913,
			"width": 947,
			"height": 375,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 612624231,
			"version": 912,
			"versionNonce": 931648009,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "race condition possible since y = y + 2 and y = y - 2 can be written as multiple \ninstructions. If either process sleeps or is preempted during the execution of these steps, \nthe new process may have stale data and thus lead to data inconsistency aka each process\nwould be racing to update this variable/\n\nTo fix this, can use any mutual exclusion technique to synchronise access to y, for example\nusing a spinlock around this y assignment or semaphore\nand example may be \n\nmutex_lock(yLock)\ny = y + 2\nmutex_unlock(yLock)\n\nthus blocking the other process from changing y if one is sleeping in the critical section between\nmutex_* calls",
			"rawText": "race condition possible since y = y + 2 and y = y - 2 can be written as multiple \ninstructions. If either process sleeps or is preempted during the execution of these steps, \nthe new process may have stale data and thus lead to data inconsistency aka each process\nwould be racing to update this variable/\n\nTo fix this, can use any mutual exclusion technique to synchronise access to y, for example\nusing a spinlock around this y assignment or semaphore\nand example may be \n\nmutex_lock(yLock)\ny = y + 2\nmutex_unlock(yLock)\n\nthus blocking the other process from changing y if one is sleeping in the critical section between\nmutex_* calls",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 368,
			"containerId": null,
			"originalText": "race condition possible since y = y + 2 and y = y - 2 can be written as multiple \ninstructions. If either process sleeps or is preempted during the execution of these steps, \nthe new process may have stale data and thus lead to data inconsistency aka each process\nwould be racing to update this variable/\n\nTo fix this, can use any mutual exclusion technique to synchronise access to y, for example\nusing a spinlock around this y assignment or semaphore\nand example may be \n\nmutex_lock(yLock)\ny = y + 2\nmutex_unlock(yLock)\n\nthus blocking the other process from changing y if one is sleeping in the critical section between\nmutex_* calls"
		},
		{
			"id": "ZgGANomChLU05_T3TAe7Q",
			"type": "freedraw",
			"x": 99.97407264163326,
			"y": 77.42715304549387,
			"width": 108.74882832324181,
			"height": 111.97101582911563,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1046047847,
			"version": 45,
			"versionNonce": 1125969671,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0.8055468764684974,
					0
				],
				[
					1.6110937529368812,
					0.8055468764684406
				],
				[
					2.4166406294053786,
					1.6110937529368812
				],
				[
					2.4166406294053786,
					2.4166406294053786
				],
				[
					3.222187505873876,
					4.02773438234226
				],
				[
					4.02773438234226,
					6.444375011747638
				],
				[
					4.833281258810757,
					8.861015641153017
				],
				[
					5.638828135279255,
					9.666562517621458
				],
				[
					6.444375011747638,
					12.083203147026836
				],
				[
					7.249921888216136,
					14.499843776432215
				],
				[
					8.055468764684633,
					16.110937529369153
				],
				[
					8.861015641153017,
					16.916484405837593
				],
				[
					10.472109394090012,
					18.52757815877453
				],
				[
					12.083203147026893,
					19.333125035242972
				],
				[
					14.499843776432272,
					18.52757815877453
				],
				[
					15.305390652900655,
					17.722031282306034
				],
				[
					18.52757815877453,
					15.305390652900712
				],
				[
					23.36085941758529,
					10.472109394089955
				],
				[
					28.999687552864543,
					3.222187505873819
				],
				[
					32.221875058738306,
					-0.8055468764684974
				],
				[
					35.44406256461218,
					-5.638828135279198
				],
				[
					44.3050782057652,
					-16.110937529369153
				],
				[
					53.166093846918216,
					-28.999687552864486
				],
				[
					64.44375011747661,
					-41.88843757635982
				],
				[
					70.08257825275587,
					-48.33281258810749
				],
				[
					81.36023452331426,
					-62.02710948807126
				],
				[
					92.63789079387266,
					-74.9158595115666
				],
				[
					103.11000018796256,
					-86.99906265859346
				],
				[
					108.74882832324181,
					-92.63789079387266
				],
				[
					108.74882832324181,
					-92.63789079387266
				]
			],
			"pressures": [
				0.271484375,
				0.2939453125,
				0.37890625,
				0.4384765625,
				0.45703125,
				0.4892578125,
				0.5166015625,
				0.5400390625,
				0.5498046875,
				0.5654296875,
				0.5791015625,
				0.591796875,
				0.5986328125,
				0.6123046875,
				0.630859375,
				0.6513671875,
				0.662109375,
				0.6806640625,
				0.697265625,
				0.708984375,
				0.712890625,
				0.7158203125,
				0.71484375,
				0.703125,
				0.681640625,
				0.666015625,
				0.626953125,
				0.5732421875,
				0.4990234375,
				0.4521484375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				108.74882832324181,
				-92.63789079387266
			]
		},
		{
			"id": "39X37y96LZglJady1RvDF",
			"type": "freedraw",
			"x": 493.08094835824147,
			"y": 399.64590363287687,
			"width": 0.0001,
			"height": 0.0001,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1329610343,
			"version": 16,
			"versionNonce": 1018341609,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0.0001,
					0.0001
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0.0001,
				0.0001
			]
		},
		{
			"id": "YYsgcSGbEGBNGMGT1ZeuS",
			"type": "freedraw",
			"x": 489.85876085236885,
			"y": 733.947857367287,
			"width": 0.8055468764683837,
			"height": 0,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1219470953,
			"version": 18,
			"versionNonce": 467105319,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0.8055468764683837,
					0
				],
				[
					0,
					0
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0.8055468764683837,
				0
			]
		},
		{
			"id": "Fxe1G3dHUBg_0OfV70gn0",
			"type": "freedraw",
			"x": 282.0276667235066,
			"y": 572.032935197127,
			"width": 88.6101564115304,
			"height": 96.66562517621492,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1879462631,
			"version": 46,
			"versionNonce": 1210033097,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.6110937529369949
				],
				[
					0,
					2.4166406294054923
				],
				[
					0,
					3.222187505873876
				],
				[
					0,
					4.0277343823423735
				],
				[
					-0.8055468764684974,
					5.638828135279255
				],
				[
					-0.8055468764684974,
					8.055468764684633
				],
				[
					-1.6110937529369949,
					10.472109394090012
				],
				[
					-2.4166406294053786,
					12.083203147026893
				],
				[
					-2.4166406294053786,
					13.694296899963888
				],
				[
					-2.4166406294053786,
					15.305390652900769
				],
				[
					-3.222187505873876,
					16.91648440583765
				],
				[
					-4.0277343823423735,
					18.52757815877453
				],
				[
					-4.0277343823423735,
					19.33312503524303
				],
				[
					-3.222187505873876,
					19.33312503524303
				],
				[
					-2.4166406294053786,
					18.52757815877453
				],
				[
					-1.6110937529369949,
					17.722031282306148
				],
				[
					0.8055468764683837,
					15.305390652900769
				],
				[
					3.2221875058737623,
					13.694296899963888
				],
				[
					5.638828135279141,
					10.472109394090012
				],
				[
					8.05546876468452,
					7.2499218882162495
				],
				[
					15.305390652900655,
					0
				],
				[
					19.333125035242915,
					-4.8332812588106435
				],
				[
					28.194140676395932,
					-16.11093752936904
				],
				[
					37.86070319401745,
					-27.38859379992755
				],
				[
					48.33281258810746,
					-39.47179694695433
				],
				[
					53.9716407233866,
					-45.91617195870208
				],
				[
					63.638203241008114,
					-56.38828135279198
				],
				[
					72.49921888216113,
					-65.249296993945
				],
				[
					80.55468764684576,
					-73.30476575862957
				],
				[
					84.58242202918802,
					-77.33250014097189
				],
				[
					84.58242202918802,
					-77.33250014097189
				]
			],
			"pressures": [
				0.330078125,
				0.3369140625,
				0.3447265625,
				0.37109375,
				0.3857421875,
				0.435546875,
				0.5107421875,
				0.5703125,
				0.623046875,
				0.6455078125,
				0.681640625,
				0.7080078125,
				0.7255859375,
				0.732421875,
				0.7626953125,
				0.7822265625,
				0.7919921875,
				0.810546875,
				0.8203125,
				0.8271484375,
				0.8330078125,
				0.8388671875,
				0.8408203125,
				0.837890625,
				0.8291015625,
				0.810546875,
				0.7958984375,
				0.7509765625,
				0.6796875,
				0.5791015625,
				0.517578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				84.58242202918802,
				-77.33250014097189
			]
		},
		{
			"id": "_Ez4sOK9Y-jQEjR7iUQD4",
			"type": "freedraw",
			"x": 496.30313586411637,
			"y": 663.8652791145313,
			"width": 0.0001,
			"height": 0.0001,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2099134729,
			"version": 16,
			"versionNonce": 99883335,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0.0001,
					0.0001
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0.0001,
				0.0001
			]
		},
		{
			"id": "4WsjcA87PrI0yG6Poq8MW",
			"type": "freedraw",
			"x": 466.49790143478515,
			"y": 1329.2469990774814,
			"width": 0,
			"height": 4.833281258810757,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1698387751,
			"version": 23,
			"versionNonce": 367674025,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-0.8055468764684974
				],
				[
					0,
					-1.6110937529369949
				],
				[
					0,
					-2.416640629405265
				],
				[
					0,
					-3.2221875058737623
				],
				[
					0,
					-4.02773438234226
				],
				[
					0,
					-4.833281258810757
				],
				[
					0,
					0
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0,
				-4.833281258810757
			]
		},
		{
			"id": "Xfwrp46ht7pGR82TvpQ8j",
			"type": "freedraw",
			"x": 90.30751012401538,
			"y": 1641.7991871472395,
			"width": 81.36023452331426,
			"height": 91.02679704093589,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1138556615,
			"version": 45,
			"versionNonce": 1187993703,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-0.8055468764684974
				],
				[
					0.8055468764684974,
					-0.8055468764684974
				],
				[
					1.6110937529369949,
					-0.8055468764684974
				],
				[
					1.6110937529369949,
					0
				],
				[
					2.4166406294053786,
					0
				],
				[
					2.4166406294053786,
					0.8055468764684974
				],
				[
					3.222187505873876,
					1.6110937529369949
				],
				[
					4.0277343823423735,
					2.416640629405265
				],
				[
					4.833281258810757,
					3.2221875058737623
				],
				[
					5.638828135279255,
					4.02773438234226
				],
				[
					6.444375011747752,
					4.02773438234226
				],
				[
					7.249921888216136,
					4.833281258810757
				],
				[
					8.055468764684633,
					5.638828135279255
				],
				[
					8.86101564115313,
					6.444375011747752
				],
				[
					10.472109394090012,
					6.444375011747752
				],
				[
					11.277656270558396,
					6.444375011747752
				],
				[
					12.083203147026893,
					6.444375011747752
				],
				[
					12.88875002349539,
					5.638828135279255
				],
				[
					13.694296899963774,
					4.833281258810757
				],
				[
					16.91648440583765,
					1.6110937529369949
				],
				[
					19.33312503524303,
					-0.8055468764684974
				],
				[
					21.749765664648407,
					-4.02773438234226
				],
				[
					24.971953170522283,
					-7.2499218882162495
				],
				[
					33.0274219352068,
					-17.722031282306034
				],
				[
					42.69398445282832,
					-30.61078130580131
				],
				[
					53.166093846918216,
					-45.91617195870208
				],
				[
					58.80492198219747,
					-53.9716407233866
				],
				[
					70.08257825275587,
					-70.08257825275587
				],
				[
					81.36023452331426,
					-84.58242202918814
				],
				[
					81.36023452331426,
					-84.58242202918814
				]
			],
			"pressures": [
				0.3525390625,
				0.37890625,
				0.412109375,
				0.5576171875,
				0.6962890625,
				0.7197265625,
				0.7294921875,
				0.7529296875,
				0.7646484375,
				0.7685546875,
				0.7783203125,
				0.7841796875,
				0.794921875,
				0.798828125,
				0.8056640625,
				0.8154296875,
				0.8203125,
				0.82421875,
				0.830078125,
				0.837890625,
				0.8544921875,
				0.8623046875,
				0.87109375,
				0.8779296875,
				0.8828125,
				0.8662109375,
				0.818359375,
				0.78125,
				0.6748046875,
				0.533203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				81.36023452331426,
				-84.58242202918814
			]
		},
		{
			"id": "0GiqfqkR",
			"type": "text",
			"x": -263.06208402075293,
			"y": 1669.3781724354512,
			"width": 331,
			"height": 25,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1109594311,
			"version": 48,
			"versionNonce": 1388184969,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "thus sum2Darray2 more efficient",
			"rawText": "thus sum2Darray2 more efficient",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": "thus sum2Darray2 more efficient"
		},
		{
			"id": "beb0ta1NC3dndTL6N4K0x",
			"type": "freedraw",
			"x": 1630.533560654395,
			"y": -138.65409480693208,
			"width": 126.16781914976787,
			"height": 114.30588743483241,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1664496809,
			"version": 43,
			"versionNonce": 1144370055,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286304827
				],
				[
					0,
					2.1567148572609938
				],
				[
					0,
					3.2350722858914764
				],
				[
					-1.0783574286303974,
					4.313429714521959
				],
				[
					-1.0783574286303974,
					5.39178714315247
				],
				[
					-2.156714857261022,
					8.626859429043947
				],
				[
					-3.2350722858914196,
					11.861931714935423
				],
				[
					-3.2350722858914196,
					16.17536142945741
				],
				[
					-4.313429714522044,
					18.332076286718376
				],
				[
					-4.313429714522044,
					22.645506001240364
				],
				[
					-4.313429714522044,
					25.88057828713184
				],
				[
					-4.313429714522044,
					26.95893571576235
				],
				[
					-4.313429714522044,
					28.037293144392862
				],
				[
					-3.2350722858914196,
					30.194008001653827
				],
				[
					0,
					30.194008001653827
				],
				[
					4.313429714522044,
					28.037293144392862
				],
				[
					6.470144571783067,
					25.88057828713184
				],
				[
					14.01864657219653,
					20.488791143979398
				],
				[
					24.802220858501414,
					10.78357428630494
				],
				[
					30.194008001653856,
					6.470144571782953
				],
				[
					44.212654573850386,
					-6.470144571782981
				],
				[
					59.309658574677314,
					-20.488791143979398
				],
				[
					75.48502000413464,
					-35.585795144806326
				],
				[
					83.0335220045481,
					-43.13429714521979
				],
				[
					98.13052600537503,
					-58.23130114604672
				],
				[
					111.07081514894094,
					-72.24994771824313
				],
				[
					121.85438943524582,
					-84.11187943317859
				],
				[
					121.85438943524582,
					-84.11187943317859
				]
			],
			"pressures": [
				0.3447265625,
				0.34765625,
				0.3505859375,
				0.3623046875,
				0.3818359375,
				0.392578125,
				0.4267578125,
				0.466796875,
				0.5068359375,
				0.5244140625,
				0.552734375,
				0.5751953125,
				0.5849609375,
				0.59375,
				0.6123046875,
				0.62890625,
				0.64453125,
				0.6513671875,
				0.662109375,
				0.6689453125,
				0.6708984375,
				0.66796875,
				0.65625,
				0.6279296875,
				0.60546875,
				0.5419921875,
				0.4599609375,
				0.3642578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				121.85438943524582,
				-84.11187943317859
			]
		},
		{
			"id": "0Mg9xlDH",
			"type": "text",
			"x": 1630.533560654395,
			"y": -251.17640795545955,
			"width": 325,
			"height": 25,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1136174025,
			"version": 66,
			"versionNonce": 165047401,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"text": "since at top of memory hierarchy",
			"rawText": "since at top of memory hierarchy",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": "since at top of memory hierarchy"
		},
		{
			"id": "MwYdX-xdAURYIypLUYKzM",
			"type": "freedraw",
			"x": 1537.7948217921723,
			"y": -25.426564800730148,
			"width": 97.05216857674463,
			"height": 78.72009229002612,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 731778695,
			"version": 44,
			"versionNonce": 1986243239,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286304543
				],
				[
					1.0783574286306248,
					2.1567148572609653
				],
				[
					1.0783574286306248,
					3.2350722858914764
				],
				[
					2.156714857261022,
					4.313429714521931
				],
				[
					2.156714857261022,
					6.470144571782953
				],
				[
					2.156714857261022,
					8.626859429043918
				],
				[
					3.235072285891647,
					9.70521685767443
				],
				[
					3.235072285891647,
					10.78357428630494
				],
				[
					3.235072285891647,
					11.861931714935395
				],
				[
					4.313429714522044,
					12.940289143565906
				],
				[
					4.313429714522044,
					14.018646572196417
				],
				[
					4.313429714522044,
					15.097004000826928
				],
				[
					5.391787143152669,
					16.175361429457382
				],
				[
					6.470144571783067,
					17.253718858087893
				],
				[
					7.548502000413464,
					17.253718858087893
				],
				[
					8.626859429044089,
					16.175361429457382
				],
				[
					11.861931714935508,
					15.097004000826928
				],
				[
					12.940289143565906,
					14.018646572196417
				],
				[
					17.25371885808795,
					9.70521685767443
				],
				[
					20.48879114397937,
					7.548502000413464
				],
				[
					28.037293144392834,
					1.0783574286304543
				],
				[
					37.74251000206732,
					-7.548502000413464
				],
				[
					42.055939716589364,
					-12.940289143565963
				],
				[
					53.91787143152487,
					-23.723863429870903
				],
				[
					65.77980314646015,
					-34.50743771617584
				],
				[
					78.72009229002629,
					-45.291012002480784
				],
				[
					85.19023686180913,
					-50.68279914563328
				],
				[
					97.05216857674463,
					-61.46637343193822
				],
				[
					97.05216857674463,
					-61.46637343193822
				]
			],
			"pressures": [
				0.2294921875,
				0.2333984375,
				0.248046875,
				0.2919921875,
				0.349609375,
				0.400390625,
				0.470703125,
				0.505859375,
				0.5205078125,
				0.5458984375,
				0.5673828125,
				0.5771484375,
				0.5966796875,
				0.6201171875,
				0.6484375,
				0.6650390625,
				0.69921875,
				0.732421875,
				0.748046875,
				0.7763671875,
				0.787109375,
				0.798828125,
				0.796875,
				0.7890625,
				0.76171875,
				0.7138671875,
				0.642578125,
				0.5966796875,
				0.48828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				97.05216857674463,
				-61.46637343193822
			]
		},
		{
			"id": "OxWX9pvtMSVj7Re5iB4jy",
			"type": "freedraw",
			"x": 1681.2163598000282,
			"y": 114.75990092123405,
			"width": 114.30588743483236,
			"height": 116.46260229209338,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 508086409,
			"version": 45,
			"versionNonce": 1392441161,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					0
				],
				[
					1.0783574286306248,
					1.078357428630511
				],
				[
					2.156714857261022,
					1.078357428630511
				],
				[
					2.156714857261022,
					2.156714857261022
				],
				[
					2.156714857261022,
					3.2350722858914764
				],
				[
					3.2350722858914196,
					4.3134297145219875
				],
				[
					3.2350722858914196,
					5.391787143152499
				],
				[
					3.2350722858914196,
					6.470144571782953
				],
				[
					3.2350722858914196,
					7.548502000413464
				],
				[
					4.313429714522044,
					8.626859429043975
				],
				[
					4.313429714522044,
					9.70521685767443
				],
				[
					5.391787143152442,
					9.70521685767443
				],
				[
					5.391787143152442,
					10.78357428630494
				],
				[
					6.470144571783067,
					10.78357428630494
				],
				[
					7.548502000413464,
					9.70521685767443
				],
				[
					9.705216857674486,
					8.626859429043975
				],
				[
					10.783574286304884,
					8.626859429043975
				],
				[
					12.940289143565906,
					5.391787143152499
				],
				[
					17.25371885808795,
					1.078357428630511
				],
				[
					22.645506001240392,
					-6.470144571782953
				],
				[
					26.958935715762436,
					-10.78357428630494
				],
				[
					34.5074377161759,
					-20.48879114397937
				],
				[
					45.291012002480784,
					-33.42908028754533
				],
				[
					57.15294371741629,
					-47.44772685974175
				],
				[
					64.70144571782976,
					-54.99622886015521
				],
				[
					78.72009229002606,
					-70.09323286098214
				],
				[
					92.73873886222259,
					-85.19023686180904
				],
				[
					106.7573854344189,
					-99.20888343400549
				],
				[
					114.30588743483236,
					-105.67902800578844
				],
				[
					114.30588743483236,
					-105.67902800578844
				]
			],
			"pressures": [
				0.2080078125,
				0.2060546875,
				0.2275390625,
				0.26953125,
				0.2861328125,
				0.3408203125,
				0.375,
				0.40234375,
				0.4248046875,
				0.44140625,
				0.4521484375,
				0.4599609375,
				0.47265625,
				0.478515625,
				0.5029296875,
				0.5380859375,
				0.5625,
				0.57421875,
				0.59375,
				0.60546875,
				0.6064453125,
				0.6015625,
				0.5830078125,
				0.548828125,
				0.4990234375,
				0.46875,
				0.3994140625,
				0.3271484375,
				0.2568359375,
				0.220703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				114.30588743483236,
				-105.67902800578844
			]
		},
		{
			"id": "QYycLMpMaV5qmvVIW6jti",
			"type": "freedraw",
			"x": 1717.880512373465,
			"y": 461.99099294025325,
			"width": 86.26859429043952,
			"height": 94.8954537194835,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 534910601,
			"version": 47,
			"versionNonce": 436583879,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.078357428630511
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					3.2350722858915333
				],
				[
					0,
					4.313429714521931
				],
				[
					0,
					5.391787143152442
				],
				[
					0,
					8.626859429043975
				],
				[
					0,
					9.705216857674486
				],
				[
					0,
					14.018646572196417
				],
				[
					0,
					18.332076286718348
				],
				[
					0,
					20.48879114397937
				],
				[
					0,
					24.802220858501414
				],
				[
					0,
					29.115650573023345
				],
				[
					0,
					32.35072285891488
				],
				[
					0,
					33.429080287545275
				],
				[
					0,
					36.66415257343681
				],
				[
					1.0783574286303974,
					37.74251000206732
				],
				[
					3.2350722858914196,
					37.74251000206732
				],
				[
					4.313429714521817,
					36.66415257343681
				],
				[
					7.548502000413464,
					33.429080287545275
				],
				[
					12.940289143565906,
					29.115650573023345
				],
				[
					19.410433715348745,
					22.645506001240392
				],
				[
					22.645506001240392,
					18.332076286718348
				],
				[
					31.272365430284253,
					8.626859429043975
				],
				[
					39.899224859328115,
					-1.078357428630511
				],
				[
					48.5260842883722,
					-12.940289143565906
				],
				[
					53.917871431524645,
					-18.33207628671846
				],
				[
					62.54473086056851,
					-29.115650573023345
				],
				[
					71.1715902896126,
					-39.89922485932834
				],
				[
					75.48502000413464,
					-44.21265457385027
				],
				[
					83.03352200454788,
					-52.83951400289425
				],
				[
					86.26859429043952,
					-57.15294371741618
				],
				[
					86.26859429043952,
					-57.15294371741618
				]
			],
			"pressures": [
				0.1513671875,
				0.3740234375,
				0.5107421875,
				0.5400390625,
				0.5634765625,
				0.5732421875,
				0.59375,
				0.6025390625,
				0.6201171875,
				0.6357421875,
				0.6435546875,
				0.658203125,
				0.6689453125,
				0.677734375,
				0.68359375,
				0.6953125,
				0.708984375,
				0.72265625,
				0.728515625,
				0.740234375,
				0.7470703125,
				0.7490234375,
				0.7470703125,
				0.736328125,
				0.7158203125,
				0.6865234375,
				0.6669921875,
				0.619140625,
				0.5595703125,
				0.5244140625,
				0.443359375,
				0.3955078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				86.26859429043952,
				-57.15294371741618
			]
		},
		{
			"id": "kAOUVsBr-cEdzSJFujb8P",
			"type": "freedraw",
			"x": 1715.723797516204,
			"y": 534.2409406584964,
			"width": 62.544730860568734,
			"height": 52.83951400289425,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1068755817,
			"version": 40,
			"versionNonce": 1083385385,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167533,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.078357428630511
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					3.2350722858915333
				],
				[
					-1.0783574286306248,
					4.313429714522044
				],
				[
					-1.0783574286306248,
					7.548502000413464
				],
				[
					-2.156714857261022,
					10.783574286304997
				],
				[
					-3.2350722858914196,
					15.097004000826928
				],
				[
					-3.2350722858914196,
					18.33207628671846
				],
				[
					-4.313429714522044,
					22.645506001240392
				],
				[
					-3.2350722858914196,
					26.958935715762323
				],
				[
					-2.156714857261022,
					30.194008001653856
				],
				[
					-1.0783574286306248,
					30.194008001653856
				],
				[
					2.156714857261022,
					31.272365430284367
				],
				[
					6.470144571782839,
					29.115650573023345
				],
				[
					8.626859429043861,
					28.037293144392834
				],
				[
					15.097004000826928,
					23.723863429870903
				],
				[
					21.567148572609767,
					18.33207628671846
				],
				[
					29.11565057302323,
					11.861931714935508
				],
				[
					32.35072285891488,
					7.548502000413464
				],
				[
					39.89922485932834,
					0
				],
				[
					46.36936943111118,
					-7.548502000413464
				],
				[
					51.76115657426362,
					-14.018646572196417
				],
				[
					53.917871431524645,
					-17.25371885808795
				],
				[
					58.23130114604669,
					-21.56714857260988
				],
				[
					58.23130114604669,
					-21.56714857260988
				]
			],
			"pressures": [
				0.4208984375,
				0.453125,
				0.5107421875,
				0.537109375,
				0.5556640625,
				0.5908203125,
				0.619140625,
				0.6416015625,
				0.65234375,
				0.6708984375,
				0.6865234375,
				0.69921875,
				0.705078125,
				0.71484375,
				0.7236328125,
				0.7275390625,
				0.7314453125,
				0.728515625,
				0.7119140625,
				0.697265625,
				0.6552734375,
				0.59765625,
				0.5263671875,
				0.486328125,
				0.404296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				58.23130114604669,
				-21.56714857260988
			]
		},
		{
			"id": "BNKR4AQ7I2YMBril_jtza",
			"type": "freedraw",
			"x": 1728.66408665977,
			"y": 616.196105234414,
			"width": 52.83951400289425,
			"height": 53.91787143152476,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1786477639,
			"version": 31,
			"versionNonce": 574123239,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					1.078357428630511
				],
				[
					-1.0783574286306248,
					2.156714857261022
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					1.078357428630511
				],
				[
					1.0783574286303974,
					1.078357428630511
				],
				[
					2.156714857261022,
					1.078357428630511
				],
				[
					4.313429714522044,
					0
				],
				[
					6.470144571782839,
					-2.1567148572609085
				],
				[
					10.783574286304884,
					-6.470144571782953
				],
				[
					14.018646572196303,
					-8.626859429043975
				],
				[
					17.25371885808795,
					-11.861931714935395
				],
				[
					24.802220858501414,
					-20.48879114397937
				],
				[
					34.5074377161759,
					-31.272365430284367
				],
				[
					45.291012002480784,
					-44.21265457385027
				],
				[
					51.76115657426362,
					-51.76115657426374
				],
				[
					51.76115657426362,
					-51.76115657426374
				]
			],
			"pressures": [
				0.462890625,
				0.4609375,
				0.46875,
				0.568359375,
				0.580078125,
				0.6181640625,
				0.6318359375,
				0.66015625,
				0.6875,
				0.7099609375,
				0.71875,
				0.7275390625,
				0.7412109375,
				0.7431640625,
				0.71875,
				0.689453125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				51.76115657426362,
				-51.76115657426374
			]
		},
		{
			"id": "AAk6lay0JuZY7cLjsKg3x",
			"type": "freedraw",
			"x": 1817.0893958074705,
			"y": 920.2929001082132,
			"width": 92.73873886222259,
			"height": 70.0932328609822,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 241386599,
			"version": 38,
			"versionNonce": 226392329,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.078357428630511
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					3.2350722858914196
				],
				[
					0,
					4.313429714522044
				],
				[
					0,
					5.391787143152442
				],
				[
					0,
					6.470144571783067
				],
				[
					1.0783574286303974,
					6.470144571783067
				],
				[
					2.156714857261022,
					6.470144571783067
				],
				[
					4.313429714522044,
					5.391787143152442
				],
				[
					6.470144571782839,
					4.313429714522044
				],
				[
					9.705216857674486,
					2.156714857261022
				],
				[
					15.097004000826928,
					-2.156714857261022
				],
				[
					19.410433715348972,
					-5.391787143152442
				],
				[
					26.958935715762436,
					-11.861931714935395
				],
				[
					36.664152573436695,
					-19.41043371534886
				],
				[
					47.447726859741806,
					-28.037293144392834
				],
				[
					52.83951400289425,
					-32.35072285891488
				],
				[
					63.62308828919913,
					-39.89922485932834
				],
				[
					73.32830514687362,
					-48.5260842883722
				],
				[
					81.95516457591748,
					-54.99622886015527
				],
				[
					86.26859429043952,
					-58.23130114604669
				],
				[
					92.73873886222259,
					-63.62308828919913
				],
				[
					92.73873886222259,
					-63.62308828919913
				]
			],
			"pressures": [
				0.203125,
				0.2060546875,
				0.2314453125,
				0.38671875,
				0.4990234375,
				0.5966796875,
				0.6455078125,
				0.673828125,
				0.7099609375,
				0.734375,
				0.740234375,
				0.7509765625,
				0.755859375,
				0.755859375,
				0.75,
				0.740234375,
				0.7236328125,
				0.712890625,
				0.677734375,
				0.625,
				0.5517578125,
				0.5068359375,
				0.4052734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				92.73873886222259,
				-63.62308828919913
			]
		},
		{
			"id": "fzzi71PJxqe6Xf1ytp34U",
			"type": "freedraw",
			"x": 1190.5637297731532,
			"y": 2668.310291918245,
			"width": 76.56337743276504,
			"height": 61.46637343193834,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 636548105,
			"version": 47,
			"versionNonce": 1787312135,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286303974,
					-1.0783574286306248
				],
				[
					2.156714857261022,
					-1.0783574286306248
				],
				[
					2.156714857261022,
					0
				],
				[
					2.156714857261022,
					1.07835742863017
				],
				[
					3.2350722858914196,
					1.07835742863017
				],
				[
					3.2350722858914196,
					2.156714857260795
				],
				[
					4.313429714521817,
					3.2350722858914196
				],
				[
					5.391787143152442,
					5.391787143152214
				],
				[
					5.391787143152442,
					6.470144571782839
				],
				[
					6.470144571782839,
					7.548502000413464
				],
				[
					6.470144571782839,
					9.705216857674259
				],
				[
					7.548502000413464,
					11.861931714935508
				],
				[
					7.548502000413464,
					15.097004000826928
				],
				[
					8.626859429043861,
					16.175361429457098
				],
				[
					8.626859429043861,
					18.332076286718348
				],
				[
					9.705216857674486,
					20.488791143979142
				],
				[
					9.705216857674486,
					21.567148572609767
				],
				[
					10.783574286304884,
					21.567148572609767
				],
				[
					11.861931714935281,
					21.567148572609767
				],
				[
					14.018646572196303,
					20.488791143979142
				],
				[
					17.25371885808795,
					18.332076286718348
				],
				[
					19.410433715348745,
					17.253718858087723
				],
				[
					23.72386342987079,
					12.940289143565678
				],
				[
					26.95893571576221,
					9.705216857674259
				],
				[
					33.429080287545275,
					4.313429714522044
				],
				[
					40.97758228795874,
					-3.2350722858914196
				],
				[
					45.291012002480784,
					-7.548502000413464
				],
				[
					53.917871431524645,
					-16.175361429457553
				],
				[
					62.54473086056851,
					-25.88057828713181
				],
				[
					72.24994771824299,
					-34.5074377161759
				],
				[
					76.56337743276504,
					-39.89922485932857
				],
				[
					76.56337743276504,
					-39.89922485932857
				]
			],
			"pressures": [
				0.197265625,
				0.1962890625,
				0.25,
				0.3720703125,
				0.4765625,
				0.4931640625,
				0.5234375,
				0.548828125,
				0.583984375,
				0.603515625,
				0.611328125,
				0.626953125,
				0.638671875,
				0.6474609375,
				0.6513671875,
				0.6591796875,
				0.6689453125,
				0.6806640625,
				0.6865234375,
				0.7001953125,
				0.71484375,
				0.7265625,
				0.7314453125,
				0.73828125,
				0.7412109375,
				0.7412109375,
				0.7294921875,
				0.716796875,
				0.6708984375,
				0.595703125,
				0.4931640625,
				0.435546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				76.56337743276504,
				-39.89922485932857
			]
		},
		{
			"id": "VX4AthD3",
			"type": "text",
			"x": 892.9370794711367,
			"y": 2891.157139073801,
			"width": 1047,
			"height": 525,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1077942505,
			"version": 585,
			"versionNonce": 188510185,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"text": "if transferred used then should be declared and init to 0 in kernelWrite\n\nso it should be \n\nlock()\ntransferred = count\nunlock()\n\nstartTransfer()\n\nlock()\ntotal_transferred += transferred\nunlock()\nreturn transferred\n\ndata copied from buffer to kernel space needs to use copy_from_user so should kmalloc space for that\nin kernel space and then free it afterwards\n\n\nkernelWrite probably should return amount transferred\n",
			"rawText": "if transferred used then should be declared and init to 0 in kernelWrite\n\nso it should be \n\nlock()\ntransferred = count\nunlock()\n\nstartTransfer()\n\nlock()\ntotal_transferred += transferred\nunlock()\nreturn transferred\n\ndata copied from buffer to kernel space needs to use copy_from_user so should kmalloc space for that\nin kernel space and then free it afterwards\n\n\nkernelWrite probably should return amount transferred\n",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 518,
			"containerId": null,
			"originalText": "if transferred used then should be declared and init to 0 in kernelWrite\n\nso it should be \n\nlock()\ntransferred = count\nunlock()\n\nstartTransfer()\n\nlock()\ntotal_transferred += transferred\nunlock()\nreturn transferred\n\ndata copied from buffer to kernel space needs to use copy_from_user so should kmalloc space for that\nin kernel space and then free it afterwards\n\n\nkernelWrite probably should return amount transferred\n"
		},
		{
			"id": "b4wR5qfzRZ0VIMLTdHjN_",
			"type": "freedraw",
			"x": 1631.6119180830253,
			"y": 2828.9855487841883,
			"width": 20.48879114397937,
			"height": 46.369369431110954,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1938997001,
			"version": 66,
			"versionNonce": 78005959,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.07835742863017
				],
				[
					-1.0783574286303974,
					1.07835742863017
				],
				[
					-1.0783574286303974,
					3.2350722858914196
				],
				[
					-1.0783574286303974,
					5.391787143152214
				],
				[
					-1.0783574286303974,
					6.470144571782839
				],
				[
					-2.156714857260795,
					10.783574286304884
				],
				[
					-2.156714857260795,
					14.018646572196303
				],
				[
					-2.156714857260795,
					18.332076286718348
				],
				[
					-2.156714857260795,
					20.488791143979142
				],
				[
					-1.0783574286303974,
					24.802220858501187
				],
				[
					-1.0783574286303974,
					28.037293144392606
				],
				[
					-1.0783574286303974,
					31.272365430284026
				],
				[
					-1.0783574286303974,
					33.429080287545275
				],
				[
					0,
					34.507437716175446
				],
				[
					0,
					36.664152573436695
				],
				[
					0,
					37.742510002066865
				],
				[
					0,
					36.664152573436695
				],
				[
					0,
					35.58579514480607
				],
				[
					0,
					33.429080287545275
				],
				[
					-1.0783574286303974,
					30.1940080016534
				],
				[
					-1.0783574286303974,
					25.88057828713181
				],
				[
					-1.0783574286303974,
					23.723863429870562
				],
				[
					0,
					18.332076286718348
				],
				[
					0,
					12.940289143565678
				],
				[
					1.0783574286306248,
					8.626859429043634
				],
				[
					2.156714857261022,
					5.391787143152214
				],
				[
					3.235072285891647,
					1.07835742863017
				],
				[
					5.391787143152669,
					-2.1567148572612496
				],
				[
					6.470144571783067,
					-5.391787143152669
				],
				[
					7.548502000413464,
					-6.470144571783294
				],
				[
					9.705216857674486,
					-7.548502000413464
				],
				[
					10.783574286305111,
					-8.626859429044089
				],
				[
					11.861931714935508,
					-8.626859429044089
				],
				[
					12.940289143566133,
					-8.626859429044089
				],
				[
					14.01864657219653,
					-7.548502000413464
				],
				[
					15.097004000826928,
					-6.470144571783294
				],
				[
					15.097004000826928,
					-4.313429714522044
				],
				[
					15.097004000826928,
					-2.1567148572612496
				],
				[
					16.175361429457553,
					0
				],
				[
					16.175361429457553,
					1.07835742863017
				],
				[
					15.097004000826928,
					3.2350722858914196
				],
				[
					15.097004000826928,
					5.391787143152214
				],
				[
					12.940289143566133,
					6.470144571782839
				],
				[
					12.940289143566133,
					7.548502000413464
				],
				[
					10.783574286305111,
					9.705216857674259
				],
				[
					8.626859429044089,
					10.783574286304884
				],
				[
					5.391787143152669,
					11.861931714935054
				],
				[
					4.313429714522044,
					11.861931714935054
				],
				[
					2.156714857261022,
					12.940289143565678
				],
				[
					-1.0783574286303974,
					12.940289143565678
				],
				[
					-2.156714857260795,
					14.018646572196303
				],
				[
					-3.2350722858914196,
					14.018646572196303
				],
				[
					-4.313429714521817,
					14.018646572196303
				],
				[
					-4.313429714521817,
					14.018646572196303
				]
			],
			"pressures": [
				0.1748046875,
				0.1953125,
				0.2060546875,
				0.234375,
				0.2734375,
				0.294921875,
				0.337890625,
				0.3759765625,
				0.4052734375,
				0.4169921875,
				0.431640625,
				0.4404296875,
				0.447265625,
				0.451171875,
				0.45703125,
				0.46484375,
				0.4794921875,
				0.48828125,
				0.494140625,
				0.5009765625,
				0.501953125,
				0.501953125,
				0.5029296875,
				0.5029296875,
				0.501953125,
				0.5009765625,
				0.5,
				0.5,
				0.4990234375,
				0.4990234375,
				0.4990234375,
				0.498046875,
				0.498046875,
				0.4990234375,
				0.5048828125,
				0.5126953125,
				0.5263671875,
				0.5458984375,
				0.5712890625,
				0.6025390625,
				0.619140625,
				0.6533203125,
				0.68359375,
				0.708984375,
				0.7177734375,
				0.7314453125,
				0.7392578125,
				0.7412109375,
				0.740234375,
				0.73046875,
				0.7021484375,
				0.677734375,
				0.60546875,
				0.55859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4.313429714521817,
				14.018646572196303
			]
		},
		{
			"id": "DJEAWumrJaUMT7DjBYP0C",
			"type": "freedraw",
			"x": 1655.3357815128963,
			"y": 2846.239267642276,
			"width": 34.5074377161759,
			"height": 22.645506001240392,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 128968585,
			"version": 78,
			"versionNonce": 886811945,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286303974,
					1.0783574286306248
				],
				[
					1.0783574286303974,
					2.156714857260795
				],
				[
					1.0783574286303974,
					3.2350722858914196
				],
				[
					1.0783574286303974,
					4.313429714522044
				],
				[
					1.0783574286303974,
					5.391787143152669
				],
				[
					0,
					7.548502000413464
				],
				[
					0,
					9.705216857674259
				],
				[
					-1.0783574286306248,
					10.783574286304884
				],
				[
					-1.0783574286306248,
					11.861931714935508
				],
				[
					-1.0783574286306248,
					14.018646572196303
				],
				[
					-1.0783574286306248,
					15.097004000826928
				],
				[
					-1.0783574286306248,
					16.175361429457553
				],
				[
					-1.0783574286306248,
					17.253718858087723
				],
				[
					0,
					17.253718858087723
				],
				[
					0,
					16.175361429457553
				],
				[
					1.0783574286303974,
					15.097004000826928
				],
				[
					1.0783574286303974,
					14.018646572196303
				],
				[
					1.0783574286303974,
					11.861931714935508
				],
				[
					2.156714857261022,
					8.626859429044089
				],
				[
					2.156714857261022,
					7.548502000413464
				],
				[
					3.2350722858914196,
					4.313429714522044
				],
				[
					4.313429714522044,
					1.0783574286306248
				],
				[
					5.391787143152442,
					-1.0783574286306248
				],
				[
					5.391787143152442,
					-2.156714857260795
				],
				[
					6.470144571782839,
					-4.313429714522044
				],
				[
					7.548502000413464,
					-4.313429714522044
				],
				[
					9.705216857674486,
					-5.391787143152669
				],
				[
					9.705216857674486,
					-4.313429714522044
				],
				[
					10.783574286304884,
					-4.313429714522044
				],
				[
					12.940289143565906,
					-3.2350722858914196
				],
				[
					14.018646572196303,
					-2.156714857260795
				],
				[
					15.097004000826928,
					-2.156714857260795
				],
				[
					17.25371885808795,
					-1.0783574286306248
				],
				[
					18.332076286718348,
					0
				],
				[
					19.410433715348972,
					0
				],
				[
					20.48879114397937,
					0
				],
				[
					21.567148572609767,
					1.0783574286306248
				],
				[
					22.645506001240392,
					1.0783574286306248
				],
				[
					21.567148572609767,
					2.156714857260795
				],
				[
					21.567148572609767,
					3.2350722858914196
				],
				[
					20.48879114397937,
					3.2350722858914196
				],
				[
					20.48879114397937,
					4.313429714522044
				],
				[
					19.410433715348972,
					6.470144571782839
				],
				[
					19.410433715348972,
					8.626859429044089
				],
				[
					18.332076286718348,
					10.783574286304884
				],
				[
					19.410433715348972,
					11.861931714935508
				],
				[
					19.410433715348972,
					12.940289143565678
				],
				[
					20.48879114397937,
					14.018646572196303
				],
				[
					21.567148572609767,
					15.097004000826928
				],
				[
					22.645506001240392,
					16.175361429457553
				],
				[
					23.72386342987079,
					16.175361429457553
				],
				[
					24.802220858501414,
					16.175361429457553
				],
				[
					26.958935715762436,
					16.175361429457553
				],
				[
					28.037293144392834,
					15.097004000826928
				],
				[
					29.11565057302323,
					14.018646572196303
				],
				[
					31.272365430284253,
					12.940289143565678
				],
				[
					32.35072285891488,
					10.783574286304884
				],
				[
					32.35072285891488,
					9.705216857674259
				],
				[
					33.429080287545275,
					8.626859429044089
				],
				[
					33.429080287545275,
					6.470144571782839
				],
				[
					33.429080287545275,
					5.391787143152669
				],
				[
					33.429080287545275,
					4.313429714522044
				],
				[
					32.35072285891488,
					3.2350722858914196
				],
				[
					31.272365430284253,
					2.156714857260795
				],
				[
					30.194008001653856,
					1.0783574286306248
				],
				[
					30.194008001653856,
					1.0783574286306248
				]
			],
			"pressures": [
				0.18359375,
				0.19140625,
				0.2080078125,
				0.267578125,
				0.2958984375,
				0.3330078125,
				0.4052734375,
				0.44140625,
				0.45703125,
				0.48046875,
				0.4970703125,
				0.50390625,
				0.51171875,
				0.515625,
				0.5234375,
				0.5322265625,
				0.5361328125,
				0.5361328125,
				0.537109375,
				0.5361328125,
				0.5341796875,
				0.5263671875,
				0.51171875,
				0.4892578125,
				0.4755859375,
				0.4443359375,
				0.4267578125,
				0.37109375,
				0.353515625,
				0.3369140625,
				0.298828125,
				0.28125,
				0.2763671875,
				0.271484375,
				0.26953125,
				0.26953125,
				0.26953125,
				0.271484375,
				0.2744140625,
				0.2783203125,
				0.279296875,
				0.279296875,
				0.279296875,
				0.2802734375,
				0.2822265625,
				0.2841796875,
				0.28515625,
				0.28515625,
				0.287109375,
				0.2890625,
				0.2900390625,
				0.294921875,
				0.298828125,
				0.3251953125,
				0.3369140625,
				0.3642578125,
				0.3935546875,
				0.421875,
				0.4345703125,
				0.4521484375,
				0.4638671875,
				0.46875,
				0.4716796875,
				0.46875,
				0.4443359375,
				0.39453125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				30.194008001653856,
				1.0783574286306248
			]
		},
		{
			"id": "GT23Qhl33kEfo3YTAmKcr",
			"type": "freedraw",
			"x": 1699.5484360867465,
			"y": 2814.9669022119915,
			"width": 3.2350722858914196,
			"height": 52.83951400289425,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 168031561,
			"version": 33,
			"versionNonce": 1507841511,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					0
				],
				[
					1.0783574286306248,
					1.0783574286306248
				],
				[
					0,
					2.1567148572612496
				],
				[
					0,
					4.313429714522044
				],
				[
					0,
					6.470144571783294
				],
				[
					-1.0783574286303974,
					9.705216857674714
				],
				[
					-1.0783574286303974,
					14.018646572196758
				],
				[
					-1.0783574286303974,
					19.410433715348972
				],
				[
					-1.0783574286303974,
					22.645506001240392
				],
				[
					-2.156714857260795,
					29.115650573023686
				],
				[
					-2.156714857260795,
					34.5074377161759
				],
				[
					-2.156714857260795,
					39.89922485932857
				],
				[
					-2.156714857260795,
					43.13429714521999
				],
				[
					-2.156714857260795,
					46.36936943111141
				],
				[
					-2.156714857260795,
					49.60444171700283
				],
				[
					-1.0783574286303974,
					51.76115657426362
				],
				[
					-1.0783574286303974,
					52.83951400289425
				],
				[
					0,
					52.83951400289425
				],
				[
					1.0783574286306248,
					52.83951400289425
				],
				[
					1.0783574286306248,
					51.76115657426362
				],
				[
					1.0783574286306248,
					51.76115657426362
				]
			],
			"pressures": [
				0.169921875,
				0.171875,
				0.2041015625,
				0.24609375,
				0.2939453125,
				0.3212890625,
				0.3759765625,
				0.4306640625,
				0.4765625,
				0.494140625,
				0.5205078125,
				0.5361328125,
				0.5439453125,
				0.5458984375,
				0.54296875,
				0.5322265625,
				0.5078125,
				0.4892578125,
				0.4365234375,
				0.3623046875,
				0.318359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1.0783574286306248,
				51.76115657426362
			]
		},
		{
			"id": "Ld7q0zU_aTTSY1PhpbhR-",
			"type": "freedraw",
			"x": 1722.193942087987,
			"y": 2803.104970497056,
			"width": 40.97758228795897,
			"height": 115.38424486346321,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 538307111,
			"version": 96,
			"versionNonce": 354295817,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286306248
				],
				[
					-1.0783574286303974,
					2.1567148572612496
				],
				[
					-1.0783574286303974,
					3.2350722858918743
				],
				[
					-2.156714857261022,
					5.391787143152669
				],
				[
					-2.156714857261022,
					6.470144571783294
				],
				[
					-3.2350722858914196,
					10.783574286305338
				],
				[
					-4.313429714521817,
					16.175361429457553
				],
				[
					-4.313429714521817,
					21.567148572610222
				],
				[
					-5.391787143152442,
					24.80222085850164
				],
				[
					-6.470144571782839,
					31.27236543028448
				],
				[
					-6.470144571782839,
					37.74251000206732
				],
				[
					-7.548502000413464,
					44.212654573850614
				],
				[
					-7.548502000413464,
					47.44772685974203
				],
				[
					-7.548502000413464,
					51.76115657426408
				],
				[
					-6.470144571782839,
					56.07458628878567
				],
				[
					-6.470144571782839,
					59.30965857467754
				],
				[
					-5.391787143152442,
					60.38801600330771
				],
				[
					-4.313429714521817,
					62.54473086056896
				],
				[
					-3.2350722858914196,
					62.54473086056896
				],
				[
					-2.156714857261022,
					62.54473086056896
				],
				[
					-1.0783574286303974,
					62.54473086056896
				],
				[
					0,
					61.46637343193834
				],
				[
					2.156714857261022,
					59.30965857467754
				],
				[
					2.156714857261022,
					58.23130114604692
				],
				[
					4.313429714522044,
					56.07458628878567
				],
				[
					5.391787143152442,
					53.91787143152487
				],
				[
					6.470144571783067,
					51.76115657426408
				],
				[
					6.470144571783067,
					50.68279914563345
				],
				[
					7.548502000413464,
					48.52608428837266
				],
				[
					8.626859429044089,
					47.44772685974203
				],
				[
					8.626859429044089,
					46.36936943111141
				],
				[
					8.626859429044089,
					47.44772685974203
				],
				[
					8.626859429044089,
					48.52608428837266
				],
				[
					8.626859429044089,
					50.68279914563345
				],
				[
					8.626859429044089,
					51.76115657426408
				],
				[
					9.705216857674486,
					53.91787143152487
				],
				[
					9.705216857674486,
					54.9962288601555
				],
				[
					9.705216857674486,
					57.15294371741629
				],
				[
					10.783574286305111,
					59.30965857467754
				],
				[
					11.861931714935508,
					60.38801600330771
				],
				[
					12.940289143565906,
					62.54473086056896
				],
				[
					14.01864657219653,
					63.62308828919913
				],
				[
					15.097004000826928,
					63.62308828919913
				],
				[
					16.175361429457553,
					63.62308828919913
				],
				[
					17.25371885808795,
					63.62308828919913
				],
				[
					18.332076286718575,
					62.54473086056896
				],
				[
					20.48879114397937,
					61.46637343193834
				],
				[
					21.567148572609995,
					60.38801600330771
				],
				[
					22.645506001240392,
					58.23130114604692
				],
				[
					23.723863429871017,
					56.07458628878567
				],
				[
					24.802220858501414,
					53.91787143152487
				],
				[
					24.802220858501414,
					51.76115657426408
				],
				[
					25.88057828713204,
					49.60444171700283
				],
				[
					25.88057828713204,
					47.44772685974203
				],
				[
					26.958935715762436,
					46.36936943111141
				],
				[
					26.958935715762436,
					44.212654573850614
				],
				[
					26.958935715762436,
					43.13429714521999
				],
				[
					26.958935715762436,
					42.055939716589364
				],
				[
					26.958935715762436,
					43.13429714521999
				],
				[
					28.037293144392834,
					44.212654573850614
				],
				[
					28.037293144392834,
					45.291012002480784
				],
				[
					28.037293144392834,
					48.52608428837266
				],
				[
					29.11565057302346,
					52.83951400289425
				],
				[
					29.11565057302346,
					58.23130114604692
				],
				[
					30.194008001653856,
					60.38801600330771
				],
				[
					31.27236543028448,
					66.858160575091
				],
				[
					31.27236543028448,
					74.40666257550447
				],
				[
					32.35072285891488,
					81.95516457591793
				],
				[
					32.35072285891488,
					85.19023686180935
				],
				[
					33.4290802875455,
					91.66038143359219
				],
				[
					33.4290802875455,
					98.13052600537503
				],
				[
					33.4290802875455,
					101.36559829126645
				],
				[
					32.35072285891488,
					105.6790280057885
				],
				[
					31.27236543028448,
					108.91410029167992
				],
				[
					29.11565057302346,
					112.14917257757179
				],
				[
					28.037293144392834,
					113.22753000620196
				],
				[
					25.88057828713204,
					115.38424486346321
				],
				[
					23.723863429871017,
					115.38424486346321
				],
				[
					20.48879114397937,
					115.38424486346321
				],
				[
					18.332076286718575,
					115.38424486346321
				],
				[
					16.175361429457553,
					113.22753000620196
				],
				[
					12.940289143565906,
					109.99245772031054
				],
				[
					11.861931714935508,
					108.91410029167992
				],
				[
					11.861931714935508,
					108.91410029167992
				]
			],
			"pressures": [
				0.1611328125,
				0.169921875,
				0.1845703125,
				0.1943359375,
				0.232421875,
				0.24609375,
				0.2958984375,
				0.349609375,
				0.3984375,
				0.419921875,
				0.4541015625,
				0.474609375,
				0.486328125,
				0.4892578125,
				0.490234375,
				0.484375,
				0.470703125,
				0.4599609375,
				0.4296875,
				0.3857421875,
				0.3310546875,
				0.3017578125,
				0.2724609375,
				0.193359375,
				0.169921875,
				0.1328125,
				0.1103515625,
				0.09765625,
				0.0947265625,
				0.0966796875,
				0.111328125,
				0.1279296875,
				0.1630859375,
				0.189453125,
				0.2177734375,
				0.2451171875,
				0.271484375,
				0.283203125,
				0.302734375,
				0.31640625,
				0.3203125,
				0.32421875,
				0.32421875,
				0.3232421875,
				0.3232421875,
				0.318359375,
				0.30859375,
				0.29296875,
				0.2822265625,
				0.2607421875,
				0.2373046875,
				0.216796875,
				0.208984375,
				0.197265625,
				0.1884765625,
				0.185546875,
				0.181640625,
				0.1787109375,
				0.173828125,
				0.1708984375,
				0.1767578125,
				0.1826171875,
				0.2021484375,
				0.2294921875,
				0.265625,
				0.2861328125,
				0.33203125,
				0.3779296875,
				0.4248046875,
				0.44921875,
				0.5,
				0.5517578125,
				0.576171875,
				0.623046875,
				0.6640625,
				0.693359375,
				0.7041015625,
				0.71875,
				0.724609375,
				0.7197265625,
				0.7109375,
				0.673828125,
				0.6044921875,
				0.5537109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11.861931714935508,
				108.91410029167992
			]
		},
		{
			"id": "Ws7wteexfo8aZnZy1tz_O",
			"type": "freedraw",
			"x": 1863.4587652385817,
			"y": 2830.0639062128184,
			"width": 23.723863429871017,
			"height": 29.11565057302323,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 504665223,
			"version": 70,
			"versionNonce": 1801093383,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					0
				],
				[
					2.156714857261022,
					0
				],
				[
					2.156714857261022,
					1.0783574286306248
				],
				[
					3.235072285891647,
					1.0783574286306248
				],
				[
					3.235072285891647,
					2.1567148572612496
				],
				[
					3.235072285891647,
					3.2350722858914196
				],
				[
					2.156714857261022,
					3.2350722858914196
				],
				[
					1.0783574286306248,
					3.2350722858914196
				],
				[
					0,
					3.2350722858914196
				],
				[
					-2.156714857261022,
					2.1567148572612496
				],
				[
					-4.313429714521817,
					2.1567148572612496
				],
				[
					-5.391787143152442,
					2.1567148572612496
				],
				[
					-6.470144571782839,
					2.1567148572612496
				],
				[
					-8.626859429043861,
					2.1567148572612496
				],
				[
					-9.705216857674486,
					2.1567148572612496
				],
				[
					-10.783574286304884,
					2.1567148572612496
				],
				[
					-11.861931714935281,
					2.1567148572612496
				],
				[
					-12.940289143565906,
					2.1567148572612496
				],
				[
					-12.940289143565906,
					3.2350722858914196
				],
				[
					-12.940289143565906,
					4.313429714522044
				],
				[
					-12.940289143565906,
					6.470144571783294
				],
				[
					-12.940289143565906,
					8.626859429044089
				],
				[
					-12.940289143565906,
					9.705216857674714
				],
				[
					-12.940289143565906,
					10.783574286304884
				],
				[
					-12.940289143565906,
					11.861931714935508
				],
				[
					-12.940289143565906,
					12.940289143566133
				],
				[
					-12.940289143565906,
					14.018646572196758
				],
				[
					-11.861931714935281,
					14.018646572196758
				],
				[
					-10.783574286304884,
					12.940289143566133
				],
				[
					-9.705216857674486,
					11.861931714935508
				],
				[
					-8.626859429043861,
					11.861931714935508
				],
				[
					-7.548502000413464,
					11.861931714935508
				],
				[
					-6.470144571782839,
					10.783574286304884
				],
				[
					-4.313429714521817,
					10.783574286304884
				],
				[
					-2.156714857261022,
					11.861931714935508
				],
				[
					0,
					11.861931714935508
				],
				[
					1.0783574286306248,
					12.940289143566133
				],
				[
					3.235072285891647,
					14.018646572196758
				],
				[
					4.313429714522044,
					15.097004000826928
				],
				[
					6.470144571783067,
					17.253718858088178
				],
				[
					7.548502000413464,
					19.410433715348972
				],
				[
					9.705216857674486,
					20.488791143979597
				],
				[
					9.705216857674486,
					21.567148572610222
				],
				[
					9.705216857674486,
					23.723863429871017
				],
				[
					10.783574286305111,
					24.80222085850164
				],
				[
					9.705216857674486,
					25.88057828713181
				],
				[
					9.705216857674486,
					26.958935715762436
				],
				[
					7.548502000413464,
					28.03729314439306
				],
				[
					6.470144571783067,
					28.03729314439306
				],
				[
					5.391787143152442,
					29.11565057302323
				],
				[
					4.313429714522044,
					29.11565057302323
				],
				[
					0,
					29.11565057302323
				],
				[
					-1.0783574286303974,
					29.11565057302323
				],
				[
					-5.391787143152442,
					29.11565057302323
				],
				[
					-9.705216857674486,
					29.11565057302323
				],
				[
					-11.861931714935281,
					29.11565057302323
				],
				[
					-12.940289143565906,
					28.03729314439306
				],
				[
					-12.940289143565906,
					28.03729314439306
				]
			],
			"pressures": [
				0.1435546875,
				0.150390625,
				0.2001953125,
				0.2587890625,
				0.328125,
				0.42578125,
				0.5546875,
				0.6201171875,
				0.623046875,
				0.6240234375,
				0.625,
				0.625,
				0.6259765625,
				0.6259765625,
				0.6259765625,
				0.626953125,
				0.626953125,
				0.6279296875,
				0.62890625,
				0.6279296875,
				0.6279296875,
				0.6259765625,
				0.6259765625,
				0.6279296875,
				0.62890625,
				0.62890625,
				0.6279296875,
				0.625,
				0.6123046875,
				0.611328125,
				0.6123046875,
				0.6123046875,
				0.6123046875,
				0.611328125,
				0.611328125,
				0.6103515625,
				0.6103515625,
				0.611328125,
				0.6142578125,
				0.6171875,
				0.6279296875,
				0.646484375,
				0.6728515625,
				0.6884765625,
				0.7216796875,
				0.73828125,
				0.75390625,
				0.78125,
				0.80078125,
				0.8076171875,
				0.814453125,
				0.8193359375,
				0.8212890625,
				0.818359375,
				0.7998046875,
				0.7529296875,
				0.7119140625,
				0.6552734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-12.940289143565906,
				28.03729314439306
			]
		},
		{
			"id": "XPyCS9F1eTLyUvxHRjxf3",
			"type": "freedraw",
			"x": 1849.4401186663854,
			"y": 2890.451922216126,
			"width": 72.24994771824322,
			"height": 57.15294371741629,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2067881543,
			"version": 27,
			"versionNonce": 1850685161,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					0
				],
				[
					0,
					0
				],
				[
					0,
					-1.0783574286306248
				],
				[
					1.0783574286303974,
					-3.2350722858914196
				],
				[
					2.156714857261022,
					-4.313429714522044
				],
				[
					5.391787143152442,
					-7.548502000413464
				],
				[
					10.783574286304884,
					-12.940289143565678
				],
				[
					18.332076286718348,
					-19.410433715348972
				],
				[
					22.645506001240392,
					-23.723863429871017
				],
				[
					32.35072285891488,
					-31.27236543028448
				],
				[
					43.13429714521976,
					-38.82086743069749
				],
				[
					54.99622886015504,
					-47.44772685974158
				],
				[
					60.38801600330771,
					-50.682799145633
				],
				[
					71.1715902896126,
					-57.15294371741629
				],
				[
					71.1715902896126,
					-57.15294371741629
				]
			],
			"pressures": [
				0.4365234375,
				0.4365234375,
				0.470703125,
				0.4853515625,
				0.51171875,
				0.521484375,
				0.5478515625,
				0.583984375,
				0.609375,
				0.6171875,
				0.626953125,
				0.6337890625,
				0.62890625,
				0.6162109375,
				0.5595703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				71.1715902896126,
				-57.15294371741629
			]
		},
		{
			"id": "cmIUPsY9ejTK1KjEs_4lq",
			"type": "freedraw",
			"x": 1915.2199218128455,
			"y": 2854.86612707132,
			"width": 23.72386342987079,
			"height": 46.369369431110954,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1648940201,
			"version": 56,
			"versionNonce": 1251133479,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.07835742863017
				],
				[
					-1.0783574286306248,
					2.156714857260795
				],
				[
					-2.156714857261022,
					3.2350722858914196
				],
				[
					-3.235072285891647,
					4.31342971452159
				],
				[
					-4.313429714522044,
					5.391787143152214
				],
				[
					-5.391787143152442,
					7.548502000413464
				],
				[
					-6.470144571783067,
					9.705216857674259
				],
				[
					-7.548502000413464,
					10.783574286304884
				],
				[
					-7.548502000413464,
					12.940289143565678
				],
				[
					-7.548502000413464,
					15.097004000826928
				],
				[
					-6.470144571783067,
					16.175361429457098
				],
				[
					-5.391787143152442,
					17.253718858087723
				],
				[
					-2.156714857261022,
					18.332076286718348
				],
				[
					1.0783574286303974,
					19.410433715348518
				],
				[
					4.313429714521817,
					20.488791143979142
				],
				[
					6.470144571782839,
					21.567148572609767
				],
				[
					9.705216857674486,
					22.645506001240392
				],
				[
					12.940289143565906,
					23.723863429870562
				],
				[
					14.018646572196303,
					24.802220858501187
				],
				[
					16.175361429457325,
					26.95893571576198
				],
				[
					16.175361429457325,
					30.194008001653856
				],
				[
					16.175361429457325,
					33.429080287545275
				],
				[
					15.097004000826928,
					34.507437716175446
				],
				[
					14.018646572196303,
					38.82086743069749
				],
				[
					10.783574286304884,
					42.05593971658891
				],
				[
					8.626859429043861,
					44.21265457385016
				],
				[
					6.470144571782839,
					45.291012002480784
				],
				[
					4.313429714521817,
					46.369369431110954
				],
				[
					2.156714857261022,
					46.369369431110954
				],
				[
					0,
					46.369369431110954
				],
				[
					0,
					45.291012002480784
				],
				[
					-1.0783574286306248,
					43.134297145219534
				],
				[
					-1.0783574286306248,
					40.97758228795874
				],
				[
					-1.0783574286306248,
					37.74251000206732
				],
				[
					0,
					36.664152573436695
				],
				[
					1.0783574286303974,
					33.429080287545275
				],
				[
					3.2350722858914196,
					30.194008001653856
				],
				[
					4.313429714521817,
					28.037293144392606
				],
				[
					6.470144571782839,
					24.802220858501187
				],
				[
					7.548502000413464,
					22.645506001240392
				],
				[
					9.705216857674486,
					18.332076286718348
				],
				[
					11.861931714935281,
					15.097004000826928
				],
				[
					15.097004000826928,
					11.861931714935054
				],
				[
					15.097004000826928,
					11.861931714935054
				]
			],
			"pressures": [
				0.3154296875,
				0.3154296875,
				0.31640625,
				0.31640625,
				0.3251953125,
				0.3486328125,
				0.3818359375,
				0.4189453125,
				0.439453125,
				0.4755859375,
				0.5009765625,
				0.5126953125,
				0.5146484375,
				0.517578125,
				0.5185546875,
				0.5185546875,
				0.51953125,
				0.5224609375,
				0.5283203125,
				0.53125,
				0.5380859375,
				0.544921875,
				0.5498046875,
				0.55078125,
				0.552734375,
				0.5546875,
				0.5576171875,
				0.5595703125,
				0.564453125,
				0.5703125,
				0.5771484375,
				0.580078125,
				0.5869140625,
				0.5927734375,
				0.599609375,
				0.6025390625,
				0.607421875,
				0.611328125,
				0.611328125,
				0.611328125,
				0.609375,
				0.59375,
				0.55078125,
				0.47265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15.097004000826928,
				11.861931714935054
			]
		},
		{
			"id": "fmxQDSImDdgf9xIABK5Mm",
			"type": "freedraw",
			"x": 3058.278796161172,
			"y": 458.75592065436024,
			"width": 69.01487543235135,
			"height": 57.152943717416235,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2105027273,
			"version": 44,
			"versionNonce": 1929015753,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.078357428630511
				],
				[
					1.07835742863017,
					-1.078357428630511
				],
				[
					2.156714857260795,
					-1.078357428630511
				],
				[
					3.2350722858914196,
					-1.078357428630511
				],
				[
					3.2350722858914196,
					0
				],
				[
					4.31342971452159,
					0
				],
				[
					5.391787143152214,
					1.078357428630511
				],
				[
					6.470144571782839,
					2.156714857261022
				],
				[
					6.470144571782839,
					3.2350722858914764
				],
				[
					7.548502000413464,
					5.391787143152499
				],
				[
					8.626859429043634,
					6.470144571782953
				],
				[
					8.626859429043634,
					7.548502000413464
				],
				[
					9.705216857674259,
					10.78357428630494
				],
				[
					9.705216857674259,
					12.940289143565963
				],
				[
					10.783574286304884,
					16.17536142945744
				],
				[
					10.783574286304884,
					17.253718858087893
				],
				[
					11.861931714935054,
					19.410433715348915
				],
				[
					11.861931714935054,
					20.488791143979427
				],
				[
					12.940289143565678,
					22.645506001240392
				],
				[
					14.018646572196303,
					23.723863429870903
				],
				[
					15.097004000826928,
					23.723863429870903
				],
				[
					16.175361429457098,
					23.723863429870903
				],
				[
					19.410433715348518,
					21.56714857260988
				],
				[
					20.488791143979142,
					19.410433715348915
				],
				[
					23.723863429870562,
					17.253718858087893
				],
				[
					30.194008001653856,
					10.78357428630494
				],
				[
					38.82086743069749,
					1.078357428630511
				],
				[
					43.134297145219534,
					-4.3134297145219875
				],
				[
					52.83951400289425,
					-16.175361429457382
				],
				[
					63.62308828919913,
					-28.037293144392834
				],
				[
					69.01487543235135,
					-33.42908028754533
				],
				[
					69.01487543235135,
					-33.42908028754533
				]
			],
			"pressures": [
				0.095703125,
				0.1103515625,
				0.2568359375,
				0.3740234375,
				0.453125,
				0.525390625,
				0.556640625,
				0.609375,
				0.6494140625,
				0.6796875,
				0.70703125,
				0.7177734375,
				0.72265625,
				0.728515625,
				0.7333984375,
				0.736328125,
				0.7373046875,
				0.7373046875,
				0.73828125,
				0.7421875,
				0.75,
				0.755859375,
				0.76171875,
				0.77734375,
				0.78515625,
				0.7919921875,
				0.80078125,
				0.7939453125,
				0.7802734375,
				0.732421875,
				0.646484375,
				0.5849609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				69.01487543235135,
				-33.42908028754533
			]
		},
		{
			"id": "j7zXZEva8FIXSD_3y-Rri",
			"type": "freedraw",
			"x": 3285.812213602206,
			"y": 406.9947640800965,
			"width": 130.48124886428968,
			"height": 92.73873886222253,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2000484265,
			"version": 40,
			"versionNonce": 628435783,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					0
				],
				[
					1.0783574286306248,
					1.078357428630511
				],
				[
					2.156714857260795,
					2.156714857261022
				],
				[
					2.156714857260795,
					3.2350722858914764
				],
				[
					3.2350722858914196,
					4.3134297145219875
				],
				[
					3.2350722858914196,
					5.391787143152499
				],
				[
					4.313429714522044,
					6.470144571782953
				],
				[
					5.391787143152669,
					7.548502000413464
				],
				[
					6.470144571783294,
					7.548502000413464
				],
				[
					7.548502000413464,
					7.548502000413464
				],
				[
					8.626859429044089,
					6.470144571782953
				],
				[
					10.783574286304884,
					5.391787143152499
				],
				[
					11.861931714935508,
					4.3134297145219875
				],
				[
					16.175361429457553,
					1.078357428630511
				],
				[
					21.567148572610222,
					-4.3134297145219875
				],
				[
					28.03729314439306,
					-10.78357428630494
				],
				[
					32.35072285891465,
					-14.018646572196417
				],
				[
					42.055939716589364,
					-22.645506001240392
				],
				[
					52.83951400289425,
					-32.35072285891482
				],
				[
					64.70144571782976,
					-42.05593971658925
				],
				[
					71.1715902896126,
					-46.36936943111124
				],
				[
					83.0335220045481,
					-56.074586288785724
				],
				[
					94.89545371948361,
					-63.62308828919919
				],
				[
					100.28724086263583,
					-67.93651800372112
				],
				[
					111.07081514894116,
					-74.40666257550413
				],
				[
					120.77603200661542,
					-79.79844971865657
				],
				[
					130.48124886428968,
					-85.19023686180907
				],
				[
					130.48124886428968,
					-85.19023686180907
				]
			],
			"pressures": [
				0.2978515625,
				0.2890625,
				0.2939453125,
				0.330078125,
				0.3857421875,
				0.4287109375,
				0.4716796875,
				0.5087890625,
				0.552734375,
				0.6083984375,
				0.650390625,
				0.6689453125,
				0.685546875,
				0.69140625,
				0.701171875,
				0.70703125,
				0.7109375,
				0.7119140625,
				0.712890625,
				0.712890625,
				0.7119140625,
				0.708984375,
				0.6982421875,
				0.6748046875,
				0.6572265625,
				0.6064453125,
				0.53125,
				0.4345703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				130.48124886428968,
				-85.19023686180907
			]
		},
		{
			"id": "djvBA2iQuovJdty7VZa7F",
			"type": "freedraw",
			"x": 3875.6737270630874,
			"y": 344.4500332195278,
			"width": 21.567148572609767,
			"height": 66.85816057509061,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1844823753,
			"version": 36,
			"versionNonce": 2017153193,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.078357428630511
				],
				[
					1.0783574286306248,
					-2.156714857261022
				],
				[
					1.0783574286306248,
					-3.2350722858914764
				],
				[
					0,
					-3.2350722858914764
				],
				[
					-1.0783574286306248,
					-2.156714857261022
				],
				[
					-2.156714857260795,
					0
				],
				[
					-4.31342971452159,
					2.1567148572609653
				],
				[
					-5.391787143152214,
					4.3134297145219875
				],
				[
					-7.548502000413464,
					8.626859429043918
				],
				[
					-9.705216857674259,
					15.097004000826928
				],
				[
					-11.861931714935054,
					21.56714857260988
				],
				[
					-11.861931714935054,
					24.802220858501357
				],
				[
					-12.940289143565678,
					32.35072285891482
				],
				[
					-12.940289143565678,
					39.899224859328285
				],
				[
					-11.861931714935054,
					47.44772685974175
				],
				[
					-11.861931714935054,
					50.682799145633226
				],
				[
					-9.705216857674259,
					54.99622886015521
				],
				[
					-7.548502000413464,
					59.309658574677144
				],
				[
					-4.31342971452159,
					62.54473086056868
				],
				[
					-2.156714857260795,
					62.54473086056868
				],
				[
					1.0783574286306248,
					63.62308828919913
				],
				[
					5.391787143152669,
					63.62308828919913
				],
				[
					8.626859429044089,
					63.62308828919913
				],
				[
					8.626859429044089,
					63.62308828919913
				]
			],
			"pressures": [
				0.15625,
				0.166015625,
				0.2138671875,
				0.314453125,
				0.3916015625,
				0.4111328125,
				0.427734375,
				0.4365234375,
				0.44140625,
				0.4501953125,
				0.462890625,
				0.4775390625,
				0.4853515625,
				0.4990234375,
				0.5126953125,
				0.5234375,
				0.52734375,
				0.53125,
				0.5322265625,
				0.52734375,
				0.51953125,
				0.4912109375,
				0.4365234375,
				0.3984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				8.626859429044089,
				63.62308828919913
			]
		},
		{
			"id": "iFD9XC57McBfiCgcG-CqR",
			"type": "freedraw",
			"x": 3925.2781687800903,
			"y": 377.87911350707316,
			"width": 49.60444171700283,
			"height": 32.35072285891482,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 449376297,
			"version": 89,
			"versionNonce": 945695335,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.07835742863017,
					0
				],
				[
					-1.07835742863017,
					-1.078357428630511
				],
				[
					-2.156714857260795,
					-1.078357428630511
				],
				[
					-2.156714857260795,
					-2.156714857261022
				],
				[
					-3.2350722858914196,
					-2.156714857261022
				],
				[
					-4.313429714522044,
					-1.078357428630511
				],
				[
					-5.391787143152669,
					-1.078357428630511
				],
				[
					-6.470144571783294,
					0
				],
				[
					-7.548502000413464,
					2.1567148572609653
				],
				[
					-7.548502000413464,
					3.2350722858914764
				],
				[
					-8.626859429043634,
					5.391787143152442
				],
				[
					-9.705216857674259,
					8.626859429043918
				],
				[
					-10.783574286304884,
					11.861931714935395
				],
				[
					-10.783574286304884,
					14.018646572196417
				],
				[
					-11.861931714935508,
					17.253718858087893
				],
				[
					-11.861931714935508,
					20.48879114397937
				],
				[
					-10.783574286304884,
					23.723863429870846
				],
				[
					-10.783574286304884,
					24.802220858501357
				],
				[
					-9.705216857674259,
					26.958935715762323
				],
				[
					-7.548502000413464,
					28.037293144392834
				],
				[
					-6.470144571783294,
					29.115650573023345
				],
				[
					-5.391787143152669,
					29.115650573023345
				],
				[
					-3.2350722858914196,
					29.115650573023345
				],
				[
					-1.07835742863017,
					28.037293144392834
				],
				[
					1.07835742863017,
					25.88057828713181
				],
				[
					1.07835742863017,
					24.802220858501357
				],
				[
					3.2350722858914196,
					22.645506001240335
				],
				[
					4.313429714522044,
					20.48879114397937
				],
				[
					4.313429714522044,
					19.41043371534886
				],
				[
					4.313429714522044,
					17.253718858087893
				],
				[
					5.391787143152669,
					16.175361429457382
				],
				[
					4.313429714522044,
					14.018646572196417
				],
				[
					4.313429714522044,
					12.940289143565906
				],
				[
					4.313429714522044,
					11.861931714935395
				],
				[
					4.313429714522044,
					9.70521685767443
				],
				[
					4.313429714522044,
					8.626859429043918
				],
				[
					4.313429714522044,
					7.548502000413407
				],
				[
					4.313429714522044,
					6.470144571782953
				],
				[
					5.391787143152669,
					5.391787143152442
				],
				[
					6.470144571783294,
					5.391787143152442
				],
				[
					7.548502000413464,
					4.313429714521931
				],
				[
					7.548502000413464,
					5.391787143152442
				],
				[
					8.626859429043634,
					5.391787143152442
				],
				[
					8.626859429043634,
					6.470144571782953
				],
				[
					9.705216857674259,
					7.548502000413407
				],
				[
					10.783574286304884,
					8.626859429043918
				],
				[
					10.783574286304884,
					10.78357428630494
				],
				[
					11.861931714935508,
					12.940289143565906
				],
				[
					11.861931714935508,
					15.097004000826871
				],
				[
					12.940289143566133,
					16.175361429457382
				],
				[
					12.940289143566133,
					18.332076286718348
				],
				[
					12.940289143566133,
					20.48879114397937
				],
				[
					12.940289143566133,
					21.56714857260988
				],
				[
					12.940289143566133,
					22.645506001240335
				],
				[
					14.018646572196758,
					23.723863429870846
				],
				[
					15.097004000826928,
					22.645506001240335
				],
				[
					15.097004000826928,
					21.56714857260988
				],
				[
					16.175361429457098,
					19.41043371534886
				],
				[
					17.253718858087723,
					18.332076286718348
				],
				[
					18.332076286718348,
					15.097004000826871
				],
				[
					19.410433715348972,
					11.861931714935395
				],
				[
					21.567148572610222,
					8.626859429043918
				],
				[
					21.567148572610222,
					7.548502000413407
				],
				[
					23.723863429870562,
					4.313429714521931
				],
				[
					24.802220858501187,
					2.1567148572609653
				],
				[
					25.88057828713181,
					0
				],
				[
					26.958935715762436,
					-1.078357428630511
				],
				[
					28.03729314439306,
					-2.156714857261022
				],
				[
					30.194008001653856,
					-3.2350722858914764
				],
				[
					31.272365430284026,
					-3.2350722858914764
				],
				[
					32.35072285891465,
					-3.2350722858914764
				],
				[
					33.429080287545275,
					-3.2350722858914764
				],
				[
					34.5074377161759,
					-2.156714857261022
				],
				[
					35.585795144806525,
					-1.078357428630511
				],
				[
					36.66415257343715,
					-1.078357428630511
				],
				[
					37.74251000206732,
					0
				],
				[
					37.74251000206732,
					0
				]
			],
			"pressures": [
				0.1181640625,
				0.17578125,
				0.1884765625,
				0.2705078125,
				0.2958984375,
				0.3251953125,
				0.34765625,
				0.3603515625,
				0.373046875,
				0.3876953125,
				0.396484375,
				0.4140625,
				0.4296875,
				0.4384765625,
				0.44140625,
				0.4462890625,
				0.4482421875,
				0.4462890625,
				0.4453125,
				0.4423828125,
				0.4404296875,
				0.4384765625,
				0.435546875,
				0.43359375,
				0.43359375,
				0.4345703125,
				0.435546875,
				0.435546875,
				0.43359375,
				0.4296875,
				0.416015625,
				0.396484375,
				0.3740234375,
				0.3642578125,
				0.3544921875,
				0.333984375,
				0.3291015625,
				0.328125,
				0.326171875,
				0.326171875,
				0.3251953125,
				0.326171875,
				0.3271484375,
				0.3369140625,
				0.3544921875,
				0.3759765625,
				0.388671875,
				0.416015625,
				0.443359375,
				0.466796875,
				0.4765625,
				0.494140625,
				0.5068359375,
				0.51171875,
				0.5166015625,
				0.5166015625,
				0.5126953125,
				0.509765625,
				0.5087890625,
				0.5078125,
				0.5048828125,
				0.5029296875,
				0.501953125,
				0.5029296875,
				0.501953125,
				0.5029296875,
				0.50390625,
				0.505859375,
				0.5107421875,
				0.517578125,
				0.5263671875,
				0.53515625,
				0.54296875,
				0.5498046875,
				0.5439453125,
				0.51953125,
				0.470703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				37.74251000206732,
				0
			]
		},
		{
			"id": "1o4hiW8CZOygtv06XPzbV",
			"type": "freedraw",
			"x": 4014.781835356421,
			"y": 357.39032236309373,
			"width": 29.11565057302323,
			"height": 53.9178714315247,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1845952711,
			"version": 78,
			"versionNonce": 599610249,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.078357428630511
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					3.2350722858914764
				],
				[
					0,
					5.391787143152499
				],
				[
					-1.07835742863017,
					6.47014457178301
				],
				[
					-1.07835742863017,
					9.705216857674486
				],
				[
					-1.07835742863017,
					14.018646572196417
				],
				[
					-1.07835742863017,
					16.17536142945744
				],
				[
					-1.07835742863017,
					21.56714857260988
				],
				[
					0,
					26.95893571576238
				],
				[
					0,
					31.272365430284367
				],
				[
					0,
					34.50743771617584
				],
				[
					0,
					38.820867430697774
				],
				[
					0,
					42.05593971658931
				],
				[
					0,
					45.291012002480784
				],
				[
					0,
					46.36936943111124
				],
				[
					0,
					47.44772685974175
				],
				[
					1.0783574286306248,
					47.44772685974175
				],
				[
					1.0783574286306248,
					46.36936943111124
				],
				[
					1.0783574286306248,
					45.291012002480784
				],
				[
					1.0783574286306248,
					43.13429714521976
				],
				[
					1.0783574286306248,
					39.899224859328285
				],
				[
					1.0783574286306248,
					37.74251000206732
				],
				[
					1.0783574286306248,
					33.42908028754533
				],
				[
					2.156714857260795,
					28.037293144392834
				],
				[
					3.2350722858914196,
					22.645506001240392
				],
				[
					4.313429714522044,
					19.410433715348915
				],
				[
					5.391787143152669,
					14.018646572196417
				],
				[
					7.548502000413464,
					8.626859429043975
				],
				[
					10.783574286304884,
					3.2350722858914764
				],
				[
					11.861931714935508,
					1.078357428630511
				],
				[
					15.097004000826928,
					-2.1567148572609653
				],
				[
					18.332076286718348,
					-4.3134297145219875
				],
				[
					19.410433715348972,
					-5.391787143152442
				],
				[
					21.567148572610222,
					-6.470144571782953
				],
				[
					23.723863429871017,
					-6.470144571782953
				],
				[
					24.802220858501187,
					-6.470144571782953
				],
				[
					25.88057828713181,
					-5.391787143152442
				],
				[
					25.88057828713181,
					-4.3134297145219875
				],
				[
					25.88057828713181,
					-3.2350722858914764
				],
				[
					25.88057828713181,
					-1.0783574286304543
				],
				[
					24.802220858501187,
					2.156714857261022
				],
				[
					22.645506001240392,
					4.3134297145219875
				],
				[
					21.567148572610222,
					7.548502000413464
				],
				[
					19.410433715348972,
					8.626859429043975
				],
				[
					17.253718858087723,
					11.861931714935452
				],
				[
					14.018646572196758,
					15.097004000826928
				],
				[
					12.940289143566133,
					16.17536142945744
				],
				[
					10.783574286304884,
					18.332076286718404
				],
				[
					8.626859429044089,
					20.488791143979427
				],
				[
					7.548502000413464,
					21.56714857260988
				],
				[
					6.470144571783294,
					22.645506001240392
				],
				[
					6.470144571783294,
					23.723863429870903
				],
				[
					6.470144571783294,
					25.88057828713187
				],
				[
					7.548502000413464,
					26.95893571576238
				],
				[
					8.626859429044089,
					28.037293144392834
				],
				[
					10.783574286304884,
					29.115650573023345
				],
				[
					12.940289143566133,
					30.194008001653856
				],
				[
					15.097004000826928,
					31.272365430284367
				],
				[
					17.253718858087723,
					33.42908028754533
				],
				[
					20.488791143979597,
					34.50743771617584
				],
				[
					22.645506001240392,
					35.5857951448063
				],
				[
					24.802220858501187,
					36.66415257343681
				],
				[
					26.958935715762436,
					37.74251000206732
				],
				[
					28.03729314439306,
					37.74251000206732
				],
				[
					28.03729314439306,
					37.74251000206732
				]
			],
			"pressures": [
				0.146484375,
				0.1484375,
				0.169921875,
				0.1865234375,
				0.2216796875,
				0.2392578125,
				0.27734375,
				0.3173828125,
				0.3369140625,
				0.3740234375,
				0.404296875,
				0.4267578125,
				0.4345703125,
				0.4443359375,
				0.447265625,
				0.4462890625,
				0.4443359375,
				0.443359375,
				0.44140625,
				0.4384765625,
				0.4375,
				0.435546875,
				0.4326171875,
				0.4296875,
				0.423828125,
				0.4150390625,
				0.404296875,
				0.3984375,
				0.388671875,
				0.3798828125,
				0.373046875,
				0.37109375,
				0.3681640625,
				0.3671875,
				0.3662109375,
				0.369140625,
				0.373046875,
				0.3740234375,
				0.376953125,
				0.3818359375,
				0.3837890625,
				0.3828125,
				0.3818359375,
				0.3837890625,
				0.3837890625,
				0.3837890625,
				0.3857421875,
				0.3916015625,
				0.392578125,
				0.39453125,
				0.396484375,
				0.3974609375,
				0.3994140625,
				0.400390625,
				0.41015625,
				0.423828125,
				0.43359375,
				0.4580078125,
				0.4833984375,
				0.49609375,
				0.5205078125,
				0.5380859375,
				0.5458984375,
				0.54296875,
				0.5146484375,
				0.486328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				28.03729314439306,
				37.74251000206732
			]
		},
		{
			"id": "zRj6lPdLLy2QBIklaUyWV",
			"type": "freedraw",
			"x": 4060.072847358902,
			"y": 358.46867979172424,
			"width": 38.820867430697035,
			"height": 62.54473086056868,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1463541511,
			"version": 77,
			"versionNonce": 1721735,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.078357428630511
				],
				[
					0,
					2.1567148572609653
				],
				[
					0,
					3.2350722858914764
				],
				[
					0,
					4.3134297145219875
				],
				[
					0,
					5.391787143152499
				],
				[
					0,
					8.626859429043975
				],
				[
					0,
					9.70521685767443
				],
				[
					0,
					14.018646572196417
				],
				[
					1.0783574286306248,
					18.332076286718404
				],
				[
					1.0783574286306248,
					23.723863429870846
				],
				[
					1.0783574286306248,
					26.958935715762323
				],
				[
					1.0783574286306248,
					32.35072285891482
				],
				[
					1.0783574286306248,
					37.74251000206726
				],
				[
					1.0783574286306248,
					39.899224859328285
				],
				[
					1.0783574286306248,
					45.29101200248073
				],
				[
					1.0783574286306248,
					48.52608428837226
				],
				[
					1.0783574286306248,
					51.76115657426374
				],
				[
					1.0783574286306248,
					52.83951400289419
				],
				[
					0,
					53.9178714315247
				],
				[
					0,
					52.83951400289419
				],
				[
					0,
					50.682799145633226
				],
				[
					-1.07835742863017,
					46.36936943111124
				],
				[
					0,
					40.977582287958796
				],
				[
					0,
					38.820867430697774
				],
				[
					0,
					32.35072285891482
				],
				[
					1.0783574286306248,
					24.802220858501357
				],
				[
					2.156714857260795,
					21.56714857260988
				],
				[
					4.313429714522044,
					14.018646572196417
				],
				[
					6.470144571783294,
					8.626859429043975
				],
				[
					7.548502000413464,
					5.391787143152499
				],
				[
					10.783574286304884,
					1.078357428630511
				],
				[
					14.018646572196758,
					-3.2350722858914764
				],
				[
					15.097004000826928,
					-4.3134297145219875
				],
				[
					18.332076286718348,
					-6.470144571782953
				],
				[
					21.567148572610222,
					-7.548502000413464
				],
				[
					23.723863429871017,
					-8.626859429043975
				],
				[
					24.802220858501187,
					-8.626859429043975
				],
				[
					26.958935715762436,
					-8.626859429043975
				],
				[
					28.03729314439306,
					-7.548502000413464
				],
				[
					29.115650573023686,
					-7.548502000413464
				],
				[
					29.115650573023686,
					-6.470144571782953
				],
				[
					28.03729314439306,
					-4.3134297145219875
				],
				[
					26.958935715762436,
					-2.1567148572609653
				],
				[
					25.88057828713181,
					1.078357428630511
				],
				[
					23.723863429871017,
					2.1567148572609653
				],
				[
					21.567148572610222,
					6.470144571782953
				],
				[
					18.332076286718348,
					10.78357428630494
				],
				[
					17.253718858087723,
					11.861931714935452
				],
				[
					14.018646572196758,
					16.17536142945744
				],
				[
					11.861931714935508,
					19.410433715348915
				],
				[
					9.705216857674259,
					22.645506001240392
				],
				[
					9.705216857674259,
					23.723863429870846
				],
				[
					9.705216857674259,
					25.88057828713187
				],
				[
					9.705216857674259,
					28.037293144392834
				],
				[
					10.783574286304884,
					31.27236543028431
				],
				[
					11.861931714935508,
					32.35072285891482
				],
				[
					15.097004000826928,
					33.42908028754533
				],
				[
					18.332076286718348,
					35.5857951448063
				],
				[
					21.567148572610222,
					36.66415257343681
				],
				[
					23.723863429871017,
					37.74251000206726
				],
				[
					28.03729314439306,
					37.74251000206726
				],
				[
					32.35072285891465,
					38.820867430697774
				],
				[
					34.5074377161759,
					38.820867430697774
				],
				[
					37.742510002066865,
					38.820867430697774
				],
				[
					37.742510002066865,
					38.820867430697774
				]
			],
			"pressures": [
				0.322265625,
				0.3251953125,
				0.3330078125,
				0.3505859375,
				0.373046875,
				0.3837890625,
				0.41796875,
				0.435546875,
				0.4716796875,
				0.50390625,
				0.5322265625,
				0.5458984375,
				0.5693359375,
				0.5869140625,
				0.59375,
				0.6025390625,
				0.607421875,
				0.61328125,
				0.615234375,
				0.62109375,
				0.6298828125,
				0.6298828125,
				0.6298828125,
				0.62890625,
				0.62890625,
				0.6279296875,
				0.6279296875,
				0.6279296875,
				0.626953125,
				0.6259765625,
				0.625,
				0.625,
				0.625,
				0.625,
				0.625,
				0.625,
				0.6259765625,
				0.62890625,
				0.6328125,
				0.638671875,
				0.6416015625,
				0.6484375,
				0.65234375,
				0.654296875,
				0.6552734375,
				0.6552734375,
				0.65625,
				0.6591796875,
				0.6611328125,
				0.666015625,
				0.671875,
				0.6796875,
				0.6826171875,
				0.6904296875,
				0.697265625,
				0.703125,
				0.7060546875,
				0.7109375,
				0.712890625,
				0.71484375,
				0.7158203125,
				0.7109375,
				0.6884765625,
				0.666015625,
				0.58984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				37.742510002066865,
				38.820867430697774
			]
		},
		{
			"id": "ALsnsbkd-rj0t4NYVxrGa",
			"type": "freedraw",
			"x": 4122.6175782194705,
			"y": 327.1963143614399,
			"width": 26.95893571576289,
			"height": 101.36559829126651,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1698648009,
			"version": 36,
			"versionNonce": 1505491561,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					0
				],
				[
					1.0783574286306248,
					1.078357428630511
				],
				[
					2.1567148572612496,
					1.078357428630511
				],
				[
					4.313429714522499,
					2.156714857261022
				],
				[
					6.470144571782839,
					4.3134297145219875
				],
				[
					7.548502000413464,
					5.391787143152499
				],
				[
					10.783574286305338,
					8.626859429043975
				],
				[
					11.861931714935963,
					10.783574286304997
				],
				[
					16.175361429457553,
					15.097004000826928
				],
				[
					17.253718858088178,
					18.332076286718404
				],
				[
					19.410433715349427,
					20.488791143979427
				],
				[
					22.645506001240392,
					26.95893571576238
				],
				[
					23.723863429871017,
					31.272365430284367
				],
				[
					24.80222085850164,
					34.50743771617584
				],
				[
					26.95893571576289,
					44.21265457385027
				],
				[
					26.95893571576289,
					48.52608428837226
				],
				[
					26.95893571576289,
					58.23130114604669
				],
				[
					26.95893571576289,
					63.62308828919919
				],
				[
					23.723863429871017,
					74.40666257550413
				],
				[
					19.410433715349427,
					84.11187943317856
				],
				[
					17.253718858088178,
					88.42530914770055
				],
				[
					11.861931714935963,
					97.05216857674452
				],
				[
					8.626859429044089,
					101.36559829126651
				],
				[
					8.626859429044089,
					101.36559829126651
				]
			],
			"pressures": [
				0.3720703125,
				0.3994140625,
				0.4306640625,
				0.4521484375,
				0.521484375,
				0.5693359375,
				0.591796875,
				0.63671875,
				0.66015625,
				0.7041015625,
				0.7236328125,
				0.7421875,
				0.7744140625,
				0.7890625,
				0.8017578125,
				0.8212890625,
				0.8271484375,
				0.8310546875,
				0.828125,
				0.810546875,
				0.76953125,
				0.7392578125,
				0.6474609375,
				0.583984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				8.626859429044089,
				101.36559829126651
			]
		},
		{
			"id": "OSPvdqVGQ2Zhg4j1E7jo-",
			"type": "freedraw",
			"x": 3953.3154619244833,
			"y": 577.3752378037146,
			"width": 0.0001,
			"height": 0.0001,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1422121257,
			"version": 13,
			"versionNonce": 736492711,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0.0001,
					0.0001
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0.0001,
				0.0001
			]
		},
		{
			"id": "_tVhnoMQTkMDF8KARDrZF",
			"type": "freedraw",
			"x": 4268.195831084589,
			"y": 1308.5015744151895,
			"width": 141.26482315059457,
			"height": 67.93651800372118,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 28650439,
			"version": 258,
			"versionNonce": 1332596679,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286297153,
					-1.0783574286303974
				],
				[
					1.0783574286297153,
					-2.156714857261022
				],
				[
					1.0783574286297153,
					-3.2350722858914196
				],
				[
					1.0783574286297153,
					-4.313429714521817
				],
				[
					1.0783574286297153,
					-5.391787143152442
				],
				[
					1.0783574286297153,
					-4.313429714521817
				],
				[
					1.0783574286297153,
					-3.2350722858914196
				],
				[
					1.0783574286297153,
					0
				],
				[
					1.0783574286297153,
					3.2350722858914196
				],
				[
					1.0783574286297153,
					5.391787143152442
				],
				[
					0,
					10.783574286304884
				],
				[
					0,
					16.175361429457325
				],
				[
					1.0783574286297153,
					21.567148572609995
				],
				[
					1.0783574286297153,
					24.802220858501414
				],
				[
					1.0783574286297153,
					30.194008001653856
				],
				[
					1.0783574286297153,
					34.5074377161759
				],
				[
					2.15671485726034,
					36.66415257343692
				],
				[
					2.15671485726034,
					39.89922485932834
				],
				[
					2.15671485726034,
					40.97758228795874
				],
				[
					2.15671485726034,
					43.13429714521976
				],
				[
					2.15671485726034,
					42.055939716589364
				],
				[
					2.15671485726034,
					39.89922485932834
				],
				[
					2.15671485726034,
					37.74251000206732
				],
				[
					2.15671485726034,
					32.35072285891488
				],
				[
					1.0783574286297153,
					26.958935715762436
				],
				[
					1.0783574286297153,
					19.410433715348972
				],
				[
					1.0783574286297153,
					16.175361429457325
				],
				[
					1.0783574286297153,
					8.626859429043861
				],
				[
					1.0783574286297153,
					0
				],
				[
					2.15671485726034,
					-6.470144571782839
				],
				[
					3.235072285890965,
					-9.705216857674486
				],
				[
					4.31342971452159,
					-16.175361429457325
				],
				[
					6.47014457178193,
					-20.48879114397937
				],
				[
					7.5485020004125545,
					-22.645506001240392
				],
				[
					9.705216857673804,
					-24.802220858501414
				],
				[
					12.940289143565678,
					-24.802220858501414
				],
				[
					16.175361429456643,
					-24.802220858501414
				],
				[
					17.253718858087268,
					-24.802220858501414
				],
				[
					20.488791143979142,
					-22.645506001240392
				],
				[
					22.645506001239482,
					-21.567148572609767
				],
				[
					24.802220858500732,
					-18.332076286718348
				],
				[
					26.95893571576198,
					-17.25371885808795
				],
				[
					29.11565057302323,
					-14.018646572196303
				],
				[
					29.11565057302323,
					-12.940289143565906
				],
				[
					30.194008001653856,
					-8.626859429043861
				],
				[
					30.194008001653856,
					-7.548502000413464
				],
				[
					29.11565057302323,
					-3.2350722858914196
				],
				[
					26.95893571576198,
					0
				],
				[
					25.880578287131357,
					2.156714857261022
				],
				[
					21.567148572608858,
					4.313429714522044
				],
				[
					16.175361429456643,
					7.548502000413464
				],
				[
					11.861931714935054,
					9.705216857674486
				],
				[
					9.705216857673804,
					10.783574286304884
				],
				[
					5.391787143152214,
					11.861931714935508
				],
				[
					2.15671485726034,
					12.940289143565906
				],
				[
					1.0783574286297153,
					14.01864657219653
				],
				[
					2.15671485726034,
					14.01864657219653
				],
				[
					3.235072285890965,
					14.01864657219653
				],
				[
					7.5485020004125545,
					15.097004000826928
				],
				[
					9.705216857673804,
					15.097004000826928
				],
				[
					14.018646572196303,
					15.097004000826928
				],
				[
					19.410433715348518,
					16.175361429457325
				],
				[
					23.723863429870107,
					16.175361429457325
				],
				[
					25.880578287131357,
					16.175361429457325
				],
				[
					30.194008001653856,
					16.175361429457325
				],
				[
					33.42908028754482,
					16.175361429457325
				],
				[
					34.507437716175446,
					16.175361429457325
				],
				[
					36.664152573435786,
					16.175361429457325
				],
				[
					37.74251000206641,
					16.175361429457325
				],
				[
					36.664152573435786,
					16.175361429457325
				],
				[
					34.507437716175446,
					15.097004000826928
				],
				[
					33.42908028754482,
					15.097004000826928
				],
				[
					31.27236543028357,
					15.097004000826928
				],
				[
					30.194008001653856,
					16.175361429457325
				],
				[
					28.037293144392606,
					16.175361429457325
				],
				[
					26.95893571576198,
					18.332076286718348
				],
				[
					24.802220858500732,
					20.48879114397937
				],
				[
					23.723863429870107,
					21.567148572609995
				],
				[
					23.723863429870107,
					23.72386342987079
				],
				[
					22.645506001239482,
					26.958935715762436
				],
				[
					23.723863429870107,
					30.194008001653856
				],
				[
					23.723863429870107,
					31.272365430284253
				],
				[
					24.802220858500732,
					33.429080287545275
				],
				[
					26.95893571576198,
					35.5857951448063
				],
				[
					28.037293144392606,
					36.66415257343692
				],
				[
					30.194008001653856,
					37.74251000206732
				],
				[
					32.350722858914196,
					37.74251000206732
				],
				[
					34.507437716175446,
					37.74251000206732
				],
				[
					35.58579514480607,
					37.74251000206732
				],
				[
					37.74251000206641,
					36.66415257343692
				],
				[
					39.89922485932766,
					34.5074377161759
				],
				[
					42.05593971658891,
					32.35072285891488
				],
				[
					43.134297145219534,
					31.272365430284253
				],
				[
					44.21265457385016,
					28.037293144392834
				],
				[
					44.21265457385016,
					25.88057828713181
				],
				[
					45.291012002480784,
					22.645506001240392
				],
				[
					45.291012002480784,
					21.567148572609995
				],
				[
					45.291012002480784,
					19.410433715348972
				],
				[
					45.291012002480784,
					17.25371885808795
				],
				[
					45.291012002480784,
					15.097004000826928
				],
				[
					45.291012002480784,
					14.01864657219653
				],
				[
					46.3693694311105,
					15.097004000826928
				],
				[
					46.3693694311105,
					17.25371885808795
				],
				[
					47.447726859741124,
					18.332076286718348
				],
				[
					47.447726859741124,
					19.410433715348972
				],
				[
					48.52608428837175,
					22.645506001240392
				],
				[
					49.60444171700237,
					24.802220858501414
				],
				[
					49.60444171700237,
					25.88057828713181
				],
				[
					50.682799145633,
					28.037293144392834
				],
				[
					51.76115657426271,
					30.194008001653856
				],
				[
					51.76115657426271,
					32.35072285891488
				],
				[
					52.83951400289334,
					33.429080287545275
				],
				[
					52.83951400289334,
					34.5074377161759
				],
				[
					53.91787143152396,
					33.429080287545275
				],
				[
					53.91787143152396,
					32.35072285891488
				],
				[
					54.99622886015459,
					30.194008001653856
				],
				[
					56.07458628878521,
					28.037293144392834
				],
				[
					56.07458628878521,
					24.802220858501414
				],
				[
					57.15294371741584,
					23.72386342987079
				],
				[
					58.23130114604646,
					21.567148572609995
				],
				[
					58.23130114604646,
					19.410433715348972
				],
				[
					59.30965857467709,
					17.25371885808795
				],
				[
					60.38801600330771,
					16.175361429457325
				],
				[
					60.38801600330771,
					15.097004000826928
				],
				[
					61.46637343193743,
					14.01864657219653
				],
				[
					62.54473086056805,
					12.940289143565906
				],
				[
					63.62308828919868,
					12.940289143565906
				],
				[
					63.62308828919868,
					14.01864657219653
				],
				[
					63.62308828919868,
					15.097004000826928
				],
				[
					64.7014457178293,
					15.097004000826928
				],
				[
					64.7014457178293,
					16.175361429457325
				],
				[
					65.77980314645993,
					17.25371885808795
				],
				[
					65.77980314645993,
					18.332076286718348
				],
				[
					66.85816057508964,
					18.332076286718348
				],
				[
					66.85816057508964,
					19.410433715348972
				],
				[
					67.93651800372027,
					19.410433715348972
				],
				[
					69.01487543235089,
					19.410433715348972
				],
				[
					70.09323286098152,
					19.410433715348972
				],
				[
					71.17159028961214,
					19.410433715348972
				],
				[
					72.24994771824277,
					18.332076286718348
				],
				[
					73.32830514687339,
					18.332076286718348
				],
				[
					74.40666257550401,
					17.25371885808795
				],
				[
					75.48502000413464,
					17.25371885808795
				],
				[
					76.56337743276436,
					17.25371885808795
				],
				[
					77.64173486139498,
					16.175361429457325
				],
				[
					78.7200922900256,
					15.097004000826928
				],
				[
					79.79844971865623,
					14.01864657219653
				],
				[
					79.79844971865623,
					12.940289143565906
				],
				[
					80.87680714728685,
					11.861931714935508
				],
				[
					80.87680714728685,
					10.783574286304884
				],
				[
					80.87680714728685,
					9.705216857674486
				],
				[
					79.79844971865623,
					8.626859429043861
				],
				[
					78.7200922900256,
					7.548502000413464
				],
				[
					77.64173486139498,
					7.548502000413464
				],
				[
					76.56337743276436,
					7.548502000413464
				],
				[
					75.48502000413464,
					7.548502000413464
				],
				[
					74.40666257550401,
					8.626859429043861
				],
				[
					73.32830514687339,
					9.705216857674486
				],
				[
					72.24994771824277,
					11.861931714935508
				],
				[
					71.17159028961214,
					14.01864657219653
				],
				[
					71.17159028961214,
					15.097004000826928
				],
				[
					71.17159028961214,
					18.332076286718348
				],
				[
					71.17159028961214,
					21.567148572609995
				],
				[
					72.24994771824277,
					22.645506001240392
				],
				[
					73.32830514687339,
					24.802220858501414
				],
				[
					74.40666257550401,
					26.958935715762436
				],
				[
					76.56337743276436,
					28.037293144392834
				],
				[
					77.64173486139498,
					29.11565057302346
				],
				[
					79.79844971865623,
					30.194008001653856
				],
				[
					83.0335220045472,
					30.194008001653856
				],
				[
					85.19023686180844,
					30.194008001653856
				],
				[
					86.26859429043907,
					29.11565057302346
				],
				[
					89.50366657633094,
					28.037293144392834
				],
				[
					91.66038143359128,
					26.958935715762436
				],
				[
					94.89545371948316,
					24.802220858501414
				],
				[
					95.97381114811378,
					22.645506001240392
				],
				[
					97.0521685767435,
					20.48879114397937
				],
				[
					98.13052600537412,
					18.332076286718348
				],
				[
					99.20888343400475,
					16.175361429457325
				],
				[
					100.28724086263537,
					15.097004000826928
				],
				[
					100.28724086263537,
					14.01864657219653
				],
				[
					100.28724086263537,
					12.940289143565906
				],
				[
					100.28724086263537,
					11.861931714935508
				],
				[
					100.28724086263537,
					12.940289143565906
				],
				[
					100.28724086263537,
					14.01864657219653
				],
				[
					100.28724086263537,
					15.097004000826928
				],
				[
					100.28724086263537,
					17.25371885808795
				],
				[
					100.28724086263537,
					20.48879114397937
				],
				[
					100.28724086263537,
					21.567148572609995
				],
				[
					100.28724086263537,
					24.802220858501414
				],
				[
					100.28724086263537,
					26.958935715762436
				],
				[
					100.28724086263537,
					29.11565057302346
				],
				[
					100.28724086263537,
					30.194008001653856
				],
				[
					101.365598291266,
					31.272365430284253
				],
				[
					101.365598291266,
					32.35072285891488
				],
				[
					102.44395571989662,
					32.35072285891488
				],
				[
					103.52231314852725,
					32.35072285891488
				],
				[
					104.60067057715787,
					31.272365430284253
				],
				[
					105.6790280057885,
					30.194008001653856
				],
				[
					105.6790280057885,
					29.11565057302346
				],
				[
					107.83574286304884,
					28.037293144392834
				],
				[
					108.91410029167946,
					25.88057828713181
				],
				[
					111.07081514894071,
					23.72386342987079
				],
				[
					112.14917257757043,
					22.645506001240392
				],
				[
					113.22753000620105,
					21.567148572609995
				],
				[
					114.30588743483167,
					19.410433715348972
				],
				[
					115.3842448634623,
					18.332076286718348
				],
				[
					115.3842448634623,
					17.25371885808795
				],
				[
					116.46260229209292,
					17.25371885808795
				],
				[
					116.46260229209292,
					18.332076286718348
				],
				[
					117.54095972072355,
					19.410433715348972
				],
				[
					117.54095972072355,
					20.48879114397937
				],
				[
					117.54095972072355,
					21.567148572609995
				],
				[
					117.54095972072355,
					22.645506001240392
				],
				[
					117.54095972072355,
					23.72386342987079
				],
				[
					118.61931714935417,
					25.88057828713181
				],
				[
					118.61931714935417,
					28.037293144392834
				],
				[
					119.6976745779848,
					30.194008001653856
				],
				[
					119.6976745779848,
					31.272365430284253
				],
				[
					121.85438943524514,
					32.35072285891488
				],
				[
					122.93274686387576,
					32.35072285891488
				],
				[
					125.08946172113701,
					32.35072285891488
				],
				[
					125.08946172113701,
					31.272365430284253
				],
				[
					127.24617657839735,
					30.194008001653856
				],
				[
					129.4028914356586,
					28.037293144392834
				],
				[
					131.55960629291985,
					23.72386342987079
				],
				[
					131.55960629291985,
					22.645506001240392
				],
				[
					133.7163211501811,
					18.332076286718348
				],
				[
					134.79467857881173,
					14.01864657219653
				],
				[
					134.79467857881173,
					11.861931714935508
				],
				[
					135.87303600744235,
					7.548502000413464
				],
				[
					135.87303600744235,
					3.2350722858914196
				],
				[
					135.87303600744235,
					0
				],
				[
					135.87303600744235,
					-4.313429714521817
				],
				[
					135.87303600744235,
					-5.391787143152442
				],
				[
					135.87303600744235,
					-4.313429714521817
				],
				[
					136.95139343607207,
					-1.0783574286303974
				],
				[
					136.95139343607207,
					2.156714857261022
				],
				[
					136.95139343607207,
					4.313429714522044
				],
				[
					138.0297508647027,
					7.548502000413464
				],
				[
					138.0297508647027,
					10.783574286304884
				],
				[
					139.10810829333332,
					15.097004000826928
				],
				[
					139.10810829333332,
					19.410433715348972
				],
				[
					140.18646572196394,
					22.645506001240392
				],
				[
					140.18646572196394,
					23.72386342987079
				],
				[
					141.26482315059457,
					24.802220858501414
				],
				[
					141.26482315059457,
					24.802220858501414
				]
			],
			"pressures": [
				0.29296875,
				0.2978515625,
				0.3056640625,
				0.3193359375,
				0.3505859375,
				0.4052734375,
				0.443359375,
				0.4970703125,
				0.5283203125,
				0.556640625,
				0.5693359375,
				0.5888671875,
				0.6025390625,
				0.6123046875,
				0.615234375,
				0.6201171875,
				0.6220703125,
				0.6240234375,
				0.6279296875,
				0.630859375,
				0.6376953125,
				0.6552734375,
				0.6591796875,
				0.66015625,
				0.6611328125,
				0.662109375,
				0.6630859375,
				0.6640625,
				0.6640625,
				0.6640625,
				0.6630859375,
				0.6630859375,
				0.662109375,
				0.6611328125,
				0.662109375,
				0.6669921875,
				0.673828125,
				0.68359375,
				0.6904296875,
				0.7041015625,
				0.7109375,
				0.7236328125,
				0.7314453125,
				0.7470703125,
				0.755859375,
				0.7724609375,
				0.7802734375,
				0.79296875,
				0.8017578125,
				0.8037109375,
				0.8037109375,
				0.79296875,
				0.765625,
				0.7421875,
				0.671875,
				0.578125,
				0.4697265625,
				0.263671875,
				0.2255859375,
				0.166015625,
				0.1435546875,
				0.1123046875,
				0.1005859375,
				0.103515625,
				0.1103515625,
				0.13671875,
				0.1875,
				0.2197265625,
				0.291015625,
				0.4052734375,
				0.509765625,
				0.5966796875,
				0.625,
				0.642578125,
				0.6484375,
				0.65625,
				0.6611328125,
				0.666015625,
				0.66796875,
				0.6728515625,
				0.6767578125,
				0.6796875,
				0.6796875,
				0.6806640625,
				0.677734375,
				0.673828125,
				0.662109375,
				0.642578125,
				0.61328125,
				0.5947265625,
				0.5537109375,
				0.515625,
				0.482421875,
				0.46875,
				0.4501953125,
				0.44140625,
				0.4375,
				0.4375,
				0.4384765625,
				0.439453125,
				0.4443359375,
				0.455078125,
				0.48046875,
				0.517578125,
				0.52734375,
				0.5458984375,
				0.564453125,
				0.580078125,
				0.5869140625,
				0.6005859375,
				0.6103515625,
				0.6171875,
				0.623046875,
				0.6240234375,
				0.626953125,
				0.6259765625,
				0.6171875,
				0.6083984375,
				0.595703125,
				0.587890625,
				0.5703125,
				0.5498046875,
				0.5263671875,
				0.513671875,
				0.486328125,
				0.4609375,
				0.375,
				0.2080078125,
				0.19140625,
				0.14453125,
				0.1396484375,
				0.1376953125,
				0.1591796875,
				0.1806640625,
				0.224609375,
				0.2783203125,
				0.2958984375,
				0.3466796875,
				0.3876953125,
				0.40625,
				0.419921875,
				0.427734375,
				0.43359375,
				0.4345703125,
				0.4365234375,
				0.4375,
				0.4375,
				0.4375,
				0.4375,
				0.4375,
				0.4375,
				0.439453125,
				0.4453125,
				0.4521484375,
				0.458984375,
				0.466796875,
				0.4765625,
				0.48828125,
				0.5009765625,
				0.5146484375,
				0.529296875,
				0.5361328125,
				0.5458984375,
				0.5546875,
				0.5595703125,
				0.568359375,
				0.57421875,
				0.578125,
				0.580078125,
				0.5810546875,
				0.5732421875,
				0.5537109375,
				0.5400390625,
				0.505859375,
				0.46484375,
				0.42578125,
				0.4091796875,
				0.3857421875,
				0.373046875,
				0.369140625,
				0.369140625,
				0.373046875,
				0.380859375,
				0.392578125,
				0.435546875,
				0.4658203125,
				0.4970703125,
				0.525390625,
				0.548828125,
				0.5576171875,
				0.568359375,
				0.572265625,
				0.5751953125,
				0.5751953125,
				0.5712890625,
				0.556640625,
				0.5458984375,
				0.5146484375,
				0.4677734375,
				0.412109375,
				0.384765625,
				0.337890625,
				0.30078125,
				0.27734375,
				0.2705078125,
				0.265625,
				0.265625,
				0.271484375,
				0.30078125,
				0.31640625,
				0.4013671875,
				0.451171875,
				0.5,
				0.5234375,
				0.5625,
				0.578125,
				0.6025390625,
				0.619140625,
				0.6220703125,
				0.619140625,
				0.603515625,
				0.57421875,
				0.52734375,
				0.498046875,
				0.42578125,
				0.34765625,
				0.2734375,
				0.2421875,
				0.1884765625,
				0.1533203125,
				0.1435546875,
				0.1376953125,
				0.14453125,
				0.1640625,
				0.212890625,
				0.2509765625,
				0.3203125,
				0.3662109375,
				0.400390625,
				0.4169921875,
				0.451171875,
				0.4677734375,
				0.4921875,
				0.490234375,
				0.451171875,
				0.4189453125,
				0.3779296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				141.26482315059457,
				24.802220858501414
			]
		},
		{
			"id": "UtsMlfsjioL72a4PdyVJ2",
			"type": "freedraw",
			"x": 4396.520365091617,
			"y": 1324.6769358446468,
			"width": 24.80222085850164,
			"height": 8.626859429043861,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2068980905,
			"version": 27,
			"versionNonce": 49099817,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					-1.0783574286303974
				],
				[
					-2.15671485726034,
					-2.156714857260795
				],
				[
					-3.235072285890965,
					-3.2350722858914196
				],
				[
					-3.235072285890965,
					-4.313429714521817
				],
				[
					-3.235072285890965,
					-5.391787143152442
				],
				[
					-3.235072285890965,
					-6.470144571782839
				],
				[
					-3.235072285890965,
					-7.548502000413464
				],
				[
					-2.15671485726034,
					-7.548502000413464
				],
				[
					1.0783574286306248,
					-8.626859429043861
				],
				[
					2.1567148572612496,
					-8.626859429043861
				],
				[
					6.470144571783749,
					-8.626859429043861
				],
				[
					10.783574286305338,
					-8.626859429043861
				],
				[
					15.097004000826928,
					-8.626859429043861
				],
				[
					17.253718858088178,
					-8.626859429043861
				],
				[
					21.567148572610677,
					-7.548502000413464
				],
				[
					21.567148572610677,
					-7.548502000413464
				]
			],
			"pressures": [
				0.2705078125,
				0.2900390625,
				0.3310546875,
				0.38671875,
				0.4375,
				0.48046875,
				0.5751953125,
				0.6064453125,
				0.6328125,
				0.68359375,
				0.693359375,
				0.7060546875,
				0.7119140625,
				0.7099609375,
				0.701171875,
				0.6513671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				21.567148572610677,
				-7.548502000413464
			]
		},
		{
			"id": "ffoTBcgLHog8FgD3vtYr6",
			"type": "freedraw",
			"x": 4322.113702516113,
			"y": 1379.673164704802,
			"width": 73.32830514687339,
			"height": 81.9551645759177,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1937952393,
			"version": 29,
			"versionNonce": 1422802663,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					0
				],
				[
					-1.0783574286306248,
					1.0783574286306248
				],
				[
					-3.235072285890965,
					2.156714857261022
				],
				[
					-4.31342971452159,
					3.235072285891647
				],
				[
					-6.470144571782839,
					5.391787143152442
				],
				[
					-9.705216857673804,
					7.548502000413464
				],
				[
					-11.861931714935054,
					9.705216857674486
				],
				[
					-15.097004000826928,
					12.940289143565906
				],
				[
					-18.332076286717893,
					16.175361429457553
				],
				[
					-21.567148572609767,
					19.410433715348972
				],
				[
					-29.11565057302323,
					29.11565057302346
				],
				[
					-34.507437716175446,
					34.5074377161759
				],
				[
					-44.21265457385016,
					46.36936943111141
				],
				[
					-54.99622886015459,
					58.23130114604669
				],
				[
					-64.7014457178293,
					71.17159028961282
				],
				[
					-69.01487543235089,
					76.56337743276504
				],
				[
					-73.32830514687339,
					81.9551645759177
				],
				[
					-73.32830514687339,
					81.9551645759177
				]
			],
			"pressures": [
				0.662109375,
				0.6640625,
				0.6669921875,
				0.681640625,
				0.7177734375,
				0.73828125,
				0.7646484375,
				0.7822265625,
				0.798828125,
				0.814453125,
				0.8271484375,
				0.841796875,
				0.8447265625,
				0.837890625,
				0.8125,
				0.759765625,
				0.7197265625,
				0.66796875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-73.32830514687339,
				81.9551645759177
			]
		},
		{
			"id": "ES6aEheO1ggAjuaRt6wng",
			"type": "freedraw",
			"x": 4188.397381365932,
			"y": 1496.1357669968957,
			"width": 40.977582287958285,
			"height": 65.77980314646015,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 545491719,
			"version": 32,
			"versionNonce": 2043762601,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					0
				],
				[
					-2.1567148572612496,
					-1.0783574286306248
				],
				[
					-3.2350722858918743,
					-1.0783574286306248
				],
				[
					-4.31342971452159,
					-2.1567148572612496
				],
				[
					-5.391787143152214,
					-3.235072285891647
				],
				[
					-8.626859429044089,
					-4.313429714522044
				],
				[
					-11.861931714935054,
					-5.391787143152669
				],
				[
					-14.018646572196303,
					-5.391787143152669
				],
				[
					-17.253718858088178,
					-6.470144571783067
				],
				[
					-21.567148572609767,
					-5.391787143152669
				],
				[
					-25.880578287131357,
					-4.313429714522044
				],
				[
					-28.037293144392606,
					-2.1567148572612496
				],
				[
					-32.350722858915105,
					1.0783574286303974
				],
				[
					-33.42908028754573,
					3.2350722858914196
				],
				[
					-36.664152573436695,
					8.626859429043861
				],
				[
					-38.820867430697945,
					15.097004000826928
				],
				[
					-39.89922485932857,
					18.332076286718348
				],
				[
					-40.977582287958285,
					25.88057828713181
				],
				[
					-40.977582287958285,
					33.429080287545275
				],
				[
					-39.89922485932857,
					40.97758228795874
				],
				[
					-38.820867430697945,
					44.21265457385016
				],
				[
					-35.58579514480607,
					50.682799145633
				],
				[
					-33.42908028754573,
					54.99622886015504
				],
				[
					-29.11565057302323,
					58.23130114604646
				],
				[
					-26.95893571576198,
					59.30965857467709
				],
				[
					-24.80222085850164,
					59.30965857467709
				],
				[
					-24.80222085850164,
					59.30965857467709
				]
			],
			"pressures": [
				0.18359375,
				0.1923828125,
				0.1923828125,
				0.19140625,
				0.19140625,
				0.1962890625,
				0.2060546875,
				0.224609375,
				0.23828125,
				0.2685546875,
				0.3017578125,
				0.3349609375,
				0.349609375,
				0.3720703125,
				0.3818359375,
				0.400390625,
				0.4150390625,
				0.419921875,
				0.42578125,
				0.431640625,
				0.4326171875,
				0.431640625,
				0.4296875,
				0.4228515625,
				0.3984375,
				0.3779296875,
				0.3486328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-24.80222085850164,
				59.30965857467709
			]
		},
		{
			"id": "r6bQSg_uYVPBT9u-ySeSC",
			"type": "freedraw",
			"x": 4201.337670509498,
			"y": 1468.0984738525026,
			"width": 35.58579514480607,
			"height": 89.50366657633117,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1580060969,
			"version": 51,
			"versionNonce": 1213207399,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286306248
				],
				[
					-1.0783574286306248,
					2.156714857261022
				],
				[
					-1.0783574286306248,
					4.313429714522044
				],
				[
					-1.0783574286306248,
					6.470144571783067
				],
				[
					-1.0783574286306248,
					7.548502000413464
				],
				[
					-1.0783574286306248,
					10.783574286304884
				],
				[
					-2.15671485726034,
					17.25371885808795
				],
				[
					-2.15671485726034,
					25.88057828713181
				],
				[
					-2.15671485726034,
					30.194008001653856
				],
				[
					-2.15671485726034,
					38.820867430697945
				],
				[
					-2.15671485726034,
					48.5260842883722
				],
				[
					-2.15671485726034,
					53.91787143152487
				],
				[
					-2.15671485726034,
					62.544730860568734
				],
				[
					-1.0783574286306248,
					71.1715902896126
				],
				[
					0,
					77.64173486139566
				],
				[
					0,
					80.87680714728708
				],
				[
					1.0783574286306248,
					86.26859429043952
				],
				[
					3.2350722858918743,
					88.42530914770055
				],
				[
					4.313429714522499,
					89.50366657633117
				],
				[
					5.391787143153124,
					89.50366657633117
				],
				[
					7.548502000413464,
					88.42530914770055
				],
				[
					9.705216857674714,
					85.19023686180913
				],
				[
					12.940289143566588,
					80.87680714728708
				],
				[
					14.018646572196303,
					78.72009229002606
				],
				[
					17.253718858088178,
					73.32830514687362
				],
				[
					19.410433715349427,
					67.93651800372118
				],
				[
					21.567148572610677,
					62.544730860568734
				],
				[
					22.645506001240392,
					60.38801600330771
				],
				[
					23.723863429871017,
					57.15294371741629
				],
				[
					24.80222085850164,
					54.99622886015527
				],
				[
					25.880578287132266,
					53.91787143152487
				],
				[
					26.95893571576289,
					53.91787143152487
				],
				[
					26.95893571576289,
					54.99622886015527
				],
				[
					26.95893571576289,
					56.07458628878567
				],
				[
					28.037293144392606,
					59.309658574677314
				],
				[
					28.037293144392606,
					62.544730860568734
				],
				[
					29.11565057302323,
					66.85816057509078
				],
				[
					29.11565057302323,
					69.0148754323518
				],
				[
					30.194008001653856,
					74.40666257550424
				],
				[
					30.194008001653856,
					78.72009229002606
				],
				[
					31.27236543028448,
					83.0335220045481
				],
				[
					31.27236543028448,
					84.11187943317873
				],
				[
					32.350722858915105,
					87.34695171907015
				],
				[
					32.350722858915105,
					88.42530914770055
				],
				[
					33.42908028754573,
					88.42530914770055
				],
				[
					33.42908028754573,
					88.42530914770055
				]
			],
			"pressures": [
				0.154296875,
				0.1572265625,
				0.1669921875,
				0.189453125,
				0.21875,
				0.234375,
				0.2685546875,
				0.3310546875,
				0.3974609375,
				0.427734375,
				0.4814453125,
				0.521484375,
				0.537109375,
				0.5576171875,
				0.5654296875,
				0.5634765625,
				0.556640625,
				0.53515625,
				0.5,
				0.4501953125,
				0.4208984375,
				0.357421875,
				0.29296875,
				0.234375,
				0.208984375,
				0.16796875,
				0.140625,
				0.12890625,
				0.126953125,
				0.1318359375,
				0.1474609375,
				0.16015625,
				0.232421875,
				0.2548828125,
				0.3037109375,
				0.3525390625,
				0.3955078125,
				0.4296875,
				0.4423828125,
				0.4599609375,
				0.466796875,
				0.455078125,
				0.4404296875,
				0.39453125,
				0.365234375,
				0.29296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				33.42908028754573,
				88.42530914770055
			]
		},
		{
			"id": "F8-h6cm3D8qvXZOqkfOIn",
			"type": "freedraw",
			"x": 4234.766750797044,
			"y": 1513.3894858549834,
			"width": 2.1567148572612496,
			"height": 2.156714857261022,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1871799849,
			"version": 13,
			"versionNonce": 855276169,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					-1.0783574286303974
				],
				[
					-2.1567148572612496,
					-1.0783574286303974
				],
				[
					-2.1567148572612496,
					0
				],
				[
					-1.0783574286306248,
					0
				],
				[
					-1.0783574286306248,
					1.0783574286306248
				],
				[
					0,
					1.0783574286306248
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.1103515625,
				0.103515625,
				0.1083984375,
				0.109375,
				0.1123046875,
				0.11328125,
				0.1123046875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				1.0783574286306248
			]
		},
		{
			"id": "9R22HLG4sa07dpw8uVU5x",
			"type": "freedraw",
			"x": 4243.393610226088,
			"y": 1527.40813242718,
			"width": 4.31342971452159,
			"height": 28.037293144392834,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2025811081,
			"version": 19,
			"versionNonce": 1810304647,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					0
				],
				[
					-1.0783574286306248,
					1.0783574286303974
				],
				[
					-1.0783574286306248,
					2.156714857261022
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					4.313429714521817
				],
				[
					0,
					7.548502000413464
				],
				[
					1.0783574286297153,
					10.783574286304884
				],
				[
					1.0783574286297153,
					11.861931714935281
				],
				[
					2.15671485726034,
					16.175361429457325
				],
				[
					2.15671485726034,
					20.48879114397937
				],
				[
					2.15671485726034,
					24.802220858501414
				],
				[
					3.235072285890965,
					26.95893571576221
				],
				[
					3.235072285890965,
					28.037293144392834
				],
				[
					3.235072285890965,
					28.037293144392834
				]
			],
			"pressures": [
				0.16015625,
				0.166015625,
				0.2216796875,
				0.26953125,
				0.287109375,
				0.322265625,
				0.357421875,
				0.38671875,
				0.3984375,
				0.41796875,
				0.42578125,
				0.412109375,
				0.39453125,
				0.3671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3.235072285890965,
				28.037293144392834
			]
		},
		{
			"id": "iruIS5eahFqru2AilkJuN",
			"type": "freedraw",
			"x": 4255.255541941023,
			"y": 1486.430550139221,
			"width": 3.2350722858918743,
			"height": 73.32830514687384,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1100190601,
			"version": 22,
			"versionNonce": 1958494569,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286306248
				],
				[
					0,
					2.1567148572612496
				],
				[
					0,
					3.235072285891647
				],
				[
					0,
					5.391787143152669
				],
				[
					0,
					9.705216857674714
				],
				[
					0,
					14.01864657219653
				],
				[
					0,
					16.175361429457553
				],
				[
					0,
					23.723863429871017
				],
				[
					1.0783574286306248,
					30.194008001653856
				],
				[
					1.0783574286306248,
					38.820867430697945
				],
				[
					1.0783574286306248,
					43.13429714521999
				],
				[
					1.0783574286306248,
					51.76115657426385
				],
				[
					1.0783574286306248,
					59.309658574677314
				],
				[
					2.1567148572612496,
					66.85816057509078
				],
				[
					2.1567148572612496,
					70.0932328609822
				],
				[
					3.2350722858918743,
					73.32830514687384
				],
				[
					3.2350722858918743,
					73.32830514687384
				]
			],
			"pressures": [
				0.208984375,
				0.2099609375,
				0.2451171875,
				0.27734375,
				0.3369140625,
				0.3974609375,
				0.45703125,
				0.484375,
				0.52734375,
				0.55859375,
				0.580078125,
				0.5869140625,
				0.5927734375,
				0.5830078125,
				0.5458984375,
				0.5146484375,
				0.4736328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3.2350722858918743,
				73.32830514687384
			]
		},
		{
			"id": "041AMnGPkHCyjCQ50sMuC",
			"type": "freedraw",
			"x": 4284.371192514046,
			"y": 1533.8782769989627,
			"width": 25.880578287131357,
			"height": 75.48502000413464,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1499948455,
			"version": 55,
			"versionNonce": 1966187943,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286297153,
					0
				],
				[
					-1.0783574286297153,
					-1.0783574286303974
				],
				[
					-2.15671485726034,
					-1.0783574286303974
				],
				[
					-3.235072285890965,
					-1.0783574286303974
				],
				[
					-5.391787143152214,
					-1.0783574286303974
				],
				[
					-6.470144571782839,
					-1.0783574286303974
				],
				[
					-7.548502000413464,
					0
				],
				[
					-9.705216857674714,
					1.0783574286306248
				],
				[
					-9.705216857674714,
					2.156714857261022
				],
				[
					-10.783574286304429,
					4.313429714522044
				],
				[
					-10.783574286304429,
					7.548502000413464
				],
				[
					-10.783574286304429,
					10.783574286305111
				],
				[
					-10.783574286304429,
					12.940289143565906
				],
				[
					-10.783574286304429,
					16.175361429457553
				],
				[
					-9.705216857674714,
					19.410433715348972
				],
				[
					-8.626859429044089,
					22.645506001240392
				],
				[
					-7.548502000413464,
					23.723863429871017
				],
				[
					-6.470144571782839,
					24.802220858501414
				],
				[
					-5.391787143152214,
					25.88057828713204
				],
				[
					-4.31342971452159,
					24.802220858501414
				],
				[
					-3.235072285890965,
					21.567148572609995
				],
				[
					-2.15671485726034,
					18.332076286718575
				],
				[
					-1.0783574286297153,
					14.01864657219653
				],
				[
					-1.0783574286297153,
					10.783574286305111
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					-1.0783574286303974
				],
				[
					0,
					-4.313429714521817
				],
				[
					0,
					-11.861931714935281
				],
				[
					0,
					-15.097004000826928
				],
				[
					0,
					-22.645506001240165
				],
				[
					0,
					-29.11565057302323
				],
				[
					-1.0783574286297153,
					-35.5857951448063
				],
				[
					-1.0783574286297153,
					-38.82086743069772
				],
				[
					-1.0783574286297153,
					-44.21265457385016
				],
				[
					-1.0783574286297153,
					-46.36936943111118
				],
				[
					-2.15671485726034,
					-47.447726859741806
				],
				[
					-1.0783574286297153,
					-46.36936943111118
				],
				[
					-1.0783574286297153,
					-43.13429714521976
				],
				[
					-1.0783574286297153,
					-37.74251000206709
				],
				[
					0,
					-35.5857951448063
				],
				[
					0,
					-28.037293144392834
				],
				[
					2.1567148572612496,
					-20.48879114397937
				],
				[
					2.1567148572612496,
					-16.175361429457325
				],
				[
					4.313429714522499,
					-6.470144571782839
				],
				[
					5.391787143152214,
					2.156714857261022
				],
				[
					7.548502000413464,
					10.783574286305111
				],
				[
					9.705216857674714,
					15.097004000826928
				],
				[
					11.861931714935963,
					22.645506001240392
				],
				[
					15.097004000826928,
					28.037293144392834
				],
				[
					15.097004000826928,
					28.037293144392834
				]
			],
			"pressures": [
				0.333984375,
				0.359375,
				0.3701171875,
				0.390625,
				0.4111328125,
				0.4404296875,
				0.4501953125,
				0.45703125,
				0.4677734375,
				0.4697265625,
				0.4716796875,
				0.4736328125,
				0.4755859375,
				0.4765625,
				0.478515625,
				0.48046875,
				0.482421875,
				0.4833984375,
				0.4833984375,
				0.484375,
				0.4853515625,
				0.4794921875,
				0.4677734375,
				0.451171875,
				0.4423828125,
				0.4140625,
				0.404296875,
				0.3994140625,
				0.3955078125,
				0.3955078125,
				0.39453125,
				0.3974609375,
				0.4072265625,
				0.4130859375,
				0.4267578125,
				0.447265625,
				0.4765625,
				0.525390625,
				0.55859375,
				0.591796875,
				0.6064453125,
				0.6318359375,
				0.6484375,
				0.654296875,
				0.6591796875,
				0.6572265625,
				0.640625,
				0.6240234375,
				0.5693359375,
				0.482421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15.097004000826928,
				28.037293144392834
			]
		},
		{
			"id": "TbzQOz5Wt7MqYHj9M8qy4",
			"type": "freedraw",
			"x": 4420.244228521488,
			"y": 1383.986594419324,
			"width": 74.40666257550401,
			"height": 83.0335220045481,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 567517927,
			"version": 22,
			"versionNonce": 1818373193,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					1.0783574286303974
				],
				[
					1.0783574286306248,
					2.156714857261022
				],
				[
					2.1567148572612496,
					4.313429714522044
				],
				[
					4.313429714522499,
					7.548502000413464
				],
				[
					5.391787143152214,
					9.705216857674486
				],
				[
					8.626859429044089,
					14.01864657219653
				],
				[
					12.940289143566588,
					20.48879114397937
				],
				[
					18.332076286718802,
					28.037293144392834
				],
				[
					20.488791143979142,
					31.272365430284253
				],
				[
					26.95893571576289,
					40.97758228795874
				],
				[
					34.507437716176355,
					49.60444171700283
				],
				[
					42.05593971658982,
					58.23130114604669
				],
				[
					46.36936943111141,
					62.544730860568734
				],
				[
					56.07458628878612,
					70.0932328609822
				],
				[
					65.77980314645993,
					76.56337743276504
				],
				[
					74.40666257550401,
					83.0335220045481
				],
				[
					74.40666257550401,
					83.0335220045481
				]
			],
			"pressures": [
				0.27734375,
				0.337890625,
				0.373046875,
				0.4375,
				0.5029296875,
				0.53515625,
				0.5947265625,
				0.64453125,
				0.681640625,
				0.697265625,
				0.7197265625,
				0.7333984375,
				0.73828125,
				0.73828125,
				0.728515625,
				0.6875,
				0.6044921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				74.40666257550401,
				83.0335220045481
			]
		},
		{
			"id": "mayWRFvElzNwlt9nFwJeF",
			"type": "freedraw",
			"x": 4545.333690242626,
			"y": 1492.900694711004,
			"width": 39.89922485932857,
			"height": 54.99622886015527,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1554718953,
			"version": 35,
			"versionNonce": 593254599,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.156714857261022
				],
				[
					0,
					-3.2350722858914196
				],
				[
					-1.0783574286306248,
					-3.2350722858914196
				],
				[
					-2.1567148572612496,
					-4.313429714521817
				],
				[
					-3.2350722858918743,
					-4.313429714521817
				],
				[
					-4.313429714522499,
					-5.391787143152442
				],
				[
					-7.548502000413464,
					-5.391787143152442
				],
				[
					-10.783574286305338,
					-5.391787143152442
				],
				[
					-12.940289143566588,
					-4.313429714521817
				],
				[
					-17.253718858088178,
					-3.2350722858914196
				],
				[
					-21.567148572609767,
					0
				],
				[
					-25.880578287132266,
					4.313429714522044
				],
				[
					-28.037293144393516,
					6.470144571783067
				],
				[
					-31.27236543028448,
					11.861931714935508
				],
				[
					-33.42908028754573,
					18.332076286718575
				],
				[
					-34.507437716176355,
					24.802220858501414
				],
				[
					-34.507437716176355,
					28.037293144392834
				],
				[
					-33.42908028754573,
					33.429080287545275
				],
				[
					-31.27236543028448,
					38.82086743069772
				],
				[
					-28.037293144393516,
					44.212654573850386
				],
				[
					-25.880578287132266,
					45.291012002480784
				],
				[
					-21.567148572609767,
					48.5260842883722
				],
				[
					-16.175361429457553,
					49.60444171700283
				],
				[
					-14.018646572197213,
					49.60444171700283
				],
				[
					-7.548502000413464,
					49.60444171700283
				],
				[
					-3.2350722858918743,
					47.447726859741806
				],
				[
					2.15671485726034,
					45.291012002480784
				],
				[
					3.235072285890965,
					43.13429714521976
				],
				[
					5.391787143152214,
					40.97758228795874
				],
				[
					5.391787143152214,
					40.97758228795874
				]
			],
			"pressures": [
				0.2353515625,
				0.240234375,
				0.2548828125,
				0.265625,
				0.2919921875,
				0.318359375,
				0.33984375,
				0.3798828125,
				0.421875,
				0.44140625,
				0.4794921875,
				0.51953125,
				0.560546875,
				0.580078125,
				0.615234375,
				0.642578125,
				0.662109375,
				0.6689453125,
				0.6787109375,
				0.68359375,
				0.6845703125,
				0.6826171875,
				0.67578125,
				0.662109375,
				0.650390625,
				0.6171875,
				0.5654296875,
				0.4951171875,
				0.453125,
				0.40625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				5.391787143152214,
				40.97758228795874
			]
		},
		{
			"id": "STGM5Wqr5wzwz6rZdy5q2",
			"type": "freedraw",
			"x": 4567.979196243867,
			"y": 1469.1768312811332,
			"width": 2.15671485726034,
			"height": 80.87680714728708,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1381478121,
			"version": 24,
			"versionNonce": 298302249,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					1.0783574286303974
				],
				[
					1.0783574286306248,
					2.156714857260795
				],
				[
					1.0783574286306248,
					3.2350722858914196
				],
				[
					1.0783574286306248,
					4.313429714522044
				],
				[
					1.0783574286306248,
					6.470144571782839
				],
				[
					1.0783574286306248,
					9.705216857674259
				],
				[
					1.0783574286306248,
					11.861931714935508
				],
				[
					2.15671485726034,
					17.253718858087723
				],
				[
					1.0783574286306248,
					23.72386342987079
				],
				[
					1.0783574286306248,
					32.35072285891465
				],
				[
					1.0783574286306248,
					36.664152573436695
				],
				[
					1.0783574286306248,
					45.291012002480784
				],
				[
					0,
					53.917871431524645
				],
				[
					0,
					58.23130114604669
				],
				[
					0,
					65.77980314646015
				],
				[
					0,
					73.32830514687362
				],
				[
					1.0783574286306248,
					78.72009229002606
				],
				[
					1.0783574286306248,
					80.87680714728708
				],
				[
					1.0783574286306248,
					80.87680714728708
				]
			],
			"pressures": [
				0.18359375,
				0.1982421875,
				0.205078125,
				0.224609375,
				0.244140625,
				0.2666015625,
				0.30078125,
				0.3232421875,
				0.369140625,
				0.412109375,
				0.4462890625,
				0.4599609375,
				0.4775390625,
				0.4814453125,
				0.474609375,
				0.4443359375,
				0.3935546875,
				0.3251953125,
				0.28515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1.0783574286306248,
				80.87680714728708
			]
		},
		{
			"id": "Wy66M4N3Bhfmqn7ixohaO",
			"type": "freedraw",
			"x": 4593.859774530998,
			"y": 1519.8596304267664,
			"width": 4.313429714522499,
			"height": 31.272365430284253,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 209787751,
			"version": 21,
			"versionNonce": 470001639,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.0783574286306248
				],
				[
					0,
					-2.156714857261022
				],
				[
					1.0783574286306248,
					-2.156714857261022
				],
				[
					1.0783574286306248,
					-1.0783574286306248
				],
				[
					1.0783574286306248,
					0
				],
				[
					1.0783574286306248,
					2.156714857261022
				],
				[
					2.1567148572612496,
					4.313429714521817
				],
				[
					2.1567148572612496,
					6.470144571782839
				],
				[
					2.1567148572612496,
					9.705216857674486
				],
				[
					2.1567148572612496,
					11.861931714935281
				],
				[
					2.1567148572612496,
					16.175361429457325
				],
				[
					3.2350722858918743,
					19.410433715348745
				],
				[
					3.2350722858918743,
					23.72386342987079
				],
				[
					3.2350722858918743,
					25.88057828713181
				],
				[
					4.313429714522499,
					29.11565057302323
				],
				[
					4.313429714522499,
					29.11565057302323
				]
			],
			"pressures": [
				0.09375,
				0.10546875,
				0.1357421875,
				0.171875,
				0.2041015625,
				0.26171875,
				0.2900390625,
				0.3095703125,
				0.3154296875,
				0.32421875,
				0.326171875,
				0.3330078125,
				0.3359375,
				0.3251953125,
				0.314453125,
				0.279296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				4.313429714522499,
				29.11565057302323
			]
		},
		{
			"id": "YD6h9WQSwizfq43YUbsqC",
			"type": "freedraw",
			"x": 4618.6619953895,
			"y": 1524.1730601412883,
			"width": 2.1567148572612496,
			"height": 19.410433715348972,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1776476039,
			"version": 15,
			"versionNonce": 1431858697,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286306248
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					3.235072285891647
				],
				[
					0,
					5.391787143152669
				],
				[
					-1.0783574286306248,
					8.626859429044089
				],
				[
					-1.0783574286306248,
					9.705216857674486
				],
				[
					-2.1567148572612496,
					14.01864657219653
				],
				[
					-2.1567148572612496,
					17.25371885808795
				],
				[
					-2.1567148572612496,
					19.410433715348972
				],
				[
					-2.1567148572612496,
					19.410433715348972
				]
			],
			"pressures": [
				0.15234375,
				0.1611328125,
				0.1767578125,
				0.1953125,
				0.21484375,
				0.236328125,
				0.2451171875,
				0.2548828125,
				0.248046875,
				0.236328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-2.1567148572612496,
				19.410433715348972
			]
		},
		{
			"id": "6k2EjpZ_DlwXTIXx1csag",
			"type": "freedraw",
			"x": 4570.135911101127,
			"y": 1541.4267789993762,
			"width": 34.507437716176355,
			"height": 31.27236543028448,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 616386119,
			"version": 40,
			"versionNonce": 489952007,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286297153,
					0
				],
				[
					-2.15671485726034,
					0
				],
				[
					-3.235072285890965,
					-1.0783574286303974
				],
				[
					-4.31342971452159,
					-1.0783574286303974
				],
				[
					-5.391787143152214,
					-1.0783574286303974
				],
				[
					-6.470144571782839,
					-2.156714857261022
				],
				[
					-6.470144571782839,
					-3.2350722858914196
				],
				[
					-7.548502000413464,
					-4.313429714521817
				],
				[
					-6.470144571782839,
					-6.470144571782839
				],
				[
					-6.470144571782839,
					-7.548502000413464
				],
				[
					-5.391787143152214,
					-8.626859429043861
				],
				[
					-3.235072285890965,
					-10.783574286304884
				],
				[
					-2.15671485726034,
					-12.940289143565906
				],
				[
					-1.0783574286297153,
					-14.018646572196303
				],
				[
					2.1567148572612496,
					-16.175361429457325
				],
				[
					4.313429714522499,
					-18.332076286718348
				],
				[
					5.391787143152214,
					-19.410433715348745
				],
				[
					8.626859429044089,
					-20.48879114397937
				],
				[
					10.783574286305338,
					-21.567148572609767
				],
				[
					12.940289143566588,
					-22.645506001240392
				],
				[
					15.097004000826928,
					-22.645506001240392
				],
				[
					16.175361429457553,
					-22.645506001240392
				],
				[
					18.332076286718802,
					-21.567148572609767
				],
				[
					20.488791143979142,
					-19.410433715348745
				],
				[
					20.488791143979142,
					-18.332076286718348
				],
				[
					21.567148572609767,
					-15.097004000826928
				],
				[
					22.645506001240392,
					-10.783574286304884
				],
				[
					23.723863429871017,
					-7.548502000413464
				],
				[
					23.723863429871017,
					-5.391787143152442
				],
				[
					24.80222085850164,
					-1.0783574286303974
				],
				[
					25.880578287132266,
					2.156714857261022
				],
				[
					25.880578287132266,
					4.313429714522044
				],
				[
					25.880578287132266,
					6.470144571783067
				],
				[
					26.95893571576289,
					8.626859429044089
				],
				[
					26.95893571576289,
					8.626859429044089
				]
			],
			"pressures": [
				0.1669921875,
				0.171875,
				0.1767578125,
				0.201171875,
				0.232421875,
				0.2705078125,
				0.3076171875,
				0.341796875,
				0.3720703125,
				0.4091796875,
				0.4208984375,
				0.4453125,
				0.46875,
				0.4921875,
				0.50390625,
				0.5244140625,
				0.5419921875,
				0.5498046875,
				0.5634765625,
				0.5810546875,
				0.599609375,
				0.6103515625,
				0.630859375,
				0.6513671875,
				0.66796875,
				0.6748046875,
				0.6826171875,
				0.6875,
				0.6904296875,
				0.6904296875,
				0.689453125,
				0.673828125,
				0.6572265625,
				0.5986328125,
				0.50390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				26.95893571576289,
				8.626859429044089
			]
		},
		{
			"id": "TeGuiLNGGIwqLAzzBvP2z",
			"type": "freedraw",
			"x": 4624.053782532652,
			"y": 1469.1768312811332,
			"width": 0,
			"height": 1.0783574286306248,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1296815465,
			"version": 8,
			"versionNonce": 235914473,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.0783574286306248
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.318359375,
				0.302734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				-1.0783574286306248
			]
		},
		{
			"id": "_zldQqDfXn1kji4oIA4V7",
			"type": "freedraw",
			"x": 4643.464216248001,
			"y": 1468.0984738525026,
			"width": 2.1567148572612496,
			"height": 70.0932328609822,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1223447527,
			"version": 21,
			"versionNonce": 1869224487,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286306248
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					3.2350722858914196
				],
				[
					0,
					6.470144571783067
				],
				[
					0,
					8.626859429044089
				],
				[
					0,
					12.940289143566133
				],
				[
					0,
					19.410433715348972
				],
				[
					-1.0783574286306248,
					23.723863429871017
				],
				[
					-1.0783574286306248,
					31.27236543028448
				],
				[
					-1.0783574286306248,
					35.585795144806525
				],
				[
					-1.0783574286306248,
					45.291012002480784
				],
				[
					-2.1567148572612496,
					53.91787143152487
				],
				[
					-1.0783574286306248,
					62.544730860568734
				],
				[
					-1.0783574286306248,
					66.85816057509078
				],
				[
					-1.0783574286306248,
					70.0932328609822
				],
				[
					-1.0783574286306248,
					70.0932328609822
				]
			],
			"pressures": [
				0.4013671875,
				0.451171875,
				0.486328125,
				0.498046875,
				0.5224609375,
				0.5341796875,
				0.5556640625,
				0.572265625,
				0.5791015625,
				0.5908203125,
				0.5947265625,
				0.5927734375,
				0.5693359375,
				0.515625,
				0.4775390625,
				0.4287109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1.0783574286306248,
				70.0932328609822
			]
		},
		{
			"id": "mS5Z2ZRl1NXu-GeP88oV8",
			"type": "freedraw",
			"x": 4687.6768708218515,
			"y": 1502.6059115686785,
			"width": 29.11565057302323,
			"height": 101.36559829126645,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1010993159,
			"version": 60,
			"versionNonce": 662257609,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.156714857261022
				],
				[
					0,
					-3.2350722858914196
				],
				[
					-1.0783574286306248,
					-3.2350722858914196
				],
				[
					-1.0783574286306248,
					-4.313429714522044
				],
				[
					-2.1567148572612496,
					-4.313429714522044
				],
				[
					-3.2350722858918743,
					-4.313429714522044
				],
				[
					-5.391787143153124,
					-4.313429714522044
				],
				[
					-6.470144571783749,
					-3.2350722858914196
				],
				[
					-8.626859429044089,
					-2.156714857261022
				],
				[
					-11.861931714935963,
					1.0783574286306248
				],
				[
					-14.018646572196303,
					4.313429714522044
				],
				[
					-15.097004000826928,
					5.391787143152442
				],
				[
					-17.253718858088178,
					9.705216857674486
				],
				[
					-19.410433715349427,
					14.018646572196303
				],
				[
					-20.488791143980052,
					16.175361429457325
				],
				[
					-20.488791143980052,
					21.567148572609767
				],
				[
					-20.488791143980052,
					25.88057828713181
				],
				[
					-20.488791143980052,
					30.194008001653856
				],
				[
					-20.488791143980052,
					32.35072285891488
				],
				[
					-18.332076286718802,
					34.5074377161759
				],
				[
					-17.253718858088178,
					36.664152573436695
				],
				[
					-15.097004000826928,
					36.664152573436695
				],
				[
					-14.018646572196303,
					36.664152573436695
				],
				[
					-11.861931714935963,
					34.5074377161759
				],
				[
					-9.705216857674714,
					33.429080287545275
				],
				[
					-7.548502000413464,
					29.11565057302323
				],
				[
					-6.470144571783749,
					25.88057828713181
				],
				[
					-5.391787143153124,
					19.410433715348972
				],
				[
					-3.2350722858918743,
					11.861931714935508
				],
				[
					-2.1567148572612496,
					6.470144571782839
				],
				[
					-1.0783574286306248,
					-3.2350722858914196
				],
				[
					0,
					-7.548502000413464
				],
				[
					1.0783574286306248,
					-18.332076286718348
				],
				[
					2.1567148572612496,
					-29.11565057302323
				],
				[
					3.235072285890965,
					-37.74251000206732
				],
				[
					3.235072285890965,
					-42.055939716589364
				],
				[
					4.31342971452159,
					-49.60444171700283
				],
				[
					4.31342971452159,
					-53.917871431524645
				],
				[
					4.31342971452159,
					-56.07458628878567
				],
				[
					5.391787143152214,
					-54.99622886015527
				],
				[
					5.391787143152214,
					-50.682799145633226
				],
				[
					5.391787143152214,
					-45.291012002480784
				],
				[
					5.391787143152214,
					-42.055939716589364
				],
				[
					5.391787143152214,
					-33.429080287545275
				],
				[
					5.391787143152214,
					-22.645506001240392
				],
				[
					5.391787143152214,
					-11.861931714935508
				],
				[
					5.391787143152214,
					-6.470144571782839
				],
				[
					6.470144571782839,
					4.313429714522044
				],
				[
					6.470144571782839,
					15.097004000826928
				],
				[
					6.470144571782839,
					20.48879114397937
				],
				[
					7.548502000413464,
					29.11565057302323
				],
				[
					7.548502000413464,
					36.664152573436695
				],
				[
					8.62685942904318,
					43.13429714521976
				],
				[
					8.62685942904318,
					45.291012002480784
				],
				[
					8.62685942904318,
					45.291012002480784
				]
			],
			"pressures": [
				0.1748046875,
				0.1826171875,
				0.203125,
				0.244140625,
				0.255859375,
				0.27734375,
				0.3095703125,
				0.34765625,
				0.36328125,
				0.3896484375,
				0.4140625,
				0.4326171875,
				0.4404296875,
				0.4541015625,
				0.46484375,
				0.46875,
				0.47265625,
				0.4736328125,
				0.4697265625,
				0.4658203125,
				0.4541015625,
				0.4375,
				0.4169921875,
				0.4052734375,
				0.3798828125,
				0.3701171875,
				0.3515625,
				0.34375,
				0.3310546875,
				0.3232421875,
				0.3193359375,
				0.318359375,
				0.318359375,
				0.3232421875,
				0.3349609375,
				0.3603515625,
				0.3798828125,
				0.4228515625,
				0.4677734375,
				0.5126953125,
				0.5654296875,
				0.587890625,
				0.60546875,
				0.6142578125,
				0.630859375,
				0.6435546875,
				0.6513671875,
				0.654296875,
				0.65234375,
				0.638671875,
				0.6259765625,
				0.5869140625,
				0.5244140625,
				0.439453125,
				0.3896484375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				8.62685942904318,
				45.291012002480784
			]
		},
		{
			"id": "ZCWpPvlvLfoeTe5iuFQhU",
			"type": "freedraw",
			"x": 4207.807815081282,
			"y": 1596.4230078595315,
			"width": 88.42530914770123,
			"height": 76.56337743276526,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2112743079,
			"version": 29,
			"versionNonce": 263216809,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					1.0783574286306248
				],
				[
					-3.2350722858918743,
					2.156714857261022
				],
				[
					-5.391787143153124,
					3.2350722858914196
				],
				[
					-6.470144571783749,
					4.313429714522044
				],
				[
					-8.626859429044089,
					5.391787143152442
				],
				[
					-11.861931714935963,
					7.548502000413464
				],
				[
					-14.018646572197213,
					9.705216857674486
				],
				[
					-18.332076286718802,
					12.940289143565906
				],
				[
					-23.723863429871017,
					17.25371885808795
				],
				[
					-30.194008001653856,
					21.567148572609995
				],
				[
					-32.350722858915105,
					23.723863429871017
				],
				[
					-38.820867430697945,
					29.11565057302323
				],
				[
					-45.291012002480784,
					34.5074377161759
				],
				[
					-51.76115657426453,
					39.89922485932834
				],
				[
					-53.91787143152487,
					42.055939716589364
				],
				[
					-60.38801600330771,
					47.447726859741806
				],
				[
					-65.77980314646084,
					52.83951400289425
				],
				[
					-71.17159028961305,
					58.23130114604669
				],
				[
					-74.40666257550401,
					60.38801600330771
				],
				[
					-78.72009229002651,
					65.77980314646015
				],
				[
					-83.03352200454901,
					70.0932328609822
				],
				[
					-86.26859429043998,
					73.32830514687362
				],
				[
					-87.3469517190706,
					74.40666257550401
				],
				[
					-88.42530914770123,
					76.56337743276526
				],
				[
					-88.42530914770123,
					76.56337743276526
				]
			],
			"pressures": [
				0.283203125,
				0.2900390625,
				0.3095703125,
				0.3583984375,
				0.3740234375,
				0.4033203125,
				0.4423828125,
				0.46875,
				0.515625,
				0.552734375,
				0.58203125,
				0.59375,
				0.61328125,
				0.626953125,
				0.6337890625,
				0.634765625,
				0.634765625,
				0.6337890625,
				0.6328125,
				0.6298828125,
				0.615234375,
				0.5849609375,
				0.53125,
				0.494140625,
				0.44921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-88.42530914770123,
				76.56337743276526
			]
		},
		{
			"id": "KFelC5lFiSQX8n6FnqBXb",
			"type": "freedraw",
			"x": 4073.0131365024695,
			"y": 1706.415465579842,
			"width": 31.272365430284026,
			"height": 64.70144571782953,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1493980329,
			"version": 29,
			"versionNonce": 1225325671,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.07835742863017,
					-1.0783574286306248
				],
				[
					0,
					-2.156714857261022
				],
				[
					-1.0783574286306248,
					-2.156714857261022
				],
				[
					-2.156714857260795,
					-2.156714857261022
				],
				[
					-4.313429714522044,
					-2.156714857261022
				],
				[
					-6.470144571783294,
					-1.0783574286306248
				],
				[
					-9.705216857674259,
					0
				],
				[
					-10.783574286304884,
					1.0783574286303974
				],
				[
					-14.018646572196758,
					3.2350722858914196
				],
				[
					-18.332076286718348,
					6.470144571782839
				],
				[
					-21.567148572610222,
					9.705216857674259
				],
				[
					-22.645506001240392,
					11.861931714935508
				],
				[
					-25.88057828713181,
					17.253718858087723
				],
				[
					-28.03729314439306,
					22.645506001240392
				],
				[
					-29.115650573023686,
					25.88057828713181
				],
				[
					-30.194008001653856,
					33.429080287545275
				],
				[
					-30.194008001653856,
					39.899224859328115
				],
				[
					-29.115650573023686,
					46.36936943111118
				],
				[
					-29.115650573023686,
					49.60444171700283
				],
				[
					-26.958935715762436,
					54.99622886015504
				],
				[
					-23.723863429871017,
					59.30965857467709
				],
				[
					-19.410433715348972,
					61.46637343193811
				],
				[
					-17.253718858087723,
					62.54473086056851
				],
				[
					-11.861931714935508,
					62.54473086056851
				],
				[
					-11.861931714935508,
					62.54473086056851
				]
			],
			"pressures": [
				0.1484375,
				0.150390625,
				0.1728515625,
				0.1904296875,
				0.208984375,
				0.228515625,
				0.2470703125,
				0.2646484375,
				0.2734375,
				0.2890625,
				0.302734375,
				0.3173828125,
				0.326171875,
				0.3466796875,
				0.369140625,
				0.3818359375,
				0.404296875,
				0.421875,
				0.43359375,
				0.4375,
				0.443359375,
				0.4453125,
				0.44140625,
				0.4326171875,
				0.3984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-11.861931714935508,
				62.54473086056851
			]
		},
		{
			"id": "A5no2ofIlY9Pf_UjyS_n4",
			"type": "freedraw",
			"x": 4102.128787075493,
			"y": 1678.378172435449,
			"width": 37.74251000206732,
			"height": 88.42530914770077,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1512296199,
			"version": 52,
			"versionNonce": 1700831625,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286306248
				],
				[
					-1.0783574286306248,
					2.1567148572612496
				],
				[
					-1.0783574286306248,
					3.235072285891647
				],
				[
					-1.0783574286306248,
					5.391787143152669
				],
				[
					-1.0783574286306248,
					6.470144571783067
				],
				[
					-2.1567148572612496,
					8.626859429044089
				],
				[
					-2.1567148572612496,
					12.940289143566133
				],
				[
					-2.1567148572612496,
					19.410433715348972
				],
				[
					-2.1567148572612496,
					22.645506001240392
				],
				[
					-3.2350722858918743,
					30.194008001653856
				],
				[
					-2.1567148572612496,
					38.820867430697945
				],
				[
					-2.1567148572612496,
					43.13429714521999
				],
				[
					-2.1567148572612496,
					51.76115657426385
				],
				[
					-1.0783574286306248,
					60.38801600330771
				],
				[
					0,
					66.85816057509078
				],
				[
					1.0783574286306248,
					70.09323286098243
				],
				[
					2.15671485726034,
					75.48502000413464
				],
				[
					4.31342971452159,
					79.79844971865668
				],
				[
					5.391787143152214,
					80.87680714728731
				],
				[
					6.470144571782839,
					81.9551645759177
				],
				[
					8.62685942904318,
					81.9551645759177
				],
				[
					10.783574286304429,
					79.79844971865668
				],
				[
					12.940289143565678,
					77.64173486139589
				],
				[
					14.018646572196303,
					75.48502000413464
				],
				[
					16.175361429457553,
					71.1715902896126
				],
				[
					18.332076286717893,
					66.85816057509078
				],
				[
					19.410433715348518,
					63.62308828919913
				],
				[
					21.567148572609767,
					59.309658574677314
				],
				[
					22.645506001239482,
					56.07458628878567
				],
				[
					24.802220858500732,
					52.83951400289425
				],
				[
					24.802220858500732,
					51.76115657426385
				],
				[
					25.880578287131357,
					49.60444171700283
				],
				[
					26.95893571576198,
					48.5260842883722
				],
				[
					28.037293144392606,
					48.5260842883722
				],
				[
					28.037293144392606,
					49.60444171700283
				],
				[
					28.037293144392606,
					51.76115657426385
				],
				[
					29.11565057302323,
					54.9962288601555
				],
				[
					29.11565057302323,
					57.15294371741629
				],
				[
					30.194008001653856,
					61.46637343193834
				],
				[
					30.194008001653856,
					65.77980314646038
				],
				[
					31.27236543028448,
					71.1715902896126
				],
				[
					31.27236543028448,
					73.32830514687384
				],
				[
					32.350722858914196,
					78.72009229002606
				],
				[
					32.350722858914196,
					83.0335220045481
				],
				[
					33.42908028754482,
					84.11187943317873
				],
				[
					34.507437716175446,
					87.34695171907015
				],
				[
					34.507437716175446,
					88.42530914770077
				],
				[
					34.507437716175446,
					88.42530914770077
				]
			],
			"pressures": [
				0.185546875,
				0.1845703125,
				0.1845703125,
				0.19140625,
				0.2060546875,
				0.212890625,
				0.2294921875,
				0.25390625,
				0.291015625,
				0.3125,
				0.35546875,
				0.39453125,
				0.4111328125,
				0.4375,
				0.455078125,
				0.4619140625,
				0.4609375,
				0.4541015625,
				0.4384765625,
				0.412109375,
				0.3935546875,
				0.349609375,
				0.298828125,
				0.24609375,
				0.2216796875,
				0.1787109375,
				0.1474609375,
				0.1357421875,
				0.1201171875,
				0.1142578125,
				0.1142578125,
				0.1162109375,
				0.12109375,
				0.1259765625,
				0.1640625,
				0.19140625,
				0.22265625,
				0.25390625,
				0.2685546875,
				0.2939453125,
				0.3134765625,
				0.3271484375,
				0.33203125,
				0.3359375,
				0.326171875,
				0.31640625,
				0.28515625,
				0.263671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				34.507437716175446,
				88.42530914770077
			]
		},
		{
			"id": "A5uvdad-ssnLdkr6nEfUN",
			"type": "freedraw",
			"x": 4153.889943649757,
			"y": 1736.6094735814959,
			"width": 2.15671485726034,
			"height": 23.72386342987079,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 977654055,
			"version": 16,
			"versionNonce": 396023687,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286303974
				],
				[
					0,
					2.156714857260795
				],
				[
					0,
					3.2350722858914196
				],
				[
					0,
					4.313429714522044
				],
				[
					1.0783574286297153,
					5.391787143152214
				],
				[
					1.0783574286297153,
					7.548502000413464
				],
				[
					1.0783574286297153,
					10.783574286304884
				],
				[
					1.0783574286297153,
					15.097004000826928
				],
				[
					2.15671485726034,
					17.253718858087723
				],
				[
					2.15671485726034,
					20.488791143979142
				],
				[
					2.15671485726034,
					23.72386342987079
				],
				[
					2.15671485726034,
					23.72386342987079
				]
			],
			"pressures": [
				0.123046875,
				0.1259765625,
				0.1328125,
				0.13671875,
				0.1416015625,
				0.1474609375,
				0.1513671875,
				0.1572265625,
				0.1640625,
				0.1650390625,
				0.1650390625,
				0.158203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2.15671485726034,
				23.72386342987079
			]
		},
		{
			"id": "PDsI0fNSi4Czpe9qiw_-K",
			"type": "freedraw",
			"x": 4153.889943649757,
			"y": 1718.2773972947775,
			"width": 5.391787143153124,
			"height": 10.783574286305111,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 12251911,
			"version": 13,
			"versionNonce": 1707444329,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					-1.0783574286306248
				],
				[
					-2.1567148572612496,
					-3.235072285891647
				],
				[
					-2.1567148572612496,
					-4.313429714522044
				],
				[
					-3.2350722858918743,
					-6.470144571783067
				],
				[
					-3.2350722858918743,
					-7.548502000413464
				],
				[
					-4.313429714522499,
					-8.626859429044089
				],
				[
					-4.313429714522499,
					-9.705216857674714
				],
				[
					-5.391787143153124,
					-10.783574286305111
				],
				[
					-5.391787143153124,
					-10.783574286305111
				]
			],
			"pressures": [
				0.17578125,
				0.1806640625,
				0.1904296875,
				0.1962890625,
				0.20703125,
				0.2099609375,
				0.2109375,
				0.2080078125,
				0.201171875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-5.391787143153124,
				-10.783574286305111
			]
		},
		{
			"id": "ZC6vp8t1ZOnaZdwqp3P7s",
			"type": "freedraw",
			"x": 4167.908590221953,
			"y": 1691.318461579015,
			"width": 8.626859429044089,
			"height": 79.79844971865646,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 890090313,
			"version": 25,
			"versionNonce": 1770278567,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286303974
				],
				[
					-1.0783574286306248,
					1.0783574286303974
				],
				[
					-1.0783574286306248,
					2.156714857260795
				],
				[
					-1.0783574286306248,
					4.313429714522044
				],
				[
					-1.0783574286306248,
					5.391787143152442
				],
				[
					-1.0783574286306248,
					8.626859429043861
				],
				[
					-2.1567148572612496,
					11.861931714935508
				],
				[
					-2.1567148572612496,
					14.018646572196303
				],
				[
					-1.0783574286306248,
					20.48879114397937
				],
				[
					-1.0783574286306248,
					26.958935715762436
				],
				[
					-1.0783574286306248,
					33.429080287545275
				],
				[
					-1.0783574286306248,
					37.74251000206732
				],
				[
					0,
					46.36936943111118
				],
				[
					0,
					53.917871431524645
				],
				[
					1.0783574286306248,
					61.46637343193811
				],
				[
					1.0783574286306248,
					65.77980314645993
				],
				[
					2.15671485726034,
					71.1715902896126
				],
				[
					3.235072285890965,
					75.48502000413464
				],
				[
					5.391787143152214,
					78.72009229002606
				],
				[
					6.470144571782839,
					79.79844971865646
				],
				[
					6.470144571782839,
					79.79844971865646
				]
			],
			"pressures": [
				0.1904296875,
				0.2177734375,
				0.236328125,
				0.24609375,
				0.28125,
				0.302734375,
				0.349609375,
				0.39453125,
				0.4150390625,
				0.4541015625,
				0.484375,
				0.505859375,
				0.5146484375,
				0.5234375,
				0.517578125,
				0.486328125,
				0.4609375,
				0.3955078125,
				0.3173828125,
				0.2333984375,
				0.1923828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6.470144571782839,
				79.79844971865646
			]
		},
		{
			"id": "acQ7GpL3QPmmANur8sO4L",
			"type": "freedraw",
			"x": 4197.024240794976,
			"y": 1736.6094735814959,
			"width": 36.664152573436695,
			"height": 103.52231314852747,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1078479911,
			"version": 66,
			"versionNonce": 447386441,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.1567148572612496
				],
				[
					0,
					-3.2350722858914196
				],
				[
					0,
					-4.313429714522044
				],
				[
					0,
					-5.391787143152669
				],
				[
					0,
					-7.548502000413464
				],
				[
					-1.0783574286306248,
					-8.626859429044089
				],
				[
					-2.1567148572612496,
					-9.705216857674714
				],
				[
					-3.2350722858918743,
					-10.783574286304884
				],
				[
					-4.31342971452159,
					-10.783574286304884
				],
				[
					-5.391787143152214,
					-10.783574286304884
				],
				[
					-7.548502000413464,
					-9.705216857674714
				],
				[
					-8.626859429044089,
					-7.548502000413464
				],
				[
					-9.705216857674714,
					-6.470144571783067
				],
				[
					-10.783574286305338,
					-3.2350722858914196
				],
				[
					-11.861931714935963,
					0
				],
				[
					-12.940289143565678,
					4.313429714522044
				],
				[
					-12.940289143565678,
					6.470144571782839
				],
				[
					-12.940289143565678,
					10.783574286304884
				],
				[
					-11.861931714935963,
					15.097004000826928
				],
				[
					-10.783574286305338,
					18.332076286718348
				],
				[
					-10.783574286305338,
					20.488791143979142
				],
				[
					-8.626859429044089,
					23.72386342987079
				],
				[
					-7.548502000413464,
					25.88057828713181
				],
				[
					-6.470144571782839,
					28.037293144392606
				],
				[
					-5.391787143152214,
					28.037293144392606
				],
				[
					-4.31342971452159,
					28.037293144392606
				],
				[
					-3.2350722858918743,
					26.95893571576221
				],
				[
					-1.0783574286306248,
					24.802220858501187
				],
				[
					-1.0783574286306248,
					23.72386342987079
				],
				[
					0,
					19.410433715348972
				],
				[
					1.0783574286306248,
					15.097004000826928
				],
				[
					1.0783574286306248,
					11.861931714935508
				],
				[
					2.1567148572612496,
					5.391787143152214
				],
				[
					3.235072285890965,
					-2.1567148572612496
				],
				[
					3.235072285890965,
					-9.705216857674714
				],
				[
					4.31342971452159,
					-14.01864657219653
				],
				[
					4.31342971452159,
					-21.567148572609995
				],
				[
					4.31342971452159,
					-30.194008001653856
				],
				[
					3.235072285890965,
					-37.74251000206732
				],
				[
					3.235072285890965,
					-40.97758228795874
				],
				[
					2.1567148572612496,
					-47.447726859741806
				],
				[
					2.1567148572612496,
					-52.83951400289425
				],
				[
					1.0783574286306248,
					-56.07458628878567
				],
				[
					1.0783574286306248,
					-57.15294371741629
				],
				[
					0,
					-59.309658574677314
				],
				[
					0,
					-57.15294371741629
				],
				[
					0,
					-56.07458628878567
				],
				[
					0,
					-51.76115657426385
				],
				[
					1.0783574286306248,
					-46.36936943111141
				],
				[
					1.0783574286306248,
					-42.055939716589364
				],
				[
					3.235072285890965,
					-33.429080287545275
				],
				[
					4.31342971452159,
					-23.723863429871017
				],
				[
					7.548502000413464,
					-12.940289143566133
				],
				[
					8.626859429044089,
					-7.548502000413464
				],
				[
					10.783574286305338,
					3.2350722858914196
				],
				[
					14.018646572196303,
					14.018646572196303
				],
				[
					16.175361429457553,
					23.72386342987079
				],
				[
					17.253718858088178,
					28.037293144392606
				],
				[
					20.488791143979142,
					35.58579514480607
				],
				[
					22.645506001240392,
					42.05593971658914
				],
				[
					23.723863429871017,
					44.21265457385016
				],
				[
					23.723863429871017,
					44.21265457385016
				]
			],
			"pressures": [
				0.123046875,
				0.125,
				0.1328125,
				0.142578125,
				0.15625,
				0.205078125,
				0.255859375,
				0.314453125,
				0.3681640625,
				0.4091796875,
				0.423828125,
				0.443359375,
				0.455078125,
				0.4599609375,
				0.4677734375,
				0.474609375,
				0.482421875,
				0.486328125,
				0.4921875,
				0.4970703125,
				0.5009765625,
				0.501953125,
				0.5029296875,
				0.5029296875,
				0.5009765625,
				0.5,
				0.49609375,
				0.4912109375,
				0.484375,
				0.48046875,
				0.470703125,
				0.45703125,
				0.44921875,
				0.4345703125,
				0.4228515625,
				0.4140625,
				0.41015625,
				0.40625,
				0.4052734375,
				0.4072265625,
				0.408203125,
				0.4169921875,
				0.435546875,
				0.4619140625,
				0.4755859375,
				0.5029296875,
				0.5537109375,
				0.5625,
				0.578125,
				0.595703125,
				0.6044921875,
				0.6201171875,
				0.6328125,
				0.640625,
				0.64453125,
				0.6484375,
				0.650390625,
				0.646484375,
				0.638671875,
				0.6083984375,
				0.5458984375,
				0.5009765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				23.723863429871017,
				44.21265457385016
			]
		},
		{
			"id": "j8mC0zCvHPOpHrdty00Pe",
			"type": "freedraw",
			"x": 2611.838820708148,
			"y": 1593.1879355736394,
			"width": 115.38424486346275,
			"height": 106.7573854344189,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 972363751,
			"version": 46,
			"versionNonce": 1214988841,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.156714857261022
				],
				[
					-1.0783574286306248,
					-2.156714857261022
				],
				[
					-2.1567148572612496,
					-3.2350722858914196
				],
				[
					-3.2350722858918743,
					-4.313429714521817
				],
				[
					-5.391787143152669,
					-5.391787143152442
				],
				[
					-6.470144571783294,
					-5.391787143152442
				],
				[
					-10.783574286305338,
					-6.470144571782839
				],
				[
					-12.940289143566133,
					-6.470144571782839
				],
				[
					-20.488791143979597,
					-5.391787143152442
				],
				[
					-28.03729314439306,
					-4.313429714521817
				],
				[
					-36.66415257343715,
					0
				],
				[
					-42.055939716589364,
					2.156714857261022
				],
				[
					-50.68279914563345,
					8.626859429044089
				],
				[
					-60.38801600330771,
					16.175361429457553
				],
				[
					-63.623088289199586,
					21.567148572609995
				],
				[
					-71.17159028961305,
					32.35072285891488
				],
				[
					-75.48502000413464,
					43.13429714521976
				],
				[
					-76.56337743276526,
					54.99622886015527
				],
				[
					-76.56337743276526,
					60.38801600330771
				],
				[
					-74.40666257550447,
					71.17159028961282
				],
				[
					-70.09323286098243,
					81.9551645759177
				],
				[
					-63.623088289199586,
					89.50366657633117
				],
				[
					-59.30965857467754,
					92.73873886222259
				],
				[
					-50.68279914563345,
					97.05216857674463
				],
				[
					-38.820867430697945,
					98.13052600537503
				],
				[
					-26.958935715762436,
					94.89545371948361
				],
				[
					-20.488791143979597,
					92.73873886222259
				],
				[
					-6.470144571783294,
					86.26859429043975
				],
				[
					6.470144571782839,
					76.56337743276526
				],
				[
					18.332076286718348,
					64.70144571782976
				],
				[
					23.723863429870562,
					58.23130114604669
				],
				[
					32.35072285891465,
					46.36936943111141
				],
				[
					37.74251000206732,
					33.4290802875455
				],
				[
					38.82086743069749,
					28.037293144392834
				],
				[
					38.82086743069749,
					17.25371885808795
				],
				[
					34.507437716175446,
					7.548502000413464
				],
				[
					26.95893571576198,
					0
				],
				[
					22.645506001240392,
					-3.2350722858914196
				],
				[
					10.783574286304884,
					-6.470144571782839
				],
				[
					-1.0783574286306248,
					-8.626859429043861
				],
				[
					-14.018646572196758,
					-8.626859429043861
				],
				[
					-19.410433715348972,
					-8.626859429043861
				],
				[
					-19.410433715348972,
					-8.626859429043861
				]
			],
			"pressures": [
				0.3076171875,
				0.3203125,
				0.33203125,
				0.3671875,
				0.40234375,
				0.4306640625,
				0.44140625,
				0.4736328125,
				0.494140625,
				0.529296875,
				0.5537109375,
				0.572265625,
				0.58203125,
				0.6005859375,
				0.62109375,
				0.62890625,
				0.6435546875,
				0.65625,
				0.66796875,
				0.671875,
				0.677734375,
				0.6826171875,
				0.6865234375,
				0.6875,
				0.689453125,
				0.6923828125,
				0.6962890625,
				0.697265625,
				0.701171875,
				0.7060546875,
				0.7099609375,
				0.7119140625,
				0.71484375,
				0.7158203125,
				0.716796875,
				0.7158203125,
				0.7138671875,
				0.7080078125,
				0.7041015625,
				0.689453125,
				0.6572265625,
				0.5966796875,
				0.5498046875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-19.410433715348972,
				-8.626859429043861
			]
		},
		{
			"id": "NAE9oMRe_gRE0nF0_i05U",
			"type": "freedraw",
			"x": 2662.521619853781,
			"y": 1624.4603010039239,
			"width": 85.1902368618089,
			"height": 79.79844971865668,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 361230665,
			"version": 26,
			"versionNonce": 947917031,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					1.0783574286303974
				],
				[
					-2.156714857260795,
					2.156714857261022
				],
				[
					-3.2350722858914196,
					3.2350722858914196
				],
				[
					-4.313429714522044,
					4.313429714521817
				],
				[
					-5.391787143152214,
					5.391787143152442
				],
				[
					-6.470144571782839,
					7.548502000413464
				],
				[
					-8.626859429044089,
					10.783574286304884
				],
				[
					-10.783574286304884,
					14.018646572196303
				],
				[
					-11.861931714935508,
					16.175361429457325
				],
				[
					-11.861931714935508,
					19.410433715348745
				],
				[
					-11.861931714935508,
					20.48879114397937
				],
				[
					-10.783574286304884,
					20.48879114397937
				],
				[
					-9.705216857674259,
					20.48879114397937
				],
				[
					-4.313429714522044,
					17.25371885808795
				],
				[
					-1.0783574286306248,
					15.097004000826928
				],
				[
					6.470144571782839,
					7.548502000413464
				],
				[
					11.861931714935508,
					2.156714857261022
				],
				[
					23.723863429871017,
					-10.783574286305111
				],
				[
					37.74251000206732,
					-24.802220858501414
				],
				[
					51.76115657426362,
					-38.820867430697945
				],
				[
					59.30965857467709,
					-46.36936943111141
				],
				[
					73.32830514687339,
					-59.309658574677314
				],
				[
					73.32830514687339,
					-59.309658574677314
				]
			],
			"pressures": [
				0.37109375,
				0.3701171875,
				0.3798828125,
				0.3916015625,
				0.42578125,
				0.4443359375,
				0.474609375,
				0.5107421875,
				0.564453125,
				0.5908203125,
				0.6376953125,
				0.658203125,
				0.69921875,
				0.720703125,
				0.7578125,
				0.771484375,
				0.7900390625,
				0.79296875,
				0.7841796875,
				0.74609375,
				0.67578125,
				0.6298828125,
				0.509765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				73.32830514687339,
				-59.309658574677314
			]
		},
		{
			"id": "NpSkIEDmT4Ki9l8OQnpmS",
			"type": "freedraw",
			"x": 2812.4133024334196,
			"y": 1606.1282247172053,
			"width": 118.61931714935417,
			"height": 81.95516457591748,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 570937671,
			"version": 28,
			"versionNonce": 468915465,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286306248
				],
				[
					-1.0783574286306248,
					1.0783574286306248
				],
				[
					-1.0783574286306248,
					2.156714857261022
				],
				[
					-2.156714857260795,
					4.313429714522044
				],
				[
					-3.2350722858914196,
					6.470144571783067
				],
				[
					-4.31342971452159,
					9.705216857674486
				],
				[
					-5.391787143152214,
					11.861931714935508
				],
				[
					-6.470144571782839,
					14.01864657219653
				],
				[
					-7.548502000413464,
					19.410433715348972
				],
				[
					-7.548502000413464,
					21.567148572609995
				],
				[
					-5.391787143152214,
					22.645506001240392
				],
				[
					-3.2350722858914196,
					22.645506001240392
				],
				[
					2.1567148572612496,
					18.332076286718575
				],
				[
					9.705216857674714,
					11.861931714935508
				],
				[
					19.410433715348972,
					4.313429714522044
				],
				[
					24.80222085850164,
					-1.0783574286303974
				],
				[
					35.585795144806525,
					-11.861931714935281
				],
				[
					42.055939716589364,
					-16.175361429457325
				],
				[
					54.9962288601555,
					-26.95893571576221
				],
				[
					67.93651800372118,
					-36.664152573436695
				],
				[
					81.95516457591748,
					-45.291012002480784
				],
				[
					88.42530914770032,
					-48.5260842883722
				],
				[
					100.28724086263628,
					-54.99622886015504
				],
				[
					111.07081514894071,
					-59.30965857467709
				],
				[
					111.07081514894071,
					-59.30965857467709
				]
			],
			"pressures": [
				0.4453125,
				0.4443359375,
				0.4482421875,
				0.4580078125,
				0.47265625,
				0.5087890625,
				0.5390625,
				0.5595703125,
				0.5810546875,
				0.623046875,
				0.654296875,
				0.671875,
				0.6787109375,
				0.6904296875,
				0.697265625,
				0.69921875,
				0.69921875,
				0.6923828125,
				0.6845703125,
				0.6533203125,
				0.6005859375,
				0.537109375,
				0.5009765625,
				0.419921875,
				0.3359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				111.07081514894071,
				-59.30965857467709
			]
		},
		{
			"id": "eX2dsMGa7Y7ISi_QV0apd",
			"type": "freedraw",
			"x": 2968.775129584841,
			"y": 1597.5013652881614,
			"width": 94.89545371948407,
			"height": 49.60444171700283,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1050470409,
			"version": 21,
			"versionNonce": 540761095,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					1.0783574286303974
				],
				[
					3.2350722858918743,
					2.156714857261022
				],
				[
					3.2350722858918743,
					3.2350722858914196
				],
				[
					4.313429714522499,
					4.313429714522044
				],
				[
					4.313429714522499,
					6.470144571783067
				],
				[
					5.391787143153124,
					7.548502000413464
				],
				[
					5.391787143153124,
					8.626859429043861
				],
				[
					6.470144571783294,
					9.705216857674486
				],
				[
					7.548502000413464,
					10.783574286304884
				],
				[
					9.705216857674714,
					11.861931714935508
				],
				[
					15.097004000826928,
					10.783574286304884
				],
				[
					19.410433715349427,
					8.626859429043861
				],
				[
					24.80222085850164,
					6.470144571783067
				],
				[
					40.977582287959194,
					-3.2350722858914196
				],
				[
					51.76115657426408,
					-9.705216857674486
				],
				[
					78.72009229002651,
					-26.958935715762436
				],
				[
					94.89545371948407,
					-37.74251000206732
				],
				[
					94.89545371948407,
					-37.74251000206732
				]
			],
			"pressures": [
				0.224609375,
				0.224609375,
				0.2275390625,
				0.232421875,
				0.255859375,
				0.294921875,
				0.345703125,
				0.388671875,
				0.439453125,
				0.4970703125,
				0.5595703125,
				0.6845703125,
				0.7421875,
				0.79296875,
				0.87109375,
				0.892578125,
				0.87890625,
				0.833984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				94.89545371948407,
				-37.74251000206732
			]
		},
		{
			"id": "oc4DAKMnKJYFtSnov8y3r",
			"type": "freedraw",
			"x": 3312.7711493179695,
			"y": 1612.5983692889884,
			"width": 100.28724086263537,
			"height": 60.38801600330771,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 128590025,
			"version": 16,
			"versionNonce": 415075305,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.07835742863017,
					1.0783574286303974
				],
				[
					1.07835742863017,
					2.156714857261022
				],
				[
					2.15671485726034,
					3.2350722858914196
				],
				[
					3.235072285890965,
					3.2350722858914196
				],
				[
					4.31342971452159,
					3.2350722858914196
				],
				[
					6.470144571782839,
					2.156714857261022
				],
				[
					14.018646572196303,
					-2.156714857261022
				],
				[
					20.488791143979142,
					-6.470144571783067
				],
				[
					28.037293144392606,
					-11.861931714935508
				],
				[
					50.682799145633,
					-25.88057828713181
				],
				[
					81.95516457591748,
					-45.291012002480784
				],
				[
					100.28724086263537,
					-57.15294371741629
				],
				[
					100.28724086263537,
					-57.15294371741629
				]
			],
			"pressures": [
				0.6962890625,
				0.6962890625,
				0.6962890625,
				0.7001953125,
				0.7353515625,
				0.751953125,
				0.7705078125,
				0.814453125,
				0.837890625,
				0.8583984375,
				0.8828125,
				0.8583984375,
				0.8154296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				100.28724086263537,
				-57.15294371741629
			]
		},
		{
			"id": "6KPnpE_laS7li1orOSLe6",
			"type": "freedraw",
			"x": 3152.09589245202,
			"y": 1876.7959393034562,
			"width": 93.81709629085253,
			"height": 81.95516457591748,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1188439753,
			"version": 26,
			"versionNonce": 1880224711,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097167929,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.07835742863017,
					0
				],
				[
					2.15671485726034,
					0
				],
				[
					3.235072285890965,
					1.0783574286306248
				],
				[
					3.235072285890965,
					2.156714857261022
				],
				[
					2.15671485726034,
					3.2350722858914196
				],
				[
					2.15671485726034,
					4.313429714522044
				],
				[
					2.15671485726034,
					5.391787143152669
				],
				[
					1.07835742863017,
					7.548502000413464
				],
				[
					1.07835742863017,
					8.626859429044089
				],
				[
					2.15671485726034,
					10.783574286304884
				],
				[
					2.15671485726034,
					11.861931714935508
				],
				[
					4.31342971452159,
					11.861931714935508
				],
				[
					5.391787143152214,
					11.861931714935508
				],
				[
					8.626859429043634,
					10.783574286304884
				],
				[
					14.018646572196303,
					8.626859429044089
				],
				[
					16.175361429457098,
					6.470144571783067
				],
				[
					23.723863429870562,
					1.0783574286306248
				],
				[
					32.350722858914196,
					-6.470144571782839
				],
				[
					43.134297145219534,
					-16.175361429457325
				],
				[
					49.60444171700237,
					-22.645506001240392
				],
				[
					62.54473086056805,
					-36.664152573436695
				],
				[
					77.64173486139498,
					-52.83951400289425
				],
				[
					93.81709629085253,
					-70.09323286098197
				],
				[
					93.81709629085253,
					-70.09323286098197
				]
			],
			"pressures": [
				0.3330078125,
				0.337890625,
				0.3623046875,
				0.462890625,
				0.5205078125,
				0.55078125,
				0.564453125,
				0.5859375,
				0.6015625,
				0.607421875,
				0.6171875,
				0.626953125,
				0.6376953125,
				0.64453125,
				0.658203125,
				0.6708984375,
				0.6767578125,
				0.6845703125,
				0.6884765625,
				0.6875,
				0.6845703125,
				0.6689453125,
				0.6298828125,
				0.5556640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				93.81709629085253,
				-70.09323286098197
			]
		},
		{
			"id": "kFdMzPtG",
			"type": "text",
			"x": 3389.3345267507307,
			"y": 2093.17264188723,
			"width": 932,
			"height": 50,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1225609257,
			"version": 152,
			"versionNonce": 1259120967,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097232802,
			"link": null,
			"locked": false,
			"text": "More context switches occurring and since context switching incurs an overhead, this leads to\na poorer performing system",
			"rawText": "More context switches occurring and since context switching incurs an overhead, this leads to\na poorer performing system",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 43,
			"containerId": null,
			"originalText": "More context switches occurring and since context switching incurs an overhead, this leads to\na poorer performing system"
		},
		{
			"id": "7QZXBvTD4-sfNMmiyUOZC",
			"type": "freedraw",
			"x": 3931.7483133518704,
			"y": 2050.411485312966,
			"width": 161.7536142945737,
			"height": 81.9551645759177,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1559420009,
			"version": 33,
			"versionNonce": 771254889,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097241880,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					1.07835742863017
				],
				[
					-2.156714857260795,
					1.07835742863017
				],
				[
					-1.0783574286306248,
					1.07835742863017
				],
				[
					-1.0783574286306248,
					2.156714857260795
				],
				[
					0,
					2.156714857260795
				],
				[
					1.07835742863017,
					3.2350722858914196
				],
				[
					2.156714857260795,
					3.2350722858914196
				],
				[
					3.2350722858914196,
					4.31342971452159
				],
				[
					5.391787143152669,
					6.470144571782839
				],
				[
					7.548502000413464,
					7.548502000413464
				],
				[
					7.548502000413464,
					8.626859429043634
				],
				[
					9.705216857674259,
					10.783574286304884
				],
				[
					12.940289143566133,
					11.861931714935054
				],
				[
					14.018646572196303,
					12.940289143565678
				],
				[
					17.253718858087723,
					14.018646572196303
				],
				[
					20.488791143979597,
					14.018646572196303
				],
				[
					25.88057828713181,
					12.940289143565678
				],
				[
					29.11565057302323,
					11.861931714935054
				],
				[
					36.664152573436695,
					8.626859429043634
				],
				[
					46.369369431110954,
					4.31342971452159
				],
				[
					50.68279914563345,
					1.07835742863017
				],
				[
					62.54473086056851,
					-7.548502000413691
				],
				[
					76.56337743276481,
					-16.175361429457553
				],
				[
					90.58202400496157,
					-25.88057828713204
				],
				[
					98.13052600537503,
					-31.27236543028448
				],
				[
					113.22753000620196,
					-40.97758228795897
				],
				[
					128.3245340070289,
					-50.68279914563345
				],
				[
					142.3431805792252,
					-59.309658574677314
				],
				[
					148.81332515100848,
					-62.54473086056896
				],
				[
					159.5968994373129,
					-67.9365180037214
				],
				[
					159.5968994373129,
					-67.9365180037214
				]
			],
			"pressures": [
				0.244140625,
				0.23828125,
				0.234375,
				0.2802734375,
				0.2978515625,
				0.33984375,
				0.3857421875,
				0.4287109375,
				0.44921875,
				0.484375,
				0.51171875,
				0.5234375,
				0.5439453125,
				0.560546875,
				0.568359375,
				0.5830078125,
				0.5966796875,
				0.609375,
				0.6142578125,
				0.6220703125,
				0.626953125,
				0.62890625,
				0.6318359375,
				0.6298828125,
				0.6162109375,
				0.6044921875,
				0.5693359375,
				0.515625,
				0.4453125,
				0.4052734375,
				0.3173828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				159.5968994373129,
				-67.9365180037214
			]
		},
		{
			"id": "9s2d4DE28JNeKL0IVXeLx",
			"type": "freedraw",
			"x": 3279.342069030419,
			"y": 2442.933589334463,
			"width": 89.50366657633094,
			"height": 60.38801600330771,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 468225191,
			"version": 25,
			"versionNonce": 1913956903,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097302729,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					0
				],
				[
					2.1567148572612496,
					0
				],
				[
					3.2350722858914196,
					0
				],
				[
					4.313429714522044,
					0
				],
				[
					5.391787143152214,
					1.0783574286306248
				],
				[
					6.470144571782839,
					1.0783574286306248
				],
				[
					7.548502000413464,
					2.156714857260795
				],
				[
					7.548502000413464,
					3.2350722858914196
				],
				[
					7.548502000413464,
					4.313429714522044
				],
				[
					7.548502000413464,
					5.391787143152669
				],
				[
					8.626859429044089,
					5.391787143152669
				],
				[
					9.705216857674714,
					4.313429714522044
				],
				[
					10.783574286304884,
					4.313429714522044
				],
				[
					14.018646572196303,
					1.0783574286306248
				],
				[
					20.488791143979142,
					-3.2350722858914196
				],
				[
					23.723863429871017,
					-5.391787143152669
				],
				[
					33.429080287545275,
					-12.940289143566133
				],
				[
					44.21265457385016,
					-21.567148572609767
				],
				[
					57.15294371741629,
					-31.27236543028448
				],
				[
					63.62308828919913,
					-35.585795144806525
				],
				[
					77.64173486139589,
					-45.291012002480784
				],
				[
					89.50366657633094,
					-54.99622886015504
				],
				[
					89.50366657633094,
					-54.99622886015504
				]
			],
			"pressures": [
				0.119140625,
				0.24609375,
				0.3427734375,
				0.3876953125,
				0.4287109375,
				0.4951171875,
				0.509765625,
				0.5615234375,
				0.583984375,
				0.607421875,
				0.6220703125,
				0.6357421875,
				0.6455078125,
				0.650390625,
				0.6611328125,
				0.6689453125,
				0.671875,
				0.67578125,
				0.6787109375,
				0.6748046875,
				0.6669921875,
				0.630859375,
				0.5556640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				89.50366657633094,
				-54.99622886015504
			]
		},
		{
			"id": "aB7l_8qtSPkqcwXKRgzx9",
			"type": "freedraw",
			"x": 3166.1145390242173,
			"y": 2577.7282679132745,
			"width": 168.22375886635746,
			"height": 118.61931714935463,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1719644105,
			"version": 33,
			"versionNonce": 1237482953,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097303493,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					-1.07835742863017
				],
				[
					2.1567148572612496,
					-1.07835742863017
				],
				[
					3.2350722858914196,
					-1.07835742863017
				],
				[
					3.2350722858914196,
					0
				],
				[
					3.2350722858914196,
					1.0783574286306248
				],
				[
					3.2350722858914196,
					2.1567148572612496
				],
				[
					3.2350722858914196,
					4.313429714522044
				],
				[
					3.2350722858914196,
					7.548502000413464
				],
				[
					3.2350722858914196,
					8.626859429044089
				],
				[
					3.2350722858914196,
					10.783574286304884
				],
				[
					3.2350722858914196,
					14.018646572196758
				],
				[
					4.313429714522044,
					15.097004000826928
				],
				[
					4.313429714522044,
					16.175361429457553
				],
				[
					6.470144571782839,
					17.253718858088178
				],
				[
					9.705216857674714,
					16.175361429457553
				],
				[
					14.018646572196303,
					14.018646572196758
				],
				[
					17.253718858088178,
					11.861931714935508
				],
				[
					25.88057828713181,
					6.470144571783294
				],
				[
					35.58579514480607,
					-1.07835742863017
				],
				[
					40.97758228795874,
					-6.470144571782839
				],
				[
					53.91787143152487,
					-17.253718858087723
				],
				[
					67.93651800372118,
					-28.037293144392606
				],
				[
					83.0335220045481,
					-40.97758228795874
				],
				[
					90.58202400496157,
					-47.44772685974158
				],
				[
					105.6790280057885,
					-59.30965857467709
				],
				[
					121.85438943524605,
					-70.09323286098197
				],
				[
					135.87303600744235,
					-80.87680714728685
				],
				[
					143.42153800785582,
					-85.1902368618089
				],
				[
					156.3618271514215,
					-93.81709629085299
				],
				[
					168.22375886635746,
					-101.36559829126645
				],
				[
					168.22375886635746,
					-101.36559829126645
				]
			],
			"pressures": [
				0.2001953125,
				0.2001953125,
				0.21875,
				0.2744140625,
				0.3515625,
				0.3916015625,
				0.412109375,
				0.44921875,
				0.478515625,
				0.4912109375,
				0.5126953125,
				0.53125,
				0.5498046875,
				0.560546875,
				0.583984375,
				0.6103515625,
				0.638671875,
				0.650390625,
				0.6708984375,
				0.68359375,
				0.6865234375,
				0.685546875,
				0.6728515625,
				0.6484375,
				0.630859375,
				0.5859375,
				0.5322265625,
				0.4755859375,
				0.447265625,
				0.3876953125,
				0.32421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				168.22375886635746,
				-101.36559829126645
			]
		},
		{
			"id": "WIfElnwLmwwOd4t0URYAI",
			"type": "freedraw",
			"x": 3773.2297713431853,
			"y": 2477.4410270506387,
			"width": 0.0001,
			"height": 0.0001,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 134471495,
			"version": 3,
			"versionNonce": 1056333415,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673097481958,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0.0001,
					0.0001
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				0.0001,
				0.0001
			]
		},
		{
			"id": "MJLsK54cNJDJFJlBPnVv7",
			"type": "text",
			"x": 2512.2902806405955,
			"y": 255.42042746888285,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1733741223,
			"version": 17,
			"versionNonce": 686923559,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		},
		{
			"id": "TEP12BX26e6gVFH_prTyd",
			"type": "text",
			"x": 869.1261156486896,
			"y": 851.52721484412,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 63447625,
			"version": 17,
			"versionNonce": 1339591369,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		},
		{
			"id": "vs_W8eAiEQh_XuDBZouW5",
			"type": "text",
			"x": 2710.461611281662,
			"y": 1592.957742847491,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 224156457,
			"version": 17,
			"versionNonce": 534848071,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		},
		{
			"id": "QZNJBLj7UiXK5gujF9qc6",
			"type": "text",
			"x": 2781.711611281662,
			"y": 1611.707742847491,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1019123817,
			"version": 17,
			"versionNonce": 602818985,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		},
		{
			"id": "Kz62JmlAi6X15hIjYvS5u",
			"type": "text",
			"x": 2809.211611281662,
			"y": 1610.457742847491,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 2145471495,
			"version": 17,
			"versionNonce": 271794535,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		},
		{
			"id": "yenP94CmYWzCg3VsZNlbT",
			"type": "text",
			"x": 2914.211611281662,
			"y": 1834.207742847491,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 71910089,
			"version": 17,
			"versionNonce": 816393353,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		},
		{
			"id": "9_SPFcg8S2bvzmf4fMuTx",
			"type": "freedraw",
			"x": 539.8026671934118,
			"y": -42.59933154830631,
			"width": 17.722031282306034,
			"height": 64.44375011747661,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1436722375,
			"version": 46,
			"versionNonce": 1798601863,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0.8055468764684974,
					4.027734382342288
				],
				[
					0.8055468764684974,
					4.833281258810757
				],
				[
					0.8055468764684974,
					5.638828135279198
				],
				[
					1.6110937529367675,
					8.055468764684576
				],
				[
					1.6110937529367675,
					10.472109394089955
				],
				[
					2.416640629405265,
					12.083203147026865
				],
				[
					3.2221875058737623,
					14.499843776432243
				],
				[
					4.02773438234226,
					16.916484405837622
				],
				[
					4.02773438234226,
					19.333125035242972
				],
				[
					4.833281258810757,
					20.94421878817991
				],
				[
					5.638828135279255,
					23.36085941758526
				],
				[
					6.444375011747525,
					27.38859379992755
				],
				[
					7.249921888216022,
					31.416328182269865
				],
				[
					8.861015641153017,
					36.249609441080594
				],
				[
					9.666562517621514,
					40.27734382342288
				],
				[
					11.277656270558282,
					45.11062508223364
				],
				[
					12.888750023495277,
					49.13835946457593
				],
				[
					14.499843776432272,
					52.36054697044975
				],
				[
					15.305390652900769,
					55.582734476323594
				],
				[
					16.11093752936904,
					57.193828229260504
				],
				[
					16.916484405837537,
					58.80492198219741
				],
				[
					17.722031282306034,
					60.41601573513432
				],
				[
					17.722031282306034,
					61.22156261160279
				],
				[
					17.722031282306034,
					62.02710948807126
				],
				[
					17.722031282306034,
					62.8326563645397
				],
				[
					17.722031282306034,
					63.63820324100817
				],
				[
					17.722031282306034,
					64.44375011747661
				],
				[
					16.916484405837537,
					64.44375011747661
				],
				[
					16.11093752936904,
					64.44375011747661
				],
				[
					16.11093752936904,
					64.44375011747661
				]
			],
			"pressures": [],
			"simulatePressure": true,
			"lastCommittedPoint": [
				16.11093752936904,
				64.44375011747661
			]
		},
		{
			"id": "HSTUEMTVuh6ZmNDkg5WRj",
			"type": "freedraw",
			"x": 1613.279841796307,
			"y": 2834.3773359273405,
			"width": 58.23130114604669,
			"height": 43.13429714521999,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1020837385,
			"version": 133,
			"versionNonce": 1841607529,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.0783574286306248
				],
				[
					1.0783574286306248,
					-1.0783574286306248
				],
				[
					1.0783574286306248,
					-2.156714857260795
				],
				[
					1.0783574286306248,
					-3.2350722858914196
				],
				[
					1.0783574286306248,
					-4.313429714522044
				],
				[
					2.156714857261022,
					-4.313429714522044
				],
				[
					2.156714857261022,
					-5.391787143152214
				],
				[
					3.235072285891647,
					-4.313429714522044
				],
				[
					3.235072285891647,
					-3.2350722858914196
				],
				[
					3.235072285891647,
					-1.0783574286306248
				],
				[
					3.235072285891647,
					1.0783574286306248
				],
				[
					3.235072285891647,
					2.1567148572612496
				],
				[
					4.313429714522044,
					4.313429714522044
				],
				[
					4.313429714522044,
					7.548502000413464
				],
				[
					4.313429714522044,
					9.705216857674714
				],
				[
					4.313429714522044,
					10.783574286304884
				],
				[
					3.235072285891647,
					14.018646572196303
				],
				[
					3.235072285891647,
					16.175361429457553
				],
				[
					3.235072285891647,
					18.332076286718348
				],
				[
					2.156714857261022,
					19.410433715348972
				],
				[
					1.0783574286306248,
					20.488791143979597
				],
				[
					1.0783574286306248,
					19.410433715348972
				],
				[
					0,
					19.410433715348972
				],
				[
					0,
					17.253718858088178
				],
				[
					-1.0783574286303974,
					14.018646572196303
				],
				[
					-1.0783574286303974,
					11.861931714935508
				],
				[
					-1.0783574286303974,
					7.548502000413464
				],
				[
					0,
					3.2350722858914196
				],
				[
					0,
					-2.156714857260795
				],
				[
					1.0783574286306248,
					-4.313429714522044
				],
				[
					2.156714857261022,
					-8.626859429044089
				],
				[
					4.313429714522044,
					-12.940289143565678
				],
				[
					5.391787143152442,
					-16.175361429457553
				],
				[
					6.470144571783067,
					-18.332076286718348
				],
				[
					7.548502000413464,
					-20.488791143979142
				],
				[
					9.705216857674486,
					-21.567148572609767
				],
				[
					10.783574286305111,
					-22.645506001240392
				],
				[
					11.861931714935508,
					-22.645506001240392
				],
				[
					12.940289143565906,
					-22.645506001240392
				],
				[
					14.01864657219653,
					-22.645506001240392
				],
				[
					15.097004000826928,
					-21.567148572609767
				],
				[
					16.175361429457553,
					-20.488791143979142
				],
				[
					16.175361429457553,
					-18.332076286718348
				],
				[
					17.25371885808795,
					-18.332076286718348
				],
				[
					17.25371885808795,
					-16.175361429457553
				],
				[
					17.25371885808795,
					-15.097004000826928
				],
				[
					16.175361429457553,
					-12.940289143565678
				],
				[
					15.097004000826928,
					-11.861931714935508
				],
				[
					15.097004000826928,
					-10.783574286304884
				],
				[
					14.01864657219653,
					-10.783574286304884
				],
				[
					12.940289143565906,
					-9.705216857674259
				],
				[
					11.861931714935508,
					-9.705216857674259
				],
				[
					10.783574286305111,
					-9.705216857674259
				],
				[
					10.783574286305111,
					-8.626859429044089
				],
				[
					9.705216857674486,
					-8.626859429044089
				],
				[
					10.783574286305111,
					-8.626859429044089
				],
				[
					11.861931714935508,
					-8.626859429044089
				],
				[
					12.940289143565906,
					-8.626859429044089
				],
				[
					15.097004000826928,
					-7.548502000413464
				],
				[
					16.175361429457553,
					-7.548502000413464
				],
				[
					17.25371885808795,
					-7.548502000413464
				],
				[
					19.410433715348972,
					-6.470144571782839
				],
				[
					21.567148572609995,
					-5.391787143152214
				],
				[
					22.645506001240392,
					-4.313429714522044
				],
				[
					23.723863429871017,
					-4.313429714522044
				],
				[
					24.802220858501414,
					-2.156714857260795
				],
				[
					25.88057828713181,
					-1.0783574286306248
				],
				[
					25.88057828713181,
					1.0783574286306248
				],
				[
					25.88057828713181,
					2.1567148572612496
				],
				[
					25.88057828713181,
					3.2350722858914196
				],
				[
					25.88057828713181,
					4.313429714522044
				],
				[
					25.88057828713181,
					5.391787143152669
				],
				[
					25.88057828713181,
					6.470144571782839
				],
				[
					25.88057828713181,
					5.391787143152669
				],
				[
					26.958935715762436,
					5.391787143152669
				],
				[
					26.958935715762436,
					4.313429714522044
				],
				[
					26.958935715762436,
					3.2350722858914196
				],
				[
					26.958935715762436,
					2.1567148572612496
				],
				[
					26.958935715762436,
					1.0783574286306248
				],
				[
					28.037293144392834,
					1.0783574286306248
				],
				[
					28.037293144392834,
					0
				],
				[
					29.11565057302346,
					-1.0783574286306248
				],
				[
					30.194008001653856,
					-2.156714857260795
				],
				[
					31.27236543028448,
					-3.2350722858914196
				],
				[
					33.429080287545275,
					-4.313429714522044
				],
				[
					33.429080287545275,
					-5.391787143152214
				],
				[
					34.5074377161759,
					-5.391787143152214
				],
				[
					35.5857951448063,
					-6.470144571782839
				],
				[
					36.66415257343692,
					-6.470144571782839
				],
				[
					37.74251000206732,
					-7.548502000413464
				],
				[
					38.820867430697945,
					-7.548502000413464
				],
				[
					38.820867430697945,
					-6.470144571782839
				],
				[
					38.820867430697945,
					-5.391787143152214
				],
				[
					38.820867430697945,
					-4.313429714522044
				],
				[
					38.820867430697945,
					-3.2350722858914196
				],
				[
					38.820867430697945,
					-2.156714857260795
				],
				[
					38.820867430697945,
					0
				],
				[
					38.820867430697945,
					2.1567148572612496
				],
				[
					39.89922485932834,
					3.2350722858914196
				],
				[
					39.89922485932834,
					5.391787143152669
				],
				[
					40.97758228795874,
					7.548502000413464
				],
				[
					43.13429714521976,
					9.705216857674714
				],
				[
					45.291012002480784,
					10.783574286304884
				],
				[
					47.447726859741806,
					11.861931714935508
				],
				[
					49.60444171700283,
					11.861931714935508
				],
				[
					50.682799145633226,
					11.861931714935508
				],
				[
					52.83951400289425,
					10.783574286304884
				],
				[
					53.91787143152487,
					9.705216857674714
				],
				[
					56.07458628878567,
					7.548502000413464
				],
				[
					56.07458628878567,
					6.470144571782839
				],
				[
					57.15294371741629,
					3.2350722858914196
				],
				[
					57.15294371741629,
					1.0783574286306248
				],
				[
					57.15294371741629,
					-1.0783574286306248
				],
				[
					56.07458628878567,
					-2.156714857260795
				],
				[
					54.99622886015527,
					-4.313429714522044
				],
				[
					53.91787143152487,
					-6.470144571782839
				],
				[
					52.83951400289425,
					-7.548502000413464
				],
				[
					52.83951400289425,
					-7.548502000413464
				]
			],
			"pressures": [
				0.142578125,
				0.1455078125,
				0.16015625,
				0.1748046875,
				0.2265625,
				0.3056640625,
				0.3359375,
				0.3671875,
				0.546875,
				0.564453125,
				0.576171875,
				0.58203125,
				0.583984375,
				0.5869140625,
				0.5888671875,
				0.5908203125,
				0.5908203125,
				0.591796875,
				0.59375,
				0.5947265625,
				0.5947265625,
				0.59375,
				0.591796875,
				0.5908203125,
				0.587890625,
				0.5859375,
				0.5859375,
				0.5849609375,
				0.583984375,
				0.583984375,
				0.5849609375,
				0.5849609375,
				0.5849609375,
				0.583984375,
				0.5830078125,
				0.5810546875,
				0.578125,
				0.576171875,
				0.576171875,
				0.576171875,
				0.5791015625,
				0.5849609375,
				0.5966796875,
				0.6123046875,
				0.62109375,
				0.6416015625,
				0.6513671875,
				0.6728515625,
				0.6845703125,
				0.6865234375,
				0.6875,
				0.6884765625,
				0.6826171875,
				0.666015625,
				0.65234375,
				0.5888671875,
				0.46875,
				0.35546875,
				0.333984375,
				0.2890625,
				0.279296875,
				0.26953125,
				0.267578125,
				0.2666015625,
				0.2666015625,
				0.2666015625,
				0.26953125,
				0.27734375,
				0.2919921875,
				0.30078125,
				0.3212890625,
				0.3330078125,
				0.359375,
				0.3828125,
				0.421875,
				0.4208984375,
				0.419921875,
				0.419921875,
				0.4208984375,
				0.4208984375,
				0.419921875,
				0.416015625,
				0.404296875,
				0.384765625,
				0.3525390625,
				0.3232421875,
				0.31640625,
				0.3115234375,
				0.3046875,
				0.298828125,
				0.2939453125,
				0.2880859375,
				0.2841796875,
				0.28125,
				0.279296875,
				0.279296875,
				0.279296875,
				0.279296875,
				0.2783203125,
				0.2783203125,
				0.2783203125,
				0.2783203125,
				0.27734375,
				0.283203125,
				0.2939453125,
				0.3125,
				0.32421875,
				0.353515625,
				0.369140625,
				0.4169921875,
				0.4296875,
				0.4501953125,
				0.462890625,
				0.46875,
				0.4697265625,
				0.4619140625,
				0.4345703125,
				0.412109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				52.83951400289425,
				-7.548502000413464
			]
		},
		{
			"id": "6nGr1IAuZmcDw9EGDH3Ey",
			"type": "freedraw",
			"x": 1684.4514320859196,
			"y": 2823.5937616410356,
			"width": 15.097004000826928,
			"height": 22.645506001240392,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 105906825,
			"version": 50,
			"versionNonce": 1151423399,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286303974,
					0
				],
				[
					-2.156714857260795,
					1.0783574286306248
				],
				[
					-3.2350722858914196,
					1.0783574286306248
				],
				[
					-3.2350722858914196,
					2.156714857260795
				],
				[
					-4.313429714521817,
					3.2350722858914196
				],
				[
					-5.391787143152442,
					3.2350722858914196
				],
				[
					-6.470144571782839,
					5.391787143152669
				],
				[
					-7.548502000413464,
					6.470144571782839
				],
				[
					-7.548502000413464,
					8.626859429044089
				],
				[
					-7.548502000413464,
					9.705216857674259
				],
				[
					-7.548502000413464,
					11.861931714935508
				],
				[
					-7.548502000413464,
					14.018646572196303
				],
				[
					-7.548502000413464,
					15.097004000826928
				],
				[
					-6.470144571782839,
					17.253718858087723
				],
				[
					-5.391787143152442,
					18.332076286718348
				],
				[
					-3.2350722858914196,
					19.410433715348972
				],
				[
					-2.156714857260795,
					19.410433715348972
				],
				[
					-1.0783574286303974,
					19.410433715348972
				],
				[
					1.0783574286306248,
					19.410433715348972
				],
				[
					3.235072285891647,
					18.332076286718348
				],
				[
					3.235072285891647,
					17.253718858087723
				],
				[
					4.313429714522044,
					16.175361429457553
				],
				[
					5.391787143152669,
					15.097004000826928
				],
				[
					6.470144571783067,
					12.940289143566133
				],
				[
					6.470144571783067,
					11.861931714935508
				],
				[
					7.548502000413464,
					9.705216857674259
				],
				[
					6.470144571783067,
					7.548502000413464
				],
				[
					6.470144571783067,
					5.391787143152669
				],
				[
					6.470144571783067,
					4.313429714522044
				],
				[
					5.391787143152669,
					2.156714857260795
				],
				[
					4.313429714522044,
					0
				],
				[
					4.313429714522044,
					-1.0783574286306248
				],
				[
					3.235072285891647,
					-2.156714857260795
				],
				[
					3.235072285891647,
					-3.2350722858914196
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.14453125,
				0.150390625,
				0.166015625,
				0.1826171875,
				0.1875,
				0.2060546875,
				0.2158203125,
				0.234375,
				0.2509765625,
				0.2646484375,
				0.26953125,
				0.27734375,
				0.2802734375,
				0.2822265625,
				0.2841796875,
				0.287109375,
				0.29296875,
				0.296875,
				0.3056640625,
				0.3154296875,
				0.328125,
				0.333984375,
				0.34375,
				0.3486328125,
				0.359375,
				0.361328125,
				0.3642578125,
				0.3642578125,
				0.35546875,
				0.345703125,
				0.3193359375,
				0.28125,
				0.2587890625,
				0.2353515625,
				0.1845703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3.235072285891647,
				-3.2350722858914196
			]
		},
		{
			"id": "A8U_6pv-SfWLiz00-1RDY",
			"type": "freedraw",
			"x": 1693.0782915149637,
			"y": 2800.948255639795,
			"width": 7.548502000413464,
			"height": 49.60444171700283,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1504334121,
			"version": 35,
			"versionNonce": 1334599241,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286303974,
					0
				],
				[
					1.0783574286303974,
					1.0783574286306248
				],
				[
					1.0783574286303974,
					2.156714857260795
				],
				[
					2.156714857261022,
					3.2350722858914196
				],
				[
					2.156714857261022,
					4.313429714522044
				],
				[
					2.156714857261022,
					7.548502000413464
				],
				[
					2.156714857261022,
					10.783574286304884
				],
				[
					2.156714857261022,
					14.018646572196303
				],
				[
					2.156714857261022,
					16.175361429457553
				],
				[
					2.156714857261022,
					21.567148572609767
				],
				[
					2.156714857261022,
					25.88057828713181
				],
				[
					2.156714857261022,
					31.27236543028448
				],
				[
					2.156714857261022,
					33.429080287545275
				],
				[
					2.156714857261022,
					37.74251000206732
				],
				[
					3.2350722858914196,
					40.97758228795874
				],
				[
					3.2350722858914196,
					44.21265457385016
				],
				[
					4.313429714522044,
					46.36936943111141
				],
				[
					4.313429714522044,
					47.44772685974158
				],
				[
					5.391787143152442,
					49.60444171700283
				],
				[
					6.470144571782839,
					49.60444171700283
				],
				[
					7.548502000413464,
					49.60444171700283
				],
				[
					7.548502000413464,
					49.60444171700283
				]
			],
			"pressures": [
				0.072265625,
				0.087890625,
				0.16796875,
				0.189453125,
				0.2333984375,
				0.255859375,
				0.2998046875,
				0.3447265625,
				0.3896484375,
				0.4111328125,
				0.451171875,
				0.482421875,
				0.50390625,
				0.51171875,
				0.5224609375,
				0.52734375,
				0.5263671875,
				0.5244140625,
				0.5205078125,
				0.4873046875,
				0.46484375,
				0.4345703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7.548502000413464,
				49.60444171700283
			]
		},
		{
			"id": "7g4J7WnaY_NwfQ9MwckzP",
			"type": "freedraw",
			"x": 4248.78539736924,
			"y": 1308.5015744151895,
			"width": 24.80222085850164,
			"height": 50.682799145633226,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 958960903,
			"version": 71,
			"versionNonce": 1795343689,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					0
				],
				[
					-1.0783574286306248,
					1.0783574286306248
				],
				[
					-2.1567148572612496,
					1.0783574286306248
				],
				[
					-2.1567148572612496,
					2.156714857261022
				],
				[
					-2.1567148572612496,
					3.2350722858914196
				],
				[
					-1.0783574286306248,
					4.313429714522044
				],
				[
					0,
					6.470144571783067
				],
				[
					1.0783574286306248,
					8.626859429043861
				],
				[
					1.0783574286306248,
					11.861931714935508
				],
				[
					2.1567148572612496,
					12.940289143565906
				],
				[
					3.2350722858918743,
					17.25371885808795
				],
				[
					3.2350722858918743,
					20.48879114397937
				],
				[
					4.313429714522499,
					22.645506001240392
				],
				[
					4.313429714522499,
					26.958935715762436
				],
				[
					4.313429714522499,
					31.272365430284253
				],
				[
					4.313429714522499,
					33.429080287545275
				],
				[
					4.313429714522499,
					36.66415257343692
				],
				[
					4.313429714522499,
					38.82086743069772
				],
				[
					4.313429714522499,
					40.97758228795874
				],
				[
					4.313429714522499,
					42.055939716589364
				],
				[
					4.313429714522499,
					40.97758228795874
				],
				[
					4.313429714522499,
					38.82086743069772
				],
				[
					3.2350722858918743,
					34.5074377161759
				],
				[
					3.2350722858918743,
					33.429080287545275
				],
				[
					2.1567148572612496,
					28.037293144392834
				],
				[
					2.1567148572612496,
					25.88057828713181
				],
				[
					2.1567148572612496,
					19.410433715348972
				],
				[
					1.0783574286306248,
					14.01864657219653
				],
				[
					1.0783574286306248,
					10.783574286304884
				],
				[
					2.1567148572612496,
					5.391787143152442
				],
				[
					2.1567148572612496,
					1.0783574286306248
				],
				[
					3.2350722858918743,
					-3.2350722858914196
				],
				[
					3.2350722858918743,
					-4.313429714521817
				],
				[
					4.313429714522499,
					-6.470144571782839
				],
				[
					5.391787143152214,
					-7.548502000413464
				],
				[
					7.548502000413464,
					-8.626859429043861
				],
				[
					8.626859429044089,
					-8.626859429043861
				],
				[
					9.705216857674714,
					-8.626859429043861
				],
				[
					10.783574286304429,
					-8.626859429043861
				],
				[
					12.940289143565678,
					-7.548502000413464
				],
				[
					15.097004000826928,
					-6.470144571782839
				],
				[
					17.253718858088178,
					-5.391787143152442
				],
				[
					18.332076286718802,
					-4.313429714521817
				],
				[
					19.410433715349427,
					-4.313429714521817
				],
				[
					20.488791143979142,
					-2.156714857261022
				],
				[
					21.567148572609767,
					-2.156714857261022
				],
				[
					21.567148572609767,
					-1.0783574286303974
				],
				[
					22.645506001240392,
					0
				],
				[
					22.645506001240392,
					1.0783574286306248
				],
				[
					21.567148572609767,
					3.2350722858914196
				],
				[
					20.488791143979142,
					3.2350722858914196
				],
				[
					19.410433715349427,
					4.313429714522044
				],
				[
					18.332076286718802,
					5.391787143152442
				],
				[
					16.175361429457553,
					6.470144571783067
				],
				[
					14.018646572196303,
					8.626859429043861
				],
				[
					11.861931714935054,
					9.705216857674486
				],
				[
					10.783574286304429,
					10.783574286304884
				],
				[
					9.705216857674714,
					11.861931714935508
				],
				[
					9.705216857674714,
					11.861931714935508
				]
			],
			"pressures": [
				0.2548828125,
				0.259765625,
				0.2890625,
				0.3935546875,
				0.4423828125,
				0.5205078125,
				0.5517578125,
				0.5869140625,
				0.6025390625,
				0.6142578125,
				0.619140625,
				0.630859375,
				0.6416015625,
				0.646484375,
				0.6552734375,
				0.6630859375,
				0.666015625,
				0.671875,
				0.6787109375,
				0.6875,
				0.69140625,
				0.705078125,
				0.7099609375,
				0.7099609375,
				0.7099609375,
				0.7099609375,
				0.7099609375,
				0.708984375,
				0.7060546875,
				0.705078125,
				0.7021484375,
				0.701171875,
				0.7001953125,
				0.7001953125,
				0.7001953125,
				0.7001953125,
				0.7001953125,
				0.69921875,
				0.69921875,
				0.69921875,
				0.7001953125,
				0.7060546875,
				0.71875,
				0.728515625,
				0.740234375,
				0.7685546875,
				0.7841796875,
				0.80078125,
				0.818359375,
				0.849609375,
				0.8798828125,
				0.8857421875,
				0.890625,
				0.8935546875,
				0.8896484375,
				0.8671875,
				0.818359375,
				0.77734375,
				0.724609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9.705216857674714,
				11.861931714935508
			]
		},
		{
			"id": "vLXrxX2zWnwlWo3WQtKJY",
			"type": "freedraw",
			"x": 4165.751875364692,
			"y": 1491.8223372823736,
			"width": 32.350722858915105,
			"height": 56.07458628878567,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 882501449,
			"version": 38,
			"versionNonce": 1432798985,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.156714857261022
				],
				[
					0,
					-3.2350722858914196
				],
				[
					0,
					-4.313429714522044
				],
				[
					-1.0783574286306248,
					-4.313429714522044
				],
				[
					-2.1567148572612496,
					-4.313429714522044
				],
				[
					-3.235072285890965,
					-4.313429714522044
				],
				[
					-6.470144571782839,
					-3.2350722858914196
				],
				[
					-8.626859429044089,
					-3.2350722858914196
				],
				[
					-11.861931714935054,
					0
				],
				[
					-16.175361429457553,
					3.2350722858914196
				],
				[
					-20.488791143979142,
					8.626859429043861
				],
				[
					-22.645506001240392,
					10.783574286304884
				],
				[
					-25.880578287132266,
					17.253718858087723
				],
				[
					-28.037293144392606,
					23.72386342987079
				],
				[
					-29.11565057302323,
					30.194008001653856
				],
				[
					-29.11565057302323,
					33.429080287545275
				],
				[
					-29.11565057302323,
					36.664152573436695
				],
				[
					-28.037293144392606,
					42.05593971658914
				],
				[
					-24.80222085850164,
					46.36936943111118
				],
				[
					-22.645506001240392,
					47.44772685974158
				],
				[
					-18.332076286717893,
					50.682799145633226
				],
				[
					-12.940289143565678,
					51.76115657426362
				],
				[
					-9.705216857674714,
					51.76115657426362
				],
				[
					-4.31342971452159,
					50.682799145633226
				],
				[
					1.0783574286306248,
					47.44772685974158
				],
				[
					3.2350722858918743,
					46.36936943111118
				],
				[
					3.2350722858918743,
					46.36936943111118
				]
			],
			"pressures": [
				0.2958984375,
				0.3046875,
				0.326171875,
				0.3818359375,
				0.400390625,
				0.431640625,
				0.4755859375,
				0.5341796875,
				0.560546875,
				0.6064453125,
				0.6474609375,
				0.68359375,
				0.69921875,
				0.72265625,
				0.7392578125,
				0.748046875,
				0.7509765625,
				0.7529296875,
				0.75390625,
				0.751953125,
				0.748046875,
				0.7333984375,
				0.7041015625,
				0.6806640625,
				0.609375,
				0.5087890625,
				0.44921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3.2350722858918743,
				46.36936943111118
			]
		},
		{
			"id": "lcGMSft7jRofABlwv_rvo",
			"type": "freedraw",
			"x": 4186.240666508671,
			"y": 1478.8820481388075,
			"width": 22.6455060012413,
			"height": 67.93651800372118,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 478827911,
			"version": 50,
			"versionNonce": 781437447,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					0
				],
				[
					-1.0783574286306248,
					1.0783574286306248
				],
				[
					-1.0783574286306248,
					2.1567148572612496
				],
				[
					-1.0783574286306248,
					4.313429714522044
				],
				[
					-1.0783574286306248,
					5.391787143152669
				],
				[
					-1.0783574286306248,
					8.626859429044089
				],
				[
					-1.0783574286306248,
					14.01864657219653
				],
				[
					-1.0783574286306248,
					19.410433715348972
				],
				[
					0,
					22.645506001240392
				],
				[
					0,
					30.194008001653856
				],
				[
					1.0783574286306248,
					37.74251000206732
				],
				[
					2.1567148572612496,
					44.212654573850386
				],
				[
					2.1567148572612496,
					47.447726859741806
				],
				[
					3.2350722858918743,
					53.91787143152487
				],
				[
					4.313429714522499,
					59.309658574677314
				],
				[
					5.391787143153124,
					62.544730860568734
				],
				[
					5.391787143153124,
					64.70144571782976
				],
				[
					6.470144571783749,
					66.85816057509078
				],
				[
					7.548502000413464,
					67.93651800372118
				],
				[
					8.626859429044089,
					66.85816057509078
				],
				[
					11.861931714935963,
					63.62308828919936
				],
				[
					11.861931714935963,
					62.544730860568734
				],
				[
					12.940289143566588,
					60.38801600330771
				],
				[
					15.097004000826928,
					57.15294371741629
				],
				[
					16.175361429457553,
					52.83951400289425
				],
				[
					17.253718858088178,
					49.60444171700283
				],
				[
					18.332076286718802,
					47.447726859741806
				],
				[
					18.332076286718802,
					45.291012002480784
				],
				[
					19.410433715349427,
					43.13429714521999
				],
				[
					20.488791143980052,
					43.13429714521999
				],
				[
					20.488791143980052,
					44.212654573850386
				],
				[
					20.488791143980052,
					46.36936943111141
				],
				[
					20.488791143980052,
					48.52608428837243
				],
				[
					20.488791143980052,
					49.60444171700283
				],
				[
					20.488791143980052,
					52.83951400289425
				],
				[
					20.488791143980052,
					57.15294371741629
				],
				[
					20.488791143980052,
					58.23130114604692
				],
				[
					20.488791143980052,
					61.46637343193834
				],
				[
					21.567148572610677,
					61.46637343193834
				],
				[
					21.567148572610677,
					61.46637343193834
				]
			],
			"pressures": [
				0.1943359375,
				0.2177734375,
				0.2314453125,
				0.2646484375,
				0.32421875,
				0.345703125,
				0.421875,
				0.5,
				0.568359375,
				0.5966796875,
				0.6416015625,
				0.6708984375,
				0.685546875,
				0.689453125,
				0.6953125,
				0.6943359375,
				0.6865234375,
				0.6806640625,
				0.6640625,
				0.634765625,
				0.568359375,
				0.48828125,
				0.4609375,
				0.4345703125,
				0.3896484375,
				0.3583984375,
				0.3408203125,
				0.3369140625,
				0.3359375,
				0.34375,
				0.37890625,
				0.388671875,
				0.4091796875,
				0.4267578125,
				0.43359375,
				0.4423828125,
				0.4423828125,
				0.435546875,
				0.4033203125,
				0.3759765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				21.567148572610677,
				61.46637343193834
			]
		},
		{
			"id": "wEGiY2MwpKmw7GANAwih5",
			"type": "freedraw",
			"x": 4207.807815081282,
			"y": 1500.4491967114175,
			"width": 1.0783574286306248,
			"height": 6.470144571783067,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1927697191,
			"version": 15,
			"versionNonce": 216727017,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.156714857261022
				],
				[
					-1.0783574286306248,
					-4.313429714521817
				],
				[
					-1.0783574286306248,
					-5.391787143152442
				],
				[
					-1.0783574286306248,
					-6.470144571783067
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.2412109375,
				0.248046875,
				0.2578125,
				0.2666015625,
				0.2685546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1.0783574286306248,
				-6.470144571783067
			]
		},
		{
			"id": "A4ozVX0X1eXAJ9YTI_jFA",
			"type": "freedraw",
			"x": 4227.21824879663,
			"y": 1518.7812729981358,
			"width": 3.235072285890965,
			"height": 22.645506001240392,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 614205351,
			"version": 23,
			"versionNonce": 1236988199,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.0783574286306248
				],
				[
					0,
					2.156714857261022
				],
				[
					0,
					3.235072285891647
				],
				[
					0,
					4.313429714522044
				],
				[
					0,
					6.470144571783067
				],
				[
					0,
					9.705216857674486
				],
				[
					0,
					11.861931714935508
				],
				[
					0,
					15.097004000826928
				],
				[
					0,
					16.175361429457553
				],
				[
					1.0783574286306248,
					18.332076286718575
				],
				[
					1.0783574286306248,
					20.48879114397937
				],
				[
					2.15671485726034,
					21.567148572609995
				],
				[
					2.15671485726034,
					22.645506001240392
				],
				[
					3.235072285890965,
					22.645506001240392
				],
				[
					3.235072285890965,
					22.645506001240392
				]
			],
			"pressures": [
				0.2294921875,
				0.244140625,
				0.255859375,
				0.2919921875,
				0.3359375,
				0.3935546875,
				0.46875,
				0.515625,
				0.54296875,
				0.548828125,
				0.548828125,
				0.5302734375,
				0.4892578125,
				0.4599609375,
				0.4248046875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3.235072285890965,
				22.645506001240392
			]
		},
		{
			"id": "Ohp7XIrZ-SV9aBwfoPmfH",
			"type": "freedraw",
			"x": 4242.315252797457,
			"y": 1479.960405567438,
			"width": 9.705216857674714,
			"height": 63.62308828919913,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 401690953,
			"version": 29,
			"versionNonce": 2022004937,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					0
				],
				[
					1.0783574286306248,
					1.0783574286306248
				],
				[
					1.0783574286306248,
					2.156714857261022
				],
				[
					2.15671485726034,
					4.313429714522044
				],
				[
					2.15671485726034,
					5.391787143152442
				],
				[
					2.15671485726034,
					8.626859429044089
				],
				[
					2.15671485726034,
					12.940289143565906
				],
				[
					2.15671485726034,
					15.097004000826928
				],
				[
					2.15671485726034,
					19.410433715348972
				],
				[
					2.15671485726034,
					24.802220858501414
				],
				[
					2.15671485726034,
					28.037293144392834
				],
				[
					2.15671485726034,
					33.429080287545275
				],
				[
					3.235072285890965,
					38.82086743069772
				],
				[
					3.235072285890965,
					44.21265457385016
				],
				[
					3.235072285890965,
					46.36936943111118
				],
				[
					4.31342971452159,
					51.76115657426362
				],
				[
					4.31342971452159,
					56.07458628878567
				],
				[
					5.391787143152214,
					59.30965857467709
				],
				[
					6.470144571782839,
					60.38801600330771
				],
				[
					7.548502000413464,
					62.544730860568734
				],
				[
					9.705216857674714,
					63.62308828919913
				],
				[
					9.705216857674714,
					63.62308828919913
				]
			],
			"pressures": [
				0.3193359375,
				0.3408203125,
				0.431640625,
				0.498046875,
				0.5595703125,
				0.587890625,
				0.6318359375,
				0.662109375,
				0.6728515625,
				0.6884765625,
				0.697265625,
				0.7001953125,
				0.701171875,
				0.6962890625,
				0.6767578125,
				0.6611328125,
				0.6123046875,
				0.54296875,
				0.4560546875,
				0.4091796875,
				0.3173828125,
				0.2294921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9.705216857674714,
				63.62308828919913
			]
		},
		{
			"id": "74hf20kJhCOZIv1A6450_",
			"type": "freedraw",
			"x": 4269.274188513219,
			"y": 1526.3297749985493,
			"width": 25.880578287132266,
			"height": 81.9551645759177,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 410373065,
			"version": 64,
			"versionNonce": 1068512327,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					-2.156714857261022
				],
				[
					1.0783574286306248,
					-3.2350722858914196
				],
				[
					1.0783574286306248,
					-5.391787143152442
				],
				[
					2.1567148572612496,
					-5.391787143152442
				],
				[
					2.1567148572612496,
					-7.548502000413464
				],
				[
					2.1567148572612496,
					-9.705216857674486
				],
				[
					2.1567148572612496,
					-11.861931714935281
				],
				[
					2.1567148572612496,
					-12.940289143565906
				],
				[
					2.1567148572612496,
					-16.175361429457325
				],
				[
					1.0783574286306248,
					-18.332076286718348
				],
				[
					1.0783574286306248,
					-19.410433715348745
				],
				[
					0,
					-19.410433715348745
				],
				[
					-1.0783574286297153,
					-20.48879114397937
				],
				[
					-3.235072285890965,
					-19.410433715348745
				],
				[
					-4.31342971452159,
					-17.25371885808795
				],
				[
					-5.391787143152214,
					-15.0970040008267
				],
				[
					-6.470144571782839,
					-11.861931714935281
				],
				[
					-6.470144571782839,
					-9.705216857674486
				],
				[
					-6.470144571782839,
					-6.470144571782839
				],
				[
					-6.470144571782839,
					-2.156714857261022
				],
				[
					-5.391787143152214,
					2.156714857261022
				],
				[
					-4.31342971452159,
					4.313429714522044
				],
				[
					-3.235072285890965,
					6.470144571783067
				],
				[
					-2.15671485726034,
					8.626859429044089
				],
				[
					0,
					9.705216857674486
				],
				[
					1.0783574286306248,
					9.705216857674486
				],
				[
					2.1567148572612496,
					8.626859429044089
				],
				[
					3.2350722858918743,
					5.391787143152442
				],
				[
					4.313429714522499,
					4.313429714522044
				],
				[
					4.313429714522499,
					0
				],
				[
					5.391787143152214,
					-5.391787143152442
				],
				[
					4.313429714522499,
					-11.861931714935281
				],
				[
					4.313429714522499,
					-15.0970040008267
				],
				[
					4.313429714522499,
					-22.645506001240165
				],
				[
					3.2350722858918743,
					-30.19400800165363
				],
				[
					2.1567148572612496,
					-37.74251000206709
				],
				[
					2.1567148572612496,
					-42.05593971658914
				],
				[
					1.0783574286306248,
					-48.5260842883722
				],
				[
					0,
					-54.99622886015527
				],
				[
					0,
					-59.30965857467709
				],
				[
					0,
					-60.388016003307484
				],
				[
					0,
					-62.544730860568734
				],
				[
					1.0783574286306248,
					-60.388016003307484
				],
				[
					1.0783574286306248,
					-59.30965857467709
				],
				[
					2.1567148572612496,
					-54.99622886015527
				],
				[
					2.1567148572612496,
					-51.76115657426362
				],
				[
					3.2350722858918743,
					-48.5260842883722
				],
				[
					4.313429714522499,
					-40.97758228795874
				],
				[
					6.470144571782839,
					-32.35072285891488
				],
				[
					7.548502000413464,
					-23.72386342987079
				],
				[
					8.626859429044089,
					-18.332076286718348
				],
				[
					10.783574286305338,
					-9.705216857674486
				],
				[
					12.940289143566588,
					0
				],
				[
					15.097004000826928,
					7.548502000413464
				],
				[
					16.175361429457553,
					10.783574286305111
				],
				[
					18.332076286718802,
					16.175361429457553
				],
				[
					19.410433715349427,
					19.410433715348972
				],
				[
					19.410433715349427,
					19.410433715348972
				]
			],
			"pressures": [
				0.0859375,
				0.099609375,
				0.1044921875,
				0.125,
				0.1357421875,
				0.1591796875,
				0.18359375,
				0.220703125,
				0.2470703125,
				0.2978515625,
				0.3466796875,
				0.388671875,
				0.40625,
				0.4345703125,
				0.4560546875,
				0.486328125,
				0.5078125,
				0.529296875,
				0.5400390625,
				0.55859375,
				0.5712890625,
				0.5771484375,
				0.5791015625,
				0.5810546875,
				0.5791015625,
				0.564453125,
				0.5556640625,
				0.533203125,
				0.50390625,
				0.48828125,
				0.4580078125,
				0.431640625,
				0.412109375,
				0.4052734375,
				0.3955078125,
				0.390625,
				0.3935546875,
				0.3984375,
				0.4169921875,
				0.443359375,
				0.48046875,
				0.501953125,
				0.546875,
				0.6337890625,
				0.6533203125,
				0.69140625,
				0.7080078125,
				0.7236328125,
				0.7490234375,
				0.7666015625,
				0.7763671875,
				0.779296875,
				0.775390625,
				0.7568359375,
				0.7177734375,
				0.6875,
				0.603515625,
				0.5478515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				19.410433715349427,
				19.410433715348972
			]
		},
		{
			"id": "AwYQHghYF1QRqdsFII33A",
			"type": "freedraw",
			"x": 4211.042887367173,
			"y": 1607.2065821458364,
			"width": 106.75738543441912,
			"height": 127.24617657839826,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1538275433,
			"version": 28,
			"versionNonce": 395459911,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					-1.0783574286303974
				],
				[
					1.0783574286306248,
					-2.156714857260795
				],
				[
					2.1567148572612496,
					-3.2350722858914196
				],
				[
					3.2350722858918743,
					-3.2350722858914196
				],
				[
					3.2350722858918743,
					-4.313429714521817
				],
				[
					2.1567148572612496,
					-2.156714857260795
				],
				[
					-1.0783574286306248,
					1.0783574286306248
				],
				[
					-4.31342971452159,
					6.470144571783067
				],
				[
					-7.548502000413464,
					10.783574286305111
				],
				[
					-14.018646572196303,
					19.410433715348972
				],
				[
					-22.645506001240392,
					30.194008001653856
				],
				[
					-26.95893571576198,
					35.585795144806525
				],
				[
					-36.664152573436695,
					48.5260842883722
				],
				[
					-47.44772685974203,
					61.46637343193834
				],
				[
					-58.23130114604646,
					74.40666257550424
				],
				[
					-63.62308828919868,
					80.87680714728731
				],
				[
					-73.32830514687339,
					92.73873886222259
				],
				[
					-81.95516457591748,
					102.44395571989708
				],
				[
					-90.58202400496157,
					111.07081514894116
				],
				[
					-93.81709629085253,
					115.38424486346298
				],
				[
					-100.28724086263628,
					120.77603200661542
				],
				[
					-103.52231314852725,
					122.93274686387645
				],
				[
					-103.52231314852725,
					122.93274686387645
				]
			],
			"pressures": [
				0.2041015625,
				0.2099609375,
				0.21875,
				0.25,
				0.322265625,
				0.3447265625,
				0.53515625,
				0.5537109375,
				0.5654296875,
				0.5712890625,
				0.583984375,
				0.59375,
				0.5966796875,
				0.6005859375,
				0.6005859375,
				0.6005859375,
				0.5986328125,
				0.5859375,
				0.5546875,
				0.5087890625,
				0.48046875,
				0.4091796875,
				0.365234375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-103.52231314852725,
				122.93274686387645
			]
		},
		{
			"id": "l-6z4z0bUIzMNL3YATGhY",
			"type": "freedraw",
			"x": 2610.7604632795174,
			"y": 1562.9939275719855,
			"width": 144.49989543648599,
			"height": 180.08569058129274,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 486731815,
			"version": 46,
			"versionNonce": 695329223,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					0
				],
				[
					0,
					0
				],
				[
					-1.0783574286306248,
					0
				],
				[
					-2.1567148572612496,
					1.0783574286306248
				],
				[
					-5.391787143152669,
					1.0783574286306248
				],
				[
					-8.626859429044089,
					1.0783574286306248
				],
				[
					-14.018646572196303,
					3.235072285891647
				],
				[
					-21.567148572609767,
					5.391787143152442
				],
				[
					-32.350722858915105,
					8.626859429044089
				],
				[
					-37.74251000206732,
					11.861931714935508
				],
				[
					-49.60444171700283,
					18.332076286718575
				],
				[
					-62.54473086056896,
					29.11565057302346
				],
				[
					-69.0148754323518,
					35.5857951448063
				],
				[
					-81.95516457591748,
					49.60444171700283
				],
				[
					-93.81709629085299,
					66.85816057509078
				],
				[
					-104.60067057715787,
					86.26859429043975
				],
				[
					-108.91410029167992,
					97.05216857674463
				],
				[
					-115.38424486346321,
					117.540959720724
				],
				[
					-119.6976745779848,
					135.87303600744235
				],
				[
					-119.6976745779848,
					153.1267548655303
				],
				[
					-117.540959720724,
					160.67525686594377
				],
				[
					-112.14917257757133,
					172.53718858087927
				],
				[
					-102.44395571989708,
					179.0073331526621
				],
				[
					-88.42530914770077,
					180.08569058129274
				],
				[
					-79.79844971865668,
					177.92897572403172
				],
				[
					-71.1715902896126,
					174.69390343814007
				],
				[
					-50.68279914563345,
					162.8319717232048
				],
				[
					-40.97758228795874,
					154.20511229416093
				],
				[
					-20.488791143979597,
					134.79467857881195
				],
				[
					-10.783574286304884,
					122.93274686387645
				],
				[
					-1.0783574286306248,
					111.07081514894094
				],
				[
					6.470144571782839,
					98.13052600537503
				],
				[
					19.410433715348972,
					73.32830514687362
				],
				[
					22.645506001240392,
					61.46637343193834
				],
				[
					24.802220858501187,
					49.60444171700283
				],
				[
					23.723863429871017,
					39.89922485932834
				],
				[
					17.253718858087723,
					23.723863429871017
				],
				[
					3.2350722858914196,
					12.940289143565906
				],
				[
					-16.175361429457553,
					7.548502000413464
				],
				[
					-28.03729314439306,
					7.548502000413464
				],
				[
					-51.76115657426362,
					11.861931714935508
				],
				[
					-51.76115657426362,
					11.861931714935508
				]
			],
			"pressures": [
				0.4501953125,
				0.447265625,
				0.447265625,
				0.4453125,
				0.4443359375,
				0.4443359375,
				0.4443359375,
				0.44921875,
				0.4638671875,
				0.48828125,
				0.501953125,
				0.533203125,
				0.5625,
				0.5751953125,
				0.595703125,
				0.6123046875,
				0.6279296875,
				0.6357421875,
				0.6513671875,
				0.66796875,
				0.681640625,
				0.6884765625,
				0.6982421875,
				0.7080078125,
				0.71875,
				0.724609375,
				0.7314453125,
				0.744140625,
				0.7509765625,
				0.76171875,
				0.7666015625,
				0.771484375,
				0.7763671875,
				0.787109375,
				0.7919921875,
				0.796875,
				0.80078125,
				0.8076171875,
				0.8046875,
				0.779296875,
				0.7548828125,
				0.6826171875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-51.76115657426362,
				11.861931714935508
			]
		},
		{
			"id": "AXiWAx_q7RE8FOoFkz9kS",
			"type": "freedraw",
			"x": 3172.584683595999,
			"y": 1846.6019313018023,
			"width": 92.73873886222236,
			"height": 83.0335220045481,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 11850279,
			"version": 28,
			"versionNonce": 77611815,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097167534,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0783574286306248,
					1.0783574286306248
				],
				[
					1.0783574286306248,
					2.156714857261022
				],
				[
					1.0783574286306248,
					3.235072285891647
				],
				[
					1.0783574286306248,
					4.313429714522044
				],
				[
					2.1567148572612496,
					5.391787143152669
				],
				[
					2.1567148572612496,
					6.470144571783067
				],
				[
					2.1567148572612496,
					7.548502000413464
				],
				[
					3.2350722858914196,
					8.626859429044089
				],
				[
					3.2350722858914196,
					9.705216857674486
				],
				[
					4.31342971452159,
					10.783574286304884
				],
				[
					5.391787143152214,
					11.861931714935508
				],
				[
					6.470144571782839,
					12.940289143566133
				],
				[
					7.548502000413464,
					12.940289143566133
				],
				[
					8.626859429044089,
					12.940289143566133
				],
				[
					9.705216857674714,
					12.940289143566133
				],
				[
					11.861931714935054,
					11.861931714935508
				],
				[
					14.018646572196303,
					10.783574286304884
				],
				[
					17.253718858088178,
					8.626859429044089
				],
				[
					24.80222085850164,
					1.0783574286306248
				],
				[
					35.58579514480607,
					-10.783574286304884
				],
				[
					43.134297145219534,
					-18.332076286718348
				],
				[
					60.38801600330771,
					-36.664152573436695
				],
				[
					71.1715902896126,
					-47.44772685974158
				],
				[
					92.73873886222236,
					-70.09323286098197
				],
				[
					92.73873886222236,
					-70.09323286098197
				]
			],
			"pressures": [
				0.31640625,
				0.322265625,
				0.357421875,
				0.46875,
				0.5517578125,
				0.599609375,
				0.6142578125,
				0.6376953125,
				0.658203125,
				0.666015625,
				0.6806640625,
				0.6865234375,
				0.6982421875,
				0.712890625,
				0.72265625,
				0.7333984375,
				0.7568359375,
				0.7685546875,
				0.779296875,
				0.794921875,
				0.79296875,
				0.7841796875,
				0.7421875,
				0.7060546875,
				0.5947265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				92.73873886222236,
				-70.09323286098197
			]
		},
		{
			"id": "6GxZwAXPUJE9jh3-fH7_t",
			"type": "text",
			"x": 3933.905028209131,
			"y": 2033.8629833125522,
			"width": 11,
			"height": 25,
			"angle": 0,
			"strokeColor": "#2b8a3e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 2052450407,
			"version": 3,
			"versionNonce": 1751794567,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673097241028,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 18,
			"containerId": null,
			"originalText": ""
		}
	],
	"appState": {
		"theme": "dark",
		"viewBackgroundColor": "#ffffff",
		"currentItemStrokeColor": "#2b8a3e",
		"currentItemBackgroundColor": "transparent",
		"currentItemFillStyle": "hachure",
		"currentItemStrokeWidth": 1,
		"currentItemStrokeStyle": "solid",
		"currentItemRoughness": 1,
		"currentItemOpacity": 100,
		"currentItemFontFamily": 1,
		"currentItemFontSize": 20,
		"currentItemTextAlign": "left",
		"currentItemStrokeSharpness": "sharp",
		"currentItemStartArrowhead": null,
		"currentItemEndArrowhead": "arrow",
		"currentItemLinearStrokeSharpness": "round",
		"gridSize": null,
		"colorPalette": {}
	},
	"files": {}
}
```
%%