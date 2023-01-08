---

excalidraw-plugin: parsed
tags: [excalidraw]

---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Text Elements
void set(struct matrix_t * m, int row, int col, int val)
{
    m->elems[m->n_cols*row + col] = val;
} ^TRfwo5iw

One reason may be now that each thread cannot access the shared resources at any time, some are being blocked by others and thus 
each thread will slow down (for appropriate reasons as we are trying to synchronise access) thus performing slower. In addition, if the mutual
exclusion is via a sleeping lock like a semaphore, there would be overhead in the wait and signal and thus may make it perform slower. 

Another reason may be due to processor affinity. As threads are woken up, they may be put on different cores instead of the 
one they originally were working on. This will mean that the cache would be invalidated on the original and a new context would have to be
loaded on the new processor which adds overhead and thus actually performs slower. ^qfmezprw

The update may have added more processes to the IDE and thus, since the CPU was originally at 100% usage, the additional
processes added to the number of processes in the job queue and thus lead to slower response times as wait time has increased.
Its also possible that it is using a fcfs or other scheduling algorithm that can allow starvation, making this worse.

A possible solution is to use a different type of scheduling that adds priority to IO bound processes or reduce the number of
processes running in the background, maybe even use a priority based scheduler that will apply a lower priority to the CPU intensive
operations in the background ^Aao918CZ

needs critical section around messages so probably need a wait and signal around 
if it is in an interrupt context, should use spinlock and in this case a spinlock
would be alright at the very end since and cs will be from if(len + overall_size > max_size) ... to 
overall_size = overall_soize + len, ensureing that does not sleep  ^TmnxPfWR

- When handling interrupts/when an interrupt occurs
- When (scheduler) preempts a process for another process
- When a process needs to wait for an IO event or when a process terminates or when a process creates a child process

The current state of a process (CPU registers, PC, PID etc) are saved in the PCB and the next process's state is
loaded into CPU from PCB. (aka a context state save is done on the current process and the next process's state is restored)


 ^LguujT4B

int main()
{ 
    int pid;
    pid = fork();
    if(pid < 0)
    {
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if(pid == 0)
    {
        excelp("/bin/ls", "ls", NULL);
    }
    else
    {
        wait();
    }
    return 0;
} ^iikbQPCd

No, Process and C could occur concurrently and so C might process before A finishes.
So it would not go in the proposed order

A deadlock free solution may be
 ^ESQ19Rjw


# Embedded files
2adeb3783c2e16a2de03263611d17e1318b4ccd0: [[Pasted Image 20230107210151_429.png]]
c9120614a8128d8f8ec74d8e5dc4732fb78883e8: [[Pasted Image 20230107224700_708.png]]
4c50b609b2370cef43046250e522d663f32c0ec3: [[Pasted Image 20230107225142_511.png]]
8bd24e42d5a801d58e484a0b1e32b4010d4211cb: [[Pasted Image 20230107225852_810.png]]
41c3c9292afd0e2f92659e5d9e6d598702457598: [[Pasted Image 20230107225955_738.png]]
ddcac481ce5ac1fcc496eb6ba81d4d7488c34370: [[Pasted Image 20230107230000_779.png]]
ec67d7b13cc6af23210e3a9c766de7dbf2d66439: [[Pasted Image 20230108141434_378.png]]
18070d36c6d444b0609e45d0e535a26c7c99b715: [[Pasted Image 20230108142332_277.png]]
eaf08f98080ce3a2d38aa7a60d6f10483f2b0af7: [[Pasted Image 20230108142647_378.png]]
ab96b9b74153b7a77af0d482d123ac8cc216ca71: [[Pasted Image 20230108142654_204.png]]
9266780d44146174f4f800ff69e4f4b96749c221: [[Pasted Image 20230108142951_437.png]]
b30ddda565f28a602d0ed4d23b9641872e1f7577: [[Pasted Image 20230108143436_937.png]]

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
			"version": 283,
			"versionNonce": 1082629457,
			"isDeleted": false,
			"id": "3zpC4RkgMmbn-g5mgExpf",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -353.64818355640534,
			"y": -472.5,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 878.2963671128107,
			"height": 716.613104524181,
			"seed": 995370151,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "2adeb3783c2e16a2de03263611d17e1318b4ccd0",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "text",
			"version": 288,
			"versionNonce": 591944767,
			"isDeleted": false,
			"id": "TRfwo5iw",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -273.8888888888898,
			"y": 390.94444444444537,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 539,
			"height": 100,
			"seed": 1405178599,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "void set(struct matrix_t * m, int row, int col, int val)\n{\n    m->elems[m->n_cols*row + col] = val;\n}",
			"rawText": "void set(struct matrix_t * m, int row, int col, int val)\n{\n    m->elems[m->n_cols*row + col] = val;\n}",
			"baseline": 93,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "void set(struct matrix_t * m, int row, int col, int val)\n{\n    m->elems[m->n_cols*row + col] = val;\n}"
		},
		{
			"type": "image",
			"version": 161,
			"versionNonce": 1495911217,
			"isDeleted": false,
			"id": "fJyUtwfkx7t0nqihEyQyN",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 843.8333333333326,
			"y": -451.27777777777663,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 1320.0734463276835,
			"height": 255.77777777777774,
			"seed": 618616745,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "c9120614a8128d8f8ec74d8e5dc4732fb78883e8",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "text",
			"version": 1115,
			"versionNonce": 2140175455,
			"isDeleted": false,
			"id": "qfmezprw",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 866.1111111111102,
			"y": -142.38888888888778,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 1414,
			"height": 175,
			"seed": 1217061097,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "One reason may be now that each thread cannot access the shared resources at any time, some are being blocked by others and thus \neach thread will slow down (for appropriate reasons as we are trying to synchronise access) thus performing slower. In addition, if the mutual\nexclusion is via a sleeping lock like a semaphore, there would be overhead in the wait and signal and thus may make it perform slower. \n\nAnother reason may be due to processor affinity. As threads are woken up, they may be put on different cores instead of the \none they originally were working on. This will mean that the cache would be invalidated on the original and a new context would have to be\nloaded on the new processor which adds overhead and thus actually performs slower.",
			"rawText": "One reason may be now that each thread cannot access the shared resources at any time, some are being blocked by others and thus \neach thread will slow down (for appropriate reasons as we are trying to synchronise access) thus performing slower. In addition, if the mutual\nexclusion is via a sleeping lock like a semaphore, there would be overhead in the wait and signal and thus may make it perform slower. \n\nAnother reason may be due to processor affinity. As threads are woken up, they may be put on different cores instead of the \none they originally were working on. This will mean that the cache would be invalidated on the original and a new context would have to be\nloaded on the new processor which adds overhead and thus actually performs slower.",
			"baseline": 168,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "One reason may be now that each thread cannot access the shared resources at any time, some are being blocked by others and thus \neach thread will slow down (for appropriate reasons as we are trying to synchronise access) thus performing slower. In addition, if the mutual\nexclusion is via a sleeping lock like a semaphore, there would be overhead in the wait and signal and thus may make it perform slower. \n\nAnother reason may be due to processor affinity. As threads are woken up, they may be put on different cores instead of the \none they originally were working on. This will mean that the cache would be invalidated on the original and a new context would have to be\nloaded on the new processor which adds overhead and thus actually performs slower."
		},
		{
			"type": "image",
			"version": 257,
			"versionNonce": 1561017617,
			"isDeleted": false,
			"id": "cLhf7W1xXOqcsKy2DELo-",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 846.6111111111102,
			"y": 70.33333333333437,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 1350.5852795470632,
			"height": 342.5555555555556,
			"seed": 1943838953,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "4c50b609b2370cef43046250e522d663f32c0ec3",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "text",
			"version": 1309,
			"versionNonce": 975149183,
			"isDeleted": false,
			"id": "Aao918CZ",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 872.7777777777765,
			"y": 467.6111111111122,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 1307,
			"height": 175,
			"seed": 645409385,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "The update may have added more processes to the IDE and thus, since the CPU was originally at 100% usage, the additional\nprocesses added to the number of processes in the job queue and thus lead to slower response times as wait time has increased.\nIts also possible that it is using a fcfs or other scheduling algorithm that can allow starvation, making this worse.\n\nA possible solution is to use a different type of scheduling that adds priority to IO bound processes or reduce the number of\nprocesses running in the background, maybe even use a priority based scheduler that will apply a lower priority to the CPU intensive\noperations in the background",
			"rawText": "The update may have added more processes to the IDE and thus, since the CPU was originally at 100% usage, the additional\nprocesses added to the number of processes in the job queue and thus lead to slower response times as wait time has increased.\nIts also possible that it is using a fcfs or other scheduling algorithm that can allow starvation, making this worse.\n\nA possible solution is to use a different type of scheduling that adds priority to IO bound processes or reduce the number of\nprocesses running in the background, maybe even use a priority based scheduler that will apply a lower priority to the CPU intensive\noperations in the background",
			"baseline": 168,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "The update may have added more processes to the IDE and thus, since the CPU was originally at 100% usage, the additional\nprocesses added to the number of processes in the job queue and thus lead to slower response times as wait time has increased.\nIts also possible that it is using a fcfs or other scheduling algorithm that can allow starvation, making this worse.\n\nA possible solution is to use a different type of scheduling that adds priority to IO bound processes or reduce the number of\nprocesses running in the background, maybe even use a priority based scheduler that will apply a lower priority to the CPU intensive\noperations in the background"
		},
		{
			"type": "image",
			"version": 232,
			"versionNonce": 732132081,
			"isDeleted": false,
			"id": "Y_p6oTUZTprQk4eMQrSoV",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 868.0555555555541,
			"y": 662.8333333333344,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 1297.4371069182394,
			"height": 426.44444444444457,
			"seed": 1320242119,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "8bd24e42d5a801d58e484a0b1e32b4010d4211cb",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "image",
			"version": 341,
			"versionNonce": 1756770463,
			"isDeleted": false,
			"id": "3DbEpuUBuwJwc9uhAW-c_",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 863.8654970760218,
			"y": 1105.5000000000027,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 1236.713450292398,
			"height": 860.716320716321,
			"seed": 1001924681,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "41c3c9292afd0e2f92659e5d9e6d598702457598",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "image",
			"version": 263,
			"versionNonce": 1232727249,
			"isDeleted": false,
			"id": "GSwxk5tH396ydabvT_i2e",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 860.1963241436913,
			"y": 1981.0555555555584,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"width": 1251.8295739348368,
			"height": 1067.264957264957,
			"seed": 1345971849,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "ddcac481ce5ac1fcc496eb6ba81d4d7488c34370",
			"scale": [
				1,
				1
			]
		},
		{
			"type": "freedraw",
			"version": 93,
			"versionNonce": 352634047,
			"isDeleted": false,
			"id": "0tPdBEgS5d73al5EkoV_n",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2263.8888888888832,
			"y": 1291.0555555555584,
			"strokeColor": "#000000",
			"backgroundColor": "transparent",
			"width": 0.0001,
			"height": 0.0001,
			"seed": 1618161545,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
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
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "freedraw",
			"version": 179,
			"versionNonce": 1042688689,
			"isDeleted": false,
			"id": "0xoYfrj1FsNgPINl6UlJa",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1206.1111111111056,
			"y": 1451.0555555555584,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 57.77777777777783,
			"height": 30,
			"seed": 212820135,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111110858,
					1.1111111111110858
				],
				[
					-2.222222222222399,
					2.2222222222221717
				],
				[
					-3.3333333333332575,
					3.333333333333485
				],
				[
					-4.444444444444571,
					4.444444444444343
				],
				[
					-4.444444444444571,
					5.555555555555657
				],
				[
					-6.6666666666667425,
					6.6666666666667425
				],
				[
					-6.6666666666667425,
					7.777777777777828
				],
				[
					-8.888888888888914,
					8.888888888888914
				],
				[
					-10,
					10
				],
				[
					-13.333333333333258,
					13.333333333333485
				],
				[
					-15.55555555555543,
					14.444444444444343
				],
				[
					-16.666666666666742,
					15.555555555555657
				],
				[
					-17.77777777777783,
					17.77777777777783
				],
				[
					-18.888888888888914,
					17.77777777777783
				],
				[
					-17.77777777777783,
					17.77777777777783
				],
				[
					-16.666666666666742,
					16.666666666666742
				],
				[
					-14.44444444444457,
					15.555555555555657
				],
				[
					-12.222222222222399,
					13.333333333333485
				],
				[
					-10,
					11.111111111111086
				],
				[
					-6.6666666666667425,
					8.888888888888914
				],
				[
					-3.3333333333332575,
					6.6666666666667425
				],
				[
					0,
					5.555555555555657
				],
				[
					2.2222222222221717,
					3.333333333333485
				],
				[
					5.555555555555429,
					2.2222222222221717
				],
				[
					7.777777777777601,
					1.1111111111110858
				],
				[
					8.888888888888914,
					0
				],
				[
					10,
					-1.1111111111110858
				],
				[
					11.111111111111086,
					-1.1111111111110858
				],
				[
					11.111111111111086,
					0
				],
				[
					11.111111111111086,
					1.1111111111110858
				],
				[
					11.111111111111086,
					2.2222222222221717
				],
				[
					10,
					4.444444444444343
				],
				[
					8.888888888888914,
					6.6666666666667425
				],
				[
					7.777777777777601,
					7.777777777777828
				],
				[
					6.6666666666667425,
					10
				],
				[
					5.555555555555429,
					12.222222222222172
				],
				[
					3.3333333333332575,
					15.555555555555657
				],
				[
					2.2222222222221717,
					18.888888888888914
				],
				[
					1.1111111111110858,
					21.111111111111086
				],
				[
					-1.1111111111110858,
					24.444444444444343
				],
				[
					-2.222222222222399,
					26.666666666666742
				],
				[
					-2.222222222222399,
					27.77777777777783
				],
				[
					-2.222222222222399,
					28.888888888888914
				],
				[
					-1.1111111111110858,
					28.888888888888914
				],
				[
					0,
					28.888888888888914
				],
				[
					1.1111111111110858,
					27.77777777777783
				],
				[
					3.3333333333332575,
					25.555555555555657
				],
				[
					4.444444444444571,
					24.444444444444343
				],
				[
					6.6666666666667425,
					22.22222222222217
				],
				[
					10,
					20
				],
				[
					11.111111111111086,
					17.77777777777783
				],
				[
					14.44444444444457,
					15.555555555555657
				],
				[
					16.666666666666742,
					13.333333333333485
				],
				[
					18.888888888888914,
					11.111111111111086
				],
				[
					20,
					10
				],
				[
					21.111111111111086,
					8.888888888888914
				],
				[
					22.22222222222217,
					7.777777777777828
				],
				[
					22.22222222222217,
					8.888888888888914
				],
				[
					21.111111111111086,
					10
				],
				[
					20,
					12.222222222222172
				],
				[
					18.888888888888914,
					14.444444444444343
				],
				[
					18.888888888888914,
					15.555555555555657
				],
				[
					17.7777777777776,
					17.77777777777783
				],
				[
					17.7777777777776,
					18.888888888888914
				],
				[
					16.666666666666742,
					18.888888888888914
				],
				[
					16.666666666666742,
					20
				],
				[
					17.7777777777776,
					20
				],
				[
					18.888888888888914,
					20
				],
				[
					18.888888888888914,
					18.888888888888914
				],
				[
					21.111111111111086,
					17.77777777777783
				],
				[
					23.333333333333258,
					15.555555555555657
				],
				[
					25.55555555555543,
					13.333333333333485
				],
				[
					27.7777777777776,
					11.111111111111086
				],
				[
					31.111111111111086,
					10
				],
				[
					33.33333333333326,
					7.777777777777828
				],
				[
					34.44444444444457,
					6.6666666666667425
				],
				[
					35.55555555555543,
					5.555555555555657
				],
				[
					36.66666666666674,
					5.555555555555657
				],
				[
					37.7777777777776,
					5.555555555555657
				],
				[
					37.7777777777776,
					6.6666666666667425
				],
				[
					37.7777777777776,
					8.888888888888914
				],
				[
					37.7777777777776,
					10
				],
				[
					38.888888888888914,
					11.111111111111086
				],
				[
					38.888888888888914,
					12.222222222222172
				],
				[
					38.888888888888914,
					13.333333333333485
				],
				[
					38.888888888888914,
					14.444444444444343
				],
				[
					38.888888888888914,
					14.444444444444343
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": true,
			"pressures": []
		},
		{
			"type": "freedraw",
			"version": 113,
			"versionNonce": 1051448543,
			"isDeleted": false,
			"id": "xUsYEdKcJmE0sMAR5hD38",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1310.5555555555502,
			"y": 1484.3888888888919,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 32.2222222222224,
			"height": 8.888888888888687,
			"seed": 217561033,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111113132,
					0
				],
				[
					-2.222222222222399,
					0
				],
				[
					-3.333333333333485,
					0
				],
				[
					-4.444444444444571,
					1.1111111111108585
				],
				[
					-5.555555555555657,
					1.1111111111108585
				],
				[
					-6.66666666666697,
					1.1111111111108585
				],
				[
					-6.66666666666697,
					2.2222222222221717
				],
				[
					-5.555555555555657,
					2.2222222222221717
				],
				[
					-4.444444444444571,
					3.3333333333332575
				],
				[
					-3.333333333333485,
					3.3333333333332575
				],
				[
					-2.222222222222399,
					4.444444444444343
				],
				[
					1.1111111111108585,
					5.555555555555429
				],
				[
					4.444444444444343,
					6.666666666666515
				],
				[
					5.555555555555429,
					6.666666666666515
				],
				[
					10,
					7.777777777777601
				],
				[
					13.33333333333303,
					8.888888888888687
				],
				[
					15.55555555555543,
					8.888888888888687
				],
				[
					20,
					8.888888888888687
				],
				[
					22.22222222222217,
					8.888888888888687
				],
				[
					25.55555555555543,
					8.888888888888687
				],
				[
					25.55555555555543,
					8.888888888888687
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.34765625,
				0.3515625,
				0.3828125,
				0.427734375,
				0.45703125,
				0.5078125,
				0.5390625,
				0.546875,
				0.560546875,
				0.5771484375,
				0.59375,
				0.6005859375,
				0.6123046875,
				0.6201171875,
				0.623046875,
				0.6259765625,
				0.62109375,
				0.61328125,
				0.5859375,
				0.56640625,
				0.5048828125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 140,
			"versionNonce": 844082321,
			"isDeleted": false,
			"id": "oI9Pb9UZL3BwHn1PCRKYw",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1398.3333333333278,
			"y": 1452.1666666666695,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 27.77777777777783,
			"height": 53.333333333333485,
			"seed": 433586087,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111110858
				],
				[
					1.1111111111110858,
					-1.1111111111110858
				],
				[
					0,
					0
				],
				[
					-1.1111111111110858,
					0
				],
				[
					-2.2222222222221717,
					1.1111111111110858
				],
				[
					-3.3333333333332575,
					1.1111111111110858
				],
				[
					-4.444444444444571,
					2.222222222222399
				],
				[
					-5.555555555555429,
					2.222222222222399
				],
				[
					-7.777777777777601,
					3.3333333333332575
				],
				[
					-11.111111111111086,
					3.3333333333332575
				],
				[
					-13.333333333333258,
					4.444444444444571
				],
				[
					-14.44444444444457,
					4.444444444444571
				],
				[
					-16.666666666666742,
					5.555555555555657
				],
				[
					-18.888888888888914,
					5.555555555555657
				],
				[
					-21.111111111111086,
					6.6666666666667425
				],
				[
					-22.22222222222217,
					6.6666666666667425
				],
				[
					-22.22222222222217,
					7.777777777777828
				],
				[
					-23.333333333333258,
					7.777777777777828
				],
				[
					-23.333333333333258,
					8.888888888888914
				],
				[
					-23.333333333333258,
					10
				],
				[
					-23.333333333333258,
					11.111111111111086
				],
				[
					-23.333333333333258,
					12.222222222222399
				],
				[
					-23.333333333333258,
					14.44444444444457
				],
				[
					-23.333333333333258,
					17.77777777777783
				],
				[
					-24.44444444444457,
					20
				],
				[
					-24.44444444444457,
					21.111111111111086
				],
				[
					-24.44444444444457,
					24.44444444444457
				],
				[
					-24.44444444444457,
					27.77777777777783
				],
				[
					-25.55555555555543,
					32.2222222222224
				],
				[
					-25.55555555555543,
					33.33333333333326
				],
				[
					-26.666666666666742,
					36.66666666666674
				],
				[
					-26.666666666666742,
					40
				],
				[
					-26.666666666666742,
					42.2222222222224
				],
				[
					-26.666666666666742,
					44.44444444444457
				],
				[
					-26.666666666666742,
					46.66666666666674
				],
				[
					-25.55555555555543,
					47.77777777777783
				],
				[
					-25.55555555555543,
					48.888888888888914
				],
				[
					-24.44444444444457,
					50
				],
				[
					-22.22222222222217,
					51.111111111111086
				],
				[
					-21.111111111111086,
					52.2222222222224
				],
				[
					-18.888888888888914,
					52.2222222222224
				],
				[
					-16.666666666666742,
					52.2222222222224
				],
				[
					-14.44444444444457,
					52.2222222222224
				],
				[
					-13.333333333333258,
					52.2222222222224
				],
				[
					-11.111111111111086,
					52.2222222222224
				],
				[
					-8.888888888888914,
					51.111111111111086
				],
				[
					-6.6666666666667425,
					51.111111111111086
				],
				[
					-6.6666666666667425,
					51.111111111111086
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.05859375,
				0.0634765625,
				0.134765625,
				0.3662109375,
				0.400390625,
				0.4130859375,
				0.421875,
				0.42578125,
				0.4326171875,
				0.4375,
				0.44140625,
				0.4443359375,
				0.4453125,
				0.447265625,
				0.4501953125,
				0.4541015625,
				0.45703125,
				0.4619140625,
				0.462890625,
				0.46484375,
				0.4658203125,
				0.4658203125,
				0.46875,
				0.4716796875,
				0.478515625,
				0.48828125,
				0.494140625,
				0.505859375,
				0.5166015625,
				0.5263671875,
				0.53125,
				0.537109375,
				0.5419921875,
				0.54296875,
				0.544921875,
				0.546875,
				0.546875,
				0.5458984375,
				0.544921875,
				0.544921875,
				0.5458984375,
				0.546875,
				0.5458984375,
				0.5419921875,
				0.5380859375,
				0.5205078125,
				0.4873046875,
				0.427734375,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 109,
			"versionNonce": 490463487,
			"isDeleted": false,
			"id": "Ceaa3QJESZ-LV2cTVOl3p",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1377.2222222222167,
			"y": 1481.0555555555584,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 23.333333333333258,
			"height": 7.777777777777828,
			"seed": 1613696455,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111110858,
					-1.1111111111110858
				],
				[
					-2.2222222222221717,
					-1.1111111111110858
				],
				[
					-3.333333333333485,
					-1.1111111111110858
				],
				[
					-4.444444444444343,
					-2.2222222222221717
				],
				[
					-3.333333333333485,
					-2.2222222222221717
				],
				[
					-2.2222222222221717,
					-2.2222222222221717
				],
				[
					0,
					-2.2222222222221717
				],
				[
					1.1111111111110858,
					-2.2222222222221717
				],
				[
					3.333333333333485,
					-3.3333333333332575
				],
				[
					6.666666666666515,
					-4.444444444444343
				],
				[
					10,
					-4.444444444444343
				],
				[
					11.111111111111086,
					-5.555555555555657
				],
				[
					13.333333333333485,
					-5.555555555555657
				],
				[
					15.555555555555657,
					-6.666666666666515
				],
				[
					17.77777777777783,
					-6.666666666666515
				],
				[
					18.888888888888914,
					-7.777777777777828
				],
				[
					18.888888888888914,
					-7.777777777777828
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.2578125,
				0.263671875,
				0.28515625,
				0.35546875,
				0.419921875,
				0.5849609375,
				0.59375,
				0.6103515625,
				0.61328125,
				0.6171875,
				0.6171875,
				0.611328125,
				0.60546875,
				0.5830078125,
				0.56640625,
				0.51953125,
				0.4453125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 111,
			"versionNonce": 1303245425,
			"isDeleted": false,
			"id": "DjGRWBdCF86zGDgznQBZ3",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1419.444444444439,
			"y": 1461.0555555555584,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 1.1111111111113132,
			"height": 41.111111111111086,
			"seed": 1246482441,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.1111111111113132,
					0
				],
				[
					1.1111111111113132,
					-1.1111111111110858
				],
				[
					1.1111111111113132,
					0
				],
				[
					1.1111111111113132,
					1.1111111111110858
				],
				[
					1.1111111111113132,
					2.2222222222221717
				],
				[
					1.1111111111113132,
					3.333333333333485
				],
				[
					1.1111111111113132,
					6.6666666666667425
				],
				[
					1.1111111111113132,
					8.888888888888914
				],
				[
					0,
					11.111111111111086
				],
				[
					0,
					15.555555555555657
				],
				[
					0,
					18.888888888888914
				],
				[
					0,
					23.333333333333485
				],
				[
					0,
					25.555555555555657
				],
				[
					0,
					28.888888888888914
				],
				[
					0,
					33.333333333333485
				],
				[
					0,
					34.44444444444434
				],
				[
					0,
					37.77777777777783
				],
				[
					0,
					40
				],
				[
					0,
					40
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.142578125,
				0.1494140625,
				0.1640625,
				0.21484375,
				0.279296875,
				0.31640625,
				0.33203125,
				0.3623046875,
				0.3876953125,
				0.3984375,
				0.4140625,
				0.4228515625,
				0.4267578125,
				0.427734375,
				0.42578125,
				0.4169921875,
				0.408203125,
				0.3779296875,
				0.328125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 159,
			"versionNonce": 573925663,
			"isDeleted": false,
			"id": "cLs6B3Q_jetUh9c5Kkap8",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1433.8888888888832,
			"y": 1463.2777777777806,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 34.44444444444457,
			"height": 54.44444444444434,
			"seed": 1779532871,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.1111111111113132
				],
				[
					0,
					2.2222222222221717
				],
				[
					0,
					3.333333333333485
				],
				[
					0,
					4.444444444444571
				],
				[
					1.1111111111113132,
					5.555555555555657
				],
				[
					1.1111111111113132,
					7.777777777777828
				],
				[
					1.1111111111113132,
					10
				],
				[
					1.1111111111113132,
					13.333333333333485
				],
				[
					1.1111111111113132,
					15.555555555555657
				],
				[
					2.222222222222399,
					18.888888888888914
				],
				[
					2.222222222222399,
					22.22222222222217
				],
				[
					2.222222222222399,
					24.44444444444457
				],
				[
					2.222222222222399,
					26.666666666666742
				],
				[
					2.222222222222399,
					30
				],
				[
					2.222222222222399,
					32.22222222222217
				],
				[
					2.222222222222399,
					33.333333333333485
				],
				[
					2.222222222222399,
					34.44444444444457
				],
				[
					2.222222222222399,
					35.55555555555566
				],
				[
					2.222222222222399,
					34.44444444444457
				],
				[
					2.222222222222399,
					33.333333333333485
				],
				[
					2.222222222222399,
					32.22222222222217
				],
				[
					2.222222222222399,
					31.111111111111313
				],
				[
					3.333333333333485,
					27.77777777777783
				],
				[
					3.333333333333485,
					24.44444444444457
				],
				[
					4.444444444444571,
					21.111111111111313
				],
				[
					4.444444444444571,
					18.888888888888914
				],
				[
					4.444444444444571,
					14.44444444444457
				],
				[
					4.444444444444571,
					8.888888888888914
				],
				[
					5.555555555555657,
					6.6666666666667425
				],
				[
					5.555555555555657,
					2.2222222222221717
				],
				[
					5.555555555555657,
					-2.2222222222221717
				],
				[
					5.555555555555657,
					-5.555555555555429
				],
				[
					5.555555555555657,
					-6.666666666666515
				],
				[
					6.66666666666697,
					-8.888888888888687
				],
				[
					6.66666666666697,
					-11.111111111111086
				],
				[
					7.777777777777828,
					-11.111111111111086
				],
				[
					7.777777777777828,
					-10
				],
				[
					7.777777777777828,
					-8.888888888888687
				],
				[
					8.888888888889142,
					-7.777777777777828
				],
				[
					10,
					-4.444444444444343
				],
				[
					11.111111111111313,
					0
				],
				[
					13.333333333333485,
					4.444444444444571
				],
				[
					14.44444444444457,
					7.777777777777828
				],
				[
					15.555555555555657,
					13.333333333333485
				],
				[
					17.77777777777783,
					20
				],
				[
					18.88888888888914,
					23.333333333333485
				],
				[
					21.111111111111313,
					28.888888888888914
				],
				[
					23.333333333333485,
					33.333333333333485
				],
				[
					24.44444444444457,
					37.77777777777783
				],
				[
					25.555555555555657,
					38.888888888888914
				],
				[
					26.66666666666697,
					41.11111111111131
				],
				[
					28.88888888888914,
					42.22222222222217
				],
				[
					30,
					41.11111111111131
				],
				[
					31.111111111111313,
					38.888888888888914
				],
				[
					32.2222222222224,
					35.55555555555566
				],
				[
					33.333333333333485,
					30
				],
				[
					33.333333333333485,
					27.77777777777783
				],
				[
					34.44444444444457,
					21.111111111111313
				],
				[
					34.44444444444457,
					14.44444444444457
				],
				[
					34.44444444444457,
					7.777777777777828
				],
				[
					34.44444444444457,
					4.444444444444571
				],
				[
					34.44444444444457,
					-1.1111111111110858
				],
				[
					33.333333333333485,
					-5.555555555555429
				],
				[
					33.333333333333485,
					-7.777777777777828
				],
				[
					33.333333333333485,
					-11.111111111111086
				],
				[
					33.333333333333485,
					-12.222222222222172
				],
				[
					33.333333333333485,
					-12.222222222222172
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.046875,
				0.1279296875,
				0.208984375,
				0.2314453125,
				0.25390625,
				0.265625,
				0.291015625,
				0.314453125,
				0.3349609375,
				0.34375,
				0.3603515625,
				0.375,
				0.3798828125,
				0.38671875,
				0.390625,
				0.392578125,
				0.3935546875,
				0.392578125,
				0.3935546875,
				0.3984375,
				0.3994140625,
				0.3994140625,
				0.3994140625,
				0.3984375,
				0.3974609375,
				0.3984375,
				0.3984375,
				0.3984375,
				0.3984375,
				0.3984375,
				0.3984375,
				0.396484375,
				0.3935546875,
				0.392578125,
				0.3916015625,
				0.3896484375,
				0.3896484375,
				0.392578125,
				0.39453125,
				0.3984375,
				0.404296875,
				0.4130859375,
				0.423828125,
				0.4287109375,
				0.44140625,
				0.453125,
				0.458984375,
				0.4697265625,
				0.478515625,
				0.4853515625,
				0.48828125,
				0.4931640625,
				0.5,
				0.5068359375,
				0.5166015625,
				0.5234375,
				0.5263671875,
				0.52734375,
				0.52734375,
				0.525390625,
				0.5185546875,
				0.513671875,
				0.494140625,
				0.4609375,
				0.4375,
				0.3779296875,
				0.341796875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 123,
			"versionNonce": 1426619473,
			"isDeleted": false,
			"id": "hsZUgj47scVStfrST5fUV",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1477.2222222222167,
			"y": 1451.0555555555584,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 33.333333333333485,
			"height": 48.888888888888914,
			"seed": 474418537,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.1111111111110858,
					-1.1111111111110858
				],
				[
					1.1111111111110858,
					0
				],
				[
					2.2222222222221717,
					1.1111111111110858
				],
				[
					3.333333333333485,
					3.333333333333485
				],
				[
					4.444444444444343,
					5.555555555555657
				],
				[
					4.444444444444343,
					7.777777777777828
				],
				[
					6.666666666666515,
					12.222222222222172
				],
				[
					7.777777777777828,
					16.666666666666742
				],
				[
					8.888888888888914,
					22.22222222222217
				],
				[
					10,
					25.555555555555657
				],
				[
					11.111111111111086,
					31.111111111111086
				],
				[
					13.333333333333485,
					36.66666666666674
				],
				[
					14.444444444444343,
					41.111111111111086
				],
				[
					15.555555555555657,
					42.22222222222217
				],
				[
					16.666666666666515,
					45.55555555555566
				],
				[
					17.77777777777783,
					47.77777777777783
				],
				[
					18.888888888888914,
					47.77777777777783
				],
				[
					20,
					47.77777777777783
				],
				[
					22.22222222222217,
					45.55555555555566
				],
				[
					23.333333333333485,
					42.22222222222217
				],
				[
					24.444444444444343,
					40
				],
				[
					26.666666666666515,
					35.55555555555566
				],
				[
					28.888888888888914,
					30
				],
				[
					30,
					23.333333333333485
				],
				[
					31.111111111111086,
					20
				],
				[
					32.22222222222217,
					14.444444444444343
				],
				[
					32.22222222222217,
					8.888888888888914
				],
				[
					32.22222222222217,
					4.444444444444343
				],
				[
					33.333333333333485,
					2.2222222222221717
				],
				[
					33.333333333333485,
					0
				],
				[
					33.333333333333485,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0615234375,
				0.0751953125,
				0.2529296875,
				0.2978515625,
				0.33984375,
				0.376953125,
				0.392578125,
				0.419921875,
				0.4423828125,
				0.4619140625,
				0.470703125,
				0.4853515625,
				0.498046875,
				0.5078125,
				0.51171875,
				0.517578125,
				0.521484375,
				0.5234375,
				0.525390625,
				0.5302734375,
				0.5322265625,
				0.533203125,
				0.5341796875,
				0.5322265625,
				0.529296875,
				0.525390625,
				0.51171875,
				0.484375,
				0.4375,
				0.40625,
				0.3251953125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 141,
			"versionNonce": 990440767,
			"isDeleted": false,
			"id": "tXcxjW_eYN6oAf_XiV9-Y",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1532.7777777777724,
			"y": 1444.3888888888919,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 26.666666666666742,
			"height": 62.22222222222217,
			"seed": 768469927,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.1111111111108585
				],
				[
					0,
					2.2222222222221717
				],
				[
					0,
					4.444444444444343
				],
				[
					-1.1111111111113132,
					5.555555555555429
				],
				[
					-2.2222222222221717,
					10
				],
				[
					-3.333333333333485,
					14.444444444444343
				],
				[
					-5.555555555555657,
					20
				],
				[
					-5.555555555555657,
					23.333333333333258
				],
				[
					-7.777777777777828,
					30
				],
				[
					-10,
					36.666666666666515
				],
				[
					-12.222222222222172,
					42.22222222222217
				],
				[
					-14.44444444444457,
					47.7777777777776
				],
				[
					-15.555555555555657,
					50
				],
				[
					-15.555555555555657,
					53.33333333333326
				],
				[
					-16.666666666666742,
					55.55555555555543
				],
				[
					-16.666666666666742,
					56.666666666666515
				],
				[
					-15.555555555555657,
					55.55555555555543
				],
				[
					-14.44444444444457,
					54.44444444444434
				],
				[
					-14.44444444444457,
					52.22222222222217
				],
				[
					-12.222222222222172,
					47.7777777777776
				],
				[
					-10,
					42.22222222222217
				],
				[
					-8.888888888889142,
					35.55555555555543
				],
				[
					-7.777777777777828,
					32.22222222222217
				],
				[
					-5.555555555555657,
					25.55555555555543
				],
				[
					-4.444444444444571,
					18.888888888888687
				],
				[
					-3.333333333333485,
					12.222222222222172
				],
				[
					-2.2222222222221717,
					8.888888888888687
				],
				[
					-1.1111111111113132,
					4.444444444444343
				],
				[
					-1.1111111111113132,
					0
				],
				[
					0,
					-3.333333333333485
				],
				[
					0,
					-4.444444444444571
				],
				[
					0,
					-5.555555555555657
				],
				[
					0,
					-4.444444444444571
				],
				[
					1.1111111111108585,
					-3.333333333333485
				],
				[
					1.1111111111108585,
					-2.222222222222399
				],
				[
					1.1111111111108585,
					0
				],
				[
					1.1111111111108585,
					4.444444444444343
				],
				[
					2.2222222222221717,
					10
				],
				[
					2.2222222222221717,
					12.222222222222172
				],
				[
					3.3333333333332575,
					18.888888888888687
				],
				[
					4.444444444444343,
					26.666666666666515
				],
				[
					5.555555555555429,
					33.33333333333326
				],
				[
					6.666666666666515,
					36.666666666666515
				],
				[
					7.777777777777828,
					42.22222222222217
				],
				[
					7.777777777777828,
					47.7777777777776
				],
				[
					8.888888888888687,
					51.11111111111086
				],
				[
					8.888888888888687,
					53.33333333333326
				],
				[
					10,
					54.44444444444434
				],
				[
					10,
					54.44444444444434
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.134765625,
				0.2392578125,
				0.28515625,
				0.328125,
				0.34765625,
				0.3798828125,
				0.404296875,
				0.4208984375,
				0.4267578125,
				0.43359375,
				0.4365234375,
				0.43359375,
				0.4228515625,
				0.4140625,
				0.3916015625,
				0.3583984375,
				0.337890625,
				0.2919921875,
				0.24609375,
				0.2236328125,
				0.1806640625,
				0.1455078125,
				0.1201171875,
				0.111328125,
				0.1015625,
				0.099609375,
				0.107421875,
				0.115234375,
				0.1357421875,
				0.1611328125,
				0.189453125,
				0.203125,
				0.2294921875,
				0.275390625,
				0.28515625,
				0.296875,
				0.3193359375,
				0.33984375,
				0.357421875,
				0.3642578125,
				0.373046875,
				0.3759765625,
				0.375,
				0.375,
				0.3720703125,
				0.359375,
				0.3330078125,
				0.3125,
				0.2861328125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 107,
			"versionNonce": 137808433,
			"isDeleted": false,
			"id": "pkNb3xBNJAYhifb9x9_G_",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1524.9999999999945,
			"y": 1469.9444444444473,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 24.444444444444343,
			"height": 7.777777777777828,
			"seed": 1700735529,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111110858
				],
				[
					1.1111111111110858,
					-1.1111111111110858
				],
				[
					2.2222222222221717,
					0
				],
				[
					4.444444444444343,
					0
				],
				[
					6.666666666666515,
					1.1111111111110858
				],
				[
					8.888888888888687,
					2.2222222222221717
				],
				[
					10,
					3.3333333333332575
				],
				[
					13.333333333333258,
					4.444444444444571
				],
				[
					15.555555555555657,
					5.555555555555429
				],
				[
					17.77777777777783,
					5.555555555555429
				],
				[
					18.888888888888687,
					6.6666666666667425
				],
				[
					21.111111111111086,
					6.6666666666667425
				],
				[
					23.333333333333258,
					6.6666666666667425
				],
				[
					24.444444444444343,
					5.555555555555429
				],
				[
					24.444444444444343,
					5.555555555555429
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.169921875,
				0.1689453125,
				0.2578125,
				0.3046875,
				0.37109375,
				0.4013671875,
				0.4208984375,
				0.4267578125,
				0.4326171875,
				0.4296875,
				0.4150390625,
				0.40234375,
				0.3623046875,
				0.306640625,
				0.2744140625,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 121,
			"versionNonce": 1394011487,
			"isDeleted": false,
			"id": "nPxI9z-ie1gBmXA4vqGKj",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1558.3333333333278,
			"y": 1439.9444444444473,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 31.111111111111313,
			"height": 57.77777777777783,
			"seed": 63574503,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111110858
				],
				[
					0,
					0
				],
				[
					0,
					1.1111111111110858
				],
				[
					0,
					3.3333333333332575
				],
				[
					0,
					4.444444444444571
				],
				[
					0,
					7.777777777777828
				],
				[
					-1.1111111111110858,
					12.222222222222172
				],
				[
					-1.1111111111110858,
					14.44444444444457
				],
				[
					-1.1111111111110858,
					18.888888888888914
				],
				[
					-2.2222222222221717,
					24.44444444444457
				],
				[
					-3.3333333333332575,
					30
				],
				[
					-3.3333333333332575,
					33.33333333333326
				],
				[
					-4.444444444444571,
					37.77777777777783
				],
				[
					-4.444444444444571,
					43.33333333333326
				],
				[
					-4.444444444444571,
					46.66666666666674
				],
				[
					-4.444444444444571,
					48.888888888888914
				],
				[
					-3.3333333333332575,
					52.22222222222217
				],
				[
					-1.1111111111110858,
					54.44444444444457
				],
				[
					1.1111111111110858,
					55.55555555555543
				],
				[
					2.222222222222399,
					56.66666666666674
				],
				[
					4.444444444444571,
					56.66666666666674
				],
				[
					7.777777777777828,
					56.66666666666674
				],
				[
					12.222222222222399,
					56.66666666666674
				],
				[
					13.333333333333258,
					56.66666666666674
				],
				[
					17.77777777777783,
					54.44444444444457
				],
				[
					21.111111111111086,
					53.33333333333326
				],
				[
					23.333333333333258,
					52.22222222222217
				],
				[
					26.666666666666742,
					50
				],
				[
					26.666666666666742,
					50
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.16796875,
				0.1796875,
				0.2001953125,
				0.2294921875,
				0.2509765625,
				0.2646484375,
				0.2958984375,
				0.3310546875,
				0.349609375,
				0.3837890625,
				0.4140625,
				0.4384765625,
				0.4482421875,
				0.4638671875,
				0.4765625,
				0.4892578125,
				0.49609375,
				0.509765625,
				0.5234375,
				0.5361328125,
				0.5419921875,
				0.548828125,
				0.5537109375,
				0.5556640625,
				0.5556640625,
				0.55078125,
				0.533203125,
				0.515625,
				0.4541015625,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 160,
			"versionNonce": 1075862545,
			"isDeleted": false,
			"id": "WHEUI032vje0R7BLH_2Lj",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1303.8888888888816,
			"y": 1608.8333333333335,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 15.55555555555543,
			"height": 50,
			"seed": 1422376745,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111110858
				],
				[
					0,
					-2.2222222222221717
				],
				[
					1.1111111111110858,
					-2.2222222222221717
				],
				[
					1.1111111111110858,
					-1.1111111111110858
				],
				[
					1.1111111111110858,
					1.1111111111110858
				],
				[
					0,
					3.3333333333332575
				],
				[
					0,
					5.555555555555657
				],
				[
					0,
					7.777777777777828
				],
				[
					-1.1111111111110858,
					11.111111111111086
				],
				[
					-2.222222222222399,
					15.555555555555657
				],
				[
					-2.222222222222399,
					18.888888888888914
				],
				[
					-3.3333333333332575,
					21.111111111111086
				],
				[
					-3.3333333333332575,
					25.555555555555657
				],
				[
					-4.444444444444571,
					30
				],
				[
					-5.555555555555657,
					34.44444444444434
				],
				[
					-5.555555555555657,
					35.55555555555566
				],
				[
					-6.6666666666667425,
					38.888888888888914
				],
				[
					-7.777777777777828,
					41.111111111111086
				],
				[
					-7.777777777777828,
					42.22222222222217
				],
				[
					-7.777777777777828,
					43.33333333333326
				],
				[
					-7.777777777777828,
					44.44444444444434
				],
				[
					-7.777777777777828,
					43.33333333333326
				],
				[
					-7.777777777777828,
					42.22222222222217
				],
				[
					-7.777777777777828,
					41.111111111111086
				],
				[
					-6.6666666666667425,
					38.888888888888914
				],
				[
					-6.6666666666667425,
					37.77777777777783
				],
				[
					-5.555555555555657,
					35.55555555555566
				],
				[
					-4.444444444444571,
					32.22222222222217
				],
				[
					-3.3333333333332575,
					28.888888888888914
				],
				[
					-2.222222222222399,
					27.77777777777783
				],
				[
					-1.1111111111110858,
					24.444444444444343
				],
				[
					1.1111111111110858,
					22.22222222222217
				],
				[
					2.2222222222221717,
					20
				],
				[
					3.3333333333332575,
					18.888888888888914
				],
				[
					4.444444444444343,
					17.77777777777783
				],
				[
					5.555555555555429,
					16.666666666666515
				],
				[
					6.6666666666667425,
					16.666666666666515
				],
				[
					7.777777777777601,
					17.77777777777783
				],
				[
					7.777777777777601,
					18.888888888888914
				],
				[
					7.777777777777601,
					20
				],
				[
					7.777777777777601,
					21.111111111111086
				],
				[
					7.777777777777601,
					23.333333333333258
				],
				[
					6.6666666666667425,
					25.555555555555657
				],
				[
					6.6666666666667425,
					26.666666666666515
				],
				[
					5.555555555555429,
					28.888888888888914
				],
				[
					4.444444444444343,
					30
				],
				[
					2.2222222222221717,
					32.22222222222217
				],
				[
					0,
					33.33333333333326
				],
				[
					-1.1111111111110858,
					34.44444444444434
				],
				[
					-3.3333333333332575,
					34.44444444444434
				],
				[
					-4.444444444444571,
					34.44444444444434
				],
				[
					-5.555555555555657,
					34.44444444444434
				],
				[
					-6.6666666666667425,
					34.44444444444434
				],
				[
					-5.555555555555657,
					34.44444444444434
				],
				[
					-4.444444444444571,
					35.55555555555566
				],
				[
					-3.3333333333332575,
					36.666666666666515
				],
				[
					-1.1111111111110858,
					37.77777777777783
				],
				[
					0,
					38.888888888888914
				],
				[
					2.2222222222221717,
					40
				],
				[
					3.3333333333332575,
					41.111111111111086
				],
				[
					4.444444444444343,
					42.22222222222217
				],
				[
					5.555555555555429,
					42.22222222222217
				],
				[
					6.6666666666667425,
					43.33333333333326
				],
				[
					6.6666666666667425,
					44.44444444444434
				],
				[
					6.6666666666667425,
					45.55555555555566
				],
				[
					7.777777777777601,
					46.666666666666515
				],
				[
					7.777777777777601,
					47.77777777777783
				],
				[
					7.777777777777601,
					47.77777777777783
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0341796875,
				0.037109375,
				0.0908203125,
				0.123046875,
				0.283203125,
				0.3203125,
				0.33984375,
				0.357421875,
				0.3642578125,
				0.3759765625,
				0.3837890625,
				0.3896484375,
				0.3916015625,
				0.396484375,
				0.400390625,
				0.40234375,
				0.40234375,
				0.404296875,
				0.404296875,
				0.4033203125,
				0.40234375,
				0.3994140625,
				0.388671875,
				0.3818359375,
				0.376953125,
				0.373046875,
				0.373046875,
				0.373046875,
				0.3720703125,
				0.37109375,
				0.3701171875,
				0.3701171875,
				0.3681640625,
				0.3671875,
				0.3662109375,
				0.365234375,
				0.365234375,
				0.3642578125,
				0.36328125,
				0.3642578125,
				0.3642578125,
				0.3642578125,
				0.3662109375,
				0.3681640625,
				0.369140625,
				0.3701171875,
				0.37109375,
				0.3720703125,
				0.3720703125,
				0.3720703125,
				0.3720703125,
				0.37109375,
				0.37109375,
				0.37109375,
				0.3857421875,
				0.404296875,
				0.419921875,
				0.447265625,
				0.4638671875,
				0.478515625,
				0.490234375,
				0.4990234375,
				0.505859375,
				0.51171875,
				0.51171875,
				0.5068359375,
				0.490234375,
				0.421875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 152,
			"versionNonce": 363850111,
			"isDeleted": false,
			"id": "vY2ACNPOIKNTGujRV-xME",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1133.888888888881,
			"y": 1841.0555555555652,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 19.999999999999773,
			"height": 47.7777777777776,
			"seed": 1939955657,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.1111111111108585
				],
				[
					0,
					2.2222222222221717
				],
				[
					0,
					3.3333333333332575
				],
				[
					-1.1111111111110858,
					5.555555555555429
				],
				[
					-1.1111111111110858,
					7.777777777777601
				],
				[
					-1.1111111111110858,
					12.222222222222172
				],
				[
					-1.1111111111110858,
					13.333333333333258
				],
				[
					-2.2222222222221717,
					17.7777777777776
				],
				[
					-2.2222222222221717,
					23.333333333333258
				],
				[
					-2.2222222222221717,
					25.55555555555543
				],
				[
					-3.3333333333332575,
					30
				],
				[
					-3.3333333333332575,
					35.55555555555543
				],
				[
					-4.444444444444343,
					38.88888888888869
				],
				[
					-4.444444444444343,
					41.11111111111086
				],
				[
					-5.555555555555429,
					44.44444444444434
				],
				[
					-5.555555555555429,
					46.666666666666515
				],
				[
					-5.555555555555429,
					47.7777777777776
				],
				[
					-5.555555555555429,
					45.55555555555543
				],
				[
					-5.555555555555429,
					44.44444444444434
				],
				[
					-4.444444444444343,
					42.22222222222217
				],
				[
					-4.444444444444343,
					38.88888888888869
				],
				[
					-3.3333333333332575,
					37.7777777777776
				],
				[
					-2.2222222222221717,
					34.44444444444434
				],
				[
					-1.1111111111110858,
					32.22222222222217
				],
				[
					0,
					31.11111111111086
				],
				[
					2.2222222222221717,
					28.888888888888687
				],
				[
					3.333333333333485,
					26.666666666666515
				],
				[
					5.555555555555657,
					24.444444444444343
				],
				[
					6.6666666666667425,
					24.444444444444343
				],
				[
					7.777777777777828,
					23.333333333333258
				],
				[
					10,
					23.333333333333258
				],
				[
					11.111111111111313,
					23.333333333333258
				],
				[
					12.222222222222172,
					23.333333333333258
				],
				[
					12.222222222222172,
					24.444444444444343
				],
				[
					12.222222222222172,
					25.55555555555543
				],
				[
					12.222222222222172,
					27.7777777777776
				],
				[
					12.222222222222172,
					28.888888888888687
				],
				[
					11.111111111111313,
					31.11111111111086
				],
				[
					10,
					33.33333333333326
				],
				[
					8.888888888888914,
					35.55555555555543
				],
				[
					7.777777777777828,
					36.666666666666515
				],
				[
					6.6666666666667425,
					37.7777777777776
				],
				[
					5.555555555555657,
					38.88888888888869
				],
				[
					4.444444444444571,
					40
				],
				[
					3.333333333333485,
					41.11111111111086
				],
				[
					2.2222222222221717,
					41.11111111111086
				],
				[
					1.1111111111113132,
					42.22222222222217
				],
				[
					2.2222222222221717,
					42.22222222222217
				],
				[
					2.2222222222221717,
					43.33333333333326
				],
				[
					3.333333333333485,
					43.33333333333326
				],
				[
					5.555555555555657,
					44.44444444444434
				],
				[
					6.6666666666667425,
					44.44444444444434
				],
				[
					7.777777777777828,
					44.44444444444434
				],
				[
					8.888888888888914,
					45.55555555555543
				],
				[
					11.111111111111313,
					45.55555555555543
				],
				[
					12.222222222222172,
					46.666666666666515
				],
				[
					13.333333333333485,
					46.666666666666515
				],
				[
					14.444444444444343,
					46.666666666666515
				],
				[
					14.444444444444343,
					47.7777777777776
				],
				[
					14.444444444444343,
					47.7777777777776
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0458984375,
				0.119140625,
				0.1552734375,
				0.18359375,
				0.2099609375,
				0.236328125,
				0.26171875,
				0.2744140625,
				0.2958984375,
				0.310546875,
				0.31640625,
				0.3232421875,
				0.3271484375,
				0.3291015625,
				0.3291015625,
				0.330078125,
				0.3310546875,
				0.33203125,
				0.3349609375,
				0.3349609375,
				0.3349609375,
				0.3359375,
				0.3359375,
				0.3359375,
				0.3359375,
				0.3349609375,
				0.3349609375,
				0.3330078125,
				0.3330078125,
				0.3330078125,
				0.3330078125,
				0.333984375,
				0.3359375,
				0.3388671875,
				0.3427734375,
				0.3447265625,
				0.345703125,
				0.345703125,
				0.3447265625,
				0.3427734375,
				0.33984375,
				0.3408203125,
				0.341796875,
				0.341796875,
				0.341796875,
				0.341796875,
				0.341796875,
				0.341796875,
				0.365234375,
				0.3818359375,
				0.3896484375,
				0.4130859375,
				0.4267578125,
				0.431640625,
				0.435546875,
				0.4443359375,
				0.447265625,
				0.4482421875,
				0.447265625,
				0.4296875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 126,
			"versionNonce": 1287434737,
			"isDeleted": false,
			"id": "bqPbNFBf21k_cOvuTRsjp",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1808.333333333325,
			"y": 1609.9444444444555,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 18.888888888888914,
			"height": 34.44444444444457,
			"seed": 1445527785,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2.222222222222399,
					-1.1111111111110858
				],
				[
					2.222222222222399,
					-2.222222222222399
				],
				[
					3.333333333333485,
					-4.444444444444571
				],
				[
					4.444444444444571,
					-5.555555555555657
				],
				[
					5.555555555555657,
					-7.777777777777828
				],
				[
					6.6666666666667425,
					-8.888888888888914
				],
				[
					8.888888888888914,
					-10
				],
				[
					10,
					-12.222222222222399
				],
				[
					12.222222222222399,
					-13.333333333333258
				],
				[
					13.333333333333485,
					-13.333333333333258
				],
				[
					15.555555555555657,
					-14.44444444444457
				],
				[
					16.666666666666742,
					-14.44444444444457
				],
				[
					17.77777777777783,
					-14.44444444444457
				],
				[
					18.888888888888914,
					-14.44444444444457
				],
				[
					18.888888888888914,
					-13.333333333333258
				],
				[
					18.888888888888914,
					-12.222222222222399
				],
				[
					17.77777777777783,
					-10
				],
				[
					17.77777777777783,
					-8.888888888888914
				],
				[
					16.666666666666742,
					-6.6666666666667425
				],
				[
					15.555555555555657,
					-4.444444444444571
				],
				[
					15.555555555555657,
					-3.3333333333332575
				],
				[
					14.44444444444457,
					-1.1111111111110858
				],
				[
					13.333333333333485,
					0
				],
				[
					13.333333333333485,
					3.3333333333332575
				],
				[
					12.222222222222399,
					5.555555555555429
				],
				[
					12.222222222222399,
					7.777777777777601
				],
				[
					12.222222222222399,
					8.888888888888914
				],
				[
					12.222222222222399,
					11.111111111111086
				],
				[
					13.333333333333485,
					13.333333333333258
				],
				[
					14.44444444444457,
					15.55555555555543
				],
				[
					14.44444444444457,
					16.666666666666742
				],
				[
					17.77777777777783,
					18.888888888888914
				],
				[
					17.77777777777783,
					20
				],
				[
					17.77777777777783,
					20
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.17578125,
				0.1865234375,
				0.1875,
				0.1875,
				0.1904296875,
				0.1962890625,
				0.1982421875,
				0.2001953125,
				0.2041015625,
				0.2119140625,
				0.21875,
				0.23828125,
				0.2509765625,
				0.28515625,
				0.322265625,
				0.3408203125,
				0.373046875,
				0.412109375,
				0.421875,
				0.4384765625,
				0.4521484375,
				0.458984375,
				0.470703125,
				0.4755859375,
				0.482421875,
				0.4873046875,
				0.4892578125,
				0.4892578125,
				0.4892578125,
				0.4873046875,
				0.4833984375,
				0.478515625,
				0.435546875,
				0.408203125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 101,
			"versionNonce": 1880383903,
			"isDeleted": false,
			"id": "uGunFu9pcBtMbNkIp_TbM",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1836.111111111103,
			"y": 1648.8333333333444,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 5.555555555555429,
			"height": 4.444444444444343,
			"seed": 38512809,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111110858,
					1.1111111111110858
				],
				[
					-2.2222222222221717,
					1.1111111111110858
				],
				[
					-2.2222222222221717,
					2.2222222222221717
				],
				[
					-3.3333333333332575,
					2.2222222222221717
				],
				[
					-4.444444444444343,
					3.3333333333332575
				],
				[
					-5.555555555555429,
					3.3333333333332575
				],
				[
					-5.555555555555429,
					4.444444444444343
				],
				[
					0,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.3125,
				0.30859375,
				0.3232421875,
				0.3369140625,
				0.3837890625,
				0.4248046875,
				0.4775390625,
				0.4892578125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 148,
			"versionNonce": 320031697,
			"isDeleted": false,
			"id": "oNU6z6TcIV2zzg5No7FS7",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1893.8888888888807,
			"y": 1613.2777777777887,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 20,
			"height": 47.77777777777783,
			"seed": 144437767,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.1111111111110858
				],
				[
					0,
					2.2222222222221717
				],
				[
					0,
					4.444444444444343
				],
				[
					0,
					5.555555555555657
				],
				[
					0,
					8.888888888888914
				],
				[
					0,
					13.333333333333485
				],
				[
					0,
					16.666666666666742
				],
				[
					1.1111111111110858,
					18.888888888888914
				],
				[
					1.1111111111110858,
					22.22222222222217
				],
				[
					1.1111111111110858,
					25.555555555555657
				],
				[
					1.1111111111110858,
					27.77777777777783
				],
				[
					1.1111111111110858,
					28.888888888888914
				],
				[
					2.2222222222221717,
					27.77777777777783
				],
				[
					2.2222222222221717,
					26.666666666666742
				],
				[
					1.1111111111110858,
					23.333333333333485
				],
				[
					1.1111111111110858,
					21.111111111111086
				],
				[
					1.1111111111110858,
					16.666666666666742
				],
				[
					1.1111111111110858,
					12.222222222222172
				],
				[
					1.1111111111110858,
					6.6666666666667425
				],
				[
					1.1111111111110858,
					3.333333333333485
				],
				[
					2.2222222222221717,
					-1.1111111111110858
				],
				[
					2.2222222222221717,
					-6.666666666666515
				],
				[
					3.3333333333332575,
					-11.111111111111086
				],
				[
					4.444444444444343,
					-12.222222222222172
				],
				[
					6.6666666666667425,
					-15.555555555555657
				],
				[
					7.777777777777828,
					-17.77777777777783
				],
				[
					8.888888888888914,
					-17.77777777777783
				],
				[
					11.111111111111086,
					-18.888888888888914
				],
				[
					13.333333333333258,
					-18.888888888888914
				],
				[
					14.444444444444343,
					-18.888888888888914
				],
				[
					15.555555555555657,
					-18.888888888888914
				],
				[
					16.666666666666742,
					-17.77777777777783
				],
				[
					17.77777777777783,
					-16.666666666666515
				],
				[
					17.77777777777783,
					-14.444444444444343
				],
				[
					17.77777777777783,
					-12.222222222222172
				],
				[
					16.666666666666742,
					-10
				],
				[
					15.555555555555657,
					-7.777777777777828
				],
				[
					14.444444444444343,
					-5.555555555555657
				],
				[
					12.222222222222172,
					-3.3333333333332575
				],
				[
					11.111111111111086,
					0
				],
				[
					8.888888888888914,
					2.2222222222221717
				],
				[
					7.777777777777828,
					3.333333333333485
				],
				[
					5.555555555555657,
					5.555555555555657
				],
				[
					4.444444444444343,
					7.777777777777828
				],
				[
					3.3333333333332575,
					8.888888888888914
				],
				[
					3.3333333333332575,
					11.111111111111086
				],
				[
					3.3333333333332575,
					13.333333333333485
				],
				[
					4.444444444444343,
					15.555555555555657
				],
				[
					6.6666666666667425,
					17.77777777777783
				],
				[
					8.888888888888914,
					18.888888888888914
				],
				[
					11.111111111111086,
					21.111111111111086
				],
				[
					12.222222222222172,
					21.111111111111086
				],
				[
					15.555555555555657,
					22.22222222222217
				],
				[
					18.888888888888914,
					22.22222222222217
				],
				[
					20,
					22.22222222222217
				],
				[
					20,
					22.22222222222217
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0751953125,
				0.146484375,
				0.15625,
				0.1923828125,
				0.2080078125,
				0.2421875,
				0.27734375,
				0.3076171875,
				0.3203125,
				0.33984375,
				0.3515625,
				0.3603515625,
				0.3662109375,
				0.373046875,
				0.373046875,
				0.373046875,
				0.373046875,
				0.373046875,
				0.3740234375,
				0.373046875,
				0.373046875,
				0.373046875,
				0.373046875,
				0.3740234375,
				0.375,
				0.376953125,
				0.3818359375,
				0.384765625,
				0.39453125,
				0.40625,
				0.419921875,
				0.4267578125,
				0.4404296875,
				0.451171875,
				0.4599609375,
				0.4658203125,
				0.4677734375,
				0.46875,
				0.46875,
				0.470703125,
				0.4755859375,
				0.4814453125,
				0.486328125,
				0.4951171875,
				0.5048828125,
				0.5087890625,
				0.515625,
				0.5205078125,
				0.5234375,
				0.5263671875,
				0.5234375,
				0.5146484375,
				0.5048828125,
				0.474609375,
				0.421875,
				0.3857421875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 131,
			"versionNonce": 1400165823,
			"isDeleted": false,
			"id": "S_GVSEzfH0noQFLzwmfYC",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1927.222222222214,
			"y": 1615.500000000011,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 26.666666666666742,
			"height": 22.22222222222217,
			"seed": 2016790695,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111110858,
					0
				],
				[
					0,
					0
				],
				[
					1.1111111111110858,
					0
				],
				[
					3.333333333333485,
					0
				],
				[
					4.444444444444571,
					0
				],
				[
					5.555555555555657,
					-1.1111111111110858
				],
				[
					6.6666666666667425,
					-1.1111111111110858
				],
				[
					7.777777777777828,
					-2.2222222222221717
				],
				[
					8.888888888888914,
					-2.2222222222221717
				],
				[
					8.888888888888914,
					-3.3333333333332575
				],
				[
					10,
					-4.444444444444343
				],
				[
					10,
					-5.555555555555429
				],
				[
					10,
					-6.666666666666515
				],
				[
					8.888888888888914,
					-7.777777777777828
				],
				[
					7.777777777777828,
					-8.888888888888687
				],
				[
					6.6666666666667425,
					-8.888888888888687
				],
				[
					5.555555555555657,
					-8.888888888888687
				],
				[
					3.333333333333485,
					-8.888888888888687
				],
				[
					2.222222222222399,
					-8.888888888888687
				],
				[
					1.1111111111110858,
					-7.777777777777828
				],
				[
					0,
					-6.666666666666515
				],
				[
					-2.2222222222221717,
					-5.555555555555429
				],
				[
					-2.2222222222221717,
					-4.444444444444343
				],
				[
					-3.3333333333332575,
					-2.2222222222221717
				],
				[
					-3.3333333333332575,
					-1.1111111111110858
				],
				[
					-4.444444444444343,
					1.1111111111113132
				],
				[
					-3.3333333333332575,
					3.333333333333485
				],
				[
					-2.2222222222221717,
					5.555555555555657
				],
				[
					-2.2222222222221717,
					6.6666666666667425
				],
				[
					0,
					8.888888888888914
				],
				[
					3.333333333333485,
					11.111111111111313
				],
				[
					6.6666666666667425,
					12.222222222222172
				],
				[
					7.777777777777828,
					12.222222222222172
				],
				[
					11.111111111111086,
					13.333333333333485
				],
				[
					15.555555555555657,
					13.333333333333485
				],
				[
					17.77777777777783,
					13.333333333333485
				],
				[
					20,
					13.333333333333485
				],
				[
					22.2222222222224,
					13.333333333333485
				],
				[
					22.2222222222224,
					13.333333333333485
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.1865234375,
				0.2119140625,
				0.2724609375,
				0.291015625,
				0.3017578125,
				0.30859375,
				0.310546875,
				0.314453125,
				0.3154296875,
				0.31640625,
				0.31640625,
				0.31640625,
				0.3173828125,
				0.3173828125,
				0.318359375,
				0.3232421875,
				0.326171875,
				0.3310546875,
				0.3525390625,
				0.3623046875,
				0.384765625,
				0.3974609375,
				0.4375,
				0.4501953125,
				0.4765625,
				0.4892578125,
				0.515625,
				0.5390625,
				0.5576171875,
				0.5654296875,
				0.5751953125,
				0.5810546875,
				0.583984375,
				0.5830078125,
				0.5791015625,
				0.5654296875,
				0.552734375,
				0.5068359375,
				0.470703125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 158,
			"versionNonce": 1799072177,
			"isDeleted": false,
			"id": "Maj6lGafCKpMA0QZMul84",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1969.4444444444364,
			"y": 1602.1666666666777,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 37.7777777777776,
			"height": 30,
			"seed": 599202505,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.1111111111110858
				],
				[
					0,
					2.2222222222221717
				],
				[
					0,
					3.3333333333332575
				],
				[
					0,
					5.555555555555429
				],
				[
					0,
					7.777777777777828
				],
				[
					1.1111111111110858,
					8.888888888888914
				],
				[
					1.1111111111110858,
					11.111111111111086
				],
				[
					1.1111111111110858,
					13.333333333333258
				],
				[
					1.1111111111110858,
					15.55555555555543
				],
				[
					1.1111111111110858,
					16.666666666666742
				],
				[
					2.2222222222221717,
					18.888888888888914
				],
				[
					2.2222222222221717,
					20
				],
				[
					2.2222222222221717,
					21.111111111111086
				],
				[
					2.2222222222221717,
					20
				],
				[
					2.2222222222221717,
					18.888888888888914
				],
				[
					2.2222222222221717,
					16.666666666666742
				],
				[
					3.3333333333332575,
					16.666666666666742
				],
				[
					3.3333333333332575,
					13.333333333333258
				],
				[
					4.444444444444343,
					10
				],
				[
					4.444444444444343,
					8.888888888888914
				],
				[
					5.555555555555429,
					5.555555555555429
				],
				[
					6.666666666666515,
					2.2222222222221717
				],
				[
					7.777777777777601,
					-1.1111111111110858
				],
				[
					8.888888888888687,
					-2.2222222222221717
				],
				[
					8.888888888888687,
					-5.555555555555429
				],
				[
					10,
					-6.6666666666667425
				],
				[
					11.111111111111086,
					-7.777777777777828
				],
				[
					11.111111111111086,
					-6.6666666666667425
				],
				[
					12.222222222222172,
					-4.444444444444571
				],
				[
					12.222222222222172,
					-3.3333333333332575
				],
				[
					12.222222222222172,
					0
				],
				[
					13.333333333333258,
					3.3333333333332575
				],
				[
					13.333333333333258,
					6.6666666666667425
				],
				[
					14.444444444444343,
					10
				],
				[
					14.444444444444343,
					11.111111111111086
				],
				[
					15.55555555555543,
					13.333333333333258
				],
				[
					15.55555555555543,
					14.44444444444457
				],
				[
					15.55555555555543,
					15.55555555555543
				],
				[
					16.666666666666515,
					16.666666666666742
				],
				[
					17.7777777777776,
					16.666666666666742
				],
				[
					18.888888888888687,
					16.666666666666742
				],
				[
					20,
					16.666666666666742
				],
				[
					21.111111111111086,
					14.44444444444457
				],
				[
					23.333333333333258,
					12.222222222222172
				],
				[
					24.444444444444343,
					11.111111111111086
				],
				[
					25.55555555555543,
					7.777777777777828
				],
				[
					27.7777777777776,
					4.444444444444571
				],
				[
					28.888888888888687,
					1.1111111111110858
				],
				[
					30,
					-1.1111111111110858
				],
				[
					31.111111111111086,
					-4.444444444444571
				],
				[
					31.111111111111086,
					-6.6666666666667425
				],
				[
					32.22222222222217,
					-7.777777777777828
				],
				[
					32.22222222222217,
					-8.888888888888914
				],
				[
					32.22222222222217,
					-7.777777777777828
				],
				[
					32.22222222222217,
					-6.6666666666667425
				],
				[
					32.22222222222217,
					-4.444444444444571
				],
				[
					32.22222222222217,
					-3.3333333333332575
				],
				[
					32.22222222222217,
					0
				],
				[
					32.22222222222217,
					2.2222222222221717
				],
				[
					33.33333333333326,
					5.555555555555429
				],
				[
					33.33333333333326,
					6.6666666666667425
				],
				[
					34.44444444444434,
					8.888888888888914
				],
				[
					35.55555555555543,
					10
				],
				[
					36.666666666666515,
					11.111111111111086
				],
				[
					37.7777777777776,
					12.222222222222172
				],
				[
					37.7777777777776,
					12.222222222222172
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0986328125,
				0.1435546875,
				0.1796875,
				0.2197265625,
				0.26171875,
				0.3037109375,
				0.32421875,
				0.3603515625,
				0.3857421875,
				0.4033203125,
				0.41015625,
				0.4189453125,
				0.4228515625,
				0.4287109375,
				0.435546875,
				0.435546875,
				0.4345703125,
				0.4345703125,
				0.43359375,
				0.43359375,
				0.4326171875,
				0.4326171875,
				0.4326171875,
				0.4326171875,
				0.431640625,
				0.4306640625,
				0.4296875,
				0.4287109375,
				0.4326171875,
				0.4443359375,
				0.44921875,
				0.458984375,
				0.4697265625,
				0.4794921875,
				0.4873046875,
				0.490234375,
				0.49609375,
				0.4990234375,
				0.5009765625,
				0.50390625,
				0.5048828125,
				0.50390625,
				0.5009765625,
				0.49609375,
				0.490234375,
				0.4873046875,
				0.4833984375,
				0.48046875,
				0.478515625,
				0.4775390625,
				0.478515625,
				0.478515625,
				0.4794921875,
				0.4814453125,
				0.4853515625,
				0.4873046875,
				0.486328125,
				0.484375,
				0.4716796875,
				0.443359375,
				0.3994140625,
				0.373046875,
				0.3125,
				0.2470703125,
				0.2138671875,
				0.1533203125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 255,
			"versionNonce": 921814495,
			"isDeleted": false,
			"id": "ARlNYcF3Vo8CFMBk_3Klf",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2021.6666666666586,
			"y": 1596.6111111111222,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 97.77777777777783,
			"height": 97.77777777777783,
			"seed": 489314441,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111113132
				],
				[
					0,
					-2.222222222222399
				],
				[
					0,
					-3.333333333333485
				],
				[
					-1.1111111111110858,
					-3.333333333333485
				],
				[
					-1.1111111111110858,
					-4.444444444444571
				],
				[
					-2.2222222222221717,
					-5.555555555555657
				],
				[
					-3.333333333333485,
					-5.555555555555657
				],
				[
					-4.444444444444571,
					-5.555555555555657
				],
				[
					-5.555555555555657,
					-4.444444444444571
				],
				[
					-6.6666666666667425,
					-2.222222222222399
				],
				[
					-6.6666666666667425,
					-1.1111111111113132
				],
				[
					-7.777777777777828,
					0
				],
				[
					-7.777777777777828,
					3.3333333333332575
				],
				[
					-8.888888888888914,
					5.555555555555429
				],
				[
					-8.888888888888914,
					6.666666666666515
				],
				[
					-8.888888888888914,
					8.888888888888687
				],
				[
					-8.888888888888914,
					11.111111111110858
				],
				[
					-7.777777777777828,
					13.333333333333258
				],
				[
					-6.6666666666667425,
					14.444444444444343
				],
				[
					-5.555555555555657,
					15.55555555555543
				],
				[
					-4.444444444444571,
					14.444444444444343
				],
				[
					-2.2222222222221717,
					13.333333333333258
				],
				[
					-1.1111111111110858,
					12.222222222222172
				],
				[
					0,
					11.111111111110858
				],
				[
					1.1111111111110858,
					7.777777777777601
				],
				[
					3.3333333333332575,
					5.555555555555429
				],
				[
					4.444444444444343,
					2.2222222222221717
				],
				[
					5.555555555555429,
					0
				],
				[
					6.666666666666515,
					-3.333333333333485
				],
				[
					7.777777777777828,
					-7.777777777777828
				],
				[
					7.777777777777828,
					-11.111111111111313
				],
				[
					7.777777777777828,
					-12.222222222222399
				],
				[
					7.777777777777828,
					-14.44444444444457
				],
				[
					7.777777777777828,
					-15.555555555555657
				],
				[
					7.777777777777828,
					-16.666666666666742
				],
				[
					6.666666666666515,
					-16.666666666666742
				],
				[
					6.666666666666515,
					-15.555555555555657
				],
				[
					6.666666666666515,
					-13.333333333333485
				],
				[
					5.555555555555429,
					-12.222222222222399
				],
				[
					5.555555555555429,
					-8.888888888889142
				],
				[
					5.555555555555429,
					-5.555555555555657
				],
				[
					5.555555555555429,
					-3.333333333333485
				],
				[
					6.666666666666515,
					1.1111111111108585
				],
				[
					7.777777777777828,
					5.555555555555429
				],
				[
					7.777777777777828,
					11.111111111110858
				],
				[
					8.888888888888914,
					13.333333333333258
				],
				[
					10,
					16.666666666666515
				],
				[
					11.111111111111086,
					20
				],
				[
					12.222222222222172,
					22.22222222222217
				],
				[
					14.444444444444343,
					22.22222222222217
				],
				[
					16.666666666666515,
					21.11111111111086
				],
				[
					18.888888888888914,
					17.7777777777776
				],
				[
					20,
					15.55555555555543
				],
				[
					22.22222222222217,
					11.111111111110858
				],
				[
					24.444444444444343,
					4.444444444444343
				],
				[
					26.666666666666288,
					-2.222222222222399
				],
				[
					27.7777777777776,
					-6.6666666666667425
				],
				[
					28.888888888888914,
					-14.44444444444457
				],
				[
					30.000000000000227,
					-23.333333333333485
				],
				[
					31.111111111111086,
					-27.77777777777783
				],
				[
					32.222222222221944,
					-36.66666666666674
				],
				[
					32.222222222221944,
					-46.66666666666674
				],
				[
					32.222222222221944,
					-54.44444444444457
				],
				[
					32.222222222221944,
					-57.77777777777783
				],
				[
					32.222222222221944,
					-64.44444444444457
				],
				[
					32.222222222221944,
					-70
				],
				[
					32.222222222221944,
					-72.2222222222224
				],
				[
					32.222222222221944,
					-73.33333333333348
				],
				[
					32.222222222221944,
					-72.2222222222224
				],
				[
					32.222222222221944,
					-70
				],
				[
					32.222222222221944,
					-67.77777777777783
				],
				[
					32.222222222221944,
					-63.333333333333485
				],
				[
					32.222222222221944,
					-56.66666666666674
				],
				[
					32.222222222221944,
					-52.2222222222224
				],
				[
					32.222222222221944,
					-44.44444444444457
				],
				[
					32.222222222221944,
					-35.55555555555566
				],
				[
					32.222222222221944,
					-25.555555555555657
				],
				[
					32.222222222221944,
					-21.111111111111313
				],
				[
					32.222222222221944,
					-12.222222222222399
				],
				[
					32.222222222221944,
					-3.333333333333485
				],
				[
					33.33333333333326,
					3.3333333333332575
				],
				[
					33.33333333333326,
					5.555555555555429
				],
				[
					34.44444444444457,
					11.111111111110858
				],
				[
					35.55555555555543,
					13.333333333333258
				],
				[
					37.7777777777776,
					15.55555555555543
				],
				[
					38.888888888888914,
					16.666666666666515
				],
				[
					41.111111111111086,
					15.55555555555543
				],
				[
					42.222222222221944,
					14.444444444444343
				],
				[
					44.44444444444457,
					12.222222222222172
				],
				[
					45.55555555555543,
					10
				],
				[
					47.7777777777776,
					4.444444444444343
				],
				[
					48.888888888888914,
					-2.222222222222399
				],
				[
					50.00000000000023,
					-6.6666666666667425
				],
				[
					52.222222222221944,
					-14.44444444444457
				],
				[
					54.44444444444457,
					-24.44444444444457
				],
				[
					55.55555555555543,
					-35.55555555555566
				],
				[
					56.66666666666629,
					-40
				],
				[
					57.7777777777776,
					-50
				],
				[
					58.888888888888914,
					-58.888888888888914
				],
				[
					60.00000000000023,
					-65.55555555555566
				],
				[
					60.00000000000023,
					-68.88888888888891
				],
				[
					61.111111111111086,
					-72.2222222222224
				],
				[
					61.111111111111086,
					-74.44444444444457
				],
				[
					60.00000000000023,
					-75.55555555555566
				],
				[
					60.00000000000023,
					-74.44444444444457
				],
				[
					58.888888888888914,
					-73.33333333333348
				],
				[
					57.7777777777776,
					-70
				],
				[
					57.7777777777776,
					-65.55555555555566
				],
				[
					56.66666666666629,
					-63.333333333333485
				],
				[
					55.55555555555543,
					-56.66666666666674
				],
				[
					55.55555555555543,
					-48.88888888888914
				],
				[
					55.55555555555543,
					-44.44444444444457
				],
				[
					54.44444444444457,
					-35.55555555555566
				],
				[
					54.44444444444457,
					-26.666666666666742
				],
				[
					54.44444444444457,
					-17.77777777777783
				],
				[
					54.44444444444457,
					-14.44444444444457
				],
				[
					55.55555555555543,
					-6.6666666666667425
				],
				[
					56.66666666666629,
					-1.1111111111113132
				],
				[
					57.7777777777776,
					3.3333333333332575
				],
				[
					58.888888888888914,
					5.555555555555429
				],
				[
					61.111111111111086,
					7.777777777777601
				],
				[
					63.33333333333326,
					7.777777777777601
				],
				[
					66.66666666666674,
					7.777777777777601
				],
				[
					67.7777777777776,
					6.666666666666515
				],
				[
					71.11111111111109,
					4.444444444444343
				],
				[
					73.33333333333326,
					1.1111111111108585
				],
				[
					74.44444444444457,
					-1.1111111111113132
				],
				[
					77.7777777777776,
					-4.444444444444571
				],
				[
					78.88888888888891,
					-8.888888888889142
				],
				[
					81.11111111111109,
					-13.333333333333485
				],
				[
					81.11111111111109,
					-15.555555555555657
				],
				[
					82.22222222222194,
					-18.88888888888914
				],
				[
					82.22222222222194,
					-21.111111111111313
				],
				[
					82.22222222222194,
					-23.333333333333485
				],
				[
					81.11111111111109,
					-24.44444444444457
				],
				[
					81.11111111111109,
					-25.555555555555657
				],
				[
					80.00000000000023,
					-25.555555555555657
				],
				[
					78.88888888888891,
					-24.44444444444457
				],
				[
					77.7777777777776,
					-22.2222222222224
				],
				[
					76.66666666666674,
					-20
				],
				[
					76.66666666666674,
					-16.666666666666742
				],
				[
					75.55555555555543,
					-14.44444444444457
				],
				[
					75.55555555555543,
					-11.111111111111313
				],
				[
					76.66666666666674,
					-6.6666666666667425
				],
				[
					76.66666666666674,
					-5.555555555555657
				],
				[
					77.7777777777776,
					-2.222222222222399
				],
				[
					78.88888888888891,
					0
				],
				[
					80.00000000000023,
					2.2222222222221717
				],
				[
					81.11111111111109,
					3.3333333333332575
				],
				[
					82.22222222222194,
					3.3333333333332575
				],
				[
					83.33333333333326,
					3.3333333333332575
				],
				[
					85.55555555555543,
					1.1111111111108585
				],
				[
					86.66666666666674,
					-2.222222222222399
				],
				[
					87.7777777777776,
					-4.444444444444571
				],
				[
					88.88888888888891,
					-8.888888888889142
				],
				[
					88.88888888888891,
					-10
				],
				[
					88.88888888888891,
					-14.44444444444457
				],
				[
					88.88888888888891,
					-17.77777777777783
				],
				[
					87.7777777777776,
					-21.111111111111313
				],
				[
					86.66666666666674,
					-22.2222222222224
				],
				[
					85.55555555555543,
					-24.44444444444457
				],
				[
					84.44444444444457,
					-25.555555555555657
				],
				[
					84.44444444444457,
					-25.555555555555657
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.095703125,
				0.10546875,
				0.1171875,
				0.1328125,
				0.1513671875,
				0.1611328125,
				0.212890625,
				0.263671875,
				0.294921875,
				0.32421875,
				0.3505859375,
				0.3623046875,
				0.3828125,
				0.3974609375,
				0.4072265625,
				0.41015625,
				0.4130859375,
				0.4140625,
				0.4140625,
				0.41015625,
				0.4052734375,
				0.396484375,
				0.37109375,
				0.345703125,
				0.330078125,
				0.2998046875,
				0.271484375,
				0.248046875,
				0.2392578125,
				0.2294921875,
				0.2275390625,
				0.2275390625,
				0.228515625,
				0.23046875,
				0.232421875,
				0.234375,
				0.25,
				0.2568359375,
				0.28515625,
				0.296875,
				0.3193359375,
				0.33984375,
				0.349609375,
				0.3642578125,
				0.3759765625,
				0.3837890625,
				0.38671875,
				0.3896484375,
				0.3896484375,
				0.3876953125,
				0.3759765625,
				0.359375,
				0.3388671875,
				0.328125,
				0.3056640625,
				0.2861328125,
				0.2734375,
				0.2685546875,
				0.26171875,
				0.255859375,
				0.2529296875,
				0.2470703125,
				0.240234375,
				0.2353515625,
				0.234375,
				0.2333984375,
				0.2373046875,
				0.2470703125,
				0.2548828125,
				0.2978515625,
				0.328125,
				0.3447265625,
				0.3798828125,
				0.4150390625,
				0.431640625,
				0.4619140625,
				0.486328125,
				0.5029296875,
				0.5078125,
				0.5126953125,
				0.5126953125,
				0.5087890625,
				0.5048828125,
				0.4921875,
				0.4755859375,
				0.4560546875,
				0.443359375,
				0.4150390625,
				0.3798828125,
				0.33984375,
				0.318359375,
				0.2734375,
				0.2333984375,
				0.2177734375,
				0.1943359375,
				0.1796875,
				0.1728515625,
				0.1708984375,
				0.1689453125,
				0.16796875,
				0.1728515625,
				0.1767578125,
				0.1865234375,
				0.2001953125,
				0.2099609375,
				0.2333984375,
				0.2587890625,
				0.287109375,
				0.3193359375,
				0.3359375,
				0.365234375,
				0.3876953125,
				0.396484375,
				0.408203125,
				0.4140625,
				0.4150390625,
				0.412109375,
				0.4033203125,
				0.3876953125,
				0.36328125,
				0.3486328125,
				0.31640625,
				0.2802734375,
				0.24609375,
				0.232421875,
				0.20703125,
				0.1884765625,
				0.181640625,
				0.171875,
				0.1669921875,
				0.166015625,
				0.16796875,
				0.1748046875,
				0.185546875,
				0.197265625,
				0.203125,
				0.2119140625,
				0.21875,
				0.220703125,
				0.2216796875,
				0.22265625,
				0.2236328125,
				0.2236328125,
				0.224609375,
				0.2255859375,
				0.2255859375,
				0.2265625,
				0.228515625,
				0.2373046875,
				0.2451171875,
				0.2646484375,
				0.2763671875,
				0.3203125,
				0.359375,
				0.375,
				0.3857421875,
				0.3896484375,
				0.3935546875,
				0.392578125,
				0.384765625,
				0.376953125,
				0.34765625,
				0.3251953125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 138,
			"versionNonce": 1046301585,
			"isDeleted": false,
			"id": "KMHN6QgBl8vTsjmKMkaFH",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2128.3333333333253,
			"y": 1572.1666666666777,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 28.888888888888687,
			"height": 30,
			"seed": 44512455,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.1111111111108585,
					0
				],
				[
					0,
					-1.1111111111110858
				],
				[
					-1.1111111111113132,
					-1.1111111111110858
				],
				[
					-2.2222222222221717,
					0
				],
				[
					-3.333333333333485,
					0
				],
				[
					-4.444444444444798,
					1.1111111111110858
				],
				[
					-5.555555555555657,
					2.2222222222221717
				],
				[
					-5.555555555555657,
					3.3333333333332575
				],
				[
					-6.666666666666515,
					5.555555555555429
				],
				[
					-6.666666666666515,
					7.777777777777828
				],
				[
					-6.666666666666515,
					11.111111111111086
				],
				[
					-6.666666666666515,
					12.222222222222172
				],
				[
					-5.555555555555657,
					15.55555555555543
				],
				[
					-4.444444444444798,
					18.888888888888914
				],
				[
					-4.444444444444798,
					21.111111111111086
				],
				[
					-2.2222222222221717,
					23.333333333333258
				],
				[
					0,
					25.55555555555543
				],
				[
					2.2222222222221717,
					26.666666666666742
				],
				[
					3.333333333333485,
					26.666666666666742
				],
				[
					5.555555555555202,
					26.666666666666742
				],
				[
					7.777777777777828,
					25.55555555555543
				],
				[
					10,
					24.44444444444457
				],
				[
					11.111111111110858,
					23.333333333333258
				],
				[
					13.333333333333485,
					21.111111111111086
				],
				[
					15.555555555555202,
					18.888888888888914
				],
				[
					17.77777777777783,
					15.55555555555543
				],
				[
					18.888888888888687,
					14.44444444444457
				],
				[
					20,
					11.111111111111086
				],
				[
					21.11111111111086,
					7.777777777777828
				],
				[
					22.22222222222217,
					5.555555555555429
				],
				[
					22.22222222222217,
					4.444444444444571
				],
				[
					22.22222222222217,
					3.3333333333332575
				],
				[
					22.22222222222217,
					2.2222222222221717
				],
				[
					22.22222222222217,
					3.3333333333332575
				],
				[
					22.22222222222217,
					4.444444444444571
				],
				[
					21.11111111111086,
					7.777777777777828
				],
				[
					21.11111111111086,
					8.888888888888914
				],
				[
					21.11111111111086,
					12.222222222222172
				],
				[
					20,
					15.55555555555543
				],
				[
					20,
					20
				],
				[
					20,
					21.111111111111086
				],
				[
					20,
					24.44444444444457
				],
				[
					21.11111111111086,
					26.666666666666742
				],
				[
					21.11111111111086,
					27.77777777777783
				],
				[
					22.22222222222217,
					28.888888888888914
				],
				[
					22.22222222222217,
					28.888888888888914
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0390625,
				0.0576171875,
				0.2294921875,
				0.255859375,
				0.2626953125,
				0.2744140625,
				0.28125,
				0.287109375,
				0.2880859375,
				0.2900390625,
				0.291015625,
				0.291015625,
				0.291015625,
				0.2919921875,
				0.29296875,
				0.2939453125,
				0.29296875,
				0.2919921875,
				0.2900390625,
				0.287109375,
				0.2744140625,
				0.25390625,
				0.2265625,
				0.2109375,
				0.17578125,
				0.142578125,
				0.111328125,
				0.09765625,
				0.0791015625,
				0.0712890625,
				0.0712890625,
				0.07421875,
				0.080078125,
				0.095703125,
				0.123046875,
				0.1376953125,
				0.1533203125,
				0.15625,
				0.1591796875,
				0.1611328125,
				0.1611328125,
				0.16015625,
				0.1552734375,
				0.14453125,
				0.13671875,
				0.1123046875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 103,
			"versionNonce": 1503375871,
			"isDeleted": false,
			"id": "YIXAoYcQEjIsXv98svI3O",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2148.3333333333253,
			"y": 1559.9444444444555,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 2.2222222222221717,
			"height": 7.777777777777828,
			"seed": 1250480071,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.222222222222399
				],
				[
					0,
					-3.3333333333332575
				],
				[
					0,
					-4.444444444444571
				],
				[
					0,
					-5.555555555555657
				],
				[
					-1.1111111111113132,
					-6.6666666666667425
				],
				[
					-1.1111111111113132,
					-7.777777777777828
				],
				[
					0,
					-7.777777777777828
				],
				[
					0,
					-6.6666666666667425
				],
				[
					1.1111111111108585,
					-6.6666666666667425
				],
				[
					0,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.1357421875,
				0.138671875,
				0.134765625,
				0.134765625,
				0.1337890625,
				0.134765625,
				0.1376953125,
				0.1376953125,
				0.130859375,
				0.1220703125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 132,
			"versionNonce": 1689235825,
			"isDeleted": false,
			"id": "8vTN3CxX_Esrd8ina3JWS",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2158.3333333333253,
			"y": 1575.500000000011,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 24.444444444444343,
			"height": 30,
			"seed": 957432169,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.1111111111108585,
					1.1111111111113132
				],
				[
					1.1111111111108585,
					2.2222222222221717
				],
				[
					1.1111111111108585,
					3.333333333333485
				],
				[
					1.1111111111108585,
					4.444444444444571
				],
				[
					1.1111111111108585,
					5.555555555555657
				],
				[
					1.1111111111108585,
					6.6666666666667425
				],
				[
					1.1111111111108585,
					8.888888888888914
				],
				[
					1.1111111111108585,
					10
				],
				[
					1.1111111111108585,
					11.111111111111313
				],
				[
					1.1111111111108585,
					13.333333333333485
				],
				[
					1.1111111111108585,
					14.44444444444457
				],
				[
					1.1111111111108585,
					15.555555555555657
				],
				[
					2.2222222222221717,
					15.555555555555657
				],
				[
					2.2222222222221717,
					14.44444444444457
				],
				[
					3.333333333333485,
					12.222222222222172
				],
				[
					4.444444444444343,
					10
				],
				[
					5.555555555555202,
					7.777777777777828
				],
				[
					6.666666666666515,
					5.555555555555657
				],
				[
					7.777777777777828,
					2.2222222222221717
				],
				[
					8.888888888888687,
					-1.1111111111110858
				],
				[
					11.111111111110858,
					-5.555555555555429
				],
				[
					12.222222222222172,
					-6.666666666666515
				],
				[
					13.333333333333485,
					-10
				],
				[
					14.444444444444343,
					-12.222222222222172
				],
				[
					14.444444444444343,
					-13.333333333333258
				],
				[
					15.555555555555202,
					-14.444444444444343
				],
				[
					16.666666666666515,
					-14.444444444444343
				],
				[
					16.666666666666515,
					-12.222222222222172
				],
				[
					17.77777777777783,
					-12.222222222222172
				],
				[
					17.77777777777783,
					-8.888888888888687
				],
				[
					17.77777777777783,
					-5.555555555555429
				],
				[
					17.77777777777783,
					-2.2222222222221717
				],
				[
					17.77777777777783,
					0
				],
				[
					18.888888888888687,
					4.444444444444571
				],
				[
					18.888888888888687,
					7.777777777777828
				],
				[
					20,
					11.111111111111313
				],
				[
					21.11111111111086,
					12.222222222222172
				],
				[
					23.333333333333485,
					13.333333333333485
				],
				[
					24.444444444444343,
					14.44444444444457
				],
				[
					24.444444444444343,
					14.44444444444457
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.046875,
				0.05078125,
				0.0703125,
				0.0810546875,
				0.1005859375,
				0.1162109375,
				0.1279296875,
				0.150390625,
				0.1591796875,
				0.166015625,
				0.17578125,
				0.1767578125,
				0.181640625,
				0.1865234375,
				0.1865234375,
				0.1826171875,
				0.1767578125,
				0.166015625,
				0.16015625,
				0.1513671875,
				0.1416015625,
				0.1337890625,
				0.1328125,
				0.1328125,
				0.134765625,
				0.1357421875,
				0.142578125,
				0.1455078125,
				0.15625,
				0.16015625,
				0.166015625,
				0.171875,
				0.1748046875,
				0.1767578125,
				0.177734375,
				0.1748046875,
				0.16796875,
				0.162109375,
				0.1416015625,
				0.1171875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 114,
			"versionNonce": 1148394015,
			"isDeleted": false,
			"id": "A3-Si2lWF_hki7JRq56tz",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2200.5555555555475,
			"y": 1558.8333333333444,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 11.111111111111313,
			"height": 25.55555555555543,
			"seed": 47254985,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626167,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111113132,
					0
				],
				[
					-2.2222222222221717,
					0
				],
				[
					-3.333333333333485,
					0
				],
				[
					-3.333333333333485,
					1.1111111111110858
				],
				[
					-4.444444444444343,
					1.1111111111110858
				],
				[
					-5.555555555555657,
					2.2222222222221717
				],
				[
					-5.555555555555657,
					3.3333333333332575
				],
				[
					-7.777777777777828,
					5.555555555555429
				],
				[
					-8.888888888888687,
					8.888888888888687
				],
				[
					-10,
					12.222222222222172
				],
				[
					-11.111111111111313,
					13.333333333333258
				],
				[
					-11.111111111111313,
					16.666666666666515
				],
				[
					-11.111111111111313,
					20
				],
				[
					-10,
					22.22222222222217
				],
				[
					-10,
					23.333333333333258
				],
				[
					-8.888888888888687,
					24.444444444444343
				],
				[
					-7.777777777777828,
					25.55555555555543
				],
				[
					-5.555555555555657,
					25.55555555555543
				],
				[
					-3.333333333333485,
					24.444444444444343
				],
				[
					-2.2222222222221717,
					23.333333333333258
				],
				[
					-1.1111111111113132,
					22.22222222222217
				],
				[
					-1.1111111111113132,
					22.22222222222217
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0869140625,
				0.0908203125,
				0.0927734375,
				0.09375,
				0.0966796875,
				0.0986328125,
				0.107421875,
				0.111328125,
				0.1171875,
				0.1240234375,
				0.1279296875,
				0.1279296875,
				0.1298828125,
				0.134765625,
				0.138671875,
				0.1396484375,
				0.1416015625,
				0.142578125,
				0.1318359375,
				0.1103515625,
				0.103515625,
				0.0849609375,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 120,
			"versionNonce": 1132092241,
			"isDeleted": false,
			"id": "tS23rgkTKiN2RzE9elvwB",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2204.999999999992,
			"y": 1555.500000000011,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 18.888888888888687,
			"height": 118.88888888888891,
			"seed": 1454295113,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111110858
				],
				[
					-1.1111111111113132,
					-1.1111111111110858
				],
				[
					-1.1111111111113132,
					0
				],
				[
					-2.2222222222221717,
					1.1111111111113132
				],
				[
					-2.2222222222221717,
					2.2222222222221717
				],
				[
					-2.2222222222221717,
					4.444444444444571
				],
				[
					-1.1111111111113132,
					7.777777777777828
				],
				[
					-1.1111111111113132,
					12.222222222222172
				],
				[
					0,
					14.44444444444457
				],
				[
					1.1111111111113132,
					21.111111111111313
				],
				[
					3.333333333333485,
					27.77777777777783
				],
				[
					4.444444444444343,
					32.22222222222217
				],
				[
					6.66666666666697,
					40
				],
				[
					8.888888888888687,
					48.888888888888914
				],
				[
					11.111111111111313,
					58.888888888888914
				],
				[
					12.222222222222172,
					63.333333333333485
				],
				[
					13.333333333333485,
					73.33333333333348
				],
				[
					15.555555555555657,
					82.22222222222217
				],
				[
					15.555555555555657,
					91.11111111111131
				],
				[
					15.555555555555657,
					94.44444444444457
				],
				[
					15.555555555555657,
					102.2222222222224
				],
				[
					14.444444444444343,
					106.66666666666674
				],
				[
					12.222222222222172,
					111.11111111111131
				],
				[
					11.111111111111313,
					113.33333333333348
				],
				[
					6.66666666666697,
					115.55555555555566
				],
				[
					1.1111111111113132,
					117.77777777777783
				],
				[
					-3.33333333333303,
					117.77777777777783
				],
				[
					-3.33333333333303,
					117.77777777777783
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.119140625,
				0.1142578125,
				0.11328125,
				0.1298828125,
				0.14453125,
				0.15234375,
				0.171875,
				0.19921875,
				0.232421875,
				0.2490234375,
				0.2822265625,
				0.3125,
				0.3251953125,
				0.349609375,
				0.3759765625,
				0.4072265625,
				0.4228515625,
				0.4541015625,
				0.482421875,
				0.5009765625,
				0.505859375,
				0.5078125,
				0.501953125,
				0.486328125,
				0.474609375,
				0.4375,
				0.37890625,
				0.3408203125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 151,
			"versionNonce": 208174655,
			"isDeleted": false,
			"id": "LIxhusIOz2wCp0KEj716f",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1926.111111111103,
			"y": 1689.9444444444555,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 34.44444444444457,
			"height": 51.111111111111086,
			"seed": 1624238953,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111110858
				],
				[
					1.1111111111110858,
					-1.1111111111110858
				],
				[
					1.1111111111110858,
					0
				],
				[
					1.1111111111110858,
					1.1111111111110858
				],
				[
					1.1111111111110858,
					4.444444444444343
				],
				[
					1.1111111111110858,
					7.777777777777828
				],
				[
					1.1111111111110858,
					13.333333333333258
				],
				[
					1.1111111111110858,
					16.666666666666742
				],
				[
					1.1111111111110858,
					22.22222222222217
				],
				[
					0,
					28.888888888888914
				],
				[
					0,
					32.22222222222217
				],
				[
					0,
					37.77777777777783
				],
				[
					1.1111111111110858,
					43.33333333333326
				],
				[
					1.1111111111110858,
					46.66666666666674
				],
				[
					1.1111111111110858,
					47.77777777777783
				],
				[
					1.1111111111110858,
					50
				],
				[
					2.2222222222221717,
					50
				],
				[
					3.333333333333485,
					50
				],
				[
					3.333333333333485,
					48.888888888888914
				],
				[
					4.444444444444571,
					47.77777777777783
				],
				[
					5.555555555555657,
					44.44444444444434
				],
				[
					7.777777777777828,
					40
				],
				[
					7.777777777777828,
					37.77777777777783
				],
				[
					10,
					33.33333333333326
				],
				[
					12.222222222222172,
					28.888888888888914
				],
				[
					12.222222222222172,
					26.666666666666742
				],
				[
					14.44444444444457,
					23.333333333333258
				],
				[
					16.666666666666742,
					20
				],
				[
					18.888888888888914,
					17.77777777777783
				],
				[
					18.888888888888914,
					16.666666666666742
				],
				[
					20,
					15.55555555555543
				],
				[
					21.111111111111086,
					14.444444444444343
				],
				[
					22.22222222222217,
					14.444444444444343
				],
				[
					22.22222222222217,
					15.55555555555543
				],
				[
					21.111111111111086,
					15.55555555555543
				],
				[
					21.111111111111086,
					17.77777777777783
				],
				[
					20,
					20
				],
				[
					18.888888888888914,
					21.111111111111086
				],
				[
					17.77777777777783,
					23.333333333333258
				],
				[
					16.666666666666742,
					26.666666666666742
				],
				[
					15.555555555555657,
					28.888888888888914
				],
				[
					14.44444444444457,
					30
				],
				[
					13.333333333333485,
					32.22222222222217
				],
				[
					13.333333333333485,
					33.33333333333326
				],
				[
					13.333333333333485,
					34.44444444444434
				],
				[
					13.333333333333485,
					36.66666666666674
				],
				[
					14.44444444444457,
					37.77777777777783
				],
				[
					15.555555555555657,
					38.888888888888914
				],
				[
					17.77777777777783,
					40
				],
				[
					18.888888888888914,
					41.111111111111086
				],
				[
					21.111111111111086,
					42.22222222222217
				],
				[
					23.333333333333485,
					43.33333333333326
				],
				[
					25.555555555555657,
					44.44444444444434
				],
				[
					26.666666666666742,
					45.55555555555543
				],
				[
					30,
					46.66666666666674
				],
				[
					31.111111111111086,
					46.66666666666674
				],
				[
					33.333333333333485,
					47.77777777777783
				],
				[
					34.44444444444457,
					47.77777777777783
				],
				[
					34.44444444444457,
					47.77777777777783
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.205078125,
				0.2060546875,
				0.208984375,
				0.2392578125,
				0.2646484375,
				0.296875,
				0.3349609375,
				0.373046875,
				0.390625,
				0.4208984375,
				0.44140625,
				0.44921875,
				0.4580078125,
				0.4599609375,
				0.458984375,
				0.45703125,
				0.4541015625,
				0.4521484375,
				0.4462890625,
				0.4443359375,
				0.4404296875,
				0.4375,
				0.435546875,
				0.43359375,
				0.4326171875,
				0.4306640625,
				0.4296875,
				0.42578125,
				0.421875,
				0.4169921875,
				0.4150390625,
				0.4130859375,
				0.4091796875,
				0.40625,
				0.40234375,
				0.400390625,
				0.3984375,
				0.396484375,
				0.3955078125,
				0.39453125,
				0.3935546875,
				0.392578125,
				0.3935546875,
				0.3974609375,
				0.3984375,
				0.3984375,
				0.3984375,
				0.3955078125,
				0.392578125,
				0.3935546875,
				0.3955078125,
				0.400390625,
				0.40625,
				0.41015625,
				0.412109375,
				0.4091796875,
				0.4033203125,
				0.3759765625,
				0.3544921875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 160,
			"versionNonce": 722782513,
			"isDeleted": false,
			"id": "5SK6su_wxrTsifj9zht4k",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1967.222222222214,
			"y": 1718.8333333333444,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 46.66666666666674,
			"height": 27.7777777777776,
			"seed": 1807691111,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.1111111111110858,
					-1.1111111111110858
				],
				[
					2.222222222222399,
					-1.1111111111110858
				],
				[
					3.333333333333485,
					-1.1111111111110858
				],
				[
					4.444444444444571,
					-2.2222222222221717
				],
				[
					5.555555555555657,
					-2.2222222222221717
				],
				[
					5.555555555555657,
					-3.333333333333485
				],
				[
					6.6666666666667425,
					-3.333333333333485
				],
				[
					7.777777777777828,
					-4.444444444444571
				],
				[
					7.777777777777828,
					-5.555555555555657
				],
				[
					7.777777777777828,
					-6.6666666666667425
				],
				[
					6.6666666666667425,
					-7.777777777777828
				],
				[
					5.555555555555657,
					-8.888888888888914
				],
				[
					3.333333333333485,
					-8.888888888888914
				],
				[
					1.1111111111110858,
					-8.888888888888914
				],
				[
					0,
					-7.777777777777828
				],
				[
					-1.1111111111110858,
					-7.777777777777828
				],
				[
					-2.2222222222221717,
					-6.6666666666667425
				],
				[
					-3.3333333333332575,
					-5.555555555555657
				],
				[
					-4.444444444444343,
					-4.444444444444571
				],
				[
					-4.444444444444343,
					-2.2222222222221717
				],
				[
					-4.444444444444343,
					0
				],
				[
					-3.3333333333332575,
					2.2222222222221717
				],
				[
					-3.3333333333332575,
					3.3333333333332575
				],
				[
					-2.2222222222221717,
					6.666666666666515
				],
				[
					0,
					8.888888888888914
				],
				[
					2.222222222222399,
					11.111111111111086
				],
				[
					3.333333333333485,
					12.222222222222172
				],
				[
					6.6666666666667425,
					14.444444444444343
				],
				[
					8.888888888888914,
					14.444444444444343
				],
				[
					11.111111111111086,
					15.55555555555543
				],
				[
					12.222222222222399,
					14.444444444444343
				],
				[
					14.44444444444457,
					14.444444444444343
				],
				[
					17.77777777777783,
					12.222222222222172
				],
				[
					17.77777777777783,
					11.111111111111086
				],
				[
					20,
					8.888888888888914
				],
				[
					22.2222222222224,
					5.555555555555429
				],
				[
					23.333333333333485,
					3.3333333333332575
				],
				[
					24.44444444444457,
					1.1111111111110858
				],
				[
					25.555555555555657,
					-1.1111111111110858
				],
				[
					25.555555555555657,
					-3.333333333333485
				],
				[
					26.666666666666742,
					-5.555555555555657
				],
				[
					26.666666666666742,
					-6.6666666666667425
				],
				[
					27.77777777777783,
					-6.6666666666667425
				],
				[
					27.77777777777783,
					-5.555555555555657
				],
				[
					27.77777777777783,
					-3.333333333333485
				],
				[
					27.77777777777783,
					-1.1111111111110858
				],
				[
					27.77777777777783,
					0
				],
				[
					28.888888888888914,
					3.3333333333332575
				],
				[
					30,
					5.555555555555429
				],
				[
					30,
					6.666666666666515
				],
				[
					31.111111111111086,
					8.888888888888914
				],
				[
					31.111111111111086,
					11.111111111111086
				],
				[
					32.2222222222224,
					12.222222222222172
				],
				[
					33.333333333333485,
					13.333333333333258
				],
				[
					33.333333333333485,
					12.222222222222172
				],
				[
					34.44444444444457,
					11.111111111111086
				],
				[
					34.44444444444457,
					8.888888888888914
				],
				[
					35.55555555555566,
					6.666666666666515
				],
				[
					35.55555555555566,
					4.444444444444343
				],
				[
					36.66666666666674,
					2.2222222222221717
				],
				[
					36.66666666666674,
					0
				],
				[
					37.77777777777783,
					-3.333333333333485
				],
				[
					38.888888888888914,
					-5.555555555555657
				],
				[
					38.888888888888914,
					-6.6666666666667425
				],
				[
					40,
					-8.888888888888914
				],
				[
					41.111111111111086,
					-11.111111111111086
				],
				[
					42.2222222222224,
					-12.222222222222172
				],
				[
					42.2222222222224,
					-12.222222222222172
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.140625,
				0.1435546875,
				0.162109375,
				0.17578125,
				0.1845703125,
				0.1904296875,
				0.193359375,
				0.1982421875,
				0.2021484375,
				0.205078125,
				0.2080078125,
				0.212890625,
				0.2177734375,
				0.234375,
				0.24609375,
				0.255859375,
				0.2607421875,
				0.263671875,
				0.267578125,
				0.267578125,
				0.265625,
				0.265625,
				0.265625,
				0.265625,
				0.265625,
				0.265625,
				0.265625,
				0.265625,
				0.263671875,
				0.2578125,
				0.2509765625,
				0.2451171875,
				0.228515625,
				0.2060546875,
				0.193359375,
				0.1708984375,
				0.1494140625,
				0.130859375,
				0.123046875,
				0.1123046875,
				0.1064453125,
				0.103515625,
				0.1083984375,
				0.12890625,
				0.142578125,
				0.1533203125,
				0.16015625,
				0.1650390625,
				0.1767578125,
				0.1875,
				0.1923828125,
				0.2021484375,
				0.212890625,
				0.21875,
				0.2470703125,
				0.25390625,
				0.271484375,
				0.279296875,
				0.28125,
				0.2822265625,
				0.2822265625,
				0.2783203125,
				0.267578125,
				0.2490234375,
				0.2353515625,
				0.2021484375,
				0.1611328125,
				0.1396484375,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 207,
			"versionNonce": 1415339615,
			"isDeleted": false,
			"id": "qQqeFxSslp6gCTkrP7_IX",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2023.8888888888807,
			"y": 1701.0555555555666,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 71.11111111111109,
			"height": 80,
			"seed": 25286343,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.1111111111110858
				],
				[
					0,
					2.2222222222221717
				],
				[
					0,
					3.3333333333332575
				],
				[
					0,
					5.555555555555657
				],
				[
					1.1111111111110858,
					7.777777777777828
				],
				[
					1.1111111111110858,
					8.888888888888914
				],
				[
					1.1111111111110858,
					12.222222222222172
				],
				[
					1.1111111111110858,
					15.555555555555657
				],
				[
					2.2222222222221717,
					17.77777777777783
				],
				[
					2.2222222222221717,
					20
				],
				[
					2.2222222222221717,
					22.22222222222217
				],
				[
					3.3333333333332575,
					24.444444444444343
				],
				[
					3.3333333333332575,
					26.666666666666742
				],
				[
					3.3333333333332575,
					27.77777777777783
				],
				[
					4.444444444444343,
					28.888888888888914
				],
				[
					4.444444444444343,
					27.77777777777783
				],
				[
					5.555555555555657,
					26.666666666666742
				],
				[
					5.555555555555657,
					24.444444444444343
				],
				[
					5.555555555555657,
					21.111111111111086
				],
				[
					5.555555555555657,
					16.666666666666742
				],
				[
					5.555555555555657,
					14.444444444444343
				],
				[
					6.6666666666667425,
					10
				],
				[
					7.777777777777828,
					5.555555555555657
				],
				[
					8.888888888888914,
					1.1111111111110858
				],
				[
					8.888888888888914,
					0
				],
				[
					10,
					-3.3333333333332575
				],
				[
					12.222222222222172,
					-6.6666666666667425
				],
				[
					13.333333333333258,
					-7.777777777777828
				],
				[
					14.444444444444343,
					-7.777777777777828
				],
				[
					15.555555555555657,
					-7.777777777777828
				],
				[
					16.666666666666742,
					-5.555555555555657
				],
				[
					16.666666666666742,
					-4.444444444444343
				],
				[
					17.77777777777783,
					-1.1111111111110858
				],
				[
					18.888888888888914,
					2.2222222222221717
				],
				[
					18.888888888888914,
					4.444444444444343
				],
				[
					20,
					7.777777777777828
				],
				[
					20,
					12.222222222222172
				],
				[
					21.111111111111086,
					16.666666666666742
				],
				[
					22.22222222222217,
					17.77777777777783
				],
				[
					23.333333333333258,
					21.111111111111086
				],
				[
					24.444444444444116,
					24.444444444444343
				],
				[
					25.55555555555543,
					26.666666666666742
				],
				[
					26.666666666666742,
					26.666666666666742
				],
				[
					27.777777777778056,
					27.77777777777783
				],
				[
					28.888888888888914,
					28.888888888888914
				],
				[
					31.111111111111086,
					27.77777777777783
				],
				[
					32.2222222222224,
					27.77777777777783
				],
				[
					33.33333333333326,
					25.555555555555657
				],
				[
					35.55555555555543,
					23.333333333333258
				],
				[
					36.66666666666674,
					20
				],
				[
					37.777777777778056,
					18.888888888888914
				],
				[
					38.888888888888914,
					14.444444444444343
				],
				[
					39.99999999999977,
					11.111111111111086
				],
				[
					39.99999999999977,
					8.888888888888914
				],
				[
					41.111111111111086,
					4.444444444444343
				],
				[
					41.111111111111086,
					1.1111111111110858
				],
				[
					41.111111111111086,
					-1.1111111111110858
				],
				[
					39.99999999999977,
					-2.2222222222221717
				],
				[
					39.99999999999977,
					-4.444444444444343
				],
				[
					38.888888888888914,
					-4.444444444444343
				],
				[
					37.777777777778056,
					-4.444444444444343
				],
				[
					36.66666666666674,
					-3.3333333333332575
				],
				[
					36.66666666666674,
					-1.1111111111110858
				],
				[
					35.55555555555543,
					2.2222222222221717
				],
				[
					35.55555555555543,
					3.3333333333332575
				],
				[
					34.444444444444116,
					6.6666666666667425
				],
				[
					35.55555555555543,
					11.111111111111086
				],
				[
					35.55555555555543,
					13.333333333333258
				],
				[
					35.55555555555543,
					16.666666666666742
				],
				[
					36.66666666666674,
					18.888888888888914
				],
				[
					37.777777777778056,
					23.333333333333258
				],
				[
					38.888888888888914,
					26.666666666666742
				],
				[
					39.99999999999977,
					28.888888888888914
				],
				[
					41.111111111111086,
					30
				],
				[
					42.2222222222224,
					31.111111111111086
				],
				[
					44.444444444444116,
					31.111111111111086
				],
				[
					46.66666666666674,
					31.111111111111086
				],
				[
					47.777777777778056,
					30
				],
				[
					48.888888888888914,
					27.77777777777783
				],
				[
					51.111111111111086,
					25.555555555555657
				],
				[
					53.33333333333326,
					21.111111111111086
				],
				[
					54.444444444444116,
					18.888888888888914
				],
				[
					55.55555555555543,
					14.444444444444343
				],
				[
					57.777777777778056,
					8.888888888888914
				],
				[
					58.888888888888914,
					2.2222222222221717
				],
				[
					58.888888888888914,
					-1.1111111111110858
				],
				[
					59.99999999999977,
					-8.888888888888914
				],
				[
					61.111111111111086,
					-16.666666666666742
				],
				[
					61.111111111111086,
					-20
				],
				[
					61.111111111111086,
					-26.666666666666742
				],
				[
					61.111111111111086,
					-33.33333333333326
				],
				[
					61.111111111111086,
					-37.77777777777783
				],
				[
					59.99999999999977,
					-40
				],
				[
					59.99999999999977,
					-43.33333333333326
				],
				[
					58.888888888888914,
					-44.44444444444434
				],
				[
					57.777777777778056,
					-45.55555555555566
				],
				[
					56.66666666666674,
					-44.44444444444434
				],
				[
					55.55555555555543,
					-42.22222222222217
				],
				[
					55.55555555555543,
					-38.888888888888914
				],
				[
					55.55555555555543,
					-36.66666666666674
				],
				[
					55.55555555555543,
					-32.22222222222217
				],
				[
					55.55555555555543,
					-26.666666666666742
				],
				[
					55.55555555555543,
					-23.333333333333258
				],
				[
					56.66666666666674,
					-15.555555555555657
				],
				[
					57.777777777778056,
					-6.6666666666667425
				],
				[
					58.888888888888914,
					1.1111111111110858
				],
				[
					58.888888888888914,
					5.555555555555657
				],
				[
					59.99999999999977,
					13.333333333333258
				],
				[
					62.2222222222224,
					20
				],
				[
					64.44444444444457,
					25.555555555555657
				],
				[
					64.44444444444457,
					27.77777777777783
				],
				[
					66.66666666666674,
					31.111111111111086
				],
				[
					68.88888888888891,
					33.33333333333326
				],
				[
					71.11111111111109,
					34.44444444444434
				],
				[
					71.11111111111109,
					34.44444444444434
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.10546875,
				0.1103515625,
				0.125,
				0.1337890625,
				0.1435546875,
				0.15234375,
				0.15625,
				0.1640625,
				0.1748046875,
				0.1845703125,
				0.1884765625,
				0.193359375,
				0.1953125,
				0.1953125,
				0.1943359375,
				0.189453125,
				0.1650390625,
				0.154296875,
				0.1357421875,
				0.111328125,
				0.0859375,
				0.07421875,
				0.05078125,
				0.0361328125,
				0.0302734375,
				0.029296875,
				0.029296875,
				0.0390625,
				0.060546875,
				0.083984375,
				0.111328125,
				0.1572265625,
				0.1689453125,
				0.1865234375,
				0.2060546875,
				0.21484375,
				0.2314453125,
				0.2451171875,
				0.255859375,
				0.2607421875,
				0.2646484375,
				0.265625,
				0.265625,
				0.265625,
				0.2666015625,
				0.267578125,
				0.2685546875,
				0.2685546875,
				0.2666015625,
				0.2607421875,
				0.2509765625,
				0.244140625,
				0.228515625,
				0.2138671875,
				0.20703125,
				0.1982421875,
				0.193359375,
				0.19140625,
				0.1923828125,
				0.197265625,
				0.203125,
				0.2119140625,
				0.2294921875,
				0.240234375,
				0.25,
				0.255859375,
				0.2666015625,
				0.27734375,
				0.2822265625,
				0.29296875,
				0.298828125,
				0.306640625,
				0.3095703125,
				0.3095703125,
				0.3076171875,
				0.302734375,
				0.296875,
				0.2919921875,
				0.2900390625,
				0.2861328125,
				0.279296875,
				0.2685546875,
				0.2607421875,
				0.2431640625,
				0.220703125,
				0.19921875,
				0.189453125,
				0.1748046875,
				0.1650390625,
				0.162109375,
				0.1611328125,
				0.1640625,
				0.173828125,
				0.1806640625,
				0.19921875,
				0.2099609375,
				0.24609375,
				0.283203125,
				0.306640625,
				0.3291015625,
				0.3408203125,
				0.3662109375,
				0.390625,
				0.40234375,
				0.4208984375,
				0.435546875,
				0.443359375,
				0.4453125,
				0.4443359375,
				0.4345703125,
				0.4169921875,
				0.404296875,
				0.3701171875,
				0.32421875,
				0.263671875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 175,
			"versionNonce": 1961261841,
			"isDeleted": false,
			"id": "Dy71nHk9cBo2_ruPr_5Cr",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2108.3333333333253,
			"y": 1654.3888888888998,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 31.11111111111086,
			"height": 57.7777777777776,
			"seed": 92805097,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.1111111111110858
				],
				[
					0,
					2.222222222222399
				],
				[
					0,
					3.333333333333485
				],
				[
					0,
					5.555555555555657
				],
				[
					0,
					8.888888888888914
				],
				[
					0,
					11.111111111111086
				],
				[
					0,
					16.666666666666742
				],
				[
					0,
					21.111111111111086
				],
				[
					0,
					24.44444444444457
				],
				[
					1.1111111111108585,
					30
				],
				[
					1.1111111111108585,
					35.55555555555566
				],
				[
					1.1111111111108585,
					40
				],
				[
					1.1111111111108585,
					42.2222222222224
				],
				[
					1.1111111111108585,
					46.66666666666674
				],
				[
					1.1111111111108585,
					48.888888888888914
				],
				[
					2.2222222222221717,
					50
				],
				[
					2.2222222222221717,
					51.111111111111086
				],
				[
					2.2222222222221717,
					50
				],
				[
					2.2222222222221717,
					48.888888888888914
				],
				[
					3.333333333333485,
					45.55555555555566
				],
				[
					3.333333333333485,
					44.44444444444457
				],
				[
					4.444444444444343,
					40
				],
				[
					4.444444444444343,
					34.44444444444457
				],
				[
					4.444444444444343,
					30
				],
				[
					5.555555555555202,
					26.666666666666742
				],
				[
					5.555555555555202,
					21.111111111111086
				],
				[
					5.555555555555202,
					16.666666666666742
				],
				[
					5.555555555555202,
					13.333333333333485
				],
				[
					5.555555555555202,
					10
				],
				[
					5.555555555555202,
					5.555555555555657
				],
				[
					5.555555555555202,
					2.222222222222399
				],
				[
					5.555555555555202,
					1.1111111111110858
				],
				[
					5.555555555555202,
					-1.1111111111110858
				],
				[
					6.666666666666515,
					-3.3333333333332575
				],
				[
					7.777777777777828,
					-4.444444444444343
				],
				[
					7.777777777777828,
					-5.555555555555429
				],
				[
					8.888888888888687,
					-6.666666666666515
				],
				[
					10,
					-6.666666666666515
				],
				[
					11.111111111110858,
					-6.666666666666515
				],
				[
					12.222222222222172,
					-6.666666666666515
				],
				[
					13.333333333333485,
					-6.666666666666515
				],
				[
					14.444444444444343,
					-5.555555555555429
				],
				[
					15.555555555555202,
					-3.3333333333332575
				],
				[
					16.666666666666515,
					-1.1111111111110858
				],
				[
					17.77777777777783,
					2.222222222222399
				],
				[
					17.77777777777783,
					4.444444444444571
				],
				[
					16.666666666666515,
					6.6666666666667425
				],
				[
					15.555555555555202,
					8.888888888888914
				],
				[
					15.555555555555202,
					10
				],
				[
					13.333333333333485,
					12.222222222222399
				],
				[
					12.222222222222172,
					13.333333333333485
				],
				[
					11.111111111110858,
					15.555555555555657
				],
				[
					10,
					15.555555555555657
				],
				[
					8.888888888888687,
					16.666666666666742
				],
				[
					8.888888888888687,
					17.77777777777783
				],
				[
					7.777777777777828,
					18.888888888888914
				],
				[
					8.888888888888687,
					20
				],
				[
					10,
					20
				],
				[
					10,
					21.111111111111086
				],
				[
					11.111111111110858,
					21.111111111111086
				],
				[
					14.444444444444343,
					23.333333333333485
				],
				[
					15.555555555555202,
					23.333333333333485
				],
				[
					17.77777777777783,
					25.555555555555657
				],
				[
					20,
					27.77777777777783
				],
				[
					22.22222222222217,
					28.888888888888914
				],
				[
					24.444444444444343,
					31.111111111111086
				],
				[
					26.666666666666515,
					33.333333333333485
				],
				[
					28.888888888888687,
					35.55555555555566
				],
				[
					28.888888888888687,
					36.66666666666674
				],
				[
					31.11111111111086,
					40
				],
				[
					31.11111111111086,
					42.2222222222224
				],
				[
					31.11111111111086,
					43.333333333333485
				],
				[
					30,
					44.44444444444457
				],
				[
					28.888888888888687,
					46.66666666666674
				],
				[
					26.666666666666515,
					47.77777777777783
				],
				[
					24.444444444444343,
					48.888888888888914
				],
				[
					23.333333333333485,
					50
				],
				[
					20,
					50
				],
				[
					15.555555555555202,
					50
				],
				[
					14.444444444444343,
					48.888888888888914
				],
				[
					11.111111111110858,
					47.77777777777783
				],
				[
					8.888888888888687,
					46.66666666666674
				],
				[
					8.888888888888687,
					46.66666666666674
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.1474609375,
				0.166015625,
				0.1845703125,
				0.1943359375,
				0.2197265625,
				0.25,
				0.265625,
				0.30078125,
				0.3349609375,
				0.3486328125,
				0.3681640625,
				0.3798828125,
				0.384765625,
				0.3837890625,
				0.380859375,
				0.37890625,
				0.3759765625,
				0.3740234375,
				0.3701171875,
				0.365234375,
				0.3564453125,
				0.349609375,
				0.3369140625,
				0.32421875,
				0.314453125,
				0.310546875,
				0.3056640625,
				0.3046875,
				0.3037109375,
				0.3037109375,
				0.302734375,
				0.302734375,
				0.3017578125,
				0.3017578125,
				0.3017578125,
				0.302734375,
				0.302734375,
				0.3046875,
				0.306640625,
				0.314453125,
				0.326171875,
				0.3408203125,
				0.3564453125,
				0.3740234375,
				0.37890625,
				0.380859375,
				0.3798828125,
				0.3779296875,
				0.3779296875,
				0.3779296875,
				0.37890625,
				0.37890625,
				0.37890625,
				0.3779296875,
				0.376953125,
				0.376953125,
				0.376953125,
				0.3759765625,
				0.3759765625,
				0.3759765625,
				0.3759765625,
				0.373046875,
				0.375,
				0.3779296875,
				0.380859375,
				0.3818359375,
				0.38671875,
				0.3955078125,
				0.40625,
				0.4130859375,
				0.427734375,
				0.4423828125,
				0.4521484375,
				0.455078125,
				0.4580078125,
				0.45703125,
				0.4541015625,
				0.451171875,
				0.4375,
				0.4091796875,
				0.388671875,
				0.3330078125,
				0.298828125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 140,
			"versionNonce": 253704831,
			"isDeleted": false,
			"id": "yf36XfCZoLX7wURGulfy6",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2138.3333333333253,
			"y": 1677.7222222222333,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 37.77777777777783,
			"height": 31.111111111111086,
			"seed": 1239721575,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.1111111111108585,
					0
				],
				[
					2.2222222222221717,
					0
				],
				[
					3.333333333333485,
					0
				],
				[
					3.333333333333485,
					1.1111111111110858
				],
				[
					4.444444444444343,
					2.2222222222221717
				],
				[
					4.444444444444343,
					3.3333333333332575
				],
				[
					4.444444444444343,
					5.555555555555429
				],
				[
					4.444444444444343,
					6.666666666666515
				],
				[
					4.444444444444343,
					10
				],
				[
					4.444444444444343,
					12.222222222222172
				],
				[
					4.444444444444343,
					15.55555555555543
				],
				[
					4.444444444444343,
					17.7777777777776
				],
				[
					4.444444444444343,
					21.111111111111086
				],
				[
					5.555555555555202,
					23.333333333333258
				],
				[
					5.555555555555202,
					25.55555555555543
				],
				[
					6.666666666666515,
					26.666666666666515
				],
				[
					7.777777777777828,
					27.7777777777776
				],
				[
					8.888888888888687,
					27.7777777777776
				],
				[
					11.111111111110858,
					26.666666666666515
				],
				[
					12.222222222222172,
					25.55555555555543
				],
				[
					13.333333333333485,
					23.333333333333258
				],
				[
					13.333333333333485,
					21.111111111111086
				],
				[
					14.444444444444343,
					18.888888888888914
				],
				[
					15.555555555555202,
					14.444444444444343
				],
				[
					16.666666666666515,
					11.111111111111086
				],
				[
					16.666666666666515,
					8.888888888888914
				],
				[
					17.77777777777783,
					5.555555555555429
				],
				[
					17.77777777777783,
					2.2222222222221717
				],
				[
					18.888888888888687,
					0
				],
				[
					18.888888888888687,
					-1.1111111111110858
				],
				[
					18.888888888888687,
					1.1111111111110858
				],
				[
					18.888888888888687,
					3.3333333333332575
				],
				[
					18.888888888888687,
					7.777777777777601
				],
				[
					18.888888888888687,
					8.888888888888914
				],
				[
					18.888888888888687,
					13.333333333333258
				],
				[
					20,
					17.7777777777776
				],
				[
					21.11111111111086,
					21.111111111111086
				],
				[
					22.22222222222217,
					23.333333333333258
				],
				[
					23.333333333333485,
					26.666666666666515
				],
				[
					25.555555555555202,
					28.888888888888914
				],
				[
					27.77777777777783,
					30
				],
				[
					28.888888888888687,
					30
				],
				[
					30,
					28.888888888888914
				],
				[
					32.22222222222217,
					26.666666666666515
				],
				[
					34.44444444444434,
					24.444444444444343
				],
				[
					35.5555555555552,
					22.22222222222217
				],
				[
					37.77777777777783,
					17.7777777777776
				],
				[
					37.77777777777783,
					17.7777777777776
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0517578125,
				0.0556640625,
				0.0888671875,
				0.1171875,
				0.138671875,
				0.16796875,
				0.1923828125,
				0.21484375,
				0.2275390625,
				0.25,
				0.26953125,
				0.2861328125,
				0.2919921875,
				0.2998046875,
				0.3017578125,
				0.30078125,
				0.2998046875,
				0.294921875,
				0.28515625,
				0.259765625,
				0.236328125,
				0.2109375,
				0.1982421875,
				0.1787109375,
				0.16796875,
				0.16015625,
				0.158203125,
				0.158203125,
				0.1640625,
				0.1748046875,
				0.1806640625,
				0.21875,
				0.22265625,
				0.2236328125,
				0.2236328125,
				0.224609375,
				0.2236328125,
				0.2216796875,
				0.220703125,
				0.21875,
				0.2158203125,
				0.20703125,
				0.19921875,
				0.18359375,
				0.162109375,
				0.1328125,
				0.1171875,
				0.0869140625,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 113,
			"versionNonce": 1634136305,
			"isDeleted": false,
			"id": "HGuHFC3y0ePbbx9-xvYes",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2191.666666666659,
			"y": 1632.1666666666777,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 11.111111111111313,
			"height": 82.22222222222217,
			"seed": 676895879,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-3.3333333333332575
				],
				[
					0,
					-4.444444444444571
				],
				[
					0,
					-6.6666666666667425
				],
				[
					0,
					-7.777777777777828
				],
				[
					-1.1111111111113132,
					-7.777777777777828
				],
				[
					-1.1111111111113132,
					-8.888888888888914
				],
				[
					-2.2222222222226264,
					-8.888888888888914
				],
				[
					-3.333333333333485,
					-7.777777777777828
				],
				[
					-5.555555555555657,
					-6.6666666666667425
				],
				[
					-6.66666666666697,
					-3.3333333333332575
				],
				[
					-8.888888888889142,
					1.1111111111110858
				],
				[
					-8.888888888889142,
					4.444444444444571
				],
				[
					-10,
					11.111111111111086
				],
				[
					-11.111111111111313,
					18.888888888888914
				],
				[
					-11.111111111111313,
					23.333333333333258
				],
				[
					-11.111111111111313,
					33.33333333333326
				],
				[
					-11.111111111111313,
					44.44444444444457
				],
				[
					-10,
					55.55555555555566
				],
				[
					-10,
					61.111111111111086
				],
				[
					-8.888888888889142,
					73.33333333333326
				],
				[
					-8.888888888889142,
					73.33333333333326
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.072265625,
				0.08984375,
				0.1015625,
				0.1279296875,
				0.140625,
				0.1640625,
				0.1875,
				0.21875,
				0.2392578125,
				0.2724609375,
				0.298828125,
				0.3203125,
				0.3291015625,
				0.3447265625,
				0.357421875,
				0.3623046875,
				0.37109375,
				0.3720703125,
				0.3544921875,
				0.3388671875,
				0.2919921875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 217,
			"versionNonce": 24220319,
			"isDeleted": false,
			"id": "l1KmJ4dxfP3DBY1udyCtf",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2188.3333333333253,
			"y": 1702.1666666666777,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 64.4444444444448,
			"height": 93.33333333333326,
			"seed": 142649097,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111113132,
					-3.3333333333332575
				],
				[
					-1.1111111111113132,
					-6.6666666666667425
				],
				[
					-1.1111111111113132,
					-7.777777777777828
				],
				[
					-2.2222222222221717,
					-10
				],
				[
					-3.333333333333485,
					-12.222222222222172
				],
				[
					-3.333333333333485,
					-13.333333333333258
				],
				[
					-3.333333333333485,
					-14.444444444444343
				],
				[
					-4.444444444444798,
					-16.666666666666742
				],
				[
					-4.444444444444798,
					-17.77777777777783
				],
				[
					-4.444444444444798,
					-16.666666666666742
				],
				[
					-3.333333333333485,
					-15.55555555555543
				],
				[
					-2.2222222222221717,
					-15.55555555555543
				],
				[
					-1.1111111111113132,
					-14.444444444444343
				],
				[
					0,
					-14.444444444444343
				],
				[
					2.2222222222221717,
					-14.444444444444343
				],
				[
					4.444444444444343,
					-14.444444444444343
				],
				[
					6.666666666666515,
					-16.666666666666742
				],
				[
					8.888888888888687,
					-18.888888888888914
				],
				[
					12.222222222222172,
					-21.111111111111086
				],
				[
					13.333333333333485,
					-23.333333333333258
				],
				[
					15.555555555555202,
					-26.666666666666742
				],
				[
					18.888888888888687,
					-31.111111111111086
				],
				[
					20,
					-36.66666666666674
				],
				[
					21.11111111111086,
					-38.888888888888914
				],
				[
					22.22222222222217,
					-44.44444444444434
				],
				[
					23.333333333333485,
					-50
				],
				[
					23.333333333333485,
					-55.55555555555543
				],
				[
					23.333333333333485,
					-57.77777777777783
				],
				[
					22.22222222222217,
					-63.33333333333326
				],
				[
					22.22222222222217,
					-66.66666666666674
				],
				[
					21.11111111111086,
					-70
				],
				[
					20,
					-70
				],
				[
					18.888888888888687,
					-71.11111111111109
				],
				[
					17.77777777777783,
					-70
				],
				[
					17.77777777777783,
					-68.88888888888891
				],
				[
					15.555555555555202,
					-65.55555555555543
				],
				[
					15.555555555555202,
					-61.111111111111086
				],
				[
					14.444444444444343,
					-54.44444444444434
				],
				[
					14.444444444444343,
					-51.111111111111086
				],
				[
					13.333333333333485,
					-42.22222222222217
				],
				[
					13.333333333333485,
					-33.33333333333326
				],
				[
					13.333333333333485,
					-23.333333333333258
				],
				[
					13.333333333333485,
					-18.888888888888914
				],
				[
					12.222222222222172,
					-8.888888888888914
				],
				[
					12.222222222222172,
					0
				],
				[
					13.333333333333485,
					7.777777777777828
				],
				[
					13.333333333333485,
					11.111111111111086
				],
				[
					14.444444444444343,
					16.666666666666742
				],
				[
					15.555555555555202,
					20
				],
				[
					17.77777777777783,
					22.22222222222217
				],
				[
					18.888888888888687,
					22.22222222222217
				],
				[
					21.11111111111086,
					22.22222222222217
				],
				[
					22.22222222222217,
					21.111111111111086
				],
				[
					23.333333333333485,
					20
				],
				[
					25.555555555555202,
					17.77777777777783
				],
				[
					27.77777777777783,
					14.44444444444457
				],
				[
					28.888888888888687,
					10
				],
				[
					30,
					7.777777777777828
				],
				[
					31.11111111111086,
					3.3333333333332575
				],
				[
					31.11111111111086,
					-1.1111111111110858
				],
				[
					31.11111111111086,
					-5.555555555555429
				],
				[
					31.11111111111086,
					-7.777777777777828
				],
				[
					31.11111111111086,
					-12.222222222222172
				],
				[
					30,
					-14.444444444444343
				],
				[
					28.888888888888687,
					-16.666666666666742
				],
				[
					27.77777777777783,
					-17.77777777777783
				],
				[
					26.666666666666515,
					-17.77777777777783
				],
				[
					26.666666666666515,
					-16.666666666666742
				],
				[
					25.555555555555202,
					-15.55555555555543
				],
				[
					25.555555555555202,
					-14.444444444444343
				],
				[
					25.555555555555202,
					-12.222222222222172
				],
				[
					25.555555555555202,
					-10
				],
				[
					25.555555555555202,
					-6.6666666666667425
				],
				[
					26.666666666666515,
					-3.3333333333332575
				],
				[
					27.77777777777783,
					1.1111111111110858
				],
				[
					27.77777777777783,
					2.2222222222221717
				],
				[
					30,
					5.555555555555657
				],
				[
					31.11111111111086,
					7.777777777777828
				],
				[
					33.333333333333485,
					8.888888888888914
				],
				[
					35.5555555555552,
					8.888888888888914
				],
				[
					37.77777777777783,
					6.6666666666667425
				],
				[
					38.88888888888869,
					4.444444444444571
				],
				[
					40,
					3.3333333333332575
				],
				[
					41.11111111111086,
					0
				],
				[
					42.22222222222217,
					-3.3333333333332575
				],
				[
					43.333333333333485,
					-5.555555555555429
				],
				[
					44.44444444444434,
					-10
				],
				[
					44.44444444444434,
					-14.444444444444343
				],
				[
					44.44444444444434,
					-18.888888888888914
				],
				[
					44.44444444444434,
					-20
				],
				[
					44.44444444444434,
					-23.333333333333258
				],
				[
					44.44444444444434,
					-26.666666666666742
				],
				[
					44.44444444444434,
					-27.77777777777783
				],
				[
					44.44444444444434,
					-28.888888888888914
				],
				[
					43.333333333333485,
					-30
				],
				[
					43.333333333333485,
					-28.888888888888914
				],
				[
					44.44444444444434,
					-28.888888888888914
				],
				[
					45.5555555555552,
					-27.77777777777783
				],
				[
					46.666666666666515,
					-27.77777777777783
				],
				[
					47.77777777777783,
					-27.77777777777783
				],
				[
					48.88888888888869,
					-28.888888888888914
				],
				[
					50,
					-28.888888888888914
				],
				[
					52.22222222222217,
					-30
				],
				[
					53.333333333333485,
					-32.22222222222217
				],
				[
					54.44444444444434,
					-32.22222222222217
				],
				[
					55.5555555555552,
					-34.44444444444434
				],
				[
					57.77777777777783,
					-36.66666666666674
				],
				[
					57.77777777777783,
					-37.77777777777783
				],
				[
					58.88888888888869,
					-38.888888888888914
				],
				[
					58.88888888888869,
					-40
				],
				[
					58.88888888888869,
					-38.888888888888914
				],
				[
					58.88888888888869,
					-37.77777777777783
				],
				[
					58.88888888888869,
					-36.66666666666674
				],
				[
					57.77777777777783,
					-35.55555555555543
				],
				[
					57.77777777777783,
					-32.22222222222217
				],
				[
					57.77777777777783,
					-30
				],
				[
					57.77777777777783,
					-25.55555555555543
				],
				[
					57.77777777777783,
					-24.444444444444343
				],
				[
					57.77777777777783,
					-21.111111111111086
				],
				[
					57.77777777777783,
					-16.666666666666742
				],
				[
					57.77777777777783,
					-14.444444444444343
				],
				[
					57.77777777777783,
					-12.222222222222172
				],
				[
					58.88888888888869,
					-10
				],
				[
					60,
					-8.888888888888914
				],
				[
					60,
					-8.888888888888914
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.1171875,
				0.1240234375,
				0.138671875,
				0.1484375,
				0.1591796875,
				0.2021484375,
				0.2158203125,
				0.2470703125,
				0.2841796875,
				0.2998046875,
				0.3291015625,
				0.328125,
				0.326171875,
				0.3251953125,
				0.3232421875,
				0.322265625,
				0.3212890625,
				0.318359375,
				0.3125,
				0.3056640625,
				0.30078125,
				0.2919921875,
				0.2841796875,
				0.27734375,
				0.2744140625,
				0.2705078125,
				0.267578125,
				0.2666015625,
				0.2685546875,
				0.27734375,
				0.2939453125,
				0.3125,
				0.3212890625,
				0.337890625,
				0.3515625,
				0.3544921875,
				0.3583984375,
				0.361328125,
				0.365234375,
				0.369140625,
				0.375,
				0.380859375,
				0.384765625,
				0.3857421875,
				0.3876953125,
				0.3837890625,
				0.3759765625,
				0.37109375,
				0.357421875,
				0.34375,
				0.3310546875,
				0.326171875,
				0.3203125,
				0.318359375,
				0.3173828125,
				0.3173828125,
				0.31640625,
				0.314453125,
				0.314453125,
				0.3125,
				0.3125,
				0.3134765625,
				0.3134765625,
				0.314453125,
				0.318359375,
				0.32421875,
				0.3310546875,
				0.33984375,
				0.341796875,
				0.3447265625,
				0.345703125,
				0.3447265625,
				0.3447265625,
				0.3447265625,
				0.3408203125,
				0.3310546875,
				0.3232421875,
				0.3046875,
				0.2802734375,
				0.2568359375,
				0.23046875,
				0.220703125,
				0.21484375,
				0.212890625,
				0.20703125,
				0.203125,
				0.201171875,
				0.1962890625,
				0.19140625,
				0.1923828125,
				0.1962890625,
				0.20703125,
				0.224609375,
				0.236328125,
				0.2646484375,
				0.2900390625,
				0.3310546875,
				0.3310546875,
				0.3330078125,
				0.333984375,
				0.3330078125,
				0.33203125,
				0.330078125,
				0.328125,
				0.3271484375,
				0.3271484375,
				0.326171875,
				0.32421875,
				0.3232421875,
				0.322265625,
				0.326171875,
				0.3984375,
				0.408203125,
				0.412109375,
				0.41796875,
				0.4228515625,
				0.4287109375,
				0.435546875,
				0.4384765625,
				0.443359375,
				0.4443359375,
				0.4365234375,
				0.4267578125,
				0.3955078125,
				0.3447265625,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 121,
			"versionNonce": 907913937,
			"isDeleted": false,
			"id": "6WIxpc_dsZPD3x4yns30E",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2261.666666666659,
			"y": 1625.500000000011,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 11.111111111110858,
			"height": 38.888888888888914,
			"seed": 1228252903,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111110858
				],
				[
					0,
					-2.2222222222221717
				],
				[
					0,
					-3.3333333333332575
				],
				[
					1.1111111111108585,
					-4.444444444444343
				],
				[
					2.222222222221717,
					-5.555555555555429
				],
				[
					3.33333333333303,
					-5.555555555555429
				],
				[
					4.444444444444343,
					-6.666666666666515
				],
				[
					5.555555555555202,
					-6.666666666666515
				],
				[
					7.777777777777374,
					-6.666666666666515
				],
				[
					8.888888888888687,
					-6.666666666666515
				],
				[
					10,
					-5.555555555555429
				],
				[
					11.111111111110858,
					-4.444444444444343
				],
				[
					11.111111111110858,
					-3.3333333333332575
				],
				[
					11.111111111110858,
					-1.1111111111110858
				],
				[
					11.111111111110858,
					2.2222222222221717
				],
				[
					10,
					3.333333333333485
				],
				[
					8.888888888888687,
					6.6666666666667425
				],
				[
					6.666666666666515,
					11.111111111111313
				],
				[
					5.555555555555202,
					14.44444444444457
				],
				[
					5.555555555555202,
					15.555555555555657
				],
				[
					4.444444444444343,
					18.888888888888914
				],
				[
					3.33333333333303,
					22.2222222222224
				],
				[
					3.33333333333303,
					24.44444444444457
				],
				[
					3.33333333333303,
					25.555555555555657
				],
				[
					4.444444444444343,
					26.666666666666742
				],
				[
					5.555555555555202,
					28.888888888888914
				],
				[
					6.666666666666515,
					31.111111111111313
				],
				[
					8.888888888888687,
					32.2222222222224
				],
				[
					8.888888888888687,
					32.2222222222224
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.3037109375,
				0.3037109375,
				0.3125,
				0.3505859375,
				0.38671875,
				0.4462890625,
				0.4833984375,
				0.5009765625,
				0.5322265625,
				0.5703125,
				0.587890625,
				0.6015625,
				0.6103515625,
				0.6171875,
				0.623046875,
				0.626953125,
				0.6279296875,
				0.6298828125,
				0.630859375,
				0.630859375,
				0.6298828125,
				0.6279296875,
				0.623046875,
				0.6123046875,
				0.6044921875,
				0.59375,
				0.544921875,
				0.46484375,
				0.390625,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 102,
			"versionNonce": 67364543,
			"isDeleted": false,
			"id": "x-eE9NdO-Wf959JL6IOw1",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2281.666666666659,
			"y": 1672.1666666666777,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 2.222222222221717,
			"height": 6.6666666666667425,
			"seed": 803297833,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.1111111111110858
				],
				[
					0,
					2.2222222222221717
				],
				[
					0,
					3.3333333333332575
				],
				[
					1.1111111111108585,
					3.3333333333332575
				],
				[
					1.1111111111108585,
					4.444444444444571
				],
				[
					1.1111111111108585,
					5.555555555555657
				],
				[
					1.1111111111108585,
					6.6666666666667425
				],
				[
					2.222222222221717,
					6.6666666666667425
				],
				[
					0,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.2685546875,
				0.275390625,
				0.27734375,
				0.2841796875,
				0.2890625,
				0.2900390625,
				0.2919921875,
				0.28125,
				0.2666015625,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 170,
			"versionNonce": 463612081,
			"isDeleted": false,
			"id": "Pk1R6lpFmGJ-wQY4QtvFV",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1862.7777777777662,
			"y": 2229.944444444459,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 45.55555555555566,
			"height": 40,
			"seed": 813869639,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.1111111111110858,
					-1.1111111111113132
				],
				[
					1.1111111111110858,
					-2.2222222222221717
				],
				[
					1.1111111111110858,
					-3.333333333333485
				],
				[
					1.1111111111110858,
					-4.444444444444343
				],
				[
					1.1111111111110858,
					-5.555555555555657
				],
				[
					1.1111111111110858,
					-6.666666666666515
				],
				[
					0,
					-7.777777777777828
				],
				[
					-2.2222222222221717,
					-8.888888888888687
				],
				[
					-3.3333333333332575,
					-8.888888888888687
				],
				[
					-5.555555555555429,
					-8.888888888888687
				],
				[
					-7.777777777777828,
					-8.888888888888687
				],
				[
					-11.111111111111086,
					-7.777777777777828
				],
				[
					-12.222222222222172,
					-7.777777777777828
				],
				[
					-15.55555555555543,
					-5.555555555555657
				],
				[
					-18.888888888888914,
					-3.333333333333485
				],
				[
					-21.111111111111086,
					-1.1111111111113132
				],
				[
					-22.22222222222217,
					0
				],
				[
					-24.444444444444343,
					3.333333333333485
				],
				[
					-26.666666666666742,
					5.555555555555657
				],
				[
					-26.666666666666742,
					8.888888888888687
				],
				[
					-27.77777777777783,
					10
				],
				[
					-27.77777777777783,
					13.333333333333485
				],
				[
					-27.77777777777783,
					16.666666666666515
				],
				[
					-27.77777777777783,
					20
				],
				[
					-26.666666666666742,
					21.111111111111313
				],
				[
					-25.55555555555543,
					23.333333333333485
				],
				[
					-23.333333333333258,
					25.555555555555657
				],
				[
					-22.22222222222217,
					26.666666666666515
				],
				[
					-20,
					27.77777777777783
				],
				[
					-16.666666666666742,
					27.77777777777783
				],
				[
					-13.333333333333258,
					27.77777777777783
				],
				[
					-11.111111111111086,
					27.77777777777783
				],
				[
					-7.777777777777828,
					26.666666666666515
				],
				[
					-4.444444444444343,
					25.555555555555657
				],
				[
					-2.2222222222221717,
					23.333333333333485
				],
				[
					0,
					22.22222222222217
				],
				[
					2.2222222222221717,
					20
				],
				[
					4.444444444444571,
					16.666666666666515
				],
				[
					5.555555555555657,
					14.444444444444343
				],
				[
					5.555555555555657,
					13.333333333333485
				],
				[
					6.6666666666667425,
					10
				],
				[
					7.777777777777828,
					7.777777777777828
				],
				[
					7.777777777777828,
					4.444444444444343
				],
				[
					7.777777777777828,
					3.333333333333485
				],
				[
					7.777777777777828,
					2.2222222222221717
				],
				[
					6.6666666666667425,
					0
				],
				[
					5.555555555555657,
					-1.1111111111113132
				],
				[
					4.444444444444571,
					-1.1111111111113132
				],
				[
					4.444444444444571,
					0
				],
				[
					3.3333333333332575,
					1.1111111111113132
				],
				[
					2.2222222222221717,
					4.444444444444343
				],
				[
					2.2222222222221717,
					7.777777777777828
				],
				[
					2.2222222222221717,
					8.888888888888687
				],
				[
					1.1111111111110858,
					13.333333333333485
				],
				[
					1.1111111111110858,
					16.666666666666515
				],
				[
					1.1111111111110858,
					20
				],
				[
					2.2222222222221717,
					22.22222222222217
				],
				[
					3.3333333333332575,
					25.555555555555657
				],
				[
					4.444444444444571,
					27.77777777777783
				],
				[
					4.444444444444571,
					28.888888888888687
				],
				[
					5.555555555555657,
					30
				],
				[
					7.777777777777828,
					31.111111111111313
				],
				[
					8.888888888888914,
					31.111111111111313
				],
				[
					10,
					31.111111111111313
				],
				[
					12.222222222222172,
					30
				],
				[
					13.333333333333258,
					28.888888888888687
				],
				[
					15.555555555555657,
					26.666666666666515
				],
				[
					15.555555555555657,
					25.555555555555657
				],
				[
					16.666666666666742,
					23.333333333333485
				],
				[
					17.77777777777783,
					20
				],
				[
					17.77777777777783,
					16.666666666666515
				],
				[
					17.77777777777783,
					15.555555555555657
				],
				[
					17.77777777777783,
					12.222222222222172
				],
				[
					16.666666666666742,
					8.888888888888687
				],
				[
					16.666666666666742,
					6.666666666666515
				],
				[
					15.555555555555657,
					5.555555555555657
				],
				[
					15.555555555555657,
					3.333333333333485
				],
				[
					14.44444444444457,
					1.1111111111113132
				],
				[
					14.44444444444457,
					0
				],
				[
					14.44444444444457,
					-1.1111111111113132
				],
				[
					14.44444444444457,
					-2.2222222222221717
				],
				[
					14.44444444444457,
					-2.2222222222221717
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0556640625,
				0.06640625,
				0.076171875,
				0.0908203125,
				0.10546875,
				0.126953125,
				0.142578125,
				0.17578125,
				0.208984375,
				0.224609375,
				0.255859375,
				0.28515625,
				0.310546875,
				0.3212890625,
				0.3427734375,
				0.3623046875,
				0.3779296875,
				0.3857421875,
				0.3994140625,
				0.41015625,
				0.4189453125,
				0.421875,
				0.427734375,
				0.431640625,
				0.4326171875,
				0.4326171875,
				0.4326171875,
				0.43359375,
				0.43359375,
				0.43359375,
				0.4345703125,
				0.43359375,
				0.4296875,
				0.41796875,
				0.3955078125,
				0.3671875,
				0.3525390625,
				0.3193359375,
				0.2890625,
				0.2626953125,
				0.251953125,
				0.2314453125,
				0.21484375,
				0.2021484375,
				0.1982421875,
				0.1943359375,
				0.1923828125,
				0.189453125,
				0.189453125,
				0.1904296875,
				0.1943359375,
				0.201171875,
				0.2109375,
				0.2158203125,
				0.2255859375,
				0.234375,
				0.2451171875,
				0.25,
				0.2587890625,
				0.267578125,
				0.271484375,
				0.275390625,
				0.291015625,
				0.296875,
				0.3115234375,
				0.326171875,
				0.3408203125,
				0.3525390625,
				0.3564453125,
				0.3623046875,
				0.365234375,
				0.3662109375,
				0.3662109375,
				0.3642578125,
				0.3544921875,
				0.333984375,
				0.3203125,
				0.2841796875,
				0.240234375,
				0.216796875,
				0.1650390625,
				0.1396484375,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 157,
			"versionNonce": 91666143,
			"isDeleted": false,
			"id": "O5uUm2hwJGCA5O_w6xILH",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1886.1111111110995,
			"y": 2226.6111111111254,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 31.111111111111313,
			"height": 75.55555555555566,
			"seed": 409923975,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.1111111111113132,
					0
				],
				[
					1.1111111111113132,
					1.1111111111113132
				],
				[
					1.1111111111113132,
					2.2222222222221717
				],
				[
					2.222222222222399,
					3.333333333333485
				],
				[
					2.222222222222399,
					4.444444444444798
				],
				[
					2.222222222222399,
					5.555555555555657
				],
				[
					2.222222222222399,
					6.66666666666697
				],
				[
					3.333333333333485,
					10
				],
				[
					3.333333333333485,
					13.333333333333485
				],
				[
					3.333333333333485,
					15.555555555555657
				],
				[
					3.333333333333485,
					20
				],
				[
					3.333333333333485,
					25.555555555555657
				],
				[
					4.444444444444571,
					31.111111111111313
				],
				[
					4.444444444444571,
					34.4444444444448
				],
				[
					4.444444444444571,
					41.11111111111131
				],
				[
					3.333333333333485,
					46.66666666666697
				],
				[
					3.333333333333485,
					53.333333333333485
				],
				[
					3.333333333333485,
					55.55555555555566
				],
				[
					3.333333333333485,
					60
				],
				[
					3.333333333333485,
					63.333333333333485
				],
				[
					3.333333333333485,
					65.55555555555566
				],
				[
					3.333333333333485,
					66.66666666666697
				],
				[
					3.333333333333485,
					67.77777777777783
				],
				[
					3.333333333333485,
					65.55555555555566
				],
				[
					3.333333333333485,
					63.333333333333485
				],
				[
					3.333333333333485,
					62.22222222222217
				],
				[
					3.333333333333485,
					57.77777777777783
				],
				[
					3.333333333333485,
					52.22222222222217
				],
				[
					3.333333333333485,
					45.55555555555566
				],
				[
					4.444444444444571,
					42.22222222222217
				],
				[
					4.444444444444571,
					34.4444444444448
				],
				[
					5.555555555555657,
					30
				],
				[
					6.6666666666667425,
					23.333333333333485
				],
				[
					7.777777777777828,
					15.555555555555657
				],
				[
					10,
					10
				],
				[
					11.111111111111313,
					6.66666666666697
				],
				[
					13.333333333333485,
					2.2222222222221717
				],
				[
					15.555555555555657,
					-1.1111111111108585
				],
				[
					17.77777777777783,
					-4.444444444444343
				],
				[
					18.888888888888914,
					-5.555555555555202
				],
				[
					21.111111111111313,
					-6.666666666666515
				],
				[
					22.2222222222224,
					-7.777777777777828
				],
				[
					23.333333333333485,
					-7.777777777777828
				],
				[
					24.44444444444457,
					-7.777777777777828
				],
				[
					26.666666666666742,
					-7.777777777777828
				],
				[
					27.77777777777783,
					-6.666666666666515
				],
				[
					27.77777777777783,
					-5.555555555555202
				],
				[
					28.888888888888914,
					-4.444444444444343
				],
				[
					30,
					-2.2222222222221717
				],
				[
					31.111111111111313,
					-1.1111111111108585
				],
				[
					31.111111111111313,
					0
				],
				[
					31.111111111111313,
					2.2222222222221717
				],
				[
					31.111111111111313,
					4.444444444444798
				],
				[
					31.111111111111313,
					7.777777777777828
				],
				[
					31.111111111111313,
					8.888888888889142
				],
				[
					30,
					11.111111111111313
				],
				[
					28.888888888888914,
					12.222222222222172
				],
				[
					28.888888888888914,
					13.333333333333485
				],
				[
					27.77777777777783,
					15.555555555555657
				],
				[
					25.555555555555657,
					16.66666666666697
				],
				[
					24.44444444444457,
					17.77777777777783
				],
				[
					23.333333333333485,
					17.77777777777783
				],
				[
					22.2222222222224,
					18.88888888888914
				],
				[
					20,
					18.88888888888914
				],
				[
					18.888888888888914,
					18.88888888888914
				],
				[
					17.77777777777783,
					18.88888888888914
				],
				[
					16.666666666666742,
					17.77777777777783
				],
				[
					16.666666666666742,
					16.66666666666697
				],
				[
					16.666666666666742,
					16.66666666666697
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.0439453125,
				0.046875,
				0.0556640625,
				0.08203125,
				0.1005859375,
				0.1181640625,
				0.1435546875,
				0.1611328125,
				0.1962890625,
				0.2314453125,
				0.2490234375,
				0.2841796875,
				0.3203125,
				0.3544921875,
				0.369140625,
				0.3935546875,
				0.412109375,
				0.423828125,
				0.4267578125,
				0.4296875,
				0.4306640625,
				0.431640625,
				0.4326171875,
				0.4326171875,
				0.4453125,
				0.4423828125,
				0.4404296875,
				0.4326171875,
				0.41796875,
				0.4013671875,
				0.39453125,
				0.380859375,
				0.3759765625,
				0.369140625,
				0.3671875,
				0.3662109375,
				0.365234375,
				0.365234375,
				0.36328125,
				0.361328125,
				0.359375,
				0.359375,
				0.359375,
				0.3603515625,
				0.36328125,
				0.3701171875,
				0.3818359375,
				0.388671875,
				0.4052734375,
				0.423828125,
				0.4443359375,
				0.4541015625,
				0.4736328125,
				0.4912109375,
				0.505859375,
				0.51171875,
				0.5205078125,
				0.525390625,
				0.5263671875,
				0.5283203125,
				0.529296875,
				0.5302734375,
				0.529296875,
				0.5234375,
				0.5078125,
				0.4765625,
				0.4541015625,
				0.39453125,
				0.3564453125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 158,
			"versionNonce": 1000073873,
			"isDeleted": false,
			"id": "aQD2jNS-T_FDYM1gw0Oi4",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1931.6666666666551,
			"y": 2227.7222222222367,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 40,
			"height": 97.77777777777783,
			"seed": 1417148169,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111113132
				],
				[
					0,
					0
				],
				[
					0,
					1.1111111111108585
				],
				[
					0,
					2.2222222222221717
				],
				[
					0,
					4.444444444444343
				],
				[
					0,
					7.777777777777828
				],
				[
					0,
					8.888888888888687
				],
				[
					0,
					12.222222222222172
				],
				[
					0,
					14.444444444444343
				],
				[
					1.1111111111110858,
					16.666666666666515
				],
				[
					1.1111111111110858,
					17.77777777777783
				],
				[
					2.2222222222221717,
					20
				],
				[
					2.2222222222221717,
					21.11111111111086
				],
				[
					3.3333333333332575,
					21.11111111111086
				],
				[
					4.444444444444343,
					22.22222222222217
				],
				[
					5.555555555555657,
					21.11111111111086
				],
				[
					6.6666666666667425,
					21.11111111111086
				],
				[
					7.777777777777828,
					21.11111111111086
				],
				[
					8.888888888888914,
					20
				],
				[
					10,
					17.77777777777783
				],
				[
					10,
					16.666666666666515
				],
				[
					12.222222222222172,
					14.444444444444343
				],
				[
					13.333333333333258,
					11.111111111110858
				],
				[
					14.444444444444343,
					7.777777777777828
				],
				[
					14.444444444444343,
					6.666666666666515
				],
				[
					16.666666666666742,
					3.333333333333485
				],
				[
					17.77777777777783,
					-1.1111111111113132
				],
				[
					17.77777777777783,
					-4.444444444444343
				],
				[
					18.888888888888914,
					-6.666666666666515
				],
				[
					18.888888888888914,
					-8.888888888889142
				],
				[
					18.888888888888914,
					-12.222222222222172
				],
				[
					20,
					-12.222222222222172
				],
				[
					20,
					-14.444444444444343
				],
				[
					18.888888888888914,
					-14.444444444444343
				],
				[
					18.888888888888914,
					-13.333333333333485
				],
				[
					17.77777777777783,
					-11.111111111111313
				],
				[
					17.77777777777783,
					-7.777777777777828
				],
				[
					17.77777777777783,
					-6.666666666666515
				],
				[
					17.77777777777783,
					-1.1111111111113132
				],
				[
					17.77777777777783,
					4.444444444444343
				],
				[
					17.77777777777783,
					10
				],
				[
					18.888888888888914,
					14.444444444444343
				],
				[
					18.888888888888914,
					21.11111111111086
				],
				[
					20,
					25.555555555555657
				],
				[
					20,
					33.333333333333485
				],
				[
					21.111111111111086,
					41.11111111111086
				],
				[
					21.111111111111086,
					45.55555555555566
				],
				[
					22.22222222222217,
					56.666666666666515
				],
				[
					22.22222222222217,
					60
				],
				[
					21.111111111111086,
					66.66666666666652
				],
				[
					21.111111111111086,
					71.11111111111086
				],
				[
					21.111111111111086,
					73.33333333333348
				],
				[
					20,
					77.77777777777783
				],
				[
					18.888888888888914,
					78.88888888888869
				],
				[
					17.77777777777783,
					81.11111111111086
				],
				[
					16.666666666666742,
					82.22222222222217
				],
				[
					15.555555555555657,
					83.33333333333348
				],
				[
					13.333333333333258,
					83.33333333333348
				],
				[
					11.111111111111086,
					83.33333333333348
				],
				[
					7.777777777777828,
					81.11111111111086
				],
				[
					6.6666666666667425,
					80
				],
				[
					2.2222222222221717,
					76.66666666666652
				],
				[
					-1.1111111111110858,
					72.22222222222217
				],
				[
					-3.3333333333332575,
					70
				],
				[
					-6.6666666666667425,
					64.44444444444434
				],
				[
					-11.111111111111086,
					58.88888888888869
				],
				[
					-14.444444444444343,
					54.44444444444434
				],
				[
					-15.555555555555657,
					52.22222222222217
				],
				[
					-17.77777777777783,
					47.77777777777783
				],
				[
					-17.77777777777783,
					47.77777777777783
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.1240234375,
				0.1259765625,
				0.2724609375,
				0.3037109375,
				0.3203125,
				0.365234375,
				0.3837890625,
				0.390625,
				0.4013671875,
				0.40625,
				0.40625,
				0.40625,
				0.408203125,
				0.4111328125,
				0.412109375,
				0.41796875,
				0.4169921875,
				0.416015625,
				0.4150390625,
				0.4130859375,
				0.4091796875,
				0.40625,
				0.400390625,
				0.390625,
				0.376953125,
				0.3701171875,
				0.357421875,
				0.3505859375,
				0.3466796875,
				0.3466796875,
				0.3466796875,
				0.3466796875,
				0.3466796875,
				0.34765625,
				0.34765625,
				0.3603515625,
				0.384765625,
				0.404296875,
				0.4150390625,
				0.435546875,
				0.453125,
				0.4697265625,
				0.4765625,
				0.4931640625,
				0.501953125,
				0.521484375,
				0.5390625,
				0.5478515625,
				0.5732421875,
				0.5810546875,
				0.595703125,
				0.607421875,
				0.6142578125,
				0.626953125,
				0.6328125,
				0.642578125,
				0.6494140625,
				0.6513671875,
				0.654296875,
				0.654296875,
				0.6484375,
				0.6435546875,
				0.6279296875,
				0.6064453125,
				0.591796875,
				0.5546875,
				0.5048828125,
				0.4423828125,
				0.4052734375,
				0.32421875,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 103,
			"versionNonce": 1281000191,
			"isDeleted": false,
			"id": "JL2Bt0kHas42266aCXvyN",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1971.6666666666551,
			"y": 2244.3888888889032,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 24.444444444444343,
			"height": 3.33333333333303,
			"seed": 163726985,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111108585
				],
				[
					1.1111111111110858,
					-1.1111111111108585
				],
				[
					2.2222222222221717,
					-1.1111111111108585
				],
				[
					2.2222222222221717,
					0
				],
				[
					4.444444444444343,
					0
				],
				[
					5.555555555555657,
					1.1111111111113132
				],
				[
					6.6666666666667425,
					1.1111111111113132
				],
				[
					8.888888888888914,
					1.1111111111113132
				],
				[
					12.222222222222172,
					2.2222222222221717
				],
				[
					14.444444444444343,
					2.2222222222221717
				],
				[
					15.555555555555657,
					2.2222222222221717
				],
				[
					18.888888888888914,
					2.2222222222221717
				],
				[
					21.111111111111086,
					2.2222222222221717
				],
				[
					24.444444444444343,
					1.1111111111113132
				],
				[
					24.444444444444343,
					1.1111111111113132
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.27734375,
				0.2880859375,
				0.6396484375,
				0.64453125,
				0.646484375,
				0.6494140625,
				0.650390625,
				0.650390625,
				0.650390625,
				0.6484375,
				0.6376953125,
				0.62890625,
				0.5986328125,
				0.5458984375,
				0.4619140625,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 123,
			"versionNonce": 516059249,
			"isDeleted": false,
			"id": "BisUiWLhgwpfXjsp6h2Ev",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2069.444444444433,
			"y": 2184.3888888889032,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 21.11111111111086,
			"height": 128.8888888888887,
			"seed": 970050439,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.2222222222221717
				],
				[
					-1.1111111111108585,
					-5.555555555555657
				],
				[
					-1.1111111111108585,
					-7.777777777777828
				],
				[
					-2.2222222222221717,
					-10
				],
				[
					-2.2222222222221717,
					-11.111111111110858
				],
				[
					-3.333333333333485,
					-12.222222222222172
				],
				[
					-4.444444444444798,
					-16.666666666666515
				],
				[
					-5.555555555555657,
					-18.888888888888687
				],
				[
					-6.666666666666515,
					-20
				],
				[
					-8.888888888889142,
					-22.22222222222217
				],
				[
					-10,
					-23.33333333333303
				],
				[
					-12.222222222222172,
					-24.444444444444343
				],
				[
					-14.444444444444798,
					-23.33333333333303
				],
				[
					-15.555555555555657,
					-21.11111111111086
				],
				[
					-15.555555555555657,
					-20
				],
				[
					-16.666666666666515,
					-16.666666666666515
				],
				[
					-17.77777777777783,
					-12.222222222222172
				],
				[
					-18.88888888888914,
					-5.555555555555657
				],
				[
					-18.88888888888914,
					-1.1111111111108585
				],
				[
					-20,
					7.777777777777828
				],
				[
					-20,
					17.77777777777783
				],
				[
					-20,
					30
				],
				[
					-20,
					35.55555555555566
				],
				[
					-21.11111111111086,
					46.66666666666697
				],
				[
					-21.11111111111086,
					58.88888888888914
				],
				[
					-21.11111111111086,
					68.88888888888914
				],
				[
					-21.11111111111086,
					74.44444444444434
				],
				[
					-21.11111111111086,
					83.33333333333348
				],
				[
					-21.11111111111086,
					90
				],
				[
					-21.11111111111086,
					93.33333333333348
				],
				[
					-21.11111111111086,
					97.77777777777783
				],
				[
					-21.11111111111086,
					101.11111111111131
				],
				[
					-20,
					103.33333333333348
				],
				[
					-20,
					104.44444444444434
				],
				[
					-20,
					104.44444444444434
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.060546875,
				0.0517578125,
				0.048828125,
				0.0595703125,
				0.078125,
				0.087890625,
				0.1064453125,
				0.1435546875,
				0.1904296875,
				0.2138671875,
				0.2568359375,
				0.294921875,
				0.328125,
				0.3671875,
				0.392578125,
				0.40625,
				0.4365234375,
				0.46875,
				0.5,
				0.5146484375,
				0.5400390625,
				0.55859375,
				0.572265625,
				0.5771484375,
				0.58203125,
				0.583984375,
				0.583984375,
				0.5830078125,
				0.5751953125,
				0.5576171875,
				0.5439453125,
				0.5078125,
				0.45703125,
				0.3935546875,
				0.359375,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 257,
			"versionNonce": 2033175327,
			"isDeleted": false,
			"id": "haq-TqrWI-dYXK6Jb1px7",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2030.555555555544,
			"y": 2224.3888888889032,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 117.77777777777783,
			"height": 44.4444444444448,
			"seed": 2142542889,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111110858,
					-1.1111111111108585
				],
				[
					-1.1111111111110858,
					-3.33333333333303
				],
				[
					-1.1111111111110858,
					-4.444444444444343
				],
				[
					-1.1111111111110858,
					-5.555555555555657
				],
				[
					0,
					-5.555555555555657
				],
				[
					0,
					-7.777777777777828
				],
				[
					1.1111111111110858,
					-7.777777777777828
				],
				[
					2.2222222222221717,
					-10
				],
				[
					4.444444444444343,
					-11.111111111110858
				],
				[
					7.777777777777828,
					-12.222222222222172
				],
				[
					8.888888888888914,
					-12.222222222222172
				],
				[
					12.222222222222172,
					-13.33333333333303
				],
				[
					15.55555555555543,
					-14.444444444444343
				],
				[
					18.888888888888914,
					-14.444444444444343
				],
				[
					21.111111111111086,
					-14.444444444444343
				],
				[
					24.444444444444116,
					-14.444444444444343
				],
				[
					27.777777777778056,
					-13.33333333333303
				],
				[
					31.111111111111086,
					-12.222222222222172
				],
				[
					32.2222222222224,
					-11.111111111110858
				],
				[
					34.444444444444116,
					-8.888888888888687
				],
				[
					36.66666666666674,
					-5.555555555555657
				],
				[
					37.777777777778056,
					-4.444444444444343
				],
				[
					38.888888888888914,
					-1.1111111111108585
				],
				[
					39.99999999999977,
					2.2222222222221717
				],
				[
					39.99999999999977,
					4.444444444444343
				],
				[
					41.111111111111086,
					6.66666666666697
				],
				[
					41.111111111111086,
					10
				],
				[
					41.111111111111086,
					12.222222222222172
				],
				[
					41.111111111111086,
					14.444444444444343
				],
				[
					41.111111111111086,
					15.555555555555657
				],
				[
					41.111111111111086,
					17.77777777777783
				],
				[
					39.99999999999977,
					18.88888888888914
				],
				[
					39.99999999999977,
					20
				],
				[
					39.99999999999977,
					18.88888888888914
				],
				[
					39.99999999999977,
					17.77777777777783
				],
				[
					39.99999999999977,
					16.66666666666697
				],
				[
					39.99999999999977,
					14.444444444444343
				],
				[
					39.99999999999977,
					11.111111111111313
				],
				[
					39.99999999999977,
					10
				],
				[
					39.99999999999977,
					5.555555555555657
				],
				[
					39.99999999999977,
					2.2222222222221717
				],
				[
					41.111111111111086,
					-1.1111111111108585
				],
				[
					41.111111111111086,
					-3.33333333333303
				],
				[
					42.2222222222224,
					-6.666666666666515
				],
				[
					43.33333333333326,
					-8.888888888888687
				],
				[
					44.444444444444116,
					-12.222222222222172
				],
				[
					45.55555555555543,
					-12.222222222222172
				],
				[
					47.777777777778056,
					-14.444444444444343
				],
				[
					48.888888888888914,
					-15.555555555555657
				],
				[
					49.99999999999977,
					-16.666666666666515
				],
				[
					51.111111111111086,
					-16.666666666666515
				],
				[
					52.2222222222224,
					-17.77777777777783
				],
				[
					53.33333333333326,
					-17.77777777777783
				],
				[
					54.444444444444116,
					-16.666666666666515
				],
				[
					54.444444444444116,
					-15.555555555555657
				],
				[
					54.444444444444116,
					-13.33333333333303
				],
				[
					54.444444444444116,
					-12.222222222222172
				],
				[
					54.444444444444116,
					-11.111111111110858
				],
				[
					54.444444444444116,
					-7.777777777777828
				],
				[
					53.33333333333326,
					-5.555555555555657
				],
				[
					53.33333333333326,
					-2.2222222222221717
				],
				[
					53.33333333333326,
					0
				],
				[
					52.2222222222224,
					3.333333333333485
				],
				[
					52.2222222222224,
					6.66666666666697
				],
				[
					52.2222222222224,
					11.111111111111313
				],
				[
					52.2222222222224,
					12.222222222222172
				],
				[
					53.33333333333326,
					15.555555555555657
				],
				[
					54.444444444444116,
					18.88888888888914
				],
				[
					54.444444444444116,
					20
				],
				[
					56.66666666666674,
					22.22222222222217
				],
				[
					57.777777777778056,
					22.22222222222217
				],
				[
					59.99999999999977,
					23.333333333333485
				],
				[
					62.2222222222224,
					22.22222222222217
				],
				[
					64.44444444444412,
					21.111111111111313
				],
				[
					65.55555555555543,
					18.88888888888914
				],
				[
					66.66666666666674,
					17.77777777777783
				],
				[
					67.77777777777806,
					15.555555555555657
				],
				[
					68.88888888888891,
					12.222222222222172
				],
				[
					68.88888888888891,
					8.888888888889142
				],
				[
					68.88888888888891,
					7.777777777777828
				],
				[
					67.77777777777806,
					4.444444444444343
				],
				[
					66.66666666666674,
					1.1111111111113132
				],
				[
					66.66666666666674,
					0
				],
				[
					65.55555555555543,
					-3.33333333333303
				],
				[
					64.44444444444412,
					-4.444444444444343
				],
				[
					63.33333333333326,
					-5.555555555555657
				],
				[
					62.2222222222224,
					-7.777777777777828
				],
				[
					62.2222222222224,
					-8.888888888888687
				],
				[
					62.2222222222224,
					-10
				],
				[
					62.2222222222224,
					-11.111111111110858
				],
				[
					63.33333333333326,
					-12.222222222222172
				],
				[
					63.33333333333326,
					-13.33333333333303
				],
				[
					64.44444444444412,
					-14.444444444444343
				],
				[
					65.55555555555543,
					-14.444444444444343
				],
				[
					66.66666666666674,
					-15.555555555555657
				],
				[
					68.88888888888891,
					-14.444444444444343
				],
				[
					71.11111111111109,
					-13.33333333333303
				],
				[
					72.2222222222224,
					-12.222222222222172
				],
				[
					73.33333333333326,
					-11.111111111110858
				],
				[
					74.44444444444412,
					-10
				],
				[
					75.55555555555543,
					-7.777777777777828
				],
				[
					76.66666666666674,
					-5.555555555555657
				],
				[
					76.66666666666674,
					-2.2222222222221717
				],
				[
					77.77777777777806,
					-1.1111111111108585
				],
				[
					77.77777777777806,
					2.2222222222221717
				],
				[
					77.77777777777806,
					5.555555555555657
				],
				[
					77.77777777777806,
					7.777777777777828
				],
				[
					78.88888888888891,
					11.111111111111313
				],
				[
					78.88888888888891,
					14.444444444444343
				],
				[
					77.77777777777806,
					16.66666666666697
				],
				[
					77.77777777777806,
					17.77777777777783
				],
				[
					77.77777777777806,
					20
				],
				[
					77.77777777777806,
					22.22222222222217
				],
				[
					77.77777777777806,
					23.333333333333485
				],
				[
					77.77777777777806,
					22.22222222222217
				],
				[
					78.88888888888891,
					22.22222222222217
				],
				[
					78.88888888888891,
					21.111111111111313
				],
				[
					78.88888888888891,
					18.88888888888914
				],
				[
					79.99999999999977,
					15.555555555555657
				],
				[
					81.11111111111109,
					14.444444444444343
				],
				[
					82.2222222222224,
					10
				],
				[
					83.33333333333326,
					5.555555555555657
				],
				[
					85.55555555555543,
					1.1111111111113132
				],
				[
					85.55555555555543,
					-1.1111111111108585
				],
				[
					87.77777777777806,
					-5.555555555555657
				],
				[
					87.77777777777806,
					-8.888888888888687
				],
				[
					88.88888888888891,
					-11.111111111110858
				],
				[
					89.99999999999977,
					-12.222222222222172
				],
				[
					89.99999999999977,
					-13.33333333333303
				],
				[
					89.99999999999977,
					-12.222222222222172
				],
				[
					89.99999999999977,
					-11.111111111110858
				],
				[
					89.99999999999977,
					-8.888888888888687
				],
				[
					89.99999999999977,
					-5.555555555555657
				],
				[
					89.99999999999977,
					-3.33333333333303
				],
				[
					89.99999999999977,
					1.1111111111113132
				],
				[
					89.99999999999977,
					5.555555555555657
				],
				[
					89.99999999999977,
					10
				],
				[
					89.99999999999977,
					12.222222222222172
				],
				[
					89.99999999999977,
					16.66666666666697
				],
				[
					91.11111111111109,
					20
				],
				[
					91.11111111111109,
					22.22222222222217
				],
				[
					92.2222222222224,
					23.333333333333485
				],
				[
					93.33333333333326,
					22.22222222222217
				],
				[
					95.55555555555543,
					21.111111111111313
				],
				[
					96.66666666666674,
					20
				],
				[
					97.77777777777806,
					17.77777777777783
				],
				[
					99.99999999999977,
					14.444444444444343
				],
				[
					101.11111111111109,
					10
				],
				[
					102.2222222222224,
					8.888888888889142
				],
				[
					104.44444444444412,
					4.444444444444343
				],
				[
					106.66666666666674,
					0
				],
				[
					106.66666666666674,
					-1.1111111111108585
				],
				[
					108.88888888888891,
					-4.444444444444343
				],
				[
					108.88888888888891,
					-6.666666666666515
				],
				[
					109.99999999999977,
					-7.777777777777828
				],
				[
					111.11111111111109,
					-7.777777777777828
				],
				[
					111.11111111111109,
					-6.666666666666515
				],
				[
					111.11111111111109,
					-4.444444444444343
				],
				[
					111.11111111111109,
					-3.33333333333303
				],
				[
					111.11111111111109,
					0
				],
				[
					111.11111111111109,
					4.444444444444343
				],
				[
					112.2222222222224,
					8.888888888889142
				],
				[
					112.2222222222224,
					11.111111111111313
				],
				[
					112.2222222222224,
					15.555555555555657
				],
				[
					113.33333333333326,
					18.88888888888914
				],
				[
					113.33333333333326,
					22.22222222222217
				],
				[
					114.44444444444412,
					24.444444444444343
				],
				[
					116.66666666666674,
					26.66666666666697
				],
				[
					116.66666666666674,
					26.66666666666697
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.1640625,
				0.166015625,
				0.1669921875,
				0.1689453125,
				0.1787109375,
				0.1826171875,
				0.201171875,
				0.2099609375,
				0.228515625,
				0.2470703125,
				0.26171875,
				0.2685546875,
				0.279296875,
				0.2861328125,
				0.291015625,
				0.2919921875,
				0.2958984375,
				0.2998046875,
				0.3046875,
				0.3076171875,
				0.31640625,
				0.328125,
				0.3359375,
				0.35546875,
				0.3740234375,
				0.392578125,
				0.4013671875,
				0.416015625,
				0.4228515625,
				0.427734375,
				0.4296875,
				0.4345703125,
				0.4404296875,
				0.4521484375,
				0.458984375,
				0.466796875,
				0.4658203125,
				0.458984375,
				0.44921875,
				0.443359375,
				0.4287109375,
				0.4111328125,
				0.39453125,
				0.38671875,
				0.3720703125,
				0.3583984375,
				0.349609375,
				0.345703125,
				0.3408203125,
				0.337890625,
				0.3369140625,
				0.3359375,
				0.3349609375,
				0.3359375,
				0.33984375,
				0.3388671875,
				0.337890625,
				0.333984375,
				0.33203125,
				0.3310546875,
				0.33203125,
				0.3359375,
				0.3388671875,
				0.3447265625,
				0.3505859375,
				0.3564453125,
				0.359375,
				0.361328125,
				0.3623046875,
				0.36328125,
				0.3642578125,
				0.3662109375,
				0.369140625,
				0.375,
				0.3798828125,
				0.3837890625,
				0.3857421875,
				0.38671875,
				0.3857421875,
				0.3828125,
				0.380859375,
				0.37890625,
				0.3779296875,
				0.3779296875,
				0.3798828125,
				0.3798828125,
				0.3720703125,
				0.357421875,
				0.349609375,
				0.3330078125,
				0.314453125,
				0.30078125,
				0.2978515625,
				0.294921875,
				0.2939453125,
				0.29296875,
				0.29296875,
				0.294921875,
				0.2978515625,
				0.306640625,
				0.3125,
				0.3271484375,
				0.345703125,
				0.3671875,
				0.3798828125,
				0.4033203125,
				0.42578125,
				0.4345703125,
				0.44921875,
				0.4599609375,
				0.46484375,
				0.466796875,
				0.46875,
				0.470703125,
				0.4716796875,
				0.4697265625,
				0.46875,
				0.4677734375,
				0.462890625,
				0.4560546875,
				0.451171875,
				0.439453125,
				0.427734375,
				0.4189453125,
				0.4150390625,
				0.4111328125,
				0.41015625,
				0.41015625,
				0.41015625,
				0.412109375,
				0.4189453125,
				0.423828125,
				0.4345703125,
				0.4482421875,
				0.455078125,
				0.4697265625,
				0.48046875,
				0.4873046875,
				0.4892578125,
				0.4912109375,
				0.4921875,
				0.4921875,
				0.4912109375,
				0.4873046875,
				0.484375,
				0.482421875,
				0.478515625,
				0.4755859375,
				0.4736328125,
				0.47265625,
				0.4716796875,
				0.4716796875,
				0.4716796875,
				0.47265625,
				0.4755859375,
				0.4775390625,
				0.49609375,
				0.51171875,
				0.5302734375,
				0.5390625,
				0.5556640625,
				0.5693359375,
				0.5791015625,
				0.58203125,
				0.580078125,
				0.5634765625,
				0.5263671875,
				0.4970703125,
				0.4189453125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 103,
			"versionNonce": 1256012369,
			"isDeleted": false,
			"id": "OB87nLEzeJxleY_7nJYfl",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2174.999999999988,
			"y": 2244.3888888889032,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 30,
			"height": 2.2222222222221717,
			"seed": 611057799,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.1111111111108585,
					0
				],
				[
					-2.222222222221717,
					0
				],
				[
					-2.222222222221717,
					1.1111111111113132
				],
				[
					-1.1111111111108585,
					1.1111111111113132
				],
				[
					0,
					1.1111111111113132
				],
				[
					1.1111111111113132,
					1.1111111111113132
				],
				[
					3.3333333333339397,
					1.1111111111113132
				],
				[
					6.66666666666697,
					2.2222222222221717
				],
				[
					7.777777777778283,
					2.2222222222221717
				],
				[
					12.222222222222626,
					1.1111111111113132
				],
				[
					16.66666666666697,
					1.1111111111113132
				],
				[
					21.111111111111313,
					1.1111111111113132
				],
				[
					23.33333333333394,
					0
				],
				[
					27.777777777778283,
					0
				],
				[
					27.777777777778283,
					0
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.3505859375,
				0.3525390625,
				0.3583984375,
				0.3642578125,
				0.3955078125,
				0.431640625,
				0.4560546875,
				0.470703125,
				0.478515625,
				0.4814453125,
				0.4814453125,
				0.4677734375,
				0.4375,
				0.4140625,
				0.3515625,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 138,
			"versionNonce": 1214713663,
			"isDeleted": false,
			"id": "FCnn41qdss2Lvyxs__pCa",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2234.999999999988,
			"y": 2212.166666666681,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 32.22222222222217,
			"height": 43.333333333333485,
			"seed": 691189353,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111108585
				],
				[
					1.1111111111113132,
					-1.1111111111108585
				],
				[
					1.1111111111113132,
					0
				],
				[
					1.1111111111113132,
					1.1111111111113132
				],
				[
					1.1111111111113132,
					2.2222222222221717
				],
				[
					1.1111111111113132,
					4.444444444444343
				],
				[
					0,
					7.777777777777828
				],
				[
					0,
					11.111111111111313
				],
				[
					-1.1111111111108585,
					15.555555555555657
				],
				[
					-1.1111111111108585,
					17.77777777777783
				],
				[
					-1.1111111111108585,
					21.111111111111313
				],
				[
					-1.1111111111108585,
					25.555555555555657
				],
				[
					-1.1111111111108585,
					26.666666666666515
				],
				[
					-1.1111111111108585,
					30
				],
				[
					0,
					32.22222222222217
				],
				[
					1.1111111111113132,
					33.333333333333485
				],
				[
					3.3333333333339397,
					33.333333333333485
				],
				[
					4.444444444444798,
					33.333333333333485
				],
				[
					5.555555555555657,
					32.22222222222217
				],
				[
					6.66666666666697,
					31.111111111111313
				],
				[
					8.888888888889142,
					28.88888888888914
				],
				[
					11.111111111111313,
					26.666666666666515
				],
				[
					13.33333333333394,
					22.22222222222217
				],
				[
					13.33333333333394,
					20
				],
				[
					15.555555555555657,
					15.555555555555657
				],
				[
					17.777777777778283,
					11.111111111111313
				],
				[
					18.88888888888914,
					6.666666666666515
				],
				[
					20,
					5.555555555555657
				],
				[
					21.111111111111313,
					1.1111111111113132
				],
				[
					22.222222222222626,
					-1.1111111111108585
				],
				[
					22.222222222222626,
					-2.2222222222221717
				],
				[
					22.222222222222626,
					-3.333333333333485
				],
				[
					22.222222222222626,
					-2.2222222222221717
				],
				[
					21.111111111111313,
					1.1111111111113132
				],
				[
					21.111111111111313,
					4.444444444444343
				],
				[
					20,
					8.888888888889142
				],
				[
					18.88888888888914,
					11.111111111111313
				],
				[
					18.88888888888914,
					16.666666666666515
				],
				[
					17.777777777778283,
					22.22222222222217
				],
				[
					17.777777777778283,
					27.77777777777783
				],
				[
					17.777777777778283,
					30
				],
				[
					18.88888888888914,
					34.44444444444434
				],
				[
					20,
					36.666666666666515
				],
				[
					21.111111111111313,
					38.88888888888914
				],
				[
					22.222222222222626,
					40
				],
				[
					24.444444444444798,
					40
				],
				[
					27.777777777778283,
					38.88888888888914
				],
				[
					28.88888888888914,
					37.77777777777783
				],
				[
					31.111111111111313,
					36.666666666666515
				],
				[
					31.111111111111313,
					36.666666666666515
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.201171875,
				0.201171875,
				0.2021484375,
				0.2861328125,
				0.3349609375,
				0.388671875,
				0.4150390625,
				0.4609375,
				0.4970703125,
				0.51953125,
				0.5263671875,
				0.5341796875,
				0.537109375,
				0.5380859375,
				0.5380859375,
				0.5361328125,
				0.5322265625,
				0.5244140625,
				0.5146484375,
				0.501953125,
				0.494140625,
				0.47265625,
				0.447265625,
				0.421875,
				0.41015625,
				0.3916015625,
				0.3798828125,
				0.3759765625,
				0.376953125,
				0.380859375,
				0.3876953125,
				0.3916015625,
				0.3955078125,
				0.4267578125,
				0.44921875,
				0.46484375,
				0.4775390625,
				0.482421875,
				0.48828125,
				0.4912109375,
				0.48828125,
				0.484375,
				0.466796875,
				0.4345703125,
				0.3876953125,
				0.3603515625,
				0.2998046875,
				0.2333984375,
				0.2001953125,
				0.1689453125,
				0
			]
		},
		{
			"type": "freedraw",
			"version": 222,
			"versionNonce": 549701681,
			"isDeleted": false,
			"id": "oYH44sJxeQyQ5H6aiWf0_",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2287.222222222211,
			"y": 2206.6111111111254,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 87.77777777777737,
			"height": 47.77777777777783,
			"seed": 1985709353,
			"groupIds": [],
			"strokeSharpness": "round",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.1111111111108585
				],
				[
					-1.1111111111113132,
					-2.2222222222221717
				],
				[
					-2.2222222222226264,
					-2.2222222222221717
				],
				[
					-3.333333333333485,
					-3.33333333333303
				],
				[
					-5.555555555555657,
					-3.33333333333303
				],
				[
					-6.66666666666697,
					-2.2222222222221717
				],
				[
					-8.888888888888687,
					-2.2222222222221717
				],
				[
					-8.888888888888687,
					-1.1111111111108585
				],
				[
					-10,
					0
				],
				[
					-11.111111111111313,
					1.1111111111113132
				],
				[
					-11.111111111111313,
					2.2222222222221717
				],
				[
					-11.111111111111313,
					3.333333333333485
				],
				[
					-11.111111111111313,
					5.555555555555657
				],
				[
					-10,
					7.777777777777828
				],
				[
					-8.888888888888687,
					8.888888888889142
				],
				[
					-7.777777777777828,
					11.111111111111313
				],
				[
					-6.66666666666697,
					13.333333333333485
				],
				[
					-4.444444444444343,
					15.555555555555657
				],
				[
					-3.333333333333485,
					18.88888888888914
				],
				[
					-2.2222222222226264,
					20
				],
				[
					-1.1111111111113132,
					22.22222222222217
				],
				[
					1.1111111111113132,
					25.555555555555657
				],
				[
					1.1111111111113132,
					26.66666666666697
				],
				[
					1.1111111111113132,
					28.88888888888914
				],
				[
					2.2222222222221717,
					31.111111111111313
				],
				[
					2.2222222222221717,
					33.333333333333485
				],
				[
					2.2222222222221717,
					34.4444444444448
				],
				[
					1.1111111111113132,
					35.55555555555566
				],
				[
					0,
					36.66666666666697
				],
				[
					-1.1111111111113132,
					36.66666666666697
				],
				[
					-2.2222222222226264,
					36.66666666666697
				],
				[
					-4.444444444444343,
					36.66666666666697
				],
				[
					-6.66666666666697,
					36.66666666666697
				],
				[
					-7.777777777777828,
					35.55555555555566
				],
				[
					-10,
					34.4444444444448
				],
				[
					-11.111111111111313,
					33.333333333333485
				],
				[
					-12.222222222222626,
					32.22222222222217
				],
				[
					-13.333333333333485,
					30
				],
				[
					-14.444444444444343,
					28.88888888888914
				],
				[
					-13.333333333333485,
					27.77777777777783
				],
				[
					-13.333333333333485,
					26.66666666666697
				],
				[
					-12.222222222222626,
					25.555555555555657
				],
				[
					-11.111111111111313,
					25.555555555555657
				],
				[
					-8.888888888888687,
					24.444444444444798
				],
				[
					-6.66666666666697,
					24.444444444444798
				],
				[
					-4.444444444444343,
					24.444444444444798
				],
				[
					-2.2222222222226264,
					24.444444444444798
				],
				[
					-1.1111111111113132,
					24.444444444444798
				],
				[
					1.1111111111113132,
					24.444444444444798
				],
				[
					2.2222222222221717,
					24.444444444444798
				],
				[
					5.555555555555657,
					24.444444444444798
				],
				[
					6.666666666666515,
					24.444444444444798
				],
				[
					8.888888888888687,
					23.333333333333485
				],
				[
					11.111111111111313,
					22.22222222222217
				],
				[
					12.222222222222172,
					22.22222222222217
				],
				[
					15.555555555555657,
					20
				],
				[
					16.666666666666515,
					18.88888888888914
				],
				[
					18.888888888888687,
					16.66666666666697
				],
				[
					18.888888888888687,
					15.555555555555657
				],
				[
					20,
					14.444444444444798
				],
				[
					21.111111111111313,
					12.222222222222172
				],
				[
					21.111111111111313,
					10
				],
				[
					20,
					8.888888888889142
				],
				[
					18.888888888888687,
					7.777777777777828
				],
				[
					17.777777777777374,
					6.66666666666697
				],
				[
					15.555555555555657,
					5.555555555555657
				],
				[
					14.444444444444343,
					5.555555555555657
				],
				[
					13.33333333333303,
					5.555555555555657
				],
				[
					11.111111111111313,
					6.66666666666697
				],
				[
					8.888888888888687,
					7.777777777777828
				],
				[
					7.777777777777374,
					10
				],
				[
					6.666666666666515,
					13.333333333333485
				],
				[
					6.666666666666515,
					14.444444444444798
				],
				[
					6.666666666666515,
					17.77777777777783
				],
				[
					6.666666666666515,
					22.22222222222217
				],
				[
					7.777777777777374,
					25.555555555555657
				],
				[
					7.777777777777374,
					27.77777777777783
				],
				[
					10,
					31.111111111111313
				],
				[
					12.222222222222172,
					34.4444444444448
				],
				[
					14.444444444444343,
					36.66666666666697
				],
				[
					15.555555555555657,
					36.66666666666697
				],
				[
					17.777777777777374,
					38.88888888888914
				],
				[
					21.111111111111313,
					38.88888888888914
				],
				[
					23.33333333333303,
					38.88888888888914
				],
				[
					24.444444444444343,
					37.77777777777783
				],
				[
					27.777777777777374,
					36.66666666666697
				],
				[
					30,
					34.4444444444448
				],
				[
					31.111111111111313,
					32.22222222222217
				],
				[
					33.33333333333303,
					30
				],
				[
					35.55555555555566,
					26.66666666666697
				],
				[
					37.777777777777374,
					23.333333333333485
				],
				[
					37.777777777777374,
					21.111111111111313
				],
				[
					38.88888888888869,
					18.88888888888914
				],
				[
					40,
					16.66666666666697
				],
				[
					40,
					14.444444444444798
				],
				[
					41.11111111111131,
					14.444444444444798
				],
				[
					41.11111111111131,
					15.555555555555657
				],
				[
					41.11111111111131,
					16.66666666666697
				],
				[
					41.11111111111131,
					17.77777777777783
				],
				[
					41.11111111111131,
					21.111111111111313
				],
				[
					40,
					24.444444444444798
				],
				[
					40,
					28.88888888888914
				],
				[
					40,
					31.111111111111313
				],
				[
					41.11111111111131,
					34.4444444444448
				],
				[
					41.11111111111131,
					37.77777777777783
				],
				[
					41.11111111111131,
					40
				],
				[
					42.22222222222217,
					42.22222222222217
				],
				[
					42.22222222222217,
					43.333333333333485
				],
				[
					43.33333333333303,
					44.4444444444448
				],
				[
					44.44444444444434,
					44.4444444444448
				],
				[
					45.55555555555566,
					42.22222222222217
				],
				[
					46.666666666666515,
					40
				],
				[
					47.777777777777374,
					36.66666666666697
				],
				[
					47.777777777777374,
					34.4444444444448
				],
				[
					48.88888888888869,
					30
				],
				[
					50,
					24.444444444444798
				],
				[
					52.22222222222217,
					20
				],
				[
					52.22222222222217,
					17.77777777777783
				],
				[
					54.44444444444434,
					13.333333333333485
				],
				[
					56.666666666666515,
					8.888888888889142
				],
				[
					56.666666666666515,
					7.777777777777828
				],
				[
					58.88888888888869,
					5.555555555555657
				],
				[
					60,
					4.444444444444798
				],
				[
					61.11111111111131,
					4.444444444444798
				],
				[
					62.22222222222217,
					4.444444444444798
				],
				[
					63.33333333333303,
					4.444444444444798
				],
				[
					64.44444444444434,
					5.555555555555657
				],
				[
					66.66666666666652,
					6.66666666666697
				],
				[
					67.77777777777737,
					6.66666666666697
				],
				[
					70,
					7.777777777777828
				],
				[
					71.11111111111131,
					7.777777777777828
				],
				[
					72.22222222222217,
					8.888888888889142
				],
				[
					73.33333333333303,
					8.888888888889142
				],
				[
					73.33333333333303,
					8.888888888889142
				]
			],
			"lastCommittedPoint": null,
			"simulatePressure": false,
			"pressures": [
				0.123046875,
				0.12890625,
				0.1396484375,
				0.158203125,
				0.171875,
				0.201171875,
				0.2216796875,
				0.2392578125,
				0.24609375,
				0.2607421875,
				0.27734375,
				0.2861328125,
				0.306640625,
				0.328125,
				0.349609375,
				0.3701171875,
				0.3818359375,
				0.4013671875,
				0.4228515625,
				0.4443359375,
				0.455078125,
				0.4755859375,
				0.4970703125,
				0.5078125,
				0.5283203125,
				0.546875,
				0.5595703125,
				0.568359375,
				0.5732421875,
				0.5751953125,
				0.5751953125,
				0.5712890625,
				0.560546875,
				0.5400390625,
				0.525390625,
				0.4833984375,
				0.45703125,
				0.3974609375,
				0.3359375,
				0.2822265625,
				0.2412109375,
				0.2265625,
				0.2099609375,
				0.205078125,
				0.20703125,
				0.220703125,
				0.2353515625,
				0.2548828125,
				0.265625,
				0.2880859375,
				0.30859375,
				0.3271484375,
				0.333984375,
				0.345703125,
				0.353515625,
				0.3564453125,
				0.3603515625,
				0.36328125,
				0.365234375,
				0.3662109375,
				0.3681640625,
				0.3759765625,
				0.38671875,
				0.392578125,
				0.4091796875,
				0.427734375,
				0.4462890625,
				0.4541015625,
				0.46875,
				0.4794921875,
				0.4892578125,
				0.5,
				0.5048828125,
				0.5068359375,
				0.5087890625,
				0.509765625,
				0.509765625,
				0.509765625,
				0.5087890625,
				0.5048828125,
				0.498046875,
				0.494140625,
				0.482421875,
				0.466796875,
				0.4482421875,
				0.4384765625,
				0.41796875,
				0.3935546875,
				0.3798828125,
				0.3564453125,
				0.337890625,
				0.32421875,
				0.3193359375,
				0.3154296875,
				0.31640625,
				0.31640625,
				0.3173828125,
				0.326171875,
				0.3408203125,
				0.3505859375,
				0.373046875,
				0.3994140625,
				0.423828125,
				0.43359375,
				0.4482421875,
				0.4560546875,
				0.458984375,
				0.462890625,
				0.4658203125,
				0.4716796875,
				0.4775390625,
				0.4814453125,
				0.48046875,
				0.4775390625,
				0.4775390625,
				0.478515625,
				0.4833984375,
				0.494140625,
				0.501953125,
				0.5224609375,
				0.5458984375,
				0.55859375,
				0.5830078125,
				0.6015625,
				0.6083984375,
				0.6201171875,
				0.625,
				0.6328125,
				0.6337890625,
				0.6328125,
				0.6171875,
				0.5927734375,
				0.5166015625,
				0.431640625,
				0
			]
		},
		{
			"type": "text",
			"version": 521,
			"versionNonce": 341888863,
			"isDeleted": false,
			"id": "TmnxPfWR",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1871.6666666666565,
			"y": 2446.5000000000064,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"width": 980,
			"height": 100,
			"seed": 405634793,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"boundElements": [],
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "needs critical section around messages so probably need a wait and signal around \nif it is in an interrupt context, should use spinlock and in this case a spinlock\nwould be alright at the very end since and cs will be from if(len + overall_size > max_size) ... to \noverall_size = overall_soize + len, ensureing that does not sleep ",
			"rawText": "needs critical section around messages so probably need a wait and signal around \nif it is in an interrupt context, should use spinlock and in this case a spinlock\nwould be alright at the very end since and cs will be from if(len + overall_size > max_size) ... to \noverall_size = overall_soize + len, ensureing that does not sleep ",
			"baseline": 93,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "needs critical section around messages so probably need a wait and signal around \nif it is in an interrupt context, should use spinlock and in this case a spinlock\nwould be alright at the very end since and cs will be from if(len + overall_size > max_size) ... to \noverall_size = overall_soize + len, ensureing that does not sleep "
		},
		{
			"id": "6vcVnMwrdE26L-oJbaNHO",
			"type": "image",
			"x": 2787.342574888459,
			"y": 126.31676047529834,
			"width": 1482.6363636363635,
			"height": 132.59349593495935,
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
			"seed": 2127980511,
			"version": 343,
			"versionNonce": 2052954641,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "ec67d7b13cc6af23210e3a9c766de7dbf2d66439",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "LguujT4B",
			"type": "text",
			"x": 2862.235432031316,
			"y": 309.7673992674006,
			"width": 1298,
			"height": 225,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 295564543,
			"version": 713,
			"versionNonce": 393055103,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"text": "- When handling interrupts/when an interrupt occurs\n- When (scheduler) preempts a process for another process\n- When a process needs to wait for an IO event or when a process terminates or when a process creates a child process\n\nThe current state of a process (CPU registers, PC, PID etc) are saved in the PCB and the next process's state is\nloaded into CPU from PCB. (aka a context state save is done on the current process and the next process's state is restored)\n\n\n",
			"rawText": "- When handling interrupts/when an interrupt occurs\n- When (scheduler) preempts a process for another process\n- When a process needs to wait for an IO event or when a process terminates or when a process creates a child process\n\nThe current state of a process (CPU registers, PC, PID etc) are saved in the PCB and the next process's state is\nloaded into CPU from PCB. (aka a context state save is done on the current process and the next process's state is restored)\n\n\n",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 218,
			"containerId": null,
			"originalText": "- When handling interrupts/when an interrupt occurs\n- When (scheduler) preempts a process for another process\n- When a process needs to wait for an IO event or when a process terminates or when a process creates a child process\n\nThe current state of a process (CPU registers, PC, PID etc) are saved in the PCB and the next process's state is\nloaded into CPU from PCB. (aka a context state save is done on the current process and the next process's state is restored)\n\n\n"
		},
		{
			"id": "i8GO-qCYekNFs1QhYZRiZ",
			"type": "image",
			"x": 2835.735432031316,
			"y": 494.2673992674006,
			"width": 1331.4615384615379,
			"height": 227.74999999999991,
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
			"seed": 344068319,
			"version": 183,
			"versionNonce": 144846833,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "18070d36c6d444b0609e45d0e535a26c7c99b715",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "IRNX_loySBTM-Q5vEnyaI",
			"type": "freedraw",
			"x": 2933.485432031316,
			"y": 793.7673992674006,
			"width": 28.75,
			"height": 53.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 924687409,
			"version": 140,
			"versionNonce": 1842201503,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					1.25,
					2.5
				],
				[
					1.25,
					5
				],
				[
					1.25,
					6.25
				],
				[
					1.25,
					10
				],
				[
					2.5,
					15
				],
				[
					2.5,
					17.5
				],
				[
					2.5,
					22.5
				],
				[
					2.5,
					28.75
				],
				[
					2.5,
					33.75
				],
				[
					2.5,
					36.25
				],
				[
					2.5,
					41.25
				],
				[
					2.5,
					43.75
				],
				[
					2.5,
					47.5
				],
				[
					2.5,
					48.75
				],
				[
					2.5,
					50
				],
				[
					2.5,
					48.75
				],
				[
					2.5,
					47.5
				],
				[
					2.5,
					45
				],
				[
					1.25,
					41.25
				],
				[
					1.25,
					38.75
				],
				[
					1.25,
					35
				],
				[
					1.25,
					28.75
				],
				[
					1.25,
					26.25
				],
				[
					2.5,
					21.25
				],
				[
					3.75,
					16.25
				],
				[
					5,
					11.25
				],
				[
					6.25,
					8.75
				],
				[
					7.5,
					5
				],
				[
					10,
					2.5
				],
				[
					11.25,
					0
				],
				[
					12.5,
					-1.25
				],
				[
					15,
					-2.5
				],
				[
					17.5,
					-3.75
				],
				[
					20,
					-3.75
				],
				[
					21.25,
					-3.75
				],
				[
					23.75,
					-2.5
				],
				[
					25,
					-1.25
				],
				[
					26.25,
					0
				],
				[
					27.5,
					1.25
				],
				[
					28.75,
					3.75
				],
				[
					28.75,
					7.5
				],
				[
					28.75,
					8.75
				],
				[
					28.75,
					11.25
				],
				[
					27.5,
					15
				],
				[
					26.25,
					17.5
				],
				[
					26.25,
					18.75
				],
				[
					23.75,
					22.5
				],
				[
					22.5,
					23.75
				],
				[
					20,
					26.25
				],
				[
					17.5,
					28.75
				],
				[
					15,
					30
				],
				[
					12.5,
					30
				],
				[
					11.25,
					31.25
				],
				[
					8.75,
					32.5
				],
				[
					7.5,
					32.5
				],
				[
					6.25,
					31.25
				],
				[
					5,
					31.25
				],
				[
					3.75,
					31.25
				],
				[
					3.75,
					31.25
				]
			],
			"pressures": [
				0.0576171875,
				0.1484375,
				0.19921875,
				0.2333984375,
				0.248046875,
				0.275390625,
				0.30078125,
				0.3125,
				0.3330078125,
				0.3525390625,
				0.37109375,
				0.3798828125,
				0.3955078125,
				0.4091796875,
				0.4208984375,
				0.4306640625,
				0.4365234375,
				0.447265625,
				0.4501953125,
				0.451171875,
				0.451171875,
				0.451171875,
				0.4501953125,
				0.4482421875,
				0.447265625,
				0.4482421875,
				0.44921875,
				0.4501953125,
				0.4501953125,
				0.4521484375,
				0.453125,
				0.451171875,
				0.4501953125,
				0.44921875,
				0.44921875,
				0.455078125,
				0.458984375,
				0.47265625,
				0.490234375,
				0.5,
				0.521484375,
				0.54296875,
				0.5634765625,
				0.572265625,
				0.5908203125,
				0.60546875,
				0.619140625,
				0.625,
				0.634765625,
				0.6396484375,
				0.646484375,
				0.65234375,
				0.65625,
				0.6572265625,
				0.65625,
				0.6396484375,
				0.626953125,
				0.6103515625,
				0.5498046875,
				0.50390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3.75,
				31.25
			]
		},
		{
			"id": "gdf8qKhq0R-7Uhr6vTs6T",
			"type": "freedraw",
			"x": 2967.235432031316,
			"y": 827.5173992674006,
			"width": 133.75,
			"height": 36.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1434913361,
			"version": 295,
			"versionNonce": 1905854929,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					0
				],
				[
					1.25,
					1.25
				],
				[
					1.25,
					2.5
				],
				[
					1.25,
					3.75
				],
				[
					1.25,
					5
				],
				[
					1.25,
					7.5
				],
				[
					1.25,
					10
				],
				[
					1.25,
					13.75
				],
				[
					1.25,
					15
				],
				[
					1.25,
					16.25
				],
				[
					1.25,
					18.75
				],
				[
					1.25,
					20
				],
				[
					1.25,
					18.75
				],
				[
					1.25,
					17.5
				],
				[
					1.25,
					16.25
				],
				[
					1.25,
					13.75
				],
				[
					2.5,
					10
				],
				[
					2.5,
					8.75
				],
				[
					3.75,
					5
				],
				[
					5,
					2.5
				],
				[
					6.25,
					0
				],
				[
					7.5,
					-3.75
				],
				[
					8.75,
					-6.25
				],
				[
					10,
					-6.25
				],
				[
					11.25,
					-7.5
				],
				[
					12.5,
					-8.75
				],
				[
					13.75,
					-8.75
				],
				[
					15,
					-8.75
				],
				[
					16.25,
					-8.75
				],
				[
					17.5,
					-7.5
				],
				[
					18.75,
					-6.25
				],
				[
					18.75,
					-5
				],
				[
					20,
					-3.75
				],
				[
					20,
					-1.25
				],
				[
					20,
					0
				],
				[
					20,
					3.75
				],
				[
					20,
					5
				],
				[
					20,
					8.75
				],
				[
					20,
					12.5
				],
				[
					20,
					15
				],
				[
					20,
					17.5
				],
				[
					20,
					20
				],
				[
					21.25,
					21.25
				],
				[
					22.5,
					22.5
				],
				[
					22.5,
					23.75
				],
				[
					23.75,
					23.75
				],
				[
					25,
					23.75
				],
				[
					26.25,
					23.75
				],
				[
					27.5,
					22.5
				],
				[
					28.75,
					21.25
				],
				[
					28.75,
					20
				],
				[
					30,
					17.5
				],
				[
					30,
					16.25
				],
				[
					30,
					13.75
				],
				[
					30,
					11.25
				],
				[
					30,
					8.75
				],
				[
					28.75,
					7.5
				],
				[
					28.75,
					5
				],
				[
					27.5,
					5
				],
				[
					27.5,
					2.5
				],
				[
					26.25,
					1.25
				],
				[
					26.25,
					0
				],
				[
					26.25,
					-1.25
				],
				[
					27.5,
					0
				],
				[
					30,
					0
				],
				[
					31.25,
					0
				],
				[
					32.5,
					0
				],
				[
					33.75,
					1.25
				],
				[
					35,
					1.25
				],
				[
					37.5,
					1.25
				],
				[
					38.75,
					1.25
				],
				[
					40,
					1.25
				],
				[
					41.25,
					1.25
				],
				[
					40,
					1.25
				],
				[
					40,
					2.5
				],
				[
					38.75,
					3.75
				],
				[
					38.75,
					5
				],
				[
					37.5,
					6.25
				],
				[
					37.5,
					7.5
				],
				[
					37.5,
					10
				],
				[
					37.5,
					11.25
				],
				[
					37.5,
					12.5
				],
				[
					37.5,
					15
				],
				[
					38.75,
					16.25
				],
				[
					38.75,
					17.5
				],
				[
					40,
					18.75
				],
				[
					42.5,
					20
				],
				[
					45,
					20
				],
				[
					47.5,
					20
				],
				[
					50,
					20
				],
				[
					51.25,
					18.75
				],
				[
					53.75,
					17.5
				],
				[
					56.25,
					16.25
				],
				[
					58.75,
					13.75
				],
				[
					60,
					12.5
				],
				[
					61.25,
					10
				],
				[
					63.75,
					7.5
				],
				[
					65,
					3.75
				],
				[
					65,
					2.5
				],
				[
					65,
					1.25
				],
				[
					66.25,
					0
				],
				[
					65,
					-1.25
				],
				[
					65,
					-2.5
				],
				[
					65,
					-3.75
				],
				[
					63.75,
					-3.75
				],
				[
					62.5,
					-2.5
				],
				[
					61.25,
					-1.25
				],
				[
					60,
					1.25
				],
				[
					58.75,
					2.5
				],
				[
					58.75,
					5
				],
				[
					58.75,
					7.5
				],
				[
					58.75,
					11.25
				],
				[
					58.75,
					12.5
				],
				[
					58.75,
					15
				],
				[
					60,
					17.5
				],
				[
					61.25,
					18.75
				],
				[
					62.5,
					20
				],
				[
					65,
					21.25
				],
				[
					67.5,
					22.5
				],
				[
					70,
					22.5
				],
				[
					71.25,
					22.5
				],
				[
					73.75,
					22.5
				],
				[
					77.5,
					21.25
				],
				[
					78.75,
					20
				],
				[
					81.25,
					18.75
				],
				[
					83.75,
					16.25
				],
				[
					86.25,
					13.75
				],
				[
					87.5,
					11.25
				],
				[
					90,
					8.75
				],
				[
					91.25,
					5
				],
				[
					92.5,
					2.5
				],
				[
					93.75,
					1.25
				],
				[
					93.75,
					-1.25
				],
				[
					95,
					-3.75
				],
				[
					95,
					-6.25
				],
				[
					95,
					-8.75
				],
				[
					93.75,
					-8.75
				],
				[
					93.75,
					-10
				],
				[
					92.5,
					-10
				],
				[
					91.25,
					-10
				],
				[
					91.25,
					-8.75
				],
				[
					90,
					-8.75
				],
				[
					90,
					-7.5
				],
				[
					90,
					-6.25
				],
				[
					91.25,
					-3.75
				],
				[
					92.5,
					0
				],
				[
					93.75,
					2.5
				],
				[
					96.25,
					5
				],
				[
					97.5,
					7.5
				],
				[
					98.75,
					8.75
				],
				[
					100,
					11.25
				],
				[
					101.25,
					13.75
				],
				[
					101.25,
					15
				],
				[
					102.5,
					17.5
				],
				[
					102.5,
					18.75
				],
				[
					101.25,
					21.25
				],
				[
					100,
					22.5
				],
				[
					98.75,
					23.75
				],
				[
					96.25,
					23.75
				],
				[
					95,
					23.75
				],
				[
					92.5,
					23.75
				],
				[
					90,
					23.75
				],
				[
					87.5,
					22.5
				],
				[
					86.25,
					21.25
				],
				[
					85,
					18.75
				],
				[
					86.25,
					16.25
				],
				[
					87.5,
					15
				],
				[
					90,
					12.5
				],
				[
					93.75,
					10
				],
				[
					96.25,
					8.75
				],
				[
					100,
					5
				],
				[
					105,
					2.5
				],
				[
					110,
					0
				],
				[
					111.25,
					-1.25
				],
				[
					115,
					-3.75
				],
				[
					118.75,
					-5
				],
				[
					121.25,
					-7.5
				],
				[
					122.5,
					-7.5
				],
				[
					125,
					-8.75
				],
				[
					125,
					-7.5
				],
				[
					123.75,
					-7.5
				],
				[
					123.75,
					-6.25
				],
				[
					121.25,
					-5
				],
				[
					120,
					-3.75
				],
				[
					117.5,
					-1.25
				],
				[
					117.5,
					0
				],
				[
					116.25,
					1.25
				],
				[
					115,
					2.5
				],
				[
					115,
					3.75
				],
				[
					115,
					5
				],
				[
					116.25,
					6.25
				],
				[
					117.5,
					8.75
				],
				[
					118.75,
					8.75
				],
				[
					121.25,
					10
				],
				[
					123.75,
					11.25
				],
				[
					126.25,
					13.75
				],
				[
					127.5,
					13.75
				],
				[
					130,
					15
				],
				[
					131.25,
					16.25
				],
				[
					132.5,
					18.75
				],
				[
					133.75,
					18.75
				],
				[
					133.75,
					20
				],
				[
					133.75,
					21.25
				],
				[
					133.75,
					22.5
				],
				[
					132.5,
					23.75
				],
				[
					131.25,
					25
				],
				[
					128.75,
					25
				],
				[
					128.75,
					26.25
				],
				[
					125,
					26.25
				],
				[
					122.5,
					26.25
				],
				[
					120,
					26.25
				],
				[
					118.75,
					26.25
				],
				[
					115,
					25
				],
				[
					113.75,
					23.75
				],
				[
					113.75,
					23.75
				]
			],
			"pressures": [
				0.140625,
				0.1787109375,
				0.1982421875,
				0.240234375,
				0.283203125,
				0.328125,
				0.369140625,
				0.4013671875,
				0.42578125,
				0.43359375,
				0.4453125,
				0.451171875,
				0.4580078125,
				0.46875,
				0.4658203125,
				0.4580078125,
				0.443359375,
				0.4248046875,
				0.4130859375,
				0.3916015625,
				0.3828125,
				0.3642578125,
				0.34375,
				0.328125,
				0.322265625,
				0.3173828125,
				0.3095703125,
				0.3046875,
				0.302734375,
				0.3017578125,
				0.3017578125,
				0.3056640625,
				0.306640625,
				0.3076171875,
				0.31640625,
				0.3212890625,
				0.33203125,
				0.337890625,
				0.34765625,
				0.35546875,
				0.3564453125,
				0.3564453125,
				0.3525390625,
				0.349609375,
				0.345703125,
				0.3466796875,
				0.349609375,
				0.3544921875,
				0.3603515625,
				0.369140625,
				0.380859375,
				0.392578125,
				0.4033203125,
				0.4091796875,
				0.4189453125,
				0.4248046875,
				0.421875,
				0.4130859375,
				0.390625,
				0.375,
				0.3330078125,
				0.2822265625,
				0.232421875,
				0.1552734375,
				0.1435546875,
				0.140625,
				0.1396484375,
				0.140625,
				0.140625,
				0.140625,
				0.1435546875,
				0.1552734375,
				0.173828125,
				0.23046875,
				0.3076171875,
				0.3291015625,
				0.35546875,
				0.3642578125,
				0.3759765625,
				0.3818359375,
				0.3984375,
				0.4033203125,
				0.4111328125,
				0.4150390625,
				0.4150390625,
				0.4140625,
				0.412109375,
				0.4140625,
				0.41796875,
				0.4208984375,
				0.4228515625,
				0.421875,
				0.4189453125,
				0.4140625,
				0.4033203125,
				0.3974609375,
				0.3818359375,
				0.3662109375,
				0.3505859375,
				0.345703125,
				0.341796875,
				0.341796875,
				0.33984375,
				0.33984375,
				0.3427734375,
				0.345703125,
				0.357421875,
				0.375,
				0.408203125,
				0.4189453125,
				0.435546875,
				0.4453125,
				0.4501953125,
				0.4521484375,
				0.4501953125,
				0.4482421875,
				0.447265625,
				0.4404296875,
				0.419921875,
				0.3876953125,
				0.34765625,
				0.3251953125,
				0.27734375,
				0.2314453125,
				0.2119140625,
				0.17578125,
				0.1513671875,
				0.1328125,
				0.1240234375,
				0.1123046875,
				0.1123046875,
				0.1201171875,
				0.1259765625,
				0.1435546875,
				0.1728515625,
				0.2060546875,
				0.2568359375,
				0.2744140625,
				0.30859375,
				0.32421875,
				0.3642578125,
				0.3935546875,
				0.3994140625,
				0.404296875,
				0.40625,
				0.40625,
				0.3994140625,
				0.3984375,
				0.4013671875,
				0.40625,
				0.41015625,
				0.423828125,
				0.443359375,
				0.453125,
				0.47265625,
				0.482421875,
				0.50390625,
				0.5146484375,
				0.515625,
				0.509765625,
				0.501953125,
				0.4755859375,
				0.4306640625,
				0.37109375,
				0.3046875,
				0.2021484375,
				0.146484375,
				0.1240234375,
				0.087890625,
				0.0625,
				0.0546875,
				0.0478515625,
				0.0537109375,
				0.0712890625,
				0.08203125,
				0.107421875,
				0.138671875,
				0.1728515625,
				0.1904296875,
				0.22265625,
				0.296875,
				0.3203125,
				0.3330078125,
				0.357421875,
				0.380859375,
				0.4033203125,
				0.4130859375,
				0.4287109375,
				0.4345703125,
				0.4423828125,
				0.4453125,
				0.4501953125,
				0.455078125,
				0.458984375,
				0.46875,
				0.4833984375,
				0.5029296875,
				0.5146484375,
				0.5400390625,
				0.5537109375,
				0.5908203125,
				0.6025390625,
				0.6123046875,
				0.62890625,
				0.640625,
				0.6494140625,
				0.6552734375,
				0.658203125,
				0.6591796875,
				0.658203125,
				0.6484375,
				0.623046875,
				0.6025390625,
				0.537109375,
				0.4931640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				113.75,
				23.75
			]
		},
		{
			"id": "-BpE6vG1R7WpAKPBHY1aQ",
			"type": "freedraw",
			"x": 3295.985432031316,
			"y": 796.2673992674006,
			"width": 11.25,
			"height": 47.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 547423423,
			"version": 97,
			"versionNonce": 1471281087,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					-1.25,
					3.75
				],
				[
					-1.25,
					6.25
				],
				[
					-2.5,
					10
				],
				[
					-2.5,
					15
				],
				[
					-3.75,
					17.5
				],
				[
					-5,
					23.75
				],
				[
					-7.5,
					30
				],
				[
					-8.75,
					36.25
				],
				[
					-8.75,
					37.5
				],
				[
					-10,
					42.5
				],
				[
					-11.25,
					45
				],
				[
					-11.25,
					47.5
				],
				[
					-10,
					47.5
				],
				[
					-10,
					46.25
				],
				[
					-10,
					46.25
				]
			],
			"pressures": [
				0.20703125,
				0.275390625,
				0.2998046875,
				0.345703125,
				0.3681640625,
				0.412109375,
				0.4453125,
				0.458984375,
				0.4765625,
				0.4853515625,
				0.478515625,
				0.4677734375,
				0.431640625,
				0.3798828125,
				0.3193359375,
				0.21875,
				0.185546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-10,
				46.25
			]
		},
		{
			"id": "tjuyR7LFWXN8-uW670D-h",
			"type": "freedraw",
			"x": 3300.985432031316,
			"y": 801.2673992674006,
			"width": 12.5,
			"height": 58.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 518851473,
			"version": 105,
			"versionNonce": 777627569,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					-2.5
				],
				[
					1.25,
					-3.75
				],
				[
					1.25,
					-5
				],
				[
					2.5,
					-7.5
				],
				[
					3.75,
					-8.75
				],
				[
					3.75,
					-11.25
				],
				[
					5,
					-12.5
				],
				[
					5,
					-13.75
				],
				[
					5,
					-12.5
				],
				[
					5,
					-11.25
				],
				[
					6.25,
					-8.75
				],
				[
					6.25,
					-5
				],
				[
					6.25,
					-3.75
				],
				[
					6.25,
					1.25
				],
				[
					7.5,
					7.5
				],
				[
					8.75,
					13.75
				],
				[
					8.75,
					16.25
				],
				[
					10,
					22.5
				],
				[
					10,
					28.75
				],
				[
					10,
					31.25
				],
				[
					11.25,
					36.25
				],
				[
					11.25,
					41.25
				],
				[
					12.5,
					43.75
				],
				[
					12.5,
					45
				],
				[
					12.5,
					45
				]
			],
			"pressures": [
				0.0966796875,
				0.0888671875,
				0.091796875,
				0.1005859375,
				0.1171875,
				0.140625,
				0.162109375,
				0.1953125,
				0.228515625,
				0.2900390625,
				0.3173828125,
				0.33984375,
				0.3603515625,
				0.369140625,
				0.38671875,
				0.4033203125,
				0.4208984375,
				0.427734375,
				0.4375,
				0.4443359375,
				0.4443359375,
				0.43359375,
				0.4033203125,
				0.3544921875,
				0.322265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				12.5,
				45
			]
		},
		{
			"id": "a9OXglrQiKujeJsGNPsBh",
			"type": "freedraw",
			"x": 3294.735432031316,
			"y": 828.7673992674006,
			"width": 33.75,
			"height": 8.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1060242335,
			"version": 97,
			"versionNonce": 993699807,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					-2.5
				],
				[
					-2.5,
					-3.75
				],
				[
					-5,
					-5
				],
				[
					-6.25,
					-6.25
				],
				[
					-7.5,
					-7.5
				],
				[
					-8.75,
					-8.75
				],
				[
					-10,
					-8.75
				],
				[
					-8.75,
					-8.75
				],
				[
					-6.25,
					-8.75
				],
				[
					-3.75,
					-7.5
				],
				[
					0,
					-7.5
				],
				[
					2.5,
					-7.5
				],
				[
					7.5,
					-6.25
				],
				[
					13.75,
					-6.25
				],
				[
					21.25,
					-6.25
				],
				[
					23.75,
					-7.5
				],
				[
					23.75,
					-7.5
				]
			],
			"pressures": [
				0.1875,
				0.193359375,
				0.2099609375,
				0.23828125,
				0.27734375,
				0.294921875,
				0.3330078125,
				0.3876953125,
				0.40234375,
				0.453125,
				0.47265625,
				0.4833984375,
				0.486328125,
				0.486328125,
				0.4755859375,
				0.447265625,
				0.4208984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				23.75,
				-7.5
			]
		},
		{
			"id": "76Lp21X4VOsHXAR2ClA_p",
			"type": "freedraw",
			"x": 3504.735432031316,
			"y": 816.2673992674006,
			"width": 43.75,
			"height": 61.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1856628401,
			"version": 165,
			"versionNonce": 688621969,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					0
				],
				[
					2.5,
					0
				],
				[
					3.75,
					1.25
				],
				[
					5,
					2.5
				],
				[
					5,
					5
				],
				[
					6.25,
					7.5
				],
				[
					6.25,
					10
				],
				[
					7.5,
					15
				],
				[
					7.5,
					17.5
				],
				[
					7.5,
					21.25
				],
				[
					7.5,
					26.25
				],
				[
					7.5,
					27.5
				],
				[
					7.5,
					31.25
				],
				[
					7.5,
					35
				],
				[
					7.5,
					36.25
				],
				[
					7.5,
					37.5
				],
				[
					7.5,
					38.75
				],
				[
					6.25,
					38.75
				],
				[
					6.25,
					36.25
				],
				[
					6.25,
					33.75
				],
				[
					5,
					30
				],
				[
					5,
					28.75
				],
				[
					5,
					22.5
				],
				[
					5,
					17.5
				],
				[
					5,
					11.25
				],
				[
					5,
					7.5
				],
				[
					6.25,
					1.25
				],
				[
					7.5,
					-3.75
				],
				[
					10,
					-7.5
				],
				[
					10,
					-10
				],
				[
					12.5,
					-12.5
				],
				[
					15,
					-15
				],
				[
					16.25,
					-16.25
				],
				[
					18.75,
					-16.25
				],
				[
					21.25,
					-16.25
				],
				[
					22.5,
					-16.25
				],
				[
					25,
					-15
				],
				[
					27.5,
					-12.5
				],
				[
					28.75,
					-11.25
				],
				[
					30,
					-8.75
				],
				[
					31.25,
					-6.25
				],
				[
					32.5,
					-3.75
				],
				[
					32.5,
					-1.25
				],
				[
					32.5,
					1.25
				],
				[
					31.25,
					2.5
				],
				[
					30,
					6.25
				],
				[
					28.75,
					8.75
				],
				[
					26.25,
					11.25
				],
				[
					25,
					12.5
				],
				[
					23.75,
					13.75
				],
				[
					22.5,
					15
				],
				[
					21.25,
					15
				],
				[
					20,
					16.25
				],
				[
					20,
					17.5
				],
				[
					21.25,
					17.5
				],
				[
					22.5,
					18.75
				],
				[
					25,
					20
				],
				[
					27.5,
					21.25
				],
				[
					28.75,
					21.25
				],
				[
					31.25,
					23.75
				],
				[
					35,
					26.25
				],
				[
					37.5,
					27.5
				],
				[
					38.75,
					28.75
				],
				[
					41.25,
					31.25
				],
				[
					42.5,
					33.75
				],
				[
					42.5,
					35
				],
				[
					43.75,
					36.25
				],
				[
					43.75,
					38.75
				],
				[
					42.5,
					40
				],
				[
					42.5,
					41.25
				],
				[
					41.25,
					42.5
				],
				[
					38.75,
					42.5
				],
				[
					35,
					43.75
				],
				[
					32.5,
					43.75
				],
				[
					28.75,
					45
				],
				[
					23.75,
					45
				],
				[
					18.75,
					45
				],
				[
					16.25,
					45
				],
				[
					11.25,
					45
				],
				[
					8.75,
					43.75
				],
				[
					5,
					42.5
				],
				[
					2.5,
					41.25
				],
				[
					1.25,
					40
				],
				[
					0,
					38.75
				],
				[
					0,
					38.75
				]
			],
			"pressures": [
				0.15234375,
				0.15625,
				0.2177734375,
				0.3193359375,
				0.3984375,
				0.447265625,
				0.4697265625,
				0.5048828125,
				0.53125,
				0.5419921875,
				0.55859375,
				0.5673828125,
				0.5693359375,
				0.5732421875,
				0.576171875,
				0.5771484375,
				0.578125,
				0.578125,
				0.5751953125,
				0.5703125,
				0.5615234375,
				0.55078125,
				0.5458984375,
				0.53515625,
				0.5224609375,
				0.5087890625,
				0.5029296875,
				0.4912109375,
				0.4833984375,
				0.4794921875,
				0.4775390625,
				0.4765625,
				0.4765625,
				0.4765625,
				0.4775390625,
				0.4814453125,
				0.4853515625,
				0.49609375,
				0.509765625,
				0.5166015625,
				0.53125,
				0.5458984375,
				0.5556640625,
				0.560546875,
				0.5693359375,
				0.57421875,
				0.5830078125,
				0.58984375,
				0.595703125,
				0.5986328125,
				0.6025390625,
				0.603515625,
				0.60546875,
				0.6083984375,
				0.6064453125,
				0.6044921875,
				0.6025390625,
				0.6015625,
				0.6015625,
				0.6015625,
				0.6015625,
				0.6015625,
				0.603515625,
				0.607421875,
				0.6171875,
				0.6328125,
				0.642578125,
				0.6533203125,
				0.6865234375,
				0.7060546875,
				0.71484375,
				0.728515625,
				0.740234375,
				0.748046875,
				0.7509765625,
				0.755859375,
				0.7578125,
				0.759765625,
				0.7587890625,
				0.75,
				0.7392578125,
				0.6982421875,
				0.62109375,
				0.568359375,
				0.505859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				38.75
			]
		},
		{
			"id": "TYtDduG4gYOgZzSrInyvm",
			"type": "freedraw",
			"x": 3793.485432031316,
			"y": 783.7673992674006,
			"width": 46.25,
			"height": 60,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 309419153,
			"version": 109,
			"versionNonce": 1719161855,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					-1.25,
					-2.5
				],
				[
					-2.5,
					-2.5
				],
				[
					-5,
					-2.5
				],
				[
					-6.25,
					-2.5
				],
				[
					-10,
					-1.25
				],
				[
					-13.75,
					0
				],
				[
					-18.75,
					2.5
				],
				[
					-21.25,
					3.75
				],
				[
					-26.25,
					7.5
				],
				[
					-30,
					12.5
				],
				[
					-32.5,
					13.75
				],
				[
					-37.5,
					20
				],
				[
					-40,
					26.25
				],
				[
					-43.75,
					31.25
				],
				[
					-43.75,
					35
				],
				[
					-45,
					40
				],
				[
					-45,
					42.5
				],
				[
					-45,
					47.5
				],
				[
					-41.25,
					51.25
				],
				[
					-37.5,
					55
				],
				[
					-35,
					55
				],
				[
					-30,
					57.5
				],
				[
					-23.75,
					57.5
				],
				[
					-16.25,
					57.5
				],
				[
					-13.75,
					56.25
				],
				[
					-6.25,
					55
				],
				[
					-1.25,
					52.5
				],
				[
					1.25,
					51.25
				],
				[
					1.25,
					51.25
				]
			],
			"pressures": [
				0.205078125,
				0.2080078125,
				0.3056640625,
				0.3515625,
				0.4306640625,
				0.45703125,
				0.505859375,
				0.55078125,
				0.5888671875,
				0.603515625,
				0.6259765625,
				0.642578125,
				0.6494140625,
				0.662109375,
				0.671875,
				0.6796875,
				0.6826171875,
				0.6875,
				0.6884765625,
				0.6904296875,
				0.69140625,
				0.69140625,
				0.69140625,
				0.6884765625,
				0.6806640625,
				0.6640625,
				0.650390625,
				0.607421875,
				0.533203125,
				0.4833984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1.25,
				51.25
			]
		},
		{
			"id": "tCkI3VYDX8hTOu6pEErI_",
			"type": "freedraw",
			"x": 2967.235432031316,
			"y": 900.0173992674006,
			"width": 40,
			"height": 67.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1247648401,
			"version": 170,
			"versionNonce": 451293041,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					0,
					3.75
				],
				[
					0,
					5
				],
				[
					0,
					8.75
				],
				[
					0,
					12.5
				],
				[
					0,
					16.25
				],
				[
					0,
					18.75
				],
				[
					0,
					22.5
				],
				[
					0,
					27.5
				],
				[
					0,
					31.25
				],
				[
					0,
					32.5
				],
				[
					0,
					35
				],
				[
					0,
					37.5
				],
				[
					0,
					38.75
				],
				[
					0,
					40
				],
				[
					0,
					38.75
				],
				[
					0,
					36.25
				],
				[
					-1.25,
					33.75
				],
				[
					-1.25,
					32.5
				],
				[
					-1.25,
					28.75
				],
				[
					-2.5,
					25
				],
				[
					-2.5,
					20
				],
				[
					-2.5,
					17.5
				],
				[
					-2.5,
					13.75
				],
				[
					-2.5,
					8.75
				],
				[
					-1.25,
					3.75
				],
				[
					0,
					2.5
				],
				[
					1.25,
					-1.25
				],
				[
					3.75,
					-5
				],
				[
					3.75,
					-6.25
				],
				[
					6.25,
					-10
				],
				[
					8.75,
					-11.25
				],
				[
					10,
					-12.5
				],
				[
					11.25,
					-13.75
				],
				[
					13.75,
					-13.75
				],
				[
					15,
					-13.75
				],
				[
					16.25,
					-12.5
				],
				[
					17.5,
					-11.25
				],
				[
					18.75,
					-8.75
				],
				[
					18.75,
					-7.5
				],
				[
					20,
					-3.75
				],
				[
					21.25,
					0
				],
				[
					21.25,
					3.75
				],
				[
					21.25,
					5
				],
				[
					20,
					8.75
				],
				[
					18.75,
					11.25
				],
				[
					18.75,
					13.75
				],
				[
					16.25,
					16.25
				],
				[
					16.25,
					17.5
				],
				[
					13.75,
					18.75
				],
				[
					11.25,
					21.25
				],
				[
					10,
					21.25
				],
				[
					7.5,
					22.5
				],
				[
					5,
					22.5
				],
				[
					3.75,
					22.5
				],
				[
					2.5,
					22.5
				],
				[
					1.25,
					22.5
				],
				[
					1.25,
					21.25
				],
				[
					2.5,
					21.25
				],
				[
					3.75,
					20
				],
				[
					5,
					20
				],
				[
					7.5,
					20
				],
				[
					10,
					21.25
				],
				[
					11.25,
					21.25
				],
				[
					15,
					22.5
				],
				[
					17.5,
					23.75
				],
				[
					20,
					25
				],
				[
					21.25,
					26.25
				],
				[
					23.75,
					28.75
				],
				[
					26.25,
					31.25
				],
				[
					26.25,
					35
				],
				[
					26.25,
					36.25
				],
				[
					26.25,
					38.75
				],
				[
					26.25,
					42.5
				],
				[
					23.75,
					45
				],
				[
					22.5,
					46.25
				],
				[
					20,
					50
				],
				[
					17.5,
					51.25
				],
				[
					15,
					52.5
				],
				[
					12.5,
					53.75
				],
				[
					10,
					53.75
				],
				[
					6.25,
					53.75
				],
				[
					5,
					53.75
				],
				[
					1.25,
					52.5
				],
				[
					-2.5,
					51.25
				],
				[
					-6.25,
					48.75
				],
				[
					-7.5,
					47.5
				],
				[
					-11.25,
					45
				],
				[
					-13.75,
					42.5
				],
				[
					-13.75,
					42.5
				]
			],
			"pressures": [
				0.123046875,
				0.2607421875,
				0.2822265625,
				0.32421875,
				0.3447265625,
				0.3837890625,
				0.4140625,
				0.4365234375,
				0.447265625,
				0.462890625,
				0.4736328125,
				0.48046875,
				0.482421875,
				0.484375,
				0.4873046875,
				0.4892578125,
				0.4931640625,
				0.5029296875,
				0.5029296875,
				0.501953125,
				0.5009765625,
				0.4990234375,
				0.4970703125,
				0.494140625,
				0.4912109375,
				0.4873046875,
				0.482421875,
				0.4794921875,
				0.4775390625,
				0.4755859375,
				0.4755859375,
				0.4755859375,
				0.474609375,
				0.47265625,
				0.4716796875,
				0.4716796875,
				0.470703125,
				0.4716796875,
				0.47265625,
				0.4775390625,
				0.4833984375,
				0.486328125,
				0.494140625,
				0.501953125,
				0.5078125,
				0.509765625,
				0.513671875,
				0.517578125,
				0.5185546875,
				0.521484375,
				0.5234375,
				0.52734375,
				0.5322265625,
				0.53515625,
				0.5400390625,
				0.5439453125,
				0.544921875,
				0.5439453125,
				0.5439453125,
				0.5361328125,
				0.5341796875,
				0.5341796875,
				0.5341796875,
				0.5341796875,
				0.533203125,
				0.533203125,
				0.5322265625,
				0.5322265625,
				0.5341796875,
				0.5361328125,
				0.5439453125,
				0.5556640625,
				0.568359375,
				0.576171875,
				0.58984375,
				0.603515625,
				0.615234375,
				0.6220703125,
				0.6328125,
				0.642578125,
				0.6513671875,
				0.654296875,
				0.6591796875,
				0.6611328125,
				0.6611328125,
				0.654296875,
				0.634765625,
				0.599609375,
				0.57421875,
				0.5048828125,
				0.412109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-13.75,
				42.5
			]
		},
		{
			"id": "Bz5DBMupSGm4_-Zi6DHZ0",
			"type": "freedraw",
			"x": 3013.485432031316,
			"y": 920.0173992674006,
			"width": 28.75,
			"height": 30,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1720622271,
			"version": 130,
			"versionNonce": 292256799,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					0,
					-1.25
				],
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					0,
					3.75
				],
				[
					0,
					6.25
				],
				[
					-1.25,
					10
				],
				[
					-1.25,
					11.25
				],
				[
					-1.25,
					15
				],
				[
					0,
					18.75
				],
				[
					0,
					21.25
				],
				[
					1.25,
					23.75
				],
				[
					1.25,
					25
				],
				[
					2.5,
					26.25
				],
				[
					2.5,
					27.5
				],
				[
					3.75,
					27.5
				],
				[
					5,
					28.75
				],
				[
					6.25,
					27.5
				],
				[
					7.5,
					26.25
				],
				[
					8.75,
					23.75
				],
				[
					10,
					21.25
				],
				[
					11.25,
					20
				],
				[
					12.5,
					17.5
				],
				[
					13.75,
					13.75
				],
				[
					13.75,
					11.25
				],
				[
					13.75,
					10
				],
				[
					15,
					7.5
				],
				[
					15,
					5
				],
				[
					15,
					2.5
				],
				[
					15,
					1.25
				],
				[
					15,
					0
				],
				[
					15,
					1.25
				],
				[
					15,
					2.5
				],
				[
					15,
					3.75
				],
				[
					15,
					6.25
				],
				[
					15,
					7.5
				],
				[
					15,
					10
				],
				[
					16.25,
					13.75
				],
				[
					16.25,
					15
				],
				[
					17.5,
					17.5
				],
				[
					18.75,
					20
				],
				[
					20,
					21.25
				],
				[
					20,
					22.5
				],
				[
					21.25,
					23.75
				],
				[
					23.75,
					23.75
				],
				[
					25,
					22.5
				],
				[
					26.25,
					22.5
				],
				[
					27.5,
					21.25
				],
				[
					27.5,
					21.25
				]
			],
			"pressures": [
				0.1943359375,
				0.2080078125,
				0.236328125,
				0.279296875,
				0.287109375,
				0.3046875,
				0.3251953125,
				0.3369140625,
				0.3623046875,
				0.3828125,
				0.3916015625,
				0.4033203125,
				0.408203125,
				0.4111328125,
				0.4130859375,
				0.412109375,
				0.4052734375,
				0.3994140625,
				0.3828125,
				0.35546875,
				0.318359375,
				0.279296875,
				0.228515625,
				0.2001953125,
				0.1884765625,
				0.1689453125,
				0.15625,
				0.1474609375,
				0.1435546875,
				0.1396484375,
				0.13671875,
				0.1357421875,
				0.1376953125,
				0.1416015625,
				0.1474609375,
				0.1611328125,
				0.169921875,
				0.177734375,
				0.1826171875,
				0.1884765625,
				0.1923828125,
				0.193359375,
				0.193359375,
				0.19140625,
				0.189453125,
				0.1865234375,
				0.17578125,
				0.16015625,
				0.138671875,
				0.125,
				0.09375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				27.5,
				21.25
			]
		},
		{
			"id": "vXU8jvOLP3NaE6b7fYvTz",
			"type": "freedraw",
			"x": 3048.485432031316,
			"y": 930.0173992674006,
			"width": 31.25,
			"height": 28.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1497618289,
			"version": 146,
			"versionNonce": 707860817,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					0,
					3.75
				],
				[
					0,
					5
				],
				[
					0,
					8.75
				],
				[
					1.25,
					10
				],
				[
					1.25,
					12.5
				],
				[
					1.25,
					13.75
				],
				[
					1.25,
					16.25
				],
				[
					1.25,
					17.5
				],
				[
					2.5,
					18.75
				],
				[
					2.5,
					20
				],
				[
					2.5,
					18.75
				],
				[
					2.5,
					17.5
				],
				[
					3.75,
					15
				],
				[
					3.75,
					12.5
				],
				[
					5,
					8.75
				],
				[
					6.25,
					6.25
				],
				[
					6.25,
					5
				],
				[
					7.5,
					1.25
				],
				[
					7.5,
					-1.25
				],
				[
					8.75,
					-3.75
				],
				[
					10,
					-5
				],
				[
					10,
					-6.25
				],
				[
					11.25,
					-7.5
				],
				[
					12.5,
					-7.5
				],
				[
					13.75,
					-8.75
				],
				[
					15,
					-8.75
				],
				[
					16.25,
					-8.75
				],
				[
					16.25,
					-7.5
				],
				[
					18.75,
					-7.5
				],
				[
					20,
					-7.5
				],
				[
					22.5,
					-7.5
				],
				[
					22.5,
					-6.25
				],
				[
					25,
					-6.25
				],
				[
					26.25,
					-6.25
				],
				[
					27.5,
					-6.25
				],
				[
					28.75,
					-6.25
				],
				[
					28.75,
					-7.5
				],
				[
					27.5,
					-7.5
				],
				[
					26.25,
					-8.75
				],
				[
					26.25,
					-7.5
				],
				[
					25,
					-7.5
				],
				[
					23.75,
					-7.5
				],
				[
					23.75,
					-6.25
				],
				[
					23.75,
					-5
				],
				[
					25,
					-5
				],
				[
					25,
					-3.75
				],
				[
					26.25,
					-2.5
				],
				[
					27.5,
					-2.5
				],
				[
					28.75,
					-1.25
				],
				[
					30,
					0
				],
				[
					30,
					1.25
				],
				[
					31.25,
					2.5
				],
				[
					31.25,
					3.75
				],
				[
					31.25,
					5
				],
				[
					31.25,
					7.5
				],
				[
					30,
					7.5
				],
				[
					28.75,
					8.75
				],
				[
					27.5,
					10
				],
				[
					26.25,
					10
				],
				[
					25,
					11.25
				],
				[
					22.5,
					11.25
				],
				[
					21.25,
					11.25
				],
				[
					20,
					10
				],
				[
					18.75,
					10
				],
				[
					18.75,
					10
				]
			],
			"pressures": [
				0.1025390625,
				0.107421875,
				0.1181640625,
				0.1318359375,
				0.1455078125,
				0.171875,
				0.18359375,
				0.2021484375,
				0.208984375,
				0.2216796875,
				0.232421875,
				0.2412109375,
				0.25390625,
				0.265625,
				0.28515625,
				0.2958984375,
				0.2998046875,
				0.30078125,
				0.3017578125,
				0.30078125,
				0.2998046875,
				0.2978515625,
				0.2890625,
				0.283203125,
				0.2646484375,
				0.2392578125,
				0.2236328125,
				0.1845703125,
				0.14453125,
				0.107421875,
				0.0908203125,
				0.0634765625,
				0.044921875,
				0.0361328125,
				0.033203125,
				0.0302734375,
				0.0302734375,
				0.03515625,
				0.056640625,
				0.068359375,
				0.1474609375,
				0.216796875,
				0.25390625,
				0.2646484375,
				0.2822265625,
				0.283203125,
				0.2841796875,
				0.2822265625,
				0.27734375,
				0.275390625,
				0.2822265625,
				0.2890625,
				0.310546875,
				0.33984375,
				0.3759765625,
				0.4111328125,
				0.4423828125,
				0.4716796875,
				0.4775390625,
				0.4833984375,
				0.482421875,
				0.4775390625,
				0.458984375,
				0.4228515625,
				0.369140625,
				0.3369140625,
				0.30078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				18.75,
				10
			]
		},
		{
			"id": "Jh6Z5ycd643-AOJ0xiLq7",
			"type": "freedraw",
			"x": 3087.235432031316,
			"y": 907.5173992674006,
			"width": 10,
			"height": 36.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 346217567,
			"version": 96,
			"versionNonce": 537174079,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-1.25
				],
				[
					3.75,
					-1.25
				],
				[
					5,
					-1.25
				],
				[
					5,
					0
				],
				[
					6.25,
					0
				],
				[
					7.5,
					2.5
				],
				[
					8.75,
					3.75
				],
				[
					8.75,
					6.25
				],
				[
					10,
					11.25
				],
				[
					10,
					15
				],
				[
					10,
					17.5
				],
				[
					8.75,
					23.75
				],
				[
					8.75,
					28.75
				],
				[
					7.5,
					32.5
				],
				[
					7.5,
					35
				],
				[
					7.5,
					35
				]
			],
			"pressures": [
				0.1318359375,
				0.1337890625,
				0.138671875,
				0.146484375,
				0.158203125,
				0.171875,
				0.1806640625,
				0.21875,
				0.236328125,
				0.2734375,
				0.3115234375,
				0.345703125,
				0.3603515625,
				0.380859375,
				0.384765625,
				0.3642578125,
				0.34375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7.5,
				35
			]
		},
		{
			"id": "U1yk6uM5JVhY49GxiR4mb",
			"type": "freedraw",
			"x": 3084.735432031316,
			"y": 917.5173992674006,
			"width": 27.5,
			"height": 7.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 359420401,
			"version": 93,
			"versionNonce": 1212401457,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					0,
					1.25
				],
				[
					1.25,
					2.5
				],
				[
					2.5,
					2.5
				],
				[
					3.75,
					3.75
				],
				[
					7.5,
					5
				],
				[
					8.75,
					6.25
				],
				[
					11.25,
					6.25
				],
				[
					15,
					7.5
				],
				[
					18.75,
					7.5
				],
				[
					20,
					7.5
				],
				[
					23.75,
					7.5
				],
				[
					26.25,
					7.5
				],
				[
					26.25,
					7.5
				]
			],
			"pressures": [
				0.283203125,
				0.29296875,
				0.380859375,
				0.451171875,
				0.4775390625,
				0.501953125,
				0.5556640625,
				0.568359375,
				0.5869140625,
				0.595703125,
				0.5908203125,
				0.5810546875,
				0.5361328125,
				0.5,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				26.25,
				7.5
			]
		},
		{
			"id": "wpm6L-L-9--d4Dq3aDjqD",
			"type": "freedraw",
			"x": 3300.985432031316,
			"y": 897.5173992674006,
			"width": 45,
			"height": 55,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1215729905,
			"version": 145,
			"versionNonce": 606355551,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-2.5
				],
				[
					1.25,
					-3.75
				],
				[
					2.5,
					-3.75
				],
				[
					2.5,
					-5
				],
				[
					3.75,
					-6.25
				],
				[
					3.75,
					-5
				],
				[
					3.75,
					-3.75
				],
				[
					3.75,
					0
				],
				[
					3.75,
					5
				],
				[
					3.75,
					7.5
				],
				[
					3.75,
					13.75
				],
				[
					3.75,
					21.25
				],
				[
					3.75,
					27.5
				],
				[
					2.5,
					31.25
				],
				[
					2.5,
					37.5
				],
				[
					3.75,
					42.5
				],
				[
					3.75,
					45
				],
				[
					5,
					47.5
				],
				[
					6.25,
					48.75
				],
				[
					8.75,
					48.75
				],
				[
					10,
					48.75
				],
				[
					12.5,
					46.25
				],
				[
					16.25,
					42.5
				],
				[
					18.75,
					38.75
				],
				[
					20,
					36.25
				],
				[
					23.75,
					31.25
				],
				[
					25,
					27.5
				],
				[
					27.5,
					22.5
				],
				[
					27.5,
					21.25
				],
				[
					28.75,
					17.5
				],
				[
					30,
					15
				],
				[
					30,
					13.75
				],
				[
					30,
					12.5
				],
				[
					28.75,
					12.5
				],
				[
					28.75,
					13.75
				],
				[
					28.75,
					15
				],
				[
					27.5,
					17.5
				],
				[
					27.5,
					18.75
				],
				[
					26.25,
					22.5
				],
				[
					26.25,
					26.25
				],
				[
					27.5,
					31.25
				],
				[
					27.5,
					33.75
				],
				[
					28.75,
					37.5
				],
				[
					30,
					41.25
				],
				[
					32.5,
					43.75
				],
				[
					32.5,
					45
				],
				[
					35,
					46.25
				],
				[
					37.5,
					45
				],
				[
					38.75,
					45
				],
				[
					41.25,
					43.75
				],
				[
					42.5,
					42.5
				],
				[
					43.75,
					40
				],
				[
					45,
					36.25
				],
				[
					45,
					33.75
				],
				[
					45,
					31.25
				],
				[
					45,
					28.75
				],
				[
					42.5,
					26.25
				],
				[
					41.25,
					23.75
				],
				[
					40,
					22.5
				],
				[
					37.5,
					20
				],
				[
					35,
					18.75
				],
				[
					32.5,
					17.5
				],
				[
					32.5,
					16.25
				],
				[
					30,
					16.25
				],
				[
					30,
					16.25
				]
			],
			"pressures": [
				0.1826171875,
				0.1884765625,
				0.1962890625,
				0.2177734375,
				0.244140625,
				0.2578125,
				0.3310546875,
				0.4794921875,
				0.5302734375,
				0.5693359375,
				0.595703125,
				0.60546875,
				0.6162109375,
				0.62109375,
				0.619140625,
				0.61328125,
				0.5927734375,
				0.5576171875,
				0.53515625,
				0.478515625,
				0.4462890625,
				0.3466796875,
				0.3154296875,
				0.2607421875,
				0.21875,
				0.1875,
				0.1767578125,
				0.162109375,
				0.1572265625,
				0.16015625,
				0.1650390625,
				0.18359375,
				0.2099609375,
				0.224609375,
				0.255859375,
				0.291015625,
				0.3095703125,
				0.3486328125,
				0.3896484375,
				0.41015625,
				0.4521484375,
				0.48828125,
				0.515625,
				0.5244140625,
				0.5390625,
				0.548828125,
				0.5576171875,
				0.5625,
				0.5751953125,
				0.5888671875,
				0.595703125,
				0.6123046875,
				0.619140625,
				0.6328125,
				0.642578125,
				0.65234375,
				0.6552734375,
				0.66015625,
				0.662109375,
				0.6640625,
				0.6640625,
				0.65625,
				0.6337890625,
				0.5888671875,
				0.5537109375,
				0.4580078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				30,
				16.25
			]
		},
		{
			"id": "Ui5MvYrvLHP0xNLayMj6O",
			"type": "freedraw",
			"x": 3525.985432031316,
			"y": 902.5173992674006,
			"width": 20,
			"height": 50,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 596493489,
			"version": 113,
			"versionNonce": 1334163729,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					-1.25,
					-1.25
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-5,
					3.75
				],
				[
					-6.25,
					7.5
				],
				[
					-7.5,
					8.75
				],
				[
					-7.5,
					15
				],
				[
					-8.75,
					21.25
				],
				[
					-8.75,
					27.5
				],
				[
					-8.75,
					30
				],
				[
					-7.5,
					36.25
				],
				[
					-6.25,
					41.25
				],
				[
					-3.75,
					45
				],
				[
					-2.5,
					46.25
				],
				[
					0,
					47.5
				],
				[
					1.25,
					48.75
				],
				[
					3.75,
					48.75
				],
				[
					6.25,
					47.5
				],
				[
					7.5,
					45
				],
				[
					8.75,
					43.75
				],
				[
					8.75,
					40
				],
				[
					8.75,
					37.5
				],
				[
					7.5,
					33.75
				],
				[
					7.5,
					32.5
				],
				[
					5,
					30
				],
				[
					2.5,
					27.5
				],
				[
					1.25,
					27.5
				],
				[
					-2.5,
					26.25
				],
				[
					-5,
					25
				],
				[
					-8.75,
					25
				],
				[
					-10,
					25
				],
				[
					-11.25,
					25
				],
				[
					-11.25,
					25
				]
			],
			"pressures": [
				0.2841796875,
				0.30859375,
				0.373046875,
				0.419921875,
				0.4345703125,
				0.462890625,
				0.4931640625,
				0.5087890625,
				0.5361328125,
				0.5576171875,
				0.5703125,
				0.57421875,
				0.5791015625,
				0.5771484375,
				0.5712890625,
				0.5673828125,
				0.560546875,
				0.5576171875,
				0.552734375,
				0.55078125,
				0.5517578125,
				0.5517578125,
				0.5517578125,
				0.552734375,
				0.552734375,
				0.552734375,
				0.5537109375,
				0.5537109375,
				0.5537109375,
				0.5537109375,
				0.544921875,
				0.5146484375,
				0.4892578125,
				0.4541015625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-11.25,
				25
			]
		},
		{
			"id": "HvZAL79mJ0_8HJJCQp9Ts",
			"type": "freedraw",
			"x": 3743.485432031316,
			"y": 885.0173992674006,
			"width": 28.75,
			"height": 35,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1813482097,
			"version": 106,
			"versionNonce": 530242687,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					-1.25,
					5
				],
				[
					-2.5,
					8.75
				],
				[
					-3.75,
					10
				],
				[
					-5,
					13.75
				],
				[
					-5,
					15
				],
				[
					-6.25,
					18.75
				],
				[
					-7.5,
					22.5
				],
				[
					-8.75,
					26.25
				],
				[
					-8.75,
					27.5
				],
				[
					-8.75,
					30
				],
				[
					-8.75,
					31.25
				],
				[
					-7.5,
					32.5
				],
				[
					-6.25,
					33.75
				],
				[
					-5,
					35
				],
				[
					-2.5,
					35
				],
				[
					0,
					35
				],
				[
					1.25,
					35
				],
				[
					3.75,
					35
				],
				[
					6.25,
					35
				],
				[
					8.75,
					33.75
				],
				[
					11.25,
					33.75
				],
				[
					15,
					32.5
				],
				[
					17.5,
					31.25
				],
				[
					20,
					31.25
				],
				[
					20,
					31.25
				]
			],
			"pressures": [
				0.1669921875,
				0.19921875,
				0.2158203125,
				0.259765625,
				0.3046875,
				0.3271484375,
				0.3720703125,
				0.39453125,
				0.43359375,
				0.4619140625,
				0.48046875,
				0.48828125,
				0.5009765625,
				0.505859375,
				0.5146484375,
				0.525390625,
				0.5341796875,
				0.541015625,
				0.5478515625,
				0.5498046875,
				0.552734375,
				0.552734375,
				0.55078125,
				0.537109375,
				0.50390625,
				0.4453125,
				0.4052734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				20,
				31.25
			]
		},
		{
			"id": "ptN3wbDpKTnZc9PwQzssy",
			"type": "freedraw",
			"x": 3757.235432031316,
			"y": 895.0173992674006,
			"width": 3.75,
			"height": 43.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 396140255,
			"version": 95,
			"versionNonce": 1634627313,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-1.25,
					2.5
				],
				[
					-1.25,
					3.75
				],
				[
					-1.25,
					5
				],
				[
					-1.25,
					6.25
				],
				[
					-1.25,
					10
				],
				[
					-1.25,
					13.75
				],
				[
					-1.25,
					18.75
				],
				[
					0,
					21.25
				],
				[
					0,
					26.25
				],
				[
					1.25,
					31.25
				],
				[
					1.25,
					37.5
				],
				[
					1.25,
					40
				],
				[
					2.5,
					43.75
				],
				[
					2.5,
					43.75
				]
			],
			"pressures": [
				0.2666015625,
				0.26953125,
				0.279296875,
				0.310546875,
				0.345703125,
				0.3759765625,
				0.3974609375,
				0.4384765625,
				0.4736328125,
				0.5,
				0.509765625,
				0.5205078125,
				0.5107421875,
				0.474609375,
				0.447265625,
				0.373046875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2.5,
				43.75
			]
		},
		{
			"id": "dFzCaokxF8LF_U4pNEZi8",
			"type": "freedraw",
			"x": 2845.985432031316,
			"y": 1136.2673992674006,
			"width": 41.25,
			"height": 58.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 641285119,
			"version": 129,
			"versionNonce": 103347359,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.5
				],
				[
					1.25,
					-3.75
				],
				[
					1.25,
					-5
				],
				[
					1.25,
					-6.25
				],
				[
					1.25,
					-7.5
				],
				[
					1.25,
					-10
				],
				[
					0,
					-11.25
				],
				[
					0,
					-12.5
				],
				[
					-2.5,
					-13.75
				],
				[
					-3.75,
					-15
				],
				[
					-5,
					-15
				],
				[
					-7.5,
					-15
				],
				[
					-10,
					-13.75
				],
				[
					-13.75,
					-12.5
				],
				[
					-15,
					-10
				],
				[
					-17.5,
					-7.5
				],
				[
					-20,
					-2.5
				],
				[
					-22.5,
					2.5
				],
				[
					-22.5,
					5
				],
				[
					-23.75,
					10
				],
				[
					-23.75,
					16.25
				],
				[
					-23.75,
					20
				],
				[
					-22.5,
					25
				],
				[
					-21.25,
					27.5
				],
				[
					-18.75,
					33.75
				],
				[
					-16.25,
					37.5
				],
				[
					-12.5,
					41.25
				],
				[
					-10,
					41.25
				],
				[
					-6.25,
					42.5
				],
				[
					-1.25,
					42.5
				],
				[
					2.5,
					41.25
				],
				[
					5,
					40
				],
				[
					8.75,
					36.25
				],
				[
					12.5,
					32.5
				],
				[
					15,
					26.25
				],
				[
					16.25,
					23.75
				],
				[
					17.5,
					17.5
				],
				[
					17.5,
					11.25
				],
				[
					17.5,
					5
				],
				[
					17.5,
					2.5
				],
				[
					16.25,
					-2.5
				],
				[
					13.75,
					-6.25
				],
				[
					10,
					-10
				],
				[
					8.75,
					-11.25
				],
				[
					5,
					-13.75
				],
				[
					2.5,
					-15
				],
				[
					1.25,
					-16.25
				],
				[
					-2.5,
					-16.25
				],
				[
					-3.75,
					-16.25
				],
				[
					-3.75,
					-16.25
				]
			],
			"pressures": [
				0.1748046875,
				0.1796875,
				0.1875,
				0.205078125,
				0.228515625,
				0.2490234375,
				0.298828125,
				0.3193359375,
				0.3583984375,
				0.3896484375,
				0.416015625,
				0.42578125,
				0.44140625,
				0.4521484375,
				0.45703125,
				0.45703125,
				0.4580078125,
				0.4599609375,
				0.4609375,
				0.4599609375,
				0.45703125,
				0.455078125,
				0.455078125,
				0.453125,
				0.451171875,
				0.4482421875,
				0.4482421875,
				0.44921875,
				0.447265625,
				0.4462890625,
				0.44921875,
				0.455078125,
				0.4580078125,
				0.466796875,
				0.48046875,
				0.4951171875,
				0.501953125,
				0.515625,
				0.52734375,
				0.5361328125,
				0.5390625,
				0.54296875,
				0.5458984375,
				0.5478515625,
				0.5478515625,
				0.544921875,
				0.5341796875,
				0.5205078125,
				0.4697265625,
				0.4306640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-3.75,
				-16.25
			]
		},
		{
			"id": "A4Y2JZpgOoGAewfhPfGOP",
			"type": "freedraw",
			"x": 3088.485432031316,
			"y": 1108.7673992674006,
			"width": 38.75,
			"height": 65,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 688306527,
			"version": 129,
			"versionNonce": 75851985,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					2.5
				],
				[
					-3.75,
					3.75
				],
				[
					-5,
					6.25
				],
				[
					-6.25,
					8.75
				],
				[
					-7.5,
					10
				],
				[
					-8.75,
					13.75
				],
				[
					-11.25,
					18.75
				],
				[
					-13.75,
					25
				],
				[
					-15,
					27.5
				],
				[
					-17.5,
					33.75
				],
				[
					-20,
					40
				],
				[
					-22.5,
					45
				],
				[
					-22.5,
					48.75
				],
				[
					-25,
					52.5
				],
				[
					-26.25,
					57.5
				],
				[
					-26.25,
					58.75
				],
				[
					-27.5,
					60
				],
				[
					-27.5,
					61.25
				],
				[
					-27.5,
					60
				],
				[
					-27.5,
					58.75
				],
				[
					-26.25,
					55
				],
				[
					-25,
					51.25
				],
				[
					-23.75,
					48.75
				],
				[
					-22.5,
					43.75
				],
				[
					-21.25,
					38.75
				],
				[
					-18.75,
					32.5
				],
				[
					-17.5,
					30
				],
				[
					-16.25,
					25
				],
				[
					-13.75,
					18.75
				],
				[
					-12.5,
					15
				],
				[
					-11.25,
					12.5
				],
				[
					-8.75,
					10
				],
				[
					-7.5,
					7.5
				],
				[
					-6.25,
					7.5
				],
				[
					-5,
					6.25
				],
				[
					-3.75,
					7.5
				],
				[
					-2.5,
					8.75
				],
				[
					-1.25,
					10
				],
				[
					0,
					13.75
				],
				[
					1.25,
					18.75
				],
				[
					3.75,
					23.75
				],
				[
					3.75,
					27.5
				],
				[
					5,
					32.5
				],
				[
					7.5,
					38.75
				],
				[
					7.5,
					45
				],
				[
					8.75,
					47.5
				],
				[
					10,
					52.5
				],
				[
					10,
					56.25
				],
				[
					11.25,
					60
				],
				[
					11.25,
					61.25
				],
				[
					11.25,
					65
				],
				[
					11.25,
					65
				]
			],
			"pressures": [
				0.271484375,
				0.2861328125,
				0.294921875,
				0.3291015625,
				0.365234375,
				0.4013671875,
				0.43359375,
				0.4462890625,
				0.4638671875,
				0.4716796875,
				0.474609375,
				0.4765625,
				0.478515625,
				0.4794921875,
				0.478515625,
				0.4775390625,
				0.4658203125,
				0.4404296875,
				0.421875,
				0.3994140625,
				0.3466796875,
				0.228515625,
				0.17578125,
				0.13671875,
				0.1083984375,
				0.0966796875,
				0.080078125,
				0.07421875,
				0.080078125,
				0.0869140625,
				0.10546875,
				0.12890625,
				0.1591796875,
				0.1748046875,
				0.20703125,
				0.240234375,
				0.2587890625,
				0.2998046875,
				0.3427734375,
				0.36328125,
				0.40234375,
				0.435546875,
				0.458984375,
				0.478515625,
				0.486328125,
				0.5,
				0.509765625,
				0.5166015625,
				0.5185546875,
				0.521484375,
				0.5205078125,
				0.5068359375,
				0.4912109375,
				0.4306640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11.25,
				65
			]
		},
		{
			"id": "a9XavaeNy1y1UXCeC4rKg",
			"type": "freedraw",
			"x": 3062.235432031316,
			"y": 1140.0173992674006,
			"width": 52.5,
			"height": 15,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 407069919,
			"version": 98,
			"versionNonce": 2139031743,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					-2.5
				],
				[
					-2.5,
					-3.75
				],
				[
					-2.5,
					-5
				],
				[
					-1.25,
					-6.25
				],
				[
					0,
					-5
				],
				[
					1.25,
					-5
				],
				[
					3.75,
					-5
				],
				[
					7.5,
					-3.75
				],
				[
					11.25,
					-2.5
				],
				[
					12.5,
					-2.5
				],
				[
					17.5,
					0
				],
				[
					21.25,
					1.25
				],
				[
					26.25,
					2.5
				],
				[
					28.75,
					3.75
				],
				[
					32.5,
					5
				],
				[
					35,
					6.25
				],
				[
					38.75,
					7.5
				],
				[
					42.5,
					7.5
				],
				[
					43.75,
					8.75
				],
				[
					46.25,
					8.75
				],
				[
					48.75,
					8.75
				],
				[
					50,
					8.75
				],
				[
					50,
					8.75
				]
			],
			"pressures": [
				0.3193359375,
				0.3427734375,
				0.357421875,
				0.3896484375,
				0.4716796875,
				0.5185546875,
				0.541015625,
				0.5791015625,
				0.6103515625,
				0.6328125,
				0.6416015625,
				0.6533203125,
				0.6611328125,
				0.66796875,
				0.6708984375,
				0.6748046875,
				0.6767578125,
				0.6787109375,
				0.67578125,
				0.671875,
				0.6513671875,
				0.6123046875,
				0.54296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				50,
				8.75
			]
		},
		{
			"id": "e2fB207CJ7kTctqPWcHta",
			"type": "freedraw",
			"x": 2827.235432031316,
			"y": 1267.5173992674006,
			"width": 58.75,
			"height": 81.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 291378385,
			"version": 119,
			"versionNonce": 39986865,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-1.25
				],
				[
					3.75,
					-1.25
				],
				[
					5,
					-2.5
				],
				[
					6.25,
					-2.5
				],
				[
					8.75,
					-1.25
				],
				[
					11.25,
					-1.25
				],
				[
					12.5,
					0
				],
				[
					13.75,
					1.25
				],
				[
					16.25,
					3.75
				],
				[
					17.5,
					7.5
				],
				[
					17.5,
					11.25
				],
				[
					17.5,
					15
				],
				[
					17.5,
					20
				],
				[
					15,
					27.5
				],
				[
					13.75,
					30
				],
				[
					11.25,
					38.75
				],
				[
					10,
					42.5
				],
				[
					6.25,
					48.75
				],
				[
					1.25,
					56.25
				],
				[
					-2.5,
					62.5
				],
				[
					-5,
					63.75
				],
				[
					-8.75,
					67.5
				],
				[
					-11.25,
					70
				],
				[
					-15,
					71.25
				],
				[
					-17.5,
					71.25
				],
				[
					-18.75,
					70
				],
				[
					-18.75,
					67.5
				],
				[
					-20,
					66.25
				],
				[
					-20,
					63.75
				],
				[
					-18.75,
					62.5
				],
				[
					-18.75,
					61.25
				],
				[
					-17.5,
					58.75
				],
				[
					-16.25,
					57.5
				],
				[
					-15,
					56.25
				],
				[
					-13.75,
					56.25
				],
				[
					-11.25,
					56.25
				],
				[
					-7.5,
					56.25
				],
				[
					-3.75,
					57.5
				],
				[
					-1.25,
					58.75
				],
				[
					3.75,
					61.25
				],
				[
					8.75,
					63.75
				],
				[
					12.5,
					67.5
				],
				[
					15,
					68.75
				],
				[
					18.75,
					71.25
				],
				[
					20,
					72.5
				],
				[
					23.75,
					75
				],
				[
					27.5,
					77.5
				],
				[
					30,
					77.5
				],
				[
					32.5,
					78.75
				],
				[
					36.25,
					78.75
				],
				[
					38.75,
					78.75
				],
				[
					38.75,
					78.75
				]
			],
			"pressures": [
				0.1279296875,
				0.1474609375,
				0.162109375,
				0.1826171875,
				0.2109375,
				0.2265625,
				0.26171875,
				0.3046875,
				0.326171875,
				0.3642578125,
				0.39453125,
				0.41796875,
				0.4287109375,
				0.4296875,
				0.4296875,
				0.4326171875,
				0.435546875,
				0.44140625,
				0.4443359375,
				0.4501953125,
				0.453125,
				0.4521484375,
				0.4501953125,
				0.4423828125,
				0.4326171875,
				0.419921875,
				0.396484375,
				0.3798828125,
				0.3662109375,
				0.361328125,
				0.3544921875,
				0.3525390625,
				0.353515625,
				0.3681640625,
				0.3759765625,
				0.40234375,
				0.419921875,
				0.4599609375,
				0.5,
				0.537109375,
				0.5546875,
				0.5830078125,
				0.6025390625,
				0.6181640625,
				0.6240234375,
				0.6318359375,
				0.634765625,
				0.6337890625,
				0.62109375,
				0.607421875,
				0.5625,
				0.4912109375,
				0.4443359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				38.75,
				78.75
			]
		},
		{
			"id": "Q3xvw-TtmD2Lx39l3xBjJ",
			"type": "freedraw",
			"x": 3049.735432031316,
			"y": 1281.2673992674006,
			"width": 42.5,
			"height": 71.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1622463519,
			"version": 118,
			"versionNonce": 1765644511,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					1.25,
					-2.5
				],
				[
					1.25,
					-3.75
				],
				[
					2.5,
					-3.75
				],
				[
					2.5,
					-2.5
				],
				[
					1.25,
					-2.5
				],
				[
					0,
					-2.5
				],
				[
					-1.25,
					-2.5
				],
				[
					-3.75,
					-2.5
				],
				[
					-5,
					-2.5
				],
				[
					-7.5,
					-2.5
				],
				[
					-8.75,
					-3.75
				],
				[
					-11.25,
					-3.75
				],
				[
					-15,
					-5
				],
				[
					-17.5,
					-5
				],
				[
					-18.75,
					-6.25
				],
				[
					-21.25,
					-6.25
				],
				[
					-23.75,
					-6.25
				],
				[
					-26.25,
					-6.25
				],
				[
					-27.5,
					-6.25
				],
				[
					-28.75,
					-5
				],
				[
					-30,
					-3.75
				],
				[
					-31.25,
					-1.25
				],
				[
					-31.25,
					2.5
				],
				[
					-32.5,
					6.25
				],
				[
					-33.75,
					8.75
				],
				[
					-35,
					13.75
				],
				[
					-36.25,
					20
				],
				[
					-37.5,
					25
				],
				[
					-37.5,
					28.75
				],
				[
					-38.75,
					33.75
				],
				[
					-40,
					38.75
				],
				[
					-40,
					43.75
				],
				[
					-40,
					46.25
				],
				[
					-40,
					48.75
				],
				[
					-40,
					51.25
				],
				[
					-40,
					53.75
				],
				[
					-40,
					55
				],
				[
					-38.75,
					56.25
				],
				[
					-37.5,
					57.5
				],
				[
					-36.25,
					58.75
				],
				[
					-35,
					60
				],
				[
					-33.75,
					61.25
				],
				[
					-31.25,
					62.5
				],
				[
					-28.75,
					62.5
				],
				[
					-26.25,
					63.75
				],
				[
					-25,
					63.75
				],
				[
					-22.5,
					65
				],
				[
					-18.75,
					65
				],
				[
					-17.5,
					65
				],
				[
					-17.5,
					65
				]
			],
			"pressures": [
				0.076171875,
				0.08984375,
				0.109375,
				0.1572265625,
				0.3076171875,
				0.4130859375,
				0.4384765625,
				0.4619140625,
				0.5634765625,
				0.5712890625,
				0.576171875,
				0.578125,
				0.578125,
				0.5791015625,
				0.5791015625,
				0.5791015625,
				0.5791015625,
				0.580078125,
				0.580078125,
				0.580078125,
				0.580078125,
				0.5791015625,
				0.578125,
				0.5771484375,
				0.5771484375,
				0.576171875,
				0.576171875,
				0.576171875,
				0.5771484375,
				0.5771484375,
				0.576171875,
				0.576171875,
				0.576171875,
				0.57421875,
				0.572265625,
				0.572265625,
				0.5712890625,
				0.5712890625,
				0.5712890625,
				0.5712890625,
				0.5712890625,
				0.5712890625,
				0.5712890625,
				0.5712890625,
				0.5712890625,
				0.5712890625,
				0.572265625,
				0.5703125,
				0.5654296875,
				0.5390625,
				0.4833984375,
				0.4443359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-17.5,
				65
			]
		},
		{
			"id": "DzNt0eGXUAGKDnYrbMre9",
			"type": "freedraw",
			"x": 3073.485432031316,
			"y": 1305.0173992674006,
			"width": 12.5,
			"height": 43.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 880617343,
			"version": 81,
			"versionNonce": 95168657,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					-1.25,
					3.75
				],
				[
					-2.5,
					7.5
				],
				[
					-3.75,
					11.25
				],
				[
					-3.75,
					13.75
				],
				[
					-5,
					18.75
				],
				[
					-6.25,
					23.75
				],
				[
					-8.75,
					30
				],
				[
					-8.75,
					32.5
				],
				[
					-11.25,
					36.25
				],
				[
					-11.25,
					40
				],
				[
					-12.5,
					42.5
				],
				[
					-12.5,
					43.75
				],
				[
					-12.5,
					43.75
				]
			],
			"pressures": [
				0.3076171875,
				0.2841796875,
				0.296875,
				0.3134765625,
				0.349609375,
				0.3837890625,
				0.3984375,
				0.4208984375,
				0.4345703125,
				0.439453125,
				0.4375,
				0.4228515625,
				0.384765625,
				0.33203125,
				0.30078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-12.5,
				43.75
			]
		},
		{
			"id": "1MmoRZ9tCBlW_4kzPJX8D",
			"type": "freedraw",
			"x": 3075.985432031316,
			"y": 1297.5173992674006,
			"width": 10,
			"height": 53.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1850905329,
			"version": 83,
			"versionNonce": 418718975,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					1.25,
					-2.5
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					0
				],
				[
					2.5,
					3.75
				],
				[
					3.75,
					5
				],
				[
					5,
					10
				],
				[
					5,
					16.25
				],
				[
					6.25,
					20
				],
				[
					7.5,
					26.25
				],
				[
					7.5,
					33.75
				],
				[
					8.75,
					40
				],
				[
					10,
					43.75
				],
				[
					10,
					48.75
				],
				[
					10,
					51.25
				],
				[
					10,
					51.25
				]
			],
			"pressures": [
				0.10546875,
				0.1162109375,
				0.1337890625,
				0.1494140625,
				0.2255859375,
				0.302734375,
				0.361328125,
				0.388671875,
				0.4384765625,
				0.4794921875,
				0.49609375,
				0.5205078125,
				0.5361328125,
				0.5400390625,
				0.5341796875,
				0.5029296875,
				0.470703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				51.25
			]
		},
		{
			"id": "DBlY3lKU1j7U59EWNrZIA",
			"type": "freedraw",
			"x": 3067.235432031316,
			"y": 1325.0173992674006,
			"width": 33.75,
			"height": 5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1955313087,
			"version": 81,
			"versionNonce": 2015030897,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-2.5,
					1.25
				],
				[
					-1.25,
					1.25
				],
				[
					0,
					2.5
				],
				[
					1.25,
					3.75
				],
				[
					3.75,
					5
				],
				[
					7.5,
					5
				],
				[
					8.75,
					5
				],
				[
					13.75,
					5
				],
				[
					20,
					5
				],
				[
					25,
					3.75
				],
				[
					28.75,
					2.5
				],
				[
					31.25,
					1.25
				],
				[
					31.25,
					1.25
				]
			],
			"pressures": [
				0.42578125,
				0.4345703125,
				0.4677734375,
				0.59765625,
				0.6328125,
				0.66015625,
				0.6708984375,
				0.685546875,
				0.693359375,
				0.6943359375,
				0.689453125,
				0.666015625,
				0.6162109375,
				0.576171875,
				0.5263671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				31.25,
				1.25
			]
		},
		{
			"id": "8gUK1FMtlh1qpiVAlYnJO",
			"type": "freedraw",
			"x": 3118.485432031316,
			"y": 1317.5173992674006,
			"width": 17.5,
			"height": 5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1388923057,
			"version": 77,
			"versionNonce": 1579560223,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					0,
					1.25
				],
				[
					1.25,
					2.5
				],
				[
					2.5,
					2.5
				],
				[
					3.75,
					2.5
				],
				[
					6.25,
					3.75
				],
				[
					8.75,
					3.75
				],
				[
					11.25,
					5
				],
				[
					13.75,
					5
				],
				[
					16.25,
					5
				],
				[
					16.25,
					5
				]
			],
			"pressures": [
				0.49609375,
				0.5224609375,
				0.5517578125,
				0.58203125,
				0.5947265625,
				0.599609375,
				0.603515625,
				0.5947265625,
				0.58203125,
				0.533203125,
				0.4951171875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				16.25,
				5
			]
		},
		{
			"id": "DwMN9ZuN9dBbe8SqzW2r-",
			"type": "freedraw",
			"x": 3120.985432031316,
			"y": 1333.7673992674006,
			"width": 21.25,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1853924255,
			"version": 79,
			"versionNonce": 544602193,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-2.5,
					0
				],
				[
					-1.25,
					0
				],
				[
					1.25,
					0
				],
				[
					3.75,
					0
				],
				[
					6.25,
					0
				],
				[
					7.5,
					0
				],
				[
					11.25,
					0
				],
				[
					15,
					0
				],
				[
					17.5,
					-1.25
				],
				[
					17.5,
					-1.25
				]
			],
			"pressures": [
				0.4658203125,
				0.4755859375,
				0.4833984375,
				0.517578125,
				0.6171875,
				0.6650390625,
				0.6875,
				0.7001953125,
				0.705078125,
				0.703125,
				0.689453125,
				0.650390625,
				0.6201171875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				17.5,
				-1.25
			]
		},
		{
			"id": "eA_204j-kPPLK90nR8bq6",
			"type": "freedraw",
			"x": 3202.235432031316,
			"y": 1307.5173992674006,
			"width": 53.75,
			"height": 56.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2141032177,
			"version": 131,
			"versionNonce": 1145123135,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					0
				],
				[
					1.25,
					-1.25
				],
				[
					1.25,
					-2.5
				],
				[
					1.25,
					-3.75
				],
				[
					0,
					-5
				],
				[
					0,
					-7.5
				],
				[
					-1.25,
					-8.75
				],
				[
					-2.5,
					-10
				],
				[
					-5,
					-11.25
				],
				[
					-6.25,
					-11.25
				],
				[
					-7.5,
					-12.5
				],
				[
					-10,
					-12.5
				],
				[
					-11.25,
					-12.5
				],
				[
					-12.5,
					-11.25
				],
				[
					-12.5,
					-8.75
				],
				[
					-12.5,
					-7.5
				],
				[
					-11.25,
					-5
				],
				[
					-10,
					-2.5
				],
				[
					-7.5,
					0
				],
				[
					-5,
					3.75
				],
				[
					-2.5,
					8.75
				],
				[
					-1.25,
					10
				],
				[
					2.5,
					15
				],
				[
					5,
					18.75
				],
				[
					7.5,
					22.5
				],
				[
					8.75,
					25
				],
				[
					10,
					28.75
				],
				[
					10,
					30
				],
				[
					11.25,
					33.75
				],
				[
					10,
					36.25
				],
				[
					10,
					37.5
				],
				[
					8.75,
					40
				],
				[
					5,
					42.5
				],
				[
					2.5,
					43.75
				],
				[
					0,
					43.75
				],
				[
					-3.75,
					43.75
				],
				[
					-7.5,
					43.75
				],
				[
					-11.25,
					43.75
				],
				[
					-12.5,
					42.5
				],
				[
					-15,
					41.25
				],
				[
					-16.25,
					38.75
				],
				[
					-17.5,
					36.25
				],
				[
					-17.5,
					33.75
				],
				[
					-16.25,
					32.5
				],
				[
					-15,
					28.75
				],
				[
					-13.75,
					27.5
				],
				[
					-11.25,
					23.75
				],
				[
					-7.5,
					20
				],
				[
					-2.5,
					16.25
				],
				[
					-1.25,
					15
				],
				[
					3.75,
					12.5
				],
				[
					8.75,
					8.75
				],
				[
					13.75,
					6.25
				],
				[
					15,
					5
				],
				[
					20,
					3.75
				],
				[
					21.25,
					2.5
				],
				[
					25,
					1.25
				],
				[
					27.5,
					0
				],
				[
					31.25,
					-1.25
				],
				[
					33.75,
					-2.5
				],
				[
					35,
					-2.5
				],
				[
					36.25,
					-2.5
				],
				[
					36.25,
					-3.75
				],
				[
					35,
					-3.75
				],
				[
					35,
					-3.75
				]
			],
			"pressures": [
				0.1826171875,
				0.1904296875,
				0.1982421875,
				0.216796875,
				0.24609375,
				0.30078125,
				0.34765625,
				0.396484375,
				0.4453125,
				0.490234375,
				0.52734375,
				0.541015625,
				0.564453125,
				0.578125,
				0.5849609375,
				0.587890625,
				0.587890625,
				0.587890625,
				0.587890625,
				0.587890625,
				0.5888671875,
				0.5908203125,
				0.591796875,
				0.5966796875,
				0.603515625,
				0.609375,
				0.611328125,
				0.6162109375,
				0.6171875,
				0.615234375,
				0.60546875,
				0.5986328125,
				0.58203125,
				0.56640625,
				0.5517578125,
				0.5458984375,
				0.5400390625,
				0.5390625,
				0.5390625,
				0.5400390625,
				0.5400390625,
				0.541015625,
				0.5419921875,
				0.544921875,
				0.546875,
				0.55078125,
				0.5537109375,
				0.5576171875,
				0.5615234375,
				0.5625,
				0.5625,
				0.5556640625,
				0.5341796875,
				0.4951171875,
				0.470703125,
				0.408203125,
				0.3720703125,
				0.296875,
				0.232421875,
				0.1826171875,
				0.1337890625,
				0.1240234375,
				0.1162109375,
				0.119140625,
				0.1259765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				35,
				-3.75
			]
		},
		{
			"id": "20g-Mg8N9VGYt7ZRoXRH3",
			"type": "freedraw",
			"x": 3260.985432031316,
			"y": 1348.7673992674006,
			"width": 3.75,
			"height": 33.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 48245951,
			"version": 79,
			"versionNonce": 9750065,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					1.25
				],
				[
					1.25,
					2.5
				],
				[
					1.25,
					3.75
				],
				[
					1.25,
					6.25
				],
				[
					1.25,
					8.75
				],
				[
					1.25,
					12.5
				],
				[
					1.25,
					13.75
				],
				[
					0,
					18.75
				],
				[
					0,
					23.75
				],
				[
					-1.25,
					27.5
				],
				[
					-2.5,
					30
				],
				[
					-2.5,
					33.75
				],
				[
					-2.5,
					33.75
				]
			],
			"pressures": [
				0.224609375,
				0.234375,
				0.283203125,
				0.3779296875,
				0.458984375,
				0.53125,
				0.5869140625,
				0.6064453125,
				0.630859375,
				0.6318359375,
				0.607421875,
				0.58203125,
				0.5048828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-2.5,
				33.75
			]
		},
		{
			"id": "GHJmYHOWyn8P4oHZEIGxJ",
			"type": "freedraw",
			"x": 3312.235432031316,
			"y": 1316.2673992674006,
			"width": 31.25,
			"height": 57.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 23946193,
			"version": 147,
			"versionNonce": 346468703,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					0,
					3.75
				],
				[
					0,
					6.25
				],
				[
					0,
					10
				],
				[
					0,
					13.75
				],
				[
					0,
					15
				],
				[
					0,
					20
				],
				[
					0,
					25
				],
				[
					1.25,
					30
				],
				[
					1.25,
					32.5
				],
				[
					1.25,
					36.25
				],
				[
					1.25,
					38.75
				],
				[
					1.25,
					41.25
				],
				[
					1.25,
					42.5
				],
				[
					0,
					43.75
				],
				[
					0,
					42.5
				],
				[
					0,
					41.25
				],
				[
					0,
					37.5
				],
				[
					-1.25,
					33.75
				],
				[
					-1.25,
					31.25
				],
				[
					0,
					27.5
				],
				[
					0,
					21.25
				],
				[
					1.25,
					16.25
				],
				[
					1.25,
					13.75
				],
				[
					2.5,
					8.75
				],
				[
					5,
					3.75
				],
				[
					6.25,
					0
				],
				[
					7.5,
					-2.5
				],
				[
					8.75,
					-5
				],
				[
					11.25,
					-7.5
				],
				[
					12.5,
					-8.75
				],
				[
					13.75,
					-10
				],
				[
					15,
					-10
				],
				[
					16.25,
					-8.75
				],
				[
					17.5,
					-6.25
				],
				[
					18.75,
					-2.5
				],
				[
					20,
					0
				],
				[
					20,
					2.5
				],
				[
					20,
					3.75
				],
				[
					20,
					7.5
				],
				[
					18.75,
					10
				],
				[
					17.5,
					12.5
				],
				[
					17.5,
					13.75
				],
				[
					16.25,
					16.25
				],
				[
					13.75,
					17.5
				],
				[
					12.5,
					18.75
				],
				[
					12.5,
					20
				],
				[
					11.25,
					21.25
				],
				[
					10,
					22.5
				],
				[
					8.75,
					22.5
				],
				[
					8.75,
					23.75
				],
				[
					10,
					23.75
				],
				[
					12.5,
					25
				],
				[
					15,
					26.25
				],
				[
					16.25,
					28.75
				],
				[
					18.75,
					30
				],
				[
					20,
					31.25
				],
				[
					22.5,
					32.5
				],
				[
					25,
					35
				],
				[
					27.5,
					37.5
				],
				[
					27.5,
					38.75
				],
				[
					28.75,
					40
				],
				[
					28.75,
					41.25
				],
				[
					30,
					42.5
				],
				[
					28.75,
					43.75
				],
				[
					27.5,
					45
				],
				[
					26.25,
					46.25
				],
				[
					25,
					46.25
				],
				[
					22.5,
					47.5
				],
				[
					21.25,
					47.5
				],
				[
					18.75,
					47.5
				],
				[
					17.5,
					47.5
				],
				[
					13.75,
					46.25
				],
				[
					10,
					45
				],
				[
					8.75,
					45
				],
				[
					5,
					42.5
				],
				[
					2.5,
					40
				],
				[
					0,
					38.75
				],
				[
					-1.25,
					37.5
				],
				[
					-1.25,
					37.5
				]
			],
			"pressures": [
				0.0966796875,
				0.1962890625,
				0.2470703125,
				0.267578125,
				0.3134765625,
				0.3623046875,
				0.41015625,
				0.4326171875,
				0.4716796875,
				0.5029296875,
				0.5244140625,
				0.5322265625,
				0.5439453125,
				0.55078125,
				0.552734375,
				0.556640625,
				0.5595703125,
				0.5615234375,
				0.5615234375,
				0.5615234375,
				0.560546875,
				0.5595703125,
				0.556640625,
				0.5517578125,
				0.5458984375,
				0.5419921875,
				0.5361328125,
				0.5322265625,
				0.529296875,
				0.529296875,
				0.5283203125,
				0.5283203125,
				0.529296875,
				0.53125,
				0.5380859375,
				0.5498046875,
				0.57421875,
				0.603515625,
				0.6181640625,
				0.62890625,
				0.6328125,
				0.6396484375,
				0.642578125,
				0.64453125,
				0.646484375,
				0.650390625,
				0.6552734375,
				0.658203125,
				0.66015625,
				0.6630859375,
				0.6640625,
				0.6640625,
				0.6611328125,
				0.6591796875,
				0.6591796875,
				0.6591796875,
				0.66015625,
				0.66015625,
				0.66015625,
				0.6640625,
				0.6708984375,
				0.6923828125,
				0.701171875,
				0.7236328125,
				0.736328125,
				0.76171875,
				0.7861328125,
				0.814453125,
				0.8310546875,
				0.8369140625,
				0.84765625,
				0.8505859375,
				0.853515625,
				0.85546875,
				0.8515625,
				0.8330078125,
				0.81640625,
				0.765625,
				0.6845703125,
				0.5751953125,
				0.51171875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1.25,
				37.5
			]
		},
		{
			"id": "3ZNPA6GmzQlmSK4xFoRXy",
			"type": "freedraw",
			"x": 3372.235432031316,
			"y": 1336.2673992674006,
			"width": 20,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 650044127,
			"version": 82,
			"versionNonce": 1935595537,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-5,
					0
				],
				[
					-6.25,
					0
				],
				[
					-7.5,
					0
				],
				[
					-6.25,
					0
				],
				[
					-5,
					0
				],
				[
					-2.5,
					0
				],
				[
					0,
					0
				],
				[
					2.5,
					1.25
				],
				[
					6.25,
					1.25
				],
				[
					7.5,
					1.25
				],
				[
					11.25,
					1.25
				],
				[
					12.5,
					1.25
				],
				[
					12.5,
					1.25
				]
			],
			"pressures": [
				0.1396484375,
				0.158203125,
				0.2001953125,
				0.263671875,
				0.3154296875,
				0.365234375,
				0.4755859375,
				0.51171875,
				0.56640625,
				0.58984375,
				0.5986328125,
				0.5986328125,
				0.591796875,
				0.5810546875,
				0.53515625,
				0.5,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				12.5,
				1.25
			]
		},
		{
			"id": "o-pHtZKCTwmoiV23N8w70",
			"type": "freedraw",
			"x": 3370.985432031316,
			"y": 1346.2673992674006,
			"width": 26.25,
			"height": 2.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 930021375,
			"version": 82,
			"versionNonce": 413609343,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					1.25
				],
				[
					-3.75,
					1.25
				],
				[
					-5,
					1.25
				],
				[
					-3.75,
					1.25
				],
				[
					-3.75,
					2.5
				],
				[
					-1.25,
					2.5
				],
				[
					0,
					2.5
				],
				[
					2.5,
					2.5
				],
				[
					5,
					2.5
				],
				[
					8.75,
					2.5
				],
				[
					12.5,
					2.5
				],
				[
					15,
					2.5
				],
				[
					18.75,
					1.25
				],
				[
					21.25,
					1.25
				],
				[
					21.25,
					1.25
				]
			],
			"pressures": [
				0.349609375,
				0.3623046875,
				0.384765625,
				0.421875,
				0.4814453125,
				0.5771484375,
				0.5927734375,
				0.6201171875,
				0.6357421875,
				0.640625,
				0.6455078125,
				0.640625,
				0.6220703125,
				0.6064453125,
				0.560546875,
				0.529296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				21.25,
				1.25
			]
		},
		{
			"id": "9kRQMOSEjCNqIZ3R6TRKg",
			"type": "freedraw",
			"x": 3432.235432031316,
			"y": 1302.5173992674006,
			"width": 26.25,
			"height": 47.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1048271135,
			"version": 105,
			"versionNonce": 181120497,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					0,
					-2.5
				],
				[
					-1.25,
					-1.25
				],
				[
					-2.5,
					-1.25
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					2.5
				],
				[
					-5,
					6.25
				],
				[
					-7.5,
					10
				],
				[
					-7.5,
					12.5
				],
				[
					-8.75,
					18.75
				],
				[
					-10,
					25
				],
				[
					-10,
					30
				],
				[
					-10,
					32.5
				],
				[
					-8.75,
					36.25
				],
				[
					-7.5,
					40
				],
				[
					-5,
					42.5
				],
				[
					-3.75,
					43.75
				],
				[
					-1.25,
					45
				],
				[
					1.25,
					45
				],
				[
					2.5,
					45
				],
				[
					5,
					43.75
				],
				[
					6.25,
					42.5
				],
				[
					8.75,
					41.25
				],
				[
					8.75,
					40
				],
				[
					10,
					38.75
				],
				[
					10,
					36.25
				],
				[
					10,
					35
				],
				[
					8.75,
					33.75
				],
				[
					7.5,
					31.25
				],
				[
					5,
					30
				],
				[
					2.5,
					28.75
				],
				[
					1.25,
					28.75
				],
				[
					-2.5,
					28.75
				],
				[
					-6.25,
					28.75
				],
				[
					-7.5,
					28.75
				],
				[
					-11.25,
					30
				],
				[
					-13.75,
					30
				],
				[
					-16.25,
					31.25
				],
				[
					-16.25,
					31.25
				]
			],
			"pressures": [
				0.2822265625,
				0.2900390625,
				0.3720703125,
				0.4501953125,
				0.5537109375,
				0.5830078125,
				0.6337890625,
				0.671875,
				0.6982421875,
				0.7080078125,
				0.7216796875,
				0.7294921875,
				0.734375,
				0.734375,
				0.734375,
				0.7333984375,
				0.73046875,
				0.728515625,
				0.7236328125,
				0.71875,
				0.7158203125,
				0.7109375,
				0.708984375,
				0.70703125,
				0.70703125,
				0.7080078125,
				0.7099609375,
				0.7109375,
				0.7138671875,
				0.716796875,
				0.720703125,
				0.72265625,
				0.7236328125,
				0.7236328125,
				0.7197265625,
				0.71484375,
				0.6875,
				0.6279296875,
				0.5283203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-16.25,
				31.25
			]
		},
		{
			"id": "xnMqqTRQzy877hMwbkiCt",
			"type": "freedraw",
			"x": 3468.485432031316,
			"y": 1266.2673992674006,
			"width": 50,
			"height": 95,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1673664977,
			"version": 115,
			"versionNonce": 461579679,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					0
				],
				[
					2.5,
					0
				],
				[
					3.75,
					0
				],
				[
					6.25,
					0
				],
				[
					7.5,
					0
				],
				[
					8.75,
					0
				],
				[
					10,
					0
				],
				[
					11.25,
					-1.25
				],
				[
					13.75,
					-1.25
				],
				[
					15,
					-1.25
				],
				[
					16.25,
					-1.25
				],
				[
					18.75,
					-1.25
				],
				[
					20,
					0
				],
				[
					21.25,
					1.25
				],
				[
					22.5,
					5
				],
				[
					23.75,
					6.25
				],
				[
					25,
					10
				],
				[
					26.25,
					15
				],
				[
					26.25,
					17.5
				],
				[
					27.5,
					23.75
				],
				[
					27.5,
					27.5
				],
				[
					28.75,
					33.75
				],
				[
					30,
					41.25
				],
				[
					30,
					48.75
				],
				[
					31.25,
					52.5
				],
				[
					32.5,
					60
				],
				[
					33.75,
					66.25
				],
				[
					35,
					72.5
				],
				[
					36.25,
					76.25
				],
				[
					37.5,
					81.25
				],
				[
					38.75,
					83.75
				],
				[
					40,
					86.25
				],
				[
					41.25,
					88.75
				],
				[
					42.5,
					91.25
				],
				[
					42.5,
					92.5
				],
				[
					41.25,
					93.75
				],
				[
					40,
					93.75
				],
				[
					38.75,
					93.75
				],
				[
					36.25,
					93.75
				],
				[
					33.75,
					93.75
				],
				[
					27.5,
					93.75
				],
				[
					23.75,
					93.75
				],
				[
					20,
					93.75
				],
				[
					12.5,
					92.5
				],
				[
					3.75,
					92.5
				],
				[
					0,
					91.25
				],
				[
					-5,
					91.25
				],
				[
					-7.5,
					90
				],
				[
					-7.5,
					90
				]
			],
			"pressures": [
				0.2734375,
				0.5068359375,
				0.544921875,
				0.572265625,
				0.5966796875,
				0.6005859375,
				0.607421875,
				0.609375,
				0.611328125,
				0.611328125,
				0.611328125,
				0.6123046875,
				0.6142578125,
				0.6171875,
				0.6220703125,
				0.62890625,
				0.630859375,
				0.6357421875,
				0.6416015625,
				0.6435546875,
				0.6494140625,
				0.6513671875,
				0.658203125,
				0.6640625,
				0.669921875,
				0.6728515625,
				0.6787109375,
				0.6865234375,
				0.6953125,
				0.7001953125,
				0.712890625,
				0.720703125,
				0.7412109375,
				0.7529296875,
				0.78125,
				0.8095703125,
				0.845703125,
				0.8564453125,
				0.865234375,
				0.873046875,
				0.8779296875,
				0.8857421875,
				0.8876953125,
				0.8876953125,
				0.8740234375,
				0.83203125,
				0.796875,
				0.697265625,
				0.630859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-7.5,
				90
			]
		},
		{
			"id": "ymozcmDrWsL1vK9xZn98J",
			"type": "freedraw",
			"x": 3589.735432031316,
			"y": 1306.2673992674006,
			"width": 15,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 610429663,
			"version": 78,
			"versionNonce": 769837009,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					-1.25,
					-1.25
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-1.25
				],
				[
					3.75,
					-1.25
				],
				[
					6.25,
					-1.25
				],
				[
					8.75,
					-1.25
				],
				[
					10,
					-1.25
				],
				[
					12.5,
					-1.25
				],
				[
					13.75,
					-1.25
				],
				[
					13.75,
					-1.25
				]
			],
			"pressures": [
				0.2578125,
				0.265625,
				0.2900390625,
				0.4462890625,
				0.4609375,
				0.4716796875,
				0.4755859375,
				0.4755859375,
				0.462890625,
				0.44921875,
				0.404296875,
				0.37109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				13.75,
				-1.25
			]
		},
		{
			"id": "FzBJApAxPNbYnmQApMA1n",
			"type": "freedraw",
			"x": 3588.485432031316,
			"y": 1321.2673992674006,
			"width": 25,
			"height": 3.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1519397823,
			"version": 81,
			"versionNonce": 745216447,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-2.5,
					-1.25
				],
				[
					-1.25,
					-1.25
				],
				[
					0,
					-1.25
				],
				[
					0,
					0
				],
				[
					2.5,
					0
				],
				[
					5,
					0
				],
				[
					7.5,
					1.25
				],
				[
					10,
					1.25
				],
				[
					13.75,
					1.25
				],
				[
					16.25,
					2.5
				],
				[
					18.75,
					1.25
				],
				[
					22.5,
					1.25
				],
				[
					22.5,
					1.25
				]
			],
			"pressures": [
				0.40625,
				0.4189453125,
				0.4296875,
				0.4365234375,
				0.5390625,
				0.5732421875,
				0.58984375,
				0.6201171875,
				0.640625,
				0.6474609375,
				0.6455078125,
				0.6259765625,
				0.5810546875,
				0.546875,
				0.4541015625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				22.5,
				1.25
			]
		},
		{
			"id": "4oW5VhfppEh6p2TBN8qnu",
			"type": "freedraw",
			"x": 3622.235432031316,
			"y": 1281.2673992674006,
			"width": 35,
			"height": 62.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 31797937,
			"version": 103,
			"versionNonce": 1992009137,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					-1.25
				],
				[
					-2.5,
					-1.25
				],
				[
					-3.75,
					-1.25
				],
				[
					-5,
					0
				],
				[
					-6.25,
					0
				],
				[
					-7.5,
					0
				],
				[
					-8.75,
					1.25
				],
				[
					-10,
					1.25
				],
				[
					-10,
					2.5
				],
				[
					-10,
					3.75
				],
				[
					-8.75,
					5
				],
				[
					-6.25,
					6.25
				],
				[
					-5,
					6.25
				],
				[
					-1.25,
					7.5
				],
				[
					2.5,
					10
				],
				[
					6.25,
					11.25
				],
				[
					8.75,
					12.5
				],
				[
					13.75,
					15
				],
				[
					17.5,
					17.5
				],
				[
					21.25,
					21.25
				],
				[
					22.5,
					22.5
				],
				[
					23.75,
					25
				],
				[
					25,
					28.75
				],
				[
					25,
					31.25
				],
				[
					25,
					35
				],
				[
					23.75,
					37.5
				],
				[
					21.25,
					42.5
				],
				[
					20,
					45
				],
				[
					17.5,
					48.75
				],
				[
					15,
					51.25
				],
				[
					11.25,
					53.75
				],
				[
					8.75,
					55
				],
				[
					5,
					57.5
				],
				[
					2.5,
					58.75
				],
				[
					0,
					60
				],
				[
					-1.25,
					61.25
				],
				[
					-1.25,
					61.25
				]
			],
			"pressures": [
				0.298828125,
				0.3095703125,
				0.3212890625,
				0.3798828125,
				0.4453125,
				0.4775390625,
				0.5078125,
				0.5615234375,
				0.595703125,
				0.60546875,
				0.6171875,
				0.619140625,
				0.619140625,
				0.6201171875,
				0.619140625,
				0.6201171875,
				0.623046875,
				0.6279296875,
				0.6396484375,
				0.658203125,
				0.68359375,
				0.6982421875,
				0.712890625,
				0.744140625,
				0.7587890625,
				0.78515625,
				0.7958984375,
				0.8134765625,
				0.8203125,
				0.830078125,
				0.83203125,
				0.83203125,
				0.8291015625,
				0.814453125,
				0.775390625,
				0.701171875,
				0.5859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1.25,
				61.25
			]
		},
		{
			"id": "QXc1qV4kDrQT7kZ9glb13",
			"type": "freedraw",
			"x": 3728.485432031316,
			"y": 1290.0173992674006,
			"width": 65,
			"height": 77.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2136966975,
			"version": 153,
			"versionNonce": 545229279,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					0,
					-2.5
				],
				[
					0,
					-1.25
				],
				[
					0,
					1.25
				],
				[
					1.25,
					5
				],
				[
					1.25,
					7.5
				],
				[
					2.5,
					12.5
				],
				[
					2.5,
					18.75
				],
				[
					3.75,
					23.75
				],
				[
					3.75,
					27.5
				],
				[
					3.75,
					32.5
				],
				[
					3.75,
					37.5
				],
				[
					3.75,
					40
				],
				[
					3.75,
					41.25
				],
				[
					3.75,
					43.75
				],
				[
					3.75,
					45
				],
				[
					2.5,
					43.75
				],
				[
					2.5,
					42.5
				],
				[
					1.25,
					38.75
				],
				[
					0,
					37.5
				],
				[
					-1.25,
					32.5
				],
				[
					-2.5,
					26.25
				],
				[
					-2.5,
					20
				],
				[
					-2.5,
					16.25
				],
				[
					-3.75,
					8.75
				],
				[
					-2.5,
					0
				],
				[
					-2.5,
					-6.25
				],
				[
					-1.25,
					-10
				],
				[
					1.25,
					-15
				],
				[
					2.5,
					-20
				],
				[
					6.25,
					-23.75
				],
				[
					7.5,
					-26.25
				],
				[
					10,
					-27.5
				],
				[
					13.75,
					-28.75
				],
				[
					15,
					-30
				],
				[
					18.75,
					-30
				],
				[
					21.25,
					-28.75
				],
				[
					23.75,
					-27.5
				],
				[
					25,
					-26.25
				],
				[
					26.25,
					-23.75
				],
				[
					27.5,
					-21.25
				],
				[
					27.5,
					-17.5
				],
				[
					27.5,
					-16.25
				],
				[
					27.5,
					-12.5
				],
				[
					25,
					-8.75
				],
				[
					23.75,
					-6.25
				],
				[
					21.25,
					-3.75
				],
				[
					18.75,
					0
				],
				[
					17.5,
					1.25
				],
				[
					15,
					3.75
				],
				[
					12.5,
					5
				],
				[
					11.25,
					6.25
				],
				[
					10,
					6.25
				],
				[
					10,
					7.5
				],
				[
					11.25,
					7.5
				],
				[
					12.5,
					7.5
				],
				[
					15,
					8.75
				],
				[
					17.5,
					8.75
				],
				[
					21.25,
					10
				],
				[
					23.75,
					11.25
				],
				[
					27.5,
					13.75
				],
				[
					31.25,
					16.25
				],
				[
					35,
					18.75
				],
				[
					36.25,
					20
				],
				[
					37.5,
					21.25
				],
				[
					38.75,
					22.5
				],
				[
					40,
					23.75
				],
				[
					42.5,
					27.5
				],
				[
					42.5,
					28.75
				],
				[
					42.5,
					30
				],
				[
					42.5,
					31.25
				],
				[
					41.25,
					32.5
				],
				[
					40,
					33.75
				],
				[
					36.25,
					37.5
				],
				[
					33.75,
					38.75
				],
				[
					30,
					40
				],
				[
					26.25,
					41.25
				],
				[
					22.5,
					42.5
				],
				[
					18.75,
					43.75
				],
				[
					8.75,
					45
				],
				[
					5,
					46.25
				],
				[
					0,
					46.25
				],
				[
					-8.75,
					47.5
				],
				[
					-11.25,
					47.5
				],
				[
					-17.5,
					46.25
				],
				[
					-22.5,
					45
				],
				[
					-22.5,
					45
				]
			],
			"pressures": [
				0.2900390625,
				0.294921875,
				0.3134765625,
				0.4697265625,
				0.521484375,
				0.572265625,
				0.595703125,
				0.63671875,
				0.666015625,
				0.685546875,
				0.6923828125,
				0.7041015625,
				0.712890625,
				0.7216796875,
				0.7255859375,
				0.732421875,
				0.73828125,
				0.7421875,
				0.7421875,
				0.7421875,
				0.7421875,
				0.7431640625,
				0.744140625,
				0.744140625,
				0.744140625,
				0.7431640625,
				0.7412109375,
				0.740234375,
				0.7392578125,
				0.73828125,
				0.736328125,
				0.734375,
				0.7333984375,
				0.732421875,
				0.732421875,
				0.732421875,
				0.7333984375,
				0.736328125,
				0.740234375,
				0.7431640625,
				0.7470703125,
				0.751953125,
				0.755859375,
				0.7568359375,
				0.7587890625,
				0.7607421875,
				0.7607421875,
				0.7626953125,
				0.765625,
				0.767578125,
				0.7705078125,
				0.7724609375,
				0.7724609375,
				0.7734375,
				0.7734375,
				0.76953125,
				0.76953125,
				0.76953125,
				0.76953125,
				0.7685546875,
				0.7685546875,
				0.767578125,
				0.767578125,
				0.7705078125,
				0.775390625,
				0.7822265625,
				0.791015625,
				0.8017578125,
				0.828125,
				0.8427734375,
				0.857421875,
				0.8720703125,
				0.88671875,
				0.8994140625,
				0.91796875,
				0.923828125,
				0.927734375,
				0.931640625,
				0.93359375,
				0.935546875,
				0.9365234375,
				0.9345703125,
				0.9287109375,
				0.9033203125,
				0.880859375,
				0.8056640625,
				0.68359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-22.5,
				45
			]
		},
		{
			"id": "Mq_mo06w-5FG3rM-M2gi0",
			"type": "freedraw",
			"x": 4052.235432031316,
			"y": 1280.0173992674006,
			"width": 93.75,
			"height": 95,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1127033521,
			"version": 107,
			"versionNonce": 1350420369,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					0
				],
				[
					1.25,
					-1.25
				],
				[
					1.25,
					-2.5
				],
				[
					2.5,
					-3.75
				],
				[
					2.5,
					-5
				],
				[
					3.75,
					-5
				],
				[
					3.75,
					-6.25
				],
				[
					5,
					-7.5
				],
				[
					5,
					-6.25
				],
				[
					3.75,
					-6.25
				],
				[
					3.75,
					-5
				],
				[
					5,
					-3.75
				],
				[
					5,
					-1.25
				],
				[
					5,
					0
				],
				[
					5,
					2.5
				],
				[
					6.25,
					6.25
				],
				[
					6.25,
					8.75
				],
				[
					6.25,
					10
				],
				[
					7.5,
					12.5
				],
				[
					7.5,
					15
				],
				[
					8.75,
					16.25
				],
				[
					8.75,
					17.5
				],
				[
					10,
					17.5
				],
				[
					12.5,
					16.25
				],
				[
					13.75,
					15
				],
				[
					17.5,
					11.25
				],
				[
					22.5,
					5
				],
				[
					28.75,
					-2.5
				],
				[
					32.5,
					-6.25
				],
				[
					36.25,
					-11.25
				],
				[
					43.75,
					-21.25
				],
				[
					51.25,
					-31.25
				],
				[
					55,
					-35
				],
				[
					63.75,
					-45
				],
				[
					71.25,
					-53.75
				],
				[
					77.5,
					-61.25
				],
				[
					81.25,
					-65
				],
				[
					86.25,
					-70
				],
				[
					90,
					-75
				],
				[
					93.75,
					-77.5
				],
				[
					93.75,
					-77.5
				]
			],
			"pressures": [
				0.06640625,
				0.0810546875,
				0.08984375,
				0.169921875,
				0.255859375,
				0.3271484375,
				0.3759765625,
				0.400390625,
				0.505859375,
				0.599609375,
				0.6103515625,
				0.626953125,
				0.638671875,
				0.6572265625,
				0.6630859375,
				0.6748046875,
				0.685546875,
				0.6962890625,
				0.701171875,
				0.708984375,
				0.71875,
				0.7236328125,
				0.7353515625,
				0.7412109375,
				0.7607421875,
				0.767578125,
				0.7802734375,
				0.7890625,
				0.7958984375,
				0.7978515625,
				0.80078125,
				0.8056640625,
				0.8037109375,
				0.7998046875,
				0.7861328125,
				0.76171875,
				0.7236328125,
				0.6982421875,
				0.6357421875,
				0.5556640625,
				0.4580078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				93.75,
				-77.5
			]
		},
		{
			"id": "Dwhl-xoiGSlQAETV5Ivce",
			"type": "freedraw",
			"x": 2842.235432031316,
			"y": 1473.7673992674006,
			"width": 32.5,
			"height": 80,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 54221777,
			"version": 85,
			"versionNonce": 1422980607,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					1.25
				],
				[
					-3.75,
					2.5
				],
				[
					-5,
					3.75
				],
				[
					-5,
					5
				],
				[
					-7.5,
					7.5
				],
				[
					-8.75,
					10
				],
				[
					-11.25,
					15
				],
				[
					-13.75,
					21.25
				],
				[
					-15,
					25
				],
				[
					-15,
					28.75
				],
				[
					-16.25,
					35
				],
				[
					-17.5,
					43.75
				],
				[
					-16.25,
					51.25
				],
				[
					-16.25,
					53.75
				],
				[
					-15,
					61.25
				],
				[
					-12.5,
					67.5
				],
				[
					-10,
					71.25
				],
				[
					-8.75,
					73.75
				],
				[
					-5,
					77.5
				],
				[
					-3.75,
					77.5
				],
				[
					0,
					80
				],
				[
					3.75,
					80
				],
				[
					6.25,
					78.75
				],
				[
					7.5,
					78.75
				],
				[
					10,
					76.25
				],
				[
					12.5,
					73.75
				],
				[
					15,
					66.25
				],
				[
					15,
					63.75
				],
				[
					15,
					62.5
				],
				[
					13.75,
					58.75
				],
				[
					11.25,
					56.25
				],
				[
					10,
					55
				],
				[
					7.5,
					52.5
				],
				[
					3.75,
					50
				],
				[
					0,
					50
				],
				[
					-1.25,
					48.75
				],
				[
					-6.25,
					50
				],
				[
					-10,
					50
				],
				[
					-13.75,
					51.25
				],
				[
					-15,
					52.5
				],
				[
					-17.5,
					52.5
				],
				[
					-17.5,
					52.5
				]
			],
			"pressures": [
				0.2119140625,
				0.212890625,
				0.22265625,
				0.2412109375,
				0.25,
				0.255859375,
				0.2734375,
				0.2890625,
				0.3232421875,
				0.3564453125,
				0.373046875,
				0.3876953125,
				0.4140625,
				0.4296875,
				0.4345703125,
				0.4345703125,
				0.435546875,
				0.435546875,
				0.4345703125,
				0.4365234375,
				0.4384765625,
				0.4384765625,
				0.4365234375,
				0.435546875,
				0.4345703125,
				0.4326171875,
				0.4306640625,
				0.4326171875,
				0.4404296875,
				0.4443359375,
				0.44921875,
				0.4609375,
				0.4755859375,
				0.4833984375,
				0.4990234375,
				0.513671875,
				0.5244140625,
				0.5283203125,
				0.5322265625,
				0.53125,
				0.513671875,
				0.4912109375,
				0.4580078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-17.5,
				52.5
			]
		},
		{
			"id": "0EtjCt4zdVKK83Q3hh7XY",
			"type": "freedraw",
			"x": 3064.735432031316,
			"y": 1481.2673992674006,
			"width": 58.75,
			"height": 93.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1348979839,
			"version": 93,
			"versionNonce": 1432399217,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					1.25
				],
				[
					-3.75,
					2.5
				],
				[
					-5,
					2.5
				],
				[
					-7.5,
					2.5
				],
				[
					-10,
					2.5
				],
				[
					-11.25,
					1.25
				],
				[
					-12.5,
					1.25
				],
				[
					-13.75,
					0
				],
				[
					-15,
					-1.25
				],
				[
					-17.5,
					-2.5
				],
				[
					-18.75,
					-3.75
				],
				[
					-20,
					-3.75
				],
				[
					-22.5,
					-5
				],
				[
					-25,
					-6.25
				],
				[
					-27.5,
					-6.25
				],
				[
					-30,
					-5
				],
				[
					-32.5,
					-3.75
				],
				[
					-35,
					-1.25
				],
				[
					-36.25,
					0
				],
				[
					-38.75,
					3.75
				],
				[
					-40,
					8.75
				],
				[
					-41.25,
					12.5
				],
				[
					-43.75,
					18.75
				],
				[
					-46.25,
					26.25
				],
				[
					-48.75,
					33.75
				],
				[
					-50,
					37.5
				],
				[
					-52.5,
					45
				],
				[
					-53.75,
					52.5
				],
				[
					-56.25,
					58.75
				],
				[
					-56.25,
					62.5
				],
				[
					-57.5,
					67.5
				],
				[
					-58.75,
					72.5
				],
				[
					-58.75,
					76.25
				],
				[
					-58.75,
					77.5
				],
				[
					-57.5,
					80
				],
				[
					-57.5,
					81.25
				],
				[
					-55,
					82.5
				],
				[
					-53.75,
					83.75
				],
				[
					-51.25,
					85
				],
				[
					-48.75,
					85
				],
				[
					-47.5,
					85
				],
				[
					-43.75,
					86.25
				],
				[
					-41.25,
					86.25
				],
				[
					-37.5,
					86.25
				],
				[
					-35,
					86.25
				],
				[
					-31.25,
					87.5
				],
				[
					-28.75,
					86.25
				],
				[
					-26.25,
					86.25
				],
				[
					-26.25,
					86.25
				]
			],
			"pressures": [
				0.1923828125,
				0.1953125,
				0.2080078125,
				0.3115234375,
				0.3515625,
				0.4091796875,
				0.4775390625,
				0.529296875,
				0.5576171875,
				0.5693359375,
				0.5888671875,
				0.6044921875,
				0.6181640625,
				0.6318359375,
				0.6376953125,
				0.6494140625,
				0.658203125,
				0.6640625,
				0.66796875,
				0.669921875,
				0.6689453125,
				0.6689453125,
				0.6669921875,
				0.6650390625,
				0.6650390625,
				0.6640625,
				0.6630859375,
				0.6630859375,
				0.6630859375,
				0.662109375,
				0.662109375,
				0.66015625,
				0.6591796875,
				0.658203125,
				0.6572265625,
				0.65625,
				0.6552734375,
				0.654296875,
				0.654296875,
				0.654296875,
				0.6533203125,
				0.6533203125,
				0.6533203125,
				0.6533203125,
				0.6533203125,
				0.6513671875,
				0.646484375,
				0.6396484375,
				0.609375,
				0.5478515625,
				0.50390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-26.25,
				86.25
			]
		},
		{
			"id": "5yh-_pbYSxf1n-cP8mASH",
			"type": "freedraw",
			"x": 3085.985432031316,
			"y": 1501.2673992674006,
			"width": 18.75,
			"height": 68.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 178762673,
			"version": 60,
			"versionNonce": 811589151,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					0,
					6.25
				],
				[
					-1.25,
					10
				],
				[
					-2.5,
					12.5
				],
				[
					-3.75,
					18.75
				],
				[
					-6.25,
					26.25
				],
				[
					-8.75,
					35
				],
				[
					-10,
					38.75
				],
				[
					-12.5,
					47.5
				],
				[
					-15,
					53.75
				],
				[
					-17.5,
					60
				],
				[
					-17.5,
					62.5
				],
				[
					-18.75,
					66.25
				],
				[
					-18.75,
					68.75
				],
				[
					-18.75,
					67.5
				],
				[
					-17.5,
					66.25
				],
				[
					-17.5,
					66.25
				]
			],
			"pressures": [
				0.2744140625,
				0.3779296875,
				0.40625,
				0.486328125,
				0.5302734375,
				0.548828125,
				0.576171875,
				0.59375,
				0.6025390625,
				0.6044921875,
				0.6044921875,
				0.59375,
				0.5673828125,
				0.5458984375,
				0.4892578125,
				0.4169921875,
				0.2880859375,
				0.2431640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-17.5,
				66.25
			]
		},
		{
			"id": "iPaK9_3tsB5vzFvVN57BN",
			"type": "freedraw",
			"x": 3082.235432031316,
			"y": 1515.0173992674006,
			"width": 18.75,
			"height": 57.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1418328689,
			"version": 62,
			"versionNonce": 1823201105,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					-2.5
				],
				[
					1.25,
					-5
				],
				[
					1.25,
					-6.25
				],
				[
					2.5,
					-7.5
				],
				[
					2.5,
					-8.75
				],
				[
					3.75,
					-10
				],
				[
					5,
					-8.75
				],
				[
					5,
					-5
				],
				[
					5,
					-3.75
				],
				[
					6.25,
					1.25
				],
				[
					7.5,
					7.5
				],
				[
					8.75,
					10
				],
				[
					10,
					17.5
				],
				[
					11.25,
					21.25
				],
				[
					13.75,
					28.75
				],
				[
					15,
					32.5
				],
				[
					16.25,
					38.75
				],
				[
					18.75,
					45
				],
				[
					18.75,
					47.5
				],
				[
					18.75,
					47.5
				]
			],
			"pressures": [
				0.091796875,
				0.1064453125,
				0.1279296875,
				0.1513671875,
				0.162109375,
				0.185546875,
				0.2705078125,
				0.4150390625,
				0.466796875,
				0.4892578125,
				0.525390625,
				0.5537109375,
				0.564453125,
				0.5810546875,
				0.5859375,
				0.5908203125,
				0.587890625,
				0.5615234375,
				0.501953125,
				0.4599609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				18.75,
				47.5
			]
		},
		{
			"id": "4XTAZirs-l0Jz4U2reVH4",
			"type": "freedraw",
			"x": 3079.735432031316,
			"y": 1542.5173992674006,
			"width": 37.5,
			"height": 3.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1851228945,
			"version": 58,
			"versionNonce": 1713160767,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					-1.25
				],
				[
					-3.75,
					-2.5
				],
				[
					-5,
					-2.5
				],
				[
					-6.25,
					-3.75
				],
				[
					-7.5,
					-3.75
				],
				[
					-6.25,
					-3.75
				],
				[
					-5,
					-2.5
				],
				[
					-2.5,
					-2.5
				],
				[
					1.25,
					-1.25
				],
				[
					5,
					-1.25
				],
				[
					7.5,
					0
				],
				[
					13.75,
					0
				],
				[
					20,
					0
				],
				[
					22.5,
					-1.25
				],
				[
					30,
					-1.25
				],
				[
					30,
					-1.25
				]
			],
			"pressures": [
				0.3828125,
				0.39453125,
				0.4208984375,
				0.4521484375,
				0.4873046875,
				0.5302734375,
				0.5712890625,
				0.591796875,
				0.611328125,
				0.625,
				0.6298828125,
				0.62890625,
				0.615234375,
				0.5849609375,
				0.5595703125,
				0.4833984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				30,
				-1.25
			]
		},
		{
			"id": "IRMRnOuryTRDoot9On4af",
			"type": "freedraw",
			"x": 3145.985432031316,
			"y": 1532.5173992674006,
			"width": 11.25,
			"height": 6.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 673855473,
			"version": 54,
			"versionNonce": 683066673,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-3.75,
					1.25
				],
				[
					-2.5,
					1.25
				],
				[
					-1.25,
					2.5
				],
				[
					0,
					3.75
				],
				[
					1.25,
					3.75
				],
				[
					5,
					5
				],
				[
					7.5,
					6.25
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.484375,
				0.49609375,
				0.521484375,
				0.5751953125,
				0.59375,
				0.6044921875,
				0.6025390625,
				0.5869140625,
				0.5703125,
				0.5185546875,
				0.439453125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7.5,
				6.25
			]
		},
		{
			"id": "00TRPzWv7Tz7USI2lsJTd",
			"type": "freedraw",
			"x": 3140.985432031316,
			"y": 1547.5173992674006,
			"width": 31.25,
			"height": 3.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1105641745,
			"version": 56,
			"versionNonce": 1994924639,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					1.25
				],
				[
					-1.25,
					1.25
				],
				[
					0,
					1.25
				],
				[
					1.25,
					2.5
				],
				[
					3.75,
					2.5
				],
				[
					7.5,
					2.5
				],
				[
					8.75,
					3.75
				],
				[
					12.5,
					3.75
				],
				[
					17.5,
					3.75
				],
				[
					21.25,
					2.5
				],
				[
					23.75,
					2.5
				],
				[
					28.75,
					1.25
				],
				[
					28.75,
					1.25
				]
			],
			"pressures": [
				0.513671875,
				0.5205078125,
				0.5517578125,
				0.572265625,
				0.6533203125,
				0.677734375,
				0.693359375,
				0.6982421875,
				0.6953125,
				0.6708984375,
				0.625,
				0.5546875,
				0.5087890625,
				0.3994140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				28.75,
				1.25
			]
		},
		{
			"id": "_aJvWwGVaBPaXMd3p_0cE",
			"type": "freedraw",
			"x": 3215.985432031316,
			"y": 1527.5173992674006,
			"width": 25,
			"height": 56.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 775413777,
			"version": 101,
			"versionNonce": 1692989201,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.5
				],
				[
					0,
					-3.75
				],
				[
					0,
					-5
				],
				[
					0,
					-6.25
				],
				[
					0,
					-7.5
				],
				[
					0,
					-8.75
				],
				[
					-1.25,
					-11.25
				],
				[
					-1.25,
					-13.75
				],
				[
					-3.75,
					-16.25
				],
				[
					-6.25,
					-17.5
				],
				[
					-7.5,
					-18.75
				],
				[
					-10,
					-18.75
				],
				[
					-11.25,
					-17.5
				],
				[
					-12.5,
					-16.25
				],
				[
					-15,
					-15
				],
				[
					-15,
					-13.75
				],
				[
					-16.25,
					-11.25
				],
				[
					-17.5,
					-8.75
				],
				[
					-17.5,
					-6.25
				],
				[
					-17.5,
					-5
				],
				[
					-16.25,
					-2.5
				],
				[
					-15,
					0
				],
				[
					-12.5,
					2.5
				],
				[
					-11.25,
					3.75
				],
				[
					-7.5,
					6.25
				],
				[
					-5,
					8.75
				],
				[
					-1.25,
					11.25
				],
				[
					0,
					12.5
				],
				[
					3.75,
					15
				],
				[
					5,
					17.5
				],
				[
					6.25,
					18.75
				],
				[
					7.5,
					21.25
				],
				[
					7.5,
					25
				],
				[
					7.5,
					27.5
				],
				[
					7.5,
					28.75
				],
				[
					6.25,
					31.25
				],
				[
					5,
					33.75
				],
				[
					2.5,
					36.25
				],
				[
					1.25,
					36.25
				],
				[
					0,
					37.5
				],
				[
					-2.5,
					37.5
				],
				[
					-5,
					36.25
				],
				[
					-6.25,
					36.25
				],
				[
					-8.75,
					33.75
				],
				[
					-10,
					31.25
				],
				[
					-12.5,
					28.75
				],
				[
					-12.5,
					26.25
				],
				[
					-12.5,
					22.5
				],
				[
					-12.5,
					18.75
				],
				[
					-12.5,
					17.5
				],
				[
					-11.25,
					13.75
				],
				[
					-8.75,
					10
				],
				[
					-6.25,
					6.25
				],
				[
					-5,
					3.75
				],
				[
					-1.25,
					0
				],
				[
					2.5,
					-2.5
				],
				[
					6.25,
					-6.25
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.1904296875,
				0.1962890625,
				0.2080078125,
				0.2294921875,
				0.2529296875,
				0.2646484375,
				0.2900390625,
				0.3359375,
				0.380859375,
				0.4208984375,
				0.470703125,
				0.498046875,
				0.521484375,
				0.5322265625,
				0.5498046875,
				0.5634765625,
				0.5673828125,
				0.57421875,
				0.576171875,
				0.5771484375,
				0.578125,
				0.578125,
				0.5771484375,
				0.5771484375,
				0.578125,
				0.578125,
				0.5771484375,
				0.5771484375,
				0.578125,
				0.578125,
				0.580078125,
				0.580078125,
				0.58203125,
				0.5830078125,
				0.5830078125,
				0.5830078125,
				0.583984375,
				0.583984375,
				0.5859375,
				0.5869140625,
				0.5888671875,
				0.5908203125,
				0.5927734375,
				0.5927734375,
				0.59375,
				0.5947265625,
				0.595703125,
				0.595703125,
				0.5966796875,
				0.5986328125,
				0.599609375,
				0.6015625,
				0.6025390625,
				0.603515625,
				0.6025390625,
				0.5888671875,
				0.548828125,
				0.4775390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6.25,
				-6.25
			]
		},
		{
			"id": "FxuG6MeEdTqC7oHI3DMVb",
			"type": "freedraw",
			"x": 3267.235432031316,
			"y": 1545.0173992674006,
			"width": 5,
			"height": 40,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1520627007,
			"version": 55,
			"versionNonce": 1938980479,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					3.75
				],
				[
					0,
					6.25
				],
				[
					0,
					7.5
				],
				[
					0,
					10
				],
				[
					0,
					12.5
				],
				[
					0,
					15
				],
				[
					-1.25,
					18.75
				],
				[
					-1.25,
					23.75
				],
				[
					-2.5,
					27.5
				],
				[
					-3.75,
					32.5
				],
				[
					-3.75,
					37.5
				],
				[
					-5,
					40
				],
				[
					-5,
					40
				]
			],
			"pressures": [
				0.41796875,
				0.4287109375,
				0.45703125,
				0.4775390625,
				0.517578125,
				0.5498046875,
				0.57421875,
				0.599609375,
				0.640625,
				0.6533203125,
				0.6611328125,
				0.6279296875,
				0.5908203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-5,
				40
			]
		},
		{
			"id": "fW69AHlvhW1zziS1Fb3Lg",
			"type": "freedraw",
			"x": 3315.985432031316,
			"y": 1513.7673992674006,
			"width": 45,
			"height": 63.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 685025279,
			"version": 121,
			"versionNonce": 599387377,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					0,
					5
				],
				[
					0,
					7.5
				],
				[
					1.25,
					11.25
				],
				[
					1.25,
					16.25
				],
				[
					1.25,
					18.75
				],
				[
					2.5,
					25
				],
				[
					2.5,
					27.5
				],
				[
					2.5,
					33.75
				],
				[
					3.75,
					38.75
				],
				[
					3.75,
					43.75
				],
				[
					3.75,
					46.25
				],
				[
					3.75,
					48.75
				],
				[
					3.75,
					50
				],
				[
					3.75,
					51.25
				],
				[
					3.75,
					50
				],
				[
					3.75,
					48.75
				],
				[
					2.5,
					45
				],
				[
					1.25,
					40
				],
				[
					0,
					35
				],
				[
					-1.25,
					31.25
				],
				[
					-1.25,
					25
				],
				[
					-2.5,
					21.25
				],
				[
					-2.5,
					13.75
				],
				[
					-2.5,
					7.5
				],
				[
					-2.5,
					5
				],
				[
					-1.25,
					0
				],
				[
					0,
					-5
				],
				[
					2.5,
					-8.75
				],
				[
					2.5,
					-10
				],
				[
					6.25,
					-11.25
				],
				[
					8.75,
					-12.5
				],
				[
					11.25,
					-11.25
				],
				[
					12.5,
					-11.25
				],
				[
					15,
					-10
				],
				[
					17.5,
					-7.5
				],
				[
					18.75,
					-6.25
				],
				[
					21.25,
					-3.75
				],
				[
					22.5,
					-1.25
				],
				[
					22.5,
					0
				],
				[
					23.75,
					2.5
				],
				[
					22.5,
					5
				],
				[
					22.5,
					6.25
				],
				[
					21.25,
					8.75
				],
				[
					20,
					10
				],
				[
					17.5,
					11.25
				],
				[
					17.5,
					12.5
				],
				[
					15,
					12.5
				],
				[
					13.75,
					13.75
				],
				[
					12.5,
					13.75
				],
				[
					11.25,
					13.75
				],
				[
					12.5,
					15
				],
				[
					13.75,
					16.25
				],
				[
					16.25,
					18.75
				],
				[
					20,
					21.25
				],
				[
					21.25,
					22.5
				],
				[
					25,
					26.25
				],
				[
					27.5,
					28.75
				],
				[
					30,
					31.25
				],
				[
					32.5,
					33.75
				],
				[
					35,
					36.25
				],
				[
					36.25,
					38.75
				],
				[
					36.25,
					40
				],
				[
					37.5,
					42.5
				],
				[
					36.25,
					43.75
				],
				[
					36.25,
					45
				],
				[
					35,
					46.25
				],
				[
					32.5,
					47.5
				],
				[
					30,
					48.75
				],
				[
					28.75,
					48.75
				],
				[
					23.75,
					50
				],
				[
					21.25,
					50
				],
				[
					15,
					50
				],
				[
					12.5,
					50
				],
				[
					6.25,
					48.75
				],
				[
					1.25,
					47.5
				],
				[
					-2.5,
					46.25
				],
				[
					-5,
					46.25
				],
				[
					-7.5,
					43.75
				],
				[
					-7.5,
					43.75
				]
			],
			"pressures": [
				0.1748046875,
				0.2509765625,
				0.3095703125,
				0.3955078125,
				0.4228515625,
				0.47265625,
				0.5107421875,
				0.5263671875,
				0.5517578125,
				0.5625,
				0.5751953125,
				0.5830078125,
				0.5888671875,
				0.58984375,
				0.591796875,
				0.5927734375,
				0.5947265625,
				0.5986328125,
				0.599609375,
				0.59765625,
				0.5947265625,
				0.5927734375,
				0.591796875,
				0.58984375,
				0.5888671875,
				0.5888671875,
				0.587890625,
				0.587890625,
				0.5869140625,
				0.5859375,
				0.583984375,
				0.583984375,
				0.5830078125,
				0.5830078125,
				0.5859375,
				0.587890625,
				0.59375,
				0.599609375,
				0.603515625,
				0.61328125,
				0.6220703125,
				0.626953125,
				0.6337890625,
				0.640625,
				0.64453125,
				0.6494140625,
				0.654296875,
				0.6591796875,
				0.6611328125,
				0.6640625,
				0.6650390625,
				0.666015625,
				0.6640625,
				0.658203125,
				0.6572265625,
				0.65625,
				0.65625,
				0.65625,
				0.6552734375,
				0.6572265625,
				0.6591796875,
				0.6689453125,
				0.6845703125,
				0.7041015625,
				0.7138671875,
				0.7353515625,
				0.74609375,
				0.7568359375,
				0.775390625,
				0.7880859375,
				0.7939453125,
				0.7998046875,
				0.8095703125,
				0.8125,
				0.814453125,
				0.8134765625,
				0.806640625,
				0.7880859375,
				0.7490234375,
				0.7197265625,
				0.6337890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-7.5,
				43.75
			]
		},
		{
			"id": "eiKJ7R2Lc6b25x53lE5Ne",
			"type": "freedraw",
			"x": 3369.735432031316,
			"y": 1528.7673992674006,
			"width": 21.25,
			"height": 2.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1897717841,
			"version": 54,
			"versionNonce": 2128369311,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626168,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					0
				],
				[
					2.5,
					0
				],
				[
					3.75,
					0
				],
				[
					5,
					0
				],
				[
					6.25,
					1.25
				],
				[
					7.5,
					1.25
				],
				[
					8.75,
					1.25
				],
				[
					10,
					2.5
				],
				[
					11.25,
					2.5
				],
				[
					13.75,
					2.5
				],
				[
					16.25,
					2.5
				],
				[
					20,
					2.5
				],
				[
					21.25,
					2.5
				],
				[
					21.25,
					2.5
				]
			],
			"pressures": [
				0.271484375,
				0.2841796875,
				0.298828125,
				0.34375,
				0.435546875,
				0.4970703125,
				0.5498046875,
				0.580078125,
				0.587890625,
				0.595703125,
				0.59375,
				0.57421875,
				0.5244140625,
				0.486328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				21.25,
				2.5
			]
		},
		{
			"id": "wyCndZoYLWvNbSPGV1dln",
			"type": "freedraw",
			"x": 3387.235432031316,
			"y": 1537.5173992674006,
			"width": 11.25,
			"height": 5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2045427537,
			"version": 58,
			"versionNonce": 749807313,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-5,
					0
				],
				[
					-5,
					1.25
				],
				[
					-6.25,
					1.25
				],
				[
					-7.5,
					1.25
				],
				[
					-8.75,
					1.25
				],
				[
					-8.75,
					2.5
				],
				[
					-10,
					2.5
				],
				[
					-11.25,
					2.5
				],
				[
					-11.25,
					3.75
				],
				[
					-10,
					3.75
				],
				[
					-8.75,
					3.75
				],
				[
					-7.5,
					3.75
				],
				[
					-5,
					5
				],
				[
					-3.75,
					5
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.46484375,
				0.4765625,
				0.5068359375,
				0.5263671875,
				0.544921875,
				0.560546875,
				0.5947265625,
				0.6220703125,
				0.6396484375,
				0.65234375,
				0.6689453125,
				0.67578125,
				0.6787109375,
				0.677734375,
				0.671875,
				0.634765625,
				0.599609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-3.75,
				5
			]
		},
		{
			"id": "rtIIOrviU8k3yMgisa_cI",
			"type": "freedraw",
			"x": 3424.735432031316,
			"y": 1512.5173992674006,
			"width": 38.75,
			"height": 53.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 710999569,
			"version": 85,
			"versionNonce": 259402431,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-1.25
				],
				[
					3.75,
					-1.25
				],
				[
					5,
					-1.25
				],
				[
					7.5,
					0
				],
				[
					10,
					1.25
				],
				[
					11.25,
					2.5
				],
				[
					13.75,
					3.75
				],
				[
					16.25,
					7.5
				],
				[
					17.5,
					10
				],
				[
					18.75,
					12.5
				],
				[
					18.75,
					16.25
				],
				[
					18.75,
					21.25
				],
				[
					18.75,
					25
				],
				[
					17.5,
					27.5
				],
				[
					16.25,
					31.25
				],
				[
					13.75,
					35
				],
				[
					10,
					37.5
				],
				[
					8.75,
					38.75
				],
				[
					6.25,
					40
				],
				[
					2.5,
					40
				],
				[
					1.25,
					41.25
				],
				[
					-1.25,
					40
				],
				[
					-3.75,
					40
				],
				[
					-5,
					38.75
				],
				[
					-6.25,
					38.75
				],
				[
					-6.25,
					37.5
				],
				[
					-6.25,
					36.25
				],
				[
					-5,
					35
				],
				[
					-3.75,
					35
				],
				[
					-2.5,
					35
				],
				[
					1.25,
					35
				],
				[
					3.75,
					35
				],
				[
					5,
					36.25
				],
				[
					8.75,
					37.5
				],
				[
					12.5,
					38.75
				],
				[
					16.25,
					41.25
				],
				[
					18.75,
					42.5
				],
				[
					22.5,
					45
				],
				[
					25,
					47.5
				],
				[
					27.5,
					48.75
				],
				[
					30,
					51.25
				],
				[
					32.5,
					52.5
				],
				[
					32.5,
					52.5
				]
			],
			"pressures": [
				0.376953125,
				0.4072265625,
				0.4912109375,
				0.53515625,
				0.568359375,
				0.5849609375,
				0.6162109375,
				0.6435546875,
				0.6552734375,
				0.6748046875,
				0.6875,
				0.6962890625,
				0.6982421875,
				0.701171875,
				0.7021484375,
				0.701171875,
				0.7001953125,
				0.6953125,
				0.6865234375,
				0.673828125,
				0.6669921875,
				0.6513671875,
				0.6357421875,
				0.62890625,
				0.6171875,
				0.6083984375,
				0.6015625,
				0.599609375,
				0.59765625,
				0.595703125,
				0.6005859375,
				0.60546875,
				0.611328125,
				0.638671875,
				0.662109375,
				0.6748046875,
				0.6982421875,
				0.7158203125,
				0.7275390625,
				0.732421875,
				0.736328125,
				0.728515625,
				0.716796875,
				0.66796875,
				0.5771484375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				32.5,
				52.5
			]
		},
		{
			"id": "jSL5nBappfY-T38AqngBv",
			"type": "freedraw",
			"x": 3513.485432031316,
			"y": 1541.2673992674006,
			"width": 12.5,
			"height": 36.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 424967775,
			"version": 51,
			"versionNonce": 1785078961,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					-1.25,
					5
				],
				[
					-1.25,
					7.5
				],
				[
					-2.5,
					8.75
				],
				[
					-3.75,
					12.5
				],
				[
					-5,
					18.75
				],
				[
					-7.5,
					25
				],
				[
					-10,
					28.75
				],
				[
					-12.5,
					36.25
				],
				[
					-12.5,
					36.25
				]
			],
			"pressures": [
				0.3955078125,
				0.4072265625,
				0.4384765625,
				0.474609375,
				0.501953125,
				0.51171875,
				0.525390625,
				0.5546875,
				0.5556640625,
				0.5400390625,
				0.4755859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-12.5,
				36.25
			]
		},
		{
			"id": "wr08xkQQvHKlI47OhdKbw",
			"type": "freedraw",
			"x": 3563.485432031316,
			"y": 1511.2673992674006,
			"width": 30,
			"height": 58.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1678711377,
			"version": 72,
			"versionNonce": 1912634079,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					0,
					-2.5
				],
				[
					0,
					-3.75
				],
				[
					-1.25,
					-3.75
				],
				[
					-2.5,
					-3.75
				],
				[
					-3.75,
					-3.75
				],
				[
					-6.25,
					-2.5
				],
				[
					-8.75,
					-1.25
				],
				[
					-11.25,
					1.25
				],
				[
					-12.5,
					2.5
				],
				[
					-15,
					6.25
				],
				[
					-16.25,
					7.5
				],
				[
					-18.75,
					12.5
				],
				[
					-20,
					15
				],
				[
					-20,
					17.5
				],
				[
					-21.25,
					22.5
				],
				[
					-22.5,
					25
				],
				[
					-22.5,
					27.5
				],
				[
					-22.5,
					33.75
				],
				[
					-21.25,
					36.25
				],
				[
					-20,
					40
				],
				[
					-18.75,
					45
				],
				[
					-16.25,
					46.25
				],
				[
					-15,
					48.75
				],
				[
					-11.25,
					51.25
				],
				[
					-8.75,
					52.5
				],
				[
					-5,
					55
				],
				[
					-1.25,
					55
				],
				[
					1.25,
					55
				],
				[
					3.75,
					55
				],
				[
					7.5,
					53.75
				],
				[
					7.5,
					53.75
				]
			],
			"pressures": [
				0.287109375,
				0.2958984375,
				0.3359375,
				0.4208984375,
				0.5234375,
				0.57421875,
				0.5966796875,
				0.6376953125,
				0.673828125,
				0.7041015625,
				0.716796875,
				0.740234375,
				0.75,
				0.7685546875,
				0.77734375,
				0.78515625,
				0.80078125,
				0.8076171875,
				0.814453125,
				0.8271484375,
				0.83203125,
				0.8359375,
				0.8427734375,
				0.845703125,
				0.84765625,
				0.8505859375,
				0.8505859375,
				0.841796875,
				0.822265625,
				0.806640625,
				0.7548828125,
				0.662109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7.5,
				53.75
			]
		},
		{
			"id": "qeYX-TruXkAyi5NJQq5-G",
			"type": "freedraw",
			"x": 3605.985432031316,
			"y": 1541.2673992674006,
			"width": 18.75,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1087022641,
			"version": 51,
			"versionNonce": 142632593,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					1.25,
					1.25
				],
				[
					2.5,
					1.25
				],
				[
					5,
					1.25
				],
				[
					6.25,
					1.25
				],
				[
					8.75,
					1.25
				],
				[
					12.5,
					1.25
				],
				[
					13.75,
					1.25
				],
				[
					16.25,
					0
				],
				[
					18.75,
					0
				],
				[
					18.75,
					0
				]
			],
			"pressures": [
				0.443359375,
				0.4462890625,
				0.6748046875,
				0.689453125,
				0.6943359375,
				0.6953125,
				0.6904296875,
				0.66796875,
				0.6455078125,
				0.5751953125,
				0.5263671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				18.75,
				0
			]
		},
		{
			"id": "WMOy-NSTFym2Xcm0Fkx2s",
			"type": "freedraw",
			"x": 3604.735432031316,
			"y": 1551.2673992674006,
			"width": 17.5,
			"height": 12.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 375389727,
			"version": 58,
			"versionNonce": 185321215,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					2.5
				],
				[
					-3.75,
					2.5
				],
				[
					-3.75,
					3.75
				],
				[
					-5,
					5
				],
				[
					-5,
					6.25
				],
				[
					-6.25,
					7.5
				],
				[
					-6.25,
					8.75
				],
				[
					-6.25,
					10
				],
				[
					-6.25,
					11.25
				],
				[
					-5,
					11.25
				],
				[
					-2.5,
					12.5
				],
				[
					-1.25,
					12.5
				],
				[
					1.25,
					12.5
				],
				[
					5,
					11.25
				],
				[
					8.75,
					10
				],
				[
					11.25,
					10
				],
				[
					11.25,
					10
				]
			],
			"pressures": [
				0.451171875,
				0.4501953125,
				0.462890625,
				0.4736328125,
				0.4873046875,
				0.52734375,
				0.5498046875,
				0.5908203125,
				0.626953125,
				0.6416015625,
				0.662109375,
				0.669921875,
				0.6826171875,
				0.68359375,
				0.6748046875,
				0.6435546875,
				0.58203125,
				0.5380859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11.25,
				10
			]
		},
		{
			"id": "-X5Xv_Qgt7CLGuiYo22vt",
			"type": "freedraw",
			"x": 3664.735432031316,
			"y": 1505.0173992674006,
			"width": 25,
			"height": 41.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 104903519,
			"version": 67,
			"versionNonce": 1370975345,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					2.5
				],
				[
					-3.75,
					2.5
				],
				[
					-3.75,
					3.75
				],
				[
					-6.25,
					6.25
				],
				[
					-7.5,
					8.75
				],
				[
					-8.75,
					10
				],
				[
					-11.25,
					13.75
				],
				[
					-11.25,
					16.25
				],
				[
					-12.5,
					17.5
				],
				[
					-13.75,
					21.25
				],
				[
					-13.75,
					23.75
				],
				[
					-13.75,
					27.5
				],
				[
					-13.75,
					28.75
				],
				[
					-12.5,
					32.5
				],
				[
					-12.5,
					33.75
				],
				[
					-11.25,
					35
				],
				[
					-10,
					36.25
				],
				[
					-8.75,
					37.5
				],
				[
					-6.25,
					40
				],
				[
					-2.5,
					41.25
				],
				[
					1.25,
					41.25
				],
				[
					3.75,
					41.25
				],
				[
					7.5,
					41.25
				],
				[
					11.25,
					38.75
				],
				[
					11.25,
					38.75
				]
			],
			"pressures": [
				0.5048828125,
				0.5361328125,
				0.5673828125,
				0.595703125,
				0.619140625,
				0.6298828125,
				0.6748046875,
				0.71484375,
				0.7314453125,
				0.759765625,
				0.7724609375,
				0.7841796875,
				0.806640625,
				0.81640625,
				0.830078125,
				0.8359375,
				0.8447265625,
				0.8486328125,
				0.8515625,
				0.853515625,
				0.8544921875,
				0.8564453125,
				0.8515625,
				0.8349609375,
				0.8193359375,
				0.765625,
				0.6669921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11.25,
				38.75
			]
		},
		{
			"id": "jdLf8y7PQhVE78R9HHsGc",
			"type": "freedraw",
			"x": 3675.985432031316,
			"y": 1513.7673992674006,
			"width": 5,
			"height": 61.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 887444561,
			"version": 56,
			"versionNonce": 1494781727,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					2.5
				],
				[
					-2.5,
					5
				],
				[
					-2.5,
					6.25
				],
				[
					-2.5,
					8.75
				],
				[
					-3.75,
					11.25
				],
				[
					-3.75,
					13.75
				],
				[
					-3.75,
					16.25
				],
				[
					-5,
					22.5
				],
				[
					-5,
					30
				],
				[
					-5,
					36.25
				],
				[
					-5,
					40
				],
				[
					-5,
					47.5
				],
				[
					-3.75,
					53.75
				],
				[
					-3.75,
					58.75
				],
				[
					-3.75,
					61.25
				],
				[
					-3.75,
					61.25
				]
			],
			"pressures": [
				0.4580078125,
				0.4599609375,
				0.4775390625,
				0.4921875,
				0.5087890625,
				0.5390625,
				0.5634765625,
				0.5732421875,
				0.615234375,
				0.6484375,
				0.6689453125,
				0.673828125,
				0.67578125,
				0.65234375,
				0.5908203125,
				0.544921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-3.75,
				61.25
			]
		},
		{
			"id": "xKhD-SZEcI-pX1S6yQGdH",
			"type": "freedraw",
			"x": 3700.985432031316,
			"y": 1467.5173992674006,
			"width": 41.25,
			"height": 115,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 675193137,
			"version": 90,
			"versionNonce": 1305654865,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					0,
					1.25
				],
				[
					2.5,
					0
				],
				[
					5,
					0
				],
				[
					7.5,
					0
				],
				[
					8.75,
					0
				],
				[
					12.5,
					0
				],
				[
					16.25,
					0
				],
				[
					18.75,
					0
				],
				[
					20,
					0
				],
				[
					22.5,
					0
				],
				[
					23.75,
					1.25
				],
				[
					25,
					2.5
				],
				[
					26.25,
					3.75
				],
				[
					26.25,
					6.25
				],
				[
					26.25,
					7.5
				],
				[
					26.25,
					10
				],
				[
					26.25,
					15
				],
				[
					26.25,
					17.5
				],
				[
					25,
					23.75
				],
				[
					23.75,
					30
				],
				[
					23.75,
					36.25
				],
				[
					23.75,
					40
				],
				[
					23.75,
					47.5
				],
				[
					23.75,
					55
				],
				[
					23.75,
					62.5
				],
				[
					25,
					66.25
				],
				[
					26.25,
					73.75
				],
				[
					27.5,
					76.25
				],
				[
					30,
					83.75
				],
				[
					32.5,
					90
				],
				[
					33.75,
					93.75
				],
				[
					35,
					96.25
				],
				[
					36.25,
					98.75
				],
				[
					38.75,
					102.5
				],
				[
					38.75,
					103.75
				],
				[
					40,
					105
				],
				[
					40,
					106.25
				],
				[
					40,
					108.75
				],
				[
					38.75,
					110
				],
				[
					37.5,
					110
				],
				[
					33.75,
					111.25
				],
				[
					30,
					112.5
				],
				[
					27.5,
					112.5
				],
				[
					20,
					113.75
				],
				[
					12.5,
					113.75
				],
				[
					8.75,
					113.75
				],
				[
					5,
					115
				],
				[
					5,
					115
				]
			],
			"pressures": [
				0.4111328125,
				0.458984375,
				0.521484375,
				0.5712890625,
				0.5908203125,
				0.5966796875,
				0.59765625,
				0.5986328125,
				0.599609375,
				0.599609375,
				0.60546875,
				0.6103515625,
				0.6240234375,
				0.6328125,
				0.65234375,
				0.6728515625,
				0.693359375,
				0.7021484375,
				0.7177734375,
				0.73046875,
				0.7353515625,
				0.74609375,
				0.75390625,
				0.7587890625,
				0.759765625,
				0.7626953125,
				0.7646484375,
				0.7646484375,
				0.7646484375,
				0.765625,
				0.7666015625,
				0.76953125,
				0.775390625,
				0.779296875,
				0.7861328125,
				0.7939453125,
				0.8134765625,
				0.82421875,
				0.8359375,
				0.84765625,
				0.869140625,
				0.88671875,
				0.8935546875,
				0.900390625,
				0.90234375,
				0.90234375,
				0.8916015625,
				0.8544921875,
				0.8212890625,
				0.775390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				5,
				115
			]
		},
		{
			"id": "0p5JMaj0RmWhdvq729O7m",
			"type": "freedraw",
			"x": 3804.735432031316,
			"y": 1520.0173992674006,
			"width": 16.25,
			"height": 3.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1733789169,
			"version": 51,
			"versionNonce": 915886911,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-2.5
				],
				[
					3.75,
					-2.5
				],
				[
					6.25,
					-2.5
				],
				[
					8.75,
					-3.75
				],
				[
					11.25,
					-3.75
				],
				[
					12.5,
					-3.75
				],
				[
					15,
					-3.75
				],
				[
					16.25,
					-3.75
				],
				[
					16.25,
					-3.75
				]
			],
			"pressures": [
				0.228515625,
				0.29296875,
				0.435546875,
				0.4716796875,
				0.4951171875,
				0.517578125,
				0.521484375,
				0.5087890625,
				0.4921875,
				0.4423828125,
				0.40625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				16.25,
				-3.75
			]
		},
		{
			"id": "M0xr34_ps7DXqB3-7CEMN",
			"type": "freedraw",
			"x": 3809.735432031316,
			"y": 1528.7673992674006,
			"width": 21.25,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 726125151,
			"version": 54,
			"versionNonce": 531219505,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-2.5,
					0
				],
				[
					0,
					1.25
				],
				[
					2.5,
					1.25
				],
				[
					3.75,
					1.25
				],
				[
					7.5,
					1.25
				],
				[
					10,
					1.25
				],
				[
					13.75,
					1.25
				],
				[
					16.25,
					1.25
				],
				[
					16.25,
					1.25
				]
			],
			"pressures": [
				0.310546875,
				0.3193359375,
				0.33984375,
				0.390625,
				0.453125,
				0.5,
				0.5234375,
				0.55078125,
				0.560546875,
				0.5625,
				0.5546875,
				0.5419921875,
				0.4951171875,
				0.4599609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				16.25,
				1.25
			]
		},
		{
			"id": "beYr81PMdbW1pSBzF4ekc",
			"type": "freedraw",
			"x": 3840.985432031316,
			"y": 1493.7673992674006,
			"width": 23.75,
			"height": 57.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2015378271,
			"version": 77,
			"versionNonce": 1541968735,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					-1.25,
					-1.25
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-2.5,
					1.25
				],
				[
					-1.25,
					1.25
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					2.5,
					2.5
				],
				[
					5,
					2.5
				],
				[
					7.5,
					2.5
				],
				[
					8.75,
					2.5
				],
				[
					11.25,
					2.5
				],
				[
					13.75,
					3.75
				],
				[
					16.25,
					3.75
				],
				[
					17.5,
					5
				],
				[
					18.75,
					6.25
				],
				[
					20,
					8.75
				],
				[
					20,
					10
				],
				[
					21.25,
					12.5
				],
				[
					21.25,
					15
				],
				[
					21.25,
					17.5
				],
				[
					20,
					20
				],
				[
					18.75,
					23.75
				],
				[
					17.5,
					26.25
				],
				[
					16.25,
					28.75
				],
				[
					15,
					30
				],
				[
					13.75,
					33.75
				],
				[
					11.25,
					38.75
				],
				[
					10,
					40
				],
				[
					6.25,
					45
				],
				[
					3.75,
					48.75
				],
				[
					3.75,
					50
				],
				[
					1.25,
					52.5
				],
				[
					0,
					55
				],
				[
					0,
					56.25
				],
				[
					0,
					56.25
				]
			],
			"pressures": [
				0.1982421875,
				0.205078125,
				0.22265625,
				0.2685546875,
				0.2783203125,
				0.3779296875,
				0.3994140625,
				0.4150390625,
				0.4208984375,
				0.431640625,
				0.4453125,
				0.4599609375,
				0.46875,
				0.4912109375,
				0.5205078125,
				0.5537109375,
				0.5712890625,
				0.60546875,
				0.63671875,
				0.6494140625,
				0.6728515625,
				0.69140625,
				0.7001953125,
				0.7177734375,
				0.732421875,
				0.740234375,
				0.7490234375,
				0.7568359375,
				0.7744140625,
				0.7890625,
				0.794921875,
				0.8037109375,
				0.80859375,
				0.80859375,
				0.7998046875,
				0.779296875,
				0.7431640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				56.25
			]
		},
		{
			"id": "DqPzZbyyhTQUftzsYc07P",
			"type": "freedraw",
			"x": 3958.485432031316,
			"y": 1472.5173992674006,
			"width": 57.5,
			"height": 95,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1788423711,
			"version": 118,
			"versionNonce": 589567505,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					0,
					3.75
				],
				[
					0,
					5
				],
				[
					0,
					8.75
				],
				[
					0,
					13.75
				],
				[
					0,
					16.25
				],
				[
					0,
					22.5
				],
				[
					0,
					28.75
				],
				[
					0,
					32.5
				],
				[
					-1.25,
					38.75
				],
				[
					-1.25,
					45
				],
				[
					-1.25,
					48.75
				],
				[
					-1.25,
					53.75
				],
				[
					-2.5,
					57.5
				],
				[
					-2.5,
					60
				],
				[
					-2.5,
					62.5
				],
				[
					-2.5,
					60
				],
				[
					-2.5,
					56.25
				],
				[
					-3.75,
					51.25
				],
				[
					-3.75,
					48.75
				],
				[
					-3.75,
					41.25
				],
				[
					-3.75,
					33.75
				],
				[
					-2.5,
					28.75
				],
				[
					-2.5,
					20
				],
				[
					0,
					12.5
				],
				[
					1.25,
					5
				],
				[
					2.5,
					2.5
				],
				[
					5,
					-3.75
				],
				[
					8.75,
					-7.5
				],
				[
					10,
					-8.75
				],
				[
					13.75,
					-10
				],
				[
					17.5,
					-11.25
				],
				[
					18.75,
					-11.25
				],
				[
					22.5,
					-10
				],
				[
					25,
					-7.5
				],
				[
					27.5,
					-3.75
				],
				[
					28.75,
					-2.5
				],
				[
					30,
					2.5
				],
				[
					30,
					6.25
				],
				[
					28.75,
					11.25
				],
				[
					28.75,
					13.75
				],
				[
					27.5,
					18.75
				],
				[
					25,
					22.5
				],
				[
					23.75,
					23.75
				],
				[
					21.25,
					26.25
				],
				[
					18.75,
					28.75
				],
				[
					16.25,
					30
				],
				[
					15,
					30
				],
				[
					13.75,
					31.25
				],
				[
					15,
					32.5
				],
				[
					16.25,
					32.5
				],
				[
					18.75,
					35
				],
				[
					21.25,
					36.25
				],
				[
					25,
					38.75
				],
				[
					28.75,
					41.25
				],
				[
					31.25,
					42.5
				],
				[
					36.25,
					46.25
				],
				[
					41.25,
					50
				],
				[
					45,
					55
				],
				[
					47.5,
					57.5
				],
				[
					51.25,
					61.25
				],
				[
					52.5,
					66.25
				],
				[
					53.75,
					67.5
				],
				[
					53.75,
					70
				],
				[
					53.75,
					73.75
				],
				[
					52.5,
					76.25
				],
				[
					51.25,
					78.75
				],
				[
					48.75,
					80
				],
				[
					45,
					82.5
				],
				[
					42.5,
					83.75
				],
				[
					37.5,
					83.75
				],
				[
					33.75,
					83.75
				],
				[
					31.25,
					83.75
				],
				[
					23.75,
					82.5
				],
				[
					17.5,
					80
				],
				[
					12.5,
					76.25
				],
				[
					10,
					75
				],
				[
					6.25,
					71.25
				],
				[
					6.25,
					71.25
				]
			],
			"pressures": [
				0.1923828125,
				0.203125,
				0.2275390625,
				0.2490234375,
				0.271484375,
				0.3154296875,
				0.3662109375,
				0.392578125,
				0.4423828125,
				0.4873046875,
				0.5078125,
				0.5390625,
				0.560546875,
				0.5673828125,
				0.5771484375,
				0.583984375,
				0.5859375,
				0.5908203125,
				0.603515625,
				0.6044921875,
				0.603515625,
				0.603515625,
				0.6025390625,
				0.6025390625,
				0.6025390625,
				0.6005859375,
				0.599609375,
				0.59765625,
				0.5966796875,
				0.5966796875,
				0.595703125,
				0.5947265625,
				0.595703125,
				0.599609375,
				0.6025390625,
				0.6123046875,
				0.625,
				0.640625,
				0.6484375,
				0.662109375,
				0.671875,
				0.6796875,
				0.681640625,
				0.685546875,
				0.689453125,
				0.69140625,
				0.6953125,
				0.69921875,
				0.7021484375,
				0.703125,
				0.703125,
				0.69921875,
				0.69921875,
				0.6982421875,
				0.6982421875,
				0.6962890625,
				0.6943359375,
				0.6943359375,
				0.6953125,
				0.7001953125,
				0.7109375,
				0.7177734375,
				0.734375,
				0.75390625,
				0.7646484375,
				0.7744140625,
				0.7919921875,
				0.7998046875,
				0.8115234375,
				0.81640625,
				0.82421875,
				0.8271484375,
				0.8291015625,
				0.828125,
				0.826171875,
				0.814453125,
				0.78515625,
				0.73046875,
				0.689453125,
				0.5810546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6.25,
				71.25
			]
		},
		{
			"id": "884RI4nuTkK6TCPf4koZo",
			"type": "freedraw",
			"x": 4154.735432031316,
			"y": 1496.2673992674006,
			"width": 23.75,
			"height": 37.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 62318399,
			"version": 54,
			"versionNonce": 559730559,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					0,
					-2.5
				],
				[
					0,
					-3.75
				],
				[
					1.25,
					-3.75
				],
				[
					2.5,
					-3.75
				],
				[
					5,
					-1.25
				],
				[
					7.5,
					1.25
				],
				[
					10,
					5
				],
				[
					11.25,
					7.5
				],
				[
					13.75,
					12.5
				],
				[
					16.25,
					18.75
				],
				[
					18.75,
					25
				],
				[
					20,
					27.5
				],
				[
					22.5,
					32.5
				],
				[
					23.75,
					33.75
				],
				[
					23.75,
					33.75
				]
			],
			"pressures": [
				0.33203125,
				0.3349609375,
				0.3525390625,
				0.3955078125,
				0.453125,
				0.5322265625,
				0.607421875,
				0.6474609375,
				0.6728515625,
				0.681640625,
				0.6923828125,
				0.69140625,
				0.6669921875,
				0.6416015625,
				0.5634765625,
				0.509765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				23.75,
				33.75
			]
		},
		{
			"id": "NIAOc5mbAdQSH9rUymcmq",
			"type": "freedraw",
			"x": 4189.735432031316,
			"y": 1496.2673992674006,
			"width": 55,
			"height": 37.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 325130335,
			"version": 53,
			"versionNonce": 1262038001,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					-1.25
				],
				[
					-5,
					-1.25
				],
				[
					-6.25,
					0
				],
				[
					-7.5,
					0
				],
				[
					-8.75,
					0
				],
				[
					-12.5,
					2.5
				],
				[
					-16.25,
					3.75
				],
				[
					-18.75,
					6.25
				],
				[
					-26.25,
					11.25
				],
				[
					-33.75,
					16.25
				],
				[
					-42.5,
					23.75
				],
				[
					-46.25,
					26.25
				],
				[
					-52.5,
					32.5
				],
				[
					-55,
					36.25
				],
				[
					-55,
					36.25
				]
			],
			"pressures": [
				0.3984375,
				0.4072265625,
				0.4365234375,
				0.458984375,
				0.482421875,
				0.50390625,
				0.5380859375,
				0.5615234375,
				0.5869140625,
				0.62890625,
				0.6513671875,
				0.6533203125,
				0.64453125,
				0.6025390625,
				0.5654296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-55,
				36.25
			]
		},
		{
			"id": "hziJ4N_0TvW5DWp9d9Xad",
			"type": "freedraw",
			"x": 2868.485432031316,
			"y": 1703.7673992674006,
			"width": 32.5,
			"height": 72.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1607696401,
			"version": 103,
			"versionNonce": 20219807,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					0,
					-2.5
				],
				[
					1.25,
					-2.5
				],
				[
					1.25,
					-3.75
				],
				[
					1.25,
					-5
				],
				[
					1.25,
					-7.5
				],
				[
					1.25,
					-10
				],
				[
					1.25,
					-11.25
				],
				[
					1.25,
					-15
				],
				[
					1.25,
					-18.75
				],
				[
					0,
					-22.5
				],
				[
					-1.25,
					-25
				],
				[
					-3.75,
					-28.75
				],
				[
					-5,
					-30
				],
				[
					-10,
					-33.75
				],
				[
					-11.25,
					-33.75
				],
				[
					-12.5,
					-35
				],
				[
					-17.5,
					-35
				],
				[
					-20,
					-35
				],
				[
					-21.25,
					-33.75
				],
				[
					-23.75,
					-31.25
				],
				[
					-23.75,
					-27.5
				],
				[
					-23.75,
					-26.25
				],
				[
					-22.5,
					-22.5
				],
				[
					-21.25,
					-18.75
				],
				[
					-17.5,
					-15
				],
				[
					-16.25,
					-12.5
				],
				[
					-11.25,
					-7.5
				],
				[
					-7.5,
					-2.5
				],
				[
					-2.5,
					2.5
				],
				[
					-1.25,
					3.75
				],
				[
					2.5,
					8.75
				],
				[
					6.25,
					12.5
				],
				[
					7.5,
					15
				],
				[
					8.75,
					18.75
				],
				[
					8.75,
					22.5
				],
				[
					8.75,
					26.25
				],
				[
					8.75,
					28.75
				],
				[
					6.25,
					31.25
				],
				[
					3.75,
					33.75
				],
				[
					1.25,
					36.25
				],
				[
					0,
					36.25
				],
				[
					-3.75,
					37.5
				],
				[
					-7.5,
					36.25
				],
				[
					-11.25,
					35
				],
				[
					-12.5,
					35
				],
				[
					-16.25,
					32.5
				],
				[
					-18.75,
					28.75
				],
				[
					-20,
					26.25
				],
				[
					-20,
					23.75
				],
				[
					-21.25,
					20
				],
				[
					-20,
					16.25
				],
				[
					-20,
					13.75
				],
				[
					-18.75,
					10
				],
				[
					-17.5,
					8.75
				],
				[
					-15,
					5
				],
				[
					-12.5,
					1.25
				],
				[
					-8.75,
					-2.5
				],
				[
					-7.5,
					-3.75
				],
				[
					-3.75,
					-7.5
				],
				[
					0,
					-10
				],
				[
					3.75,
					-13.75
				],
				[
					5,
					-15
				],
				[
					7.5,
					-16.25
				],
				[
					7.5,
					-16.25
				]
			],
			"pressures": [
				0.1982421875,
				0.2041015625,
				0.2138671875,
				0.22265625,
				0.23046875,
				0.2490234375,
				0.2666015625,
				0.2939453125,
				0.3134765625,
				0.35546875,
				0.3935546875,
				0.4296875,
				0.4462890625,
				0.484375,
				0.494140625,
				0.5146484375,
				0.5205078125,
				0.525390625,
				0.537109375,
				0.5419921875,
				0.544921875,
				0.546875,
				0.548828125,
				0.5498046875,
				0.5498046875,
				0.5498046875,
				0.5498046875,
				0.5498046875,
				0.5478515625,
				0.544921875,
				0.544921875,
				0.5439453125,
				0.5439453125,
				0.5439453125,
				0.544921875,
				0.5458984375,
				0.5458984375,
				0.544921875,
				0.544921875,
				0.544921875,
				0.54296875,
				0.541015625,
				0.5400390625,
				0.5400390625,
				0.5390625,
				0.537109375,
				0.537109375,
				0.537109375,
				0.5361328125,
				0.5361328125,
				0.53515625,
				0.5341796875,
				0.533203125,
				0.533203125,
				0.53515625,
				0.53515625,
				0.53515625,
				0.5361328125,
				0.5361328125,
				0.53515625,
				0.533203125,
				0.5263671875,
				0.4990234375,
				0.4736328125,
				0.44140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7.5,
				-16.25
			]
		},
		{
			"id": "ducHS6ejL-nTU7R7oyb_V",
			"type": "freedraw",
			"x": 3014.735432031316,
			"y": 1663.7673992674006,
			"width": 48.75,
			"height": 90,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2131804575,
			"version": 85,
			"versionNonce": 1072727505,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					-1.25
				],
				[
					-3.75,
					-1.25
				],
				[
					-5,
					-1.25
				],
				[
					-7.5,
					-1.25
				],
				[
					-10,
					-2.5
				],
				[
					-11.25,
					-2.5
				],
				[
					-13.75,
					-2.5
				],
				[
					-17.5,
					-2.5
				],
				[
					-20,
					-2.5
				],
				[
					-22.5,
					-2.5
				],
				[
					-25,
					-2.5
				],
				[
					-28.75,
					-1.25
				],
				[
					-30,
					-1.25
				],
				[
					-32.5,
					0
				],
				[
					-35,
					1.25
				],
				[
					-36.25,
					2.5
				],
				[
					-37.5,
					6.25
				],
				[
					-40,
					10
				],
				[
					-40,
					12.5
				],
				[
					-41.25,
					18.75
				],
				[
					-42.5,
					22.5
				],
				[
					-42.5,
					28.75
				],
				[
					-43.75,
					36.25
				],
				[
					-45,
					43.75
				],
				[
					-46.25,
					48.75
				],
				[
					-46.25,
					56.25
				],
				[
					-47.5,
					63.75
				],
				[
					-48.75,
					70
				],
				[
					-48.75,
					73.75
				],
				[
					-48.75,
					77.5
				],
				[
					-47.5,
					81.25
				],
				[
					-47.5,
					83.75
				],
				[
					-46.25,
					85
				],
				[
					-45,
					86.25
				],
				[
					-42.5,
					86.25
				],
				[
					-41.25,
					87.5
				],
				[
					-38.75,
					87.5
				],
				[
					-35,
					87.5
				],
				[
					-32.5,
					87.5
				],
				[
					-30,
					87.5
				],
				[
					-27.5,
					87.5
				],
				[
					-23.75,
					87.5
				],
				[
					-20,
					87.5
				],
				[
					-18.75,
					87.5
				],
				[
					-17.5,
					87.5
				],
				[
					-17.5,
					87.5
				]
			],
			"pressures": [
				0.2451171875,
				0.4658203125,
				0.587890625,
				0.6103515625,
				0.615234375,
				0.625,
				0.62890625,
				0.6298828125,
				0.6318359375,
				0.6318359375,
				0.6318359375,
				0.6318359375,
				0.6318359375,
				0.6298828125,
				0.62890625,
				0.6279296875,
				0.6259765625,
				0.625,
				0.6240234375,
				0.623046875,
				0.6220703125,
				0.619140625,
				0.6181640625,
				0.6171875,
				0.6162109375,
				0.615234375,
				0.6142578125,
				0.6142578125,
				0.61328125,
				0.61328125,
				0.61328125,
				0.61328125,
				0.6123046875,
				0.6123046875,
				0.6123046875,
				0.6123046875,
				0.611328125,
				0.6123046875,
				0.6142578125,
				0.615234375,
				0.615234375,
				0.6162109375,
				0.61328125,
				0.5986328125,
				0.55859375,
				0.525390625,
				0.4814453125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-17.5,
				87.5
			]
		},
		{
			"id": "-EC9wcHQdBq2kGeVt_ATH",
			"type": "freedraw",
			"x": 3073.485432031316,
			"y": 1685.0173992674006,
			"width": 13.75,
			"height": 57.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 924780753,
			"version": 54,
			"versionNonce": 1503673279,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					0,
					5
				],
				[
					0,
					8.75
				],
				[
					-1.25,
					12.5
				],
				[
					-1.25,
					16.25
				],
				[
					-2.5,
					22.5
				],
				[
					-3.75,
					28.75
				],
				[
					-6.25,
					36.25
				],
				[
					-7.5,
					38.75
				],
				[
					-8.75,
					45
				],
				[
					-10,
					51.25
				],
				[
					-12.5,
					55
				],
				[
					-12.5,
					56.25
				],
				[
					-13.75,
					57.5
				],
				[
					-13.75,
					57.5
				]
			],
			"pressures": [
				0.1552734375,
				0.3837890625,
				0.4267578125,
				0.4619140625,
				0.4873046875,
				0.50390625,
				0.509765625,
				0.5185546875,
				0.5224609375,
				0.521484375,
				0.51953125,
				0.5048828125,
				0.47265625,
				0.4169921875,
				0.380859375,
				0.341796875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-13.75,
				57.5
			]
		},
		{
			"id": "DiqGImt4Ybbb9HfjVavTL",
			"type": "freedraw",
			"x": 3068.485432031316,
			"y": 1683.7673992674006,
			"width": 20,
			"height": 57.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1837188529,
			"version": 57,
			"versionNonce": 1013031857,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					-2.5
				],
				[
					1.25,
					-3.75
				],
				[
					2.5,
					-6.25
				],
				[
					3.75,
					-7.5
				],
				[
					6.25,
					-10
				],
				[
					7.5,
					-8.75
				],
				[
					8.75,
					-7.5
				],
				[
					10,
					-5
				],
				[
					11.25,
					-1.25
				],
				[
					12.5,
					5
				],
				[
					13.75,
					7.5
				],
				[
					15,
					15
				],
				[
					16.25,
					18.75
				],
				[
					17.5,
					27.5
				],
				[
					18.75,
					35
				],
				[
					18.75,
					41.25
				],
				[
					20,
					45
				],
				[
					20,
					47.5
				],
				[
					20,
					47.5
				]
			],
			"pressures": [
				0.15625,
				0.1630859375,
				0.1689453125,
				0.1875,
				0.2021484375,
				0.28125,
				0.365234375,
				0.42578125,
				0.4833984375,
				0.5322265625,
				0.5654296875,
				0.578125,
				0.5966796875,
				0.6025390625,
				0.6064453125,
				0.5947265625,
				0.55859375,
				0.525390625,
				0.482421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				20,
				47.5
			]
		},
		{
			"id": "B1d_u2jDmbvf1VgHYYrZW",
			"type": "freedraw",
			"x": 3067.235432031316,
			"y": 1712.5173992674006,
			"width": 38.75,
			"height": 2.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1392832287,
			"version": 53,
			"versionNonce": 1858104287,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					-1.25
				],
				[
					-3.75,
					-1.25
				],
				[
					-2.5,
					-1.25
				],
				[
					-1.25,
					-1.25
				],
				[
					1.25,
					0
				],
				[
					2.5,
					0
				],
				[
					6.25,
					0
				],
				[
					11.25,
					1.25
				],
				[
					16.25,
					1.25
				],
				[
					18.75,
					1.25
				],
				[
					23.75,
					0
				],
				[
					30,
					-1.25
				],
				[
					35,
					-1.25
				],
				[
					35,
					-1.25
				]
			],
			"pressures": [
				0.423828125,
				0.4365234375,
				0.453125,
				0.4990234375,
				0.5751953125,
				0.60546875,
				0.642578125,
				0.650390625,
				0.6611328125,
				0.6640625,
				0.6572265625,
				0.6484375,
				0.6142578125,
				0.5537109375,
				0.4619140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				35,
				-1.25
			]
		},
		{
			"id": "hdvyGSr9MHEzT4AJweema",
			"type": "freedraw",
			"x": 3112.235432031316,
			"y": 1710.0173992674006,
			"width": 15,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1490302289,
			"version": 48,
			"versionNonce": 749995409,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					0,
					1.25
				],
				[
					2.5,
					1.25
				],
				[
					5,
					1.25
				],
				[
					6.25,
					1.25
				],
				[
					11.25,
					1.25
				],
				[
					12.5,
					1.25
				],
				[
					12.5,
					1.25
				]
			],
			"pressures": [
				0.484375,
				0.4951171875,
				0.515625,
				0.6064453125,
				0.611328125,
				0.6162109375,
				0.615234375,
				0.6103515625,
				0.5830078125,
				0.560546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				12.5,
				1.25
			]
		},
		{
			"id": "HHTbp3Rip69iZR9lNXb9T",
			"type": "freedraw",
			"x": 3119.735432031316,
			"y": 1718.7673992674006,
			"width": 22.5,
			"height": 11.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1045054609,
			"version": 55,
			"versionNonce": 749049855,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					2.5
				],
				[
					-3.75,
					2.5
				],
				[
					-3.75,
					3.75
				],
				[
					-3.75,
					5
				],
				[
					-5,
					5
				],
				[
					-5,
					6.25
				],
				[
					-5,
					7.5
				],
				[
					-3.75,
					8.75
				],
				[
					-1.25,
					10
				],
				[
					1.25,
					10
				],
				[
					2.5,
					10
				],
				[
					6.25,
					11.25
				],
				[
					10,
					10
				],
				[
					15,
					10
				],
				[
					17.5,
					8.75
				],
				[
					17.5,
					8.75
				]
			],
			"pressures": [
				0.5068359375,
				0.501953125,
				0.51171875,
				0.5205078125,
				0.5390625,
				0.560546875,
				0.5673828125,
				0.5947265625,
				0.6220703125,
				0.6435546875,
				0.6611328125,
				0.6748046875,
				0.6796875,
				0.677734375,
				0.6533203125,
				0.599609375,
				0.55859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				17.5,
				8.75
			]
		},
		{
			"id": "YKfeBKOJTaQAe8A37r9Yw",
			"type": "freedraw",
			"x": 3198.485432031316,
			"y": 1697.5173992674006,
			"width": 31.25,
			"height": 52.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 789119519,
			"version": 98,
			"versionNonce": 203369329,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					-1.25
				],
				[
					-3.75,
					-1.25
				],
				[
					-3.75,
					-2.5
				],
				[
					-5,
					-3.75
				],
				[
					-6.25,
					-3.75
				],
				[
					-7.5,
					-6.25
				],
				[
					-10,
					-7.5
				],
				[
					-11.25,
					-8.75
				],
				[
					-12.5,
					-10
				],
				[
					-15,
					-11.25
				],
				[
					-16.25,
					-11.25
				],
				[
					-18.75,
					-12.5
				],
				[
					-20,
					-12.5
				],
				[
					-21.25,
					-11.25
				],
				[
					-22.5,
					-11.25
				],
				[
					-23.75,
					-10
				],
				[
					-23.75,
					-8.75
				],
				[
					-23.75,
					-7.5
				],
				[
					-22.5,
					-6.25
				],
				[
					-22.5,
					-5
				],
				[
					-20,
					-2.5
				],
				[
					-17.5,
					0
				],
				[
					-15,
					1.25
				],
				[
					-12.5,
					2.5
				],
				[
					-8.75,
					5
				],
				[
					-7.5,
					6.25
				],
				[
					-3.75,
					8.75
				],
				[
					0,
					11.25
				],
				[
					2.5,
					15
				],
				[
					5,
					16.25
				],
				[
					6.25,
					18.75
				],
				[
					7.5,
					22.5
				],
				[
					7.5,
					25
				],
				[
					7.5,
					26.25
				],
				[
					6.25,
					30
				],
				[
					5,
					32.5
				],
				[
					3.75,
					33.75
				],
				[
					1.25,
					36.25
				],
				[
					-2.5,
					37.5
				],
				[
					-5,
					38.75
				],
				[
					-7.5,
					40
				],
				[
					-11.25,
					40
				],
				[
					-13.75,
					40
				],
				[
					-16.25,
					38.75
				],
				[
					-18.75,
					37.5
				],
				[
					-20,
					36.25
				],
				[
					-21.25,
					33.75
				],
				[
					-21.25,
					30
				],
				[
					-21.25,
					27.5
				],
				[
					-20,
					23.75
				],
				[
					-18.75,
					20
				],
				[
					-16.25,
					15
				],
				[
					-15,
					13.75
				],
				[
					-11.25,
					8.75
				],
				[
					-7.5,
					5
				],
				[
					-5,
					2.5
				],
				[
					-1.25,
					-1.25
				],
				[
					1.25,
					-2.5
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.4365234375,
				0.46875,
				0.5078125,
				0.515625,
				0.5439453125,
				0.55859375,
				0.580078125,
				0.5927734375,
				0.6044921875,
				0.611328125,
				0.623046875,
				0.6357421875,
				0.646484375,
				0.6513671875,
				0.6572265625,
				0.658203125,
				0.66015625,
				0.6611328125,
				0.66015625,
				0.6591796875,
				0.6591796875,
				0.658203125,
				0.658203125,
				0.6572265625,
				0.6572265625,
				0.6572265625,
				0.6572265625,
				0.66015625,
				0.662109375,
				0.6650390625,
				0.6669921875,
				0.669921875,
				0.6728515625,
				0.6748046875,
				0.67578125,
				0.6787109375,
				0.6806640625,
				0.6806640625,
				0.6806640625,
				0.6806640625,
				0.6796875,
				0.6796875,
				0.6787109375,
				0.677734375,
				0.6767578125,
				0.6767578125,
				0.6767578125,
				0.6767578125,
				0.67578125,
				0.67578125,
				0.67578125,
				0.67578125,
				0.6748046875,
				0.6748046875,
				0.6748046875,
				0.66796875,
				0.658203125,
				0.6103515625,
				0.5703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1.25,
				-2.5
			]
		},
		{
			"id": "unT8d_YVLlvGntGpg13Oq",
			"type": "freedraw",
			"x": 3227.235432031316,
			"y": 1723.7673992674006,
			"width": 2.5,
			"height": 42.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1214504447,
			"version": 52,
			"versionNonce": 693125151,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					1.25,
					5
				],
				[
					1.25,
					6.25
				],
				[
					1.25,
					8.75
				],
				[
					1.25,
					11.25
				],
				[
					1.25,
					13.75
				],
				[
					1.25,
					16.25
				],
				[
					0,
					22.5
				],
				[
					0,
					27.5
				],
				[
					0,
					32.5
				],
				[
					0,
					35
				],
				[
					-1.25,
					40
				],
				[
					-1.25,
					42.5
				],
				[
					-1.25,
					42.5
				]
			],
			"pressures": [
				0.443359375,
				0.455078125,
				0.5087890625,
				0.53125,
				0.5712890625,
				0.603515625,
				0.646484375,
				0.6728515625,
				0.712890625,
				0.7314453125,
				0.7265625,
				0.712890625,
				0.6533203125,
				0.6044921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1.25,
				42.5
			]
		},
		{
			"id": "8e3Zz_rHtuKk-HquU4bpS",
			"type": "freedraw",
			"x": 3340.985432031316,
			"y": 1680.0173992674006,
			"width": 33.75,
			"height": 61.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 255241983,
			"version": 70,
			"versionNonce": 48928081,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.5
				],
				[
					0,
					-3.75
				],
				[
					1.25,
					-3.75
				],
				[
					1.25,
					-5
				],
				[
					0,
					-6.25
				],
				[
					0,
					-7.5
				],
				[
					-1.25,
					-7.5
				],
				[
					-3.75,
					-8.75
				],
				[
					-6.25,
					-8.75
				],
				[
					-7.5,
					-8.75
				],
				[
					-11.25,
					-7.5
				],
				[
					-13.75,
					-6.25
				],
				[
					-17.5,
					-3.75
				],
				[
					-20,
					-2.5
				],
				[
					-23.75,
					1.25
				],
				[
					-26.25,
					6.25
				],
				[
					-28.75,
					10
				],
				[
					-30,
					13.75
				],
				[
					-31.25,
					18.75
				],
				[
					-32.5,
					23.75
				],
				[
					-32.5,
					27.5
				],
				[
					-31.25,
					32.5
				],
				[
					-30,
					37.5
				],
				[
					-27.5,
					42.5
				],
				[
					-26.25,
					45
				],
				[
					-23.75,
					47.5
				],
				[
					-21.25,
					50
				],
				[
					-17.5,
					51.25
				],
				[
					-12.5,
					52.5
				],
				[
					-10,
					52.5
				],
				[
					-7.5,
					52.5
				],
				[
					-7.5,
					52.5
				]
			],
			"pressures": [
				0.220703125,
				0.2236328125,
				0.2431640625,
				0.2568359375,
				0.2880859375,
				0.3310546875,
				0.3720703125,
				0.4267578125,
				0.4775390625,
				0.521484375,
				0.541015625,
				0.5732421875,
				0.5966796875,
				0.6142578125,
				0.6201171875,
				0.6279296875,
				0.634765625,
				0.6416015625,
				0.6455078125,
				0.65234375,
				0.66015625,
				0.6640625,
				0.6708984375,
				0.67578125,
				0.6796875,
				0.6806640625,
				0.68359375,
				0.68359375,
				0.6806640625,
				0.6630859375,
				0.64453125,
				0.6181640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-7.5,
				52.5
			]
		},
		{
			"id": "SoyGNZvxxQu9lrYTz8pmQ",
			"type": "freedraw",
			"x": 3359.735432031316,
			"y": 1711.2673992674006,
			"width": 20,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 868538655,
			"version": 49,
			"versionNonce": 1722868799,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-1.25
				],
				[
					3.75,
					-1.25
				],
				[
					5,
					-1.25
				],
				[
					7.5,
					-1.25
				],
				[
					11.25,
					0
				],
				[
					15,
					0
				],
				[
					16.25,
					0
				],
				[
					20,
					0
				],
				[
					20,
					0
				]
			],
			"pressures": [
				0.4501953125,
				0.455078125,
				0.548828125,
				0.568359375,
				0.583984375,
				0.5888671875,
				0.5927734375,
				0.5888671875,
				0.568359375,
				0.546875,
				0.478515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				20,
				0
			]
		},
		{
			"id": "gBPyxprBOZquD3uhPt_p_",
			"type": "freedraw",
			"x": 3368.485432031316,
			"y": 1725.0173992674006,
			"width": 22.5,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1523637137,
			"version": 52,
			"versionNonce": 1148044081,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-5,
					0
				],
				[
					-5,
					-1.25
				],
				[
					-3.75,
					-1.25
				],
				[
					-1.25,
					0
				],
				[
					1.25,
					0
				],
				[
					3.75,
					0
				],
				[
					7.5,
					0
				],
				[
					11.25,
					0
				],
				[
					12.5,
					0
				],
				[
					17.5,
					-1.25
				],
				[
					17.5,
					-1.25
				]
			],
			"pressures": [
				0.34765625,
				0.359375,
				0.3837890625,
				0.427734375,
				0.478515625,
				0.49609375,
				0.56640625,
				0.583984375,
				0.576171875,
				0.564453125,
				0.5263671875,
				0.4697265625,
				0.4345703125,
				0.3486328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				17.5,
				-1.25
			]
		},
		{
			"id": "nx3jMvUXzPkh305XkVwFP",
			"type": "freedraw",
			"x": 3414.735432031316,
			"y": 1688.7673992674006,
			"width": 26.25,
			"height": 33.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2139060881,
			"version": 65,
			"versionNonce": 1420297311,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-1.25,
					2.5
				],
				[
					-2.5,
					3.75
				],
				[
					-2.5,
					5
				],
				[
					-2.5,
					6.25
				],
				[
					-3.75,
					8.75
				],
				[
					-5,
					12.5
				],
				[
					-5,
					13.75
				],
				[
					-5,
					17.5
				],
				[
					-5,
					20
				],
				[
					-5,
					22.5
				],
				[
					-3.75,
					23.75
				],
				[
					-2.5,
					25
				],
				[
					-1.25,
					27.5
				],
				[
					0,
					28.75
				],
				[
					1.25,
					30
				],
				[
					3.75,
					31.25
				],
				[
					6.25,
					32.5
				],
				[
					7.5,
					32.5
				],
				[
					8.75,
					33.75
				],
				[
					11.25,
					33.75
				],
				[
					13.75,
					33.75
				],
				[
					15,
					33.75
				],
				[
					17.5,
					32.5
				],
				[
					20,
					31.25
				],
				[
					21.25,
					30
				],
				[
					21.25,
					30
				]
			],
			"pressures": [
				0.2890625,
				0.32421875,
				0.3681640625,
				0.4130859375,
				0.4345703125,
				0.4541015625,
				0.5244140625,
				0.587890625,
				0.61328125,
				0.654296875,
				0.68359375,
				0.705078125,
				0.712890625,
				0.7255859375,
				0.734375,
				0.7392578125,
				0.7412109375,
				0.7431640625,
				0.744140625,
				0.744140625,
				0.7392578125,
				0.724609375,
				0.6982421875,
				0.677734375,
				0.6181640625,
				0.5302734375,
				0.4775390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				21.25,
				30
			]
		},
		{
			"id": "qLHb4YZ-Mg9VvL9R4PhYz",
			"type": "freedraw",
			"x": 3432.235432031316,
			"y": 1688.7673992674006,
			"width": 11.25,
			"height": 65,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 202930367,
			"version": 58,
			"versionNonce": 756036881,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-1.25,
					2.5
				],
				[
					-2.5,
					3.75
				],
				[
					-2.5,
					5
				],
				[
					-2.5,
					7.5
				],
				[
					-3.75,
					11.25
				],
				[
					-5,
					16.25
				],
				[
					-5,
					18.75
				],
				[
					-5,
					25
				],
				[
					-5,
					31.25
				],
				[
					-5,
					37.5
				],
				[
					-3.75,
					41.25
				],
				[
					-2.5,
					46.25
				],
				[
					-2.5,
					52.5
				],
				[
					0,
					56.25
				],
				[
					1.25,
					58.75
				],
				[
					2.5,
					61.25
				],
				[
					5,
					63.75
				],
				[
					6.25,
					65
				],
				[
					6.25,
					65
				]
			],
			"pressures": [
				0.341796875,
				0.359375,
				0.3896484375,
				0.408203125,
				0.4423828125,
				0.4716796875,
				0.509765625,
				0.5576171875,
				0.578125,
				0.609375,
				0.6279296875,
				0.6416015625,
				0.646484375,
				0.6513671875,
				0.6416015625,
				0.6123046875,
				0.58984375,
				0.5234375,
				0.4345703125,
				0.3818359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6.25,
				65
			]
		},
		{
			"id": "SJzACBR2jYlpK4EJ2CTDW",
			"type": "freedraw",
			"x": 3465.985432031316,
			"y": 1660.0173992674006,
			"width": 42.5,
			"height": 93.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 499076639,
			"version": 95,
			"versionNonce": 319168639,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-1.25,
					-1.25
				],
				[
					-2.5,
					-1.25
				],
				[
					-3.75,
					-1.25
				],
				[
					-2.5,
					0
				],
				[
					-1.25,
					0
				],
				[
					0,
					1.25
				],
				[
					2.5,
					2.5
				],
				[
					3.75,
					2.5
				],
				[
					7.5,
					3.75
				],
				[
					10,
					5
				],
				[
					13.75,
					6.25
				],
				[
					15,
					7.5
				],
				[
					18.75,
					8.75
				],
				[
					21.25,
					10
				],
				[
					23.75,
					11.25
				],
				[
					23.75,
					12.5
				],
				[
					26.25,
					15
				],
				[
					27.5,
					17.5
				],
				[
					28.75,
					20
				],
				[
					30,
					21.25
				],
				[
					31.25,
					25
				],
				[
					31.25,
					28.75
				],
				[
					32.5,
					31.25
				],
				[
					32.5,
					36.25
				],
				[
					32.5,
					41.25
				],
				[
					33.75,
					46.25
				],
				[
					33.75,
					48.75
				],
				[
					33.75,
					53.75
				],
				[
					33.75,
					56.25
				],
				[
					33.75,
					61.25
				],
				[
					33.75,
					63.75
				],
				[
					33.75,
					65
				],
				[
					35,
					67.5
				],
				[
					35,
					71.25
				],
				[
					35,
					72.5
				],
				[
					35,
					75
				],
				[
					33.75,
					76.25
				],
				[
					33.75,
					78.75
				],
				[
					32.5,
					81.25
				],
				[
					32.5,
					82.5
				],
				[
					31.25,
					83.75
				],
				[
					30,
					85
				],
				[
					30,
					86.25
				],
				[
					28.75,
					87.5
				],
				[
					25,
					90
				],
				[
					23.75,
					90
				],
				[
					22.5,
					91.25
				],
				[
					20,
					91.25
				],
				[
					13.75,
					92.5
				],
				[
					11.25,
					92.5
				],
				[
					6.25,
					91.25
				],
				[
					2.5,
					91.25
				],
				[
					-2.5,
					90
				],
				[
					-5,
					90
				],
				[
					-7.5,
					88.75
				],
				[
					-7.5,
					88.75
				]
			],
			"pressures": [
				0.4462890625,
				0.4833984375,
				0.5009765625,
				0.572265625,
				0.6494140625,
				0.677734375,
				0.6845703125,
				0.689453125,
				0.6923828125,
				0.693359375,
				0.6953125,
				0.6962890625,
				0.6953125,
				0.6953125,
				0.6943359375,
				0.6923828125,
				0.6923828125,
				0.6923828125,
				0.6962890625,
				0.7021484375,
				0.708984375,
				0.7138671875,
				0.7216796875,
				0.7294921875,
				0.732421875,
				0.73828125,
				0.7412109375,
				0.744140625,
				0.74609375,
				0.7509765625,
				0.7548828125,
				0.765625,
				0.7734375,
				0.7822265625,
				0.791015625,
				0.8125,
				0.8232421875,
				0.833984375,
				0.8427734375,
				0.861328125,
				0.869140625,
				0.8759765625,
				0.8828125,
				0.888671875,
				0.89453125,
				0.8994140625,
				0.908203125,
				0.9111328125,
				0.9130859375,
				0.9140625,
				0.90625,
				0.8984375,
				0.869140625,
				0.84765625,
				0.78125,
				0.7333984375,
				0.6748046875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-7.5,
				88.75
			]
		},
		{
			"id": "Vr4boJiklhSo05RJsULzV",
			"type": "freedraw",
			"x": 3583.485432031316,
			"y": 1712.5173992674006,
			"width": 26.25,
			"height": 2.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1785803185,
			"version": 52,
			"versionNonce": 541682417,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					-1.25,
					-1.25
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-1.25
				],
				[
					3.75,
					-1.25
				],
				[
					6.25,
					-2.5
				],
				[
					10,
					-2.5
				],
				[
					11.25,
					-2.5
				],
				[
					16.25,
					-2.5
				],
				[
					20,
					-2.5
				],
				[
					22.5,
					-2.5
				],
				[
					25,
					-2.5
				],
				[
					25,
					-2.5
				]
			],
			"pressures": [
				0.369140625,
				0.3818359375,
				0.40625,
				0.59375,
				0.6298828125,
				0.638671875,
				0.646484375,
				0.65625,
				0.658203125,
				0.6552734375,
				0.6435546875,
				0.6103515625,
				0.583984375,
				0.546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				25,
				-2.5
			]
		},
		{
			"id": "LEwcv1KIzxYPnOiQ6cvvs",
			"type": "freedraw",
			"x": 3588.485432031316,
			"y": 1726.2673992674006,
			"width": 23.75,
			"height": 2.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1724887217,
			"version": 53,
			"versionNonce": 1938536607,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					1.25
				],
				[
					-5,
					1.25
				],
				[
					-6.25,
					1.25
				],
				[
					-7.5,
					1.25
				],
				[
					-8.75,
					1.25
				],
				[
					-7.5,
					1.25
				],
				[
					-6.25,
					1.25
				],
				[
					-5,
					1.25
				],
				[
					-1.25,
					1.25
				],
				[
					0,
					1.25
				],
				[
					5,
					0
				],
				[
					10,
					0
				],
				[
					15,
					-1.25
				],
				[
					15,
					-1.25
				]
			],
			"pressures": [
				0.4580078125,
				0.453125,
				0.4599609375,
				0.466796875,
				0.486328125,
				0.509765625,
				0.54296875,
				0.595703125,
				0.623046875,
				0.6298828125,
				0.640625,
				0.6416015625,
				0.6259765625,
				0.5791015625,
				0.5009765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15,
				-1.25
			]
		},
		{
			"id": "NDOOz_6nM2P-L1zuyC5lD",
			"type": "freedraw",
			"x": 3624.735432031316,
			"y": 1681.2673992674006,
			"width": 40,
			"height": 67.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 823238623,
			"version": 76,
			"versionNonce": 648078545,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-5,
					1.25
				],
				[
					-5,
					2.5
				],
				[
					-5,
					3.75
				],
				[
					-3.75,
					5
				],
				[
					-2.5,
					6.25
				],
				[
					-1.25,
					6.25
				],
				[
					1.25,
					8.75
				],
				[
					3.75,
					10
				],
				[
					8.75,
					11.25
				],
				[
					10,
					12.5
				],
				[
					15,
					13.75
				],
				[
					18.75,
					15
				],
				[
					23.75,
					16.25
				],
				[
					25,
					17.5
				],
				[
					28.75,
					18.75
				],
				[
					31.25,
					21.25
				],
				[
					32.5,
					22.5
				],
				[
					35,
					23.75
				],
				[
					35,
					25
				],
				[
					35,
					27.5
				],
				[
					35,
					28.75
				],
				[
					33.75,
					32.5
				],
				[
					32.5,
					33.75
				],
				[
					31.25,
					36.25
				],
				[
					30,
					38.75
				],
				[
					28.75,
					41.25
				],
				[
					26.25,
					45
				],
				[
					21.25,
					50
				],
				[
					18.75,
					53.75
				],
				[
					13.75,
					58.75
				],
				[
					11.25,
					61.25
				],
				[
					7.5,
					65
				],
				[
					6.25,
					66.25
				],
				[
					5,
					67.5
				],
				[
					5,
					67.5
				]
			],
			"pressures": [
				0.3603515625,
				0.3837890625,
				0.4443359375,
				0.5126953125,
				0.576171875,
				0.6171875,
				0.650390625,
				0.6640625,
				0.6728515625,
				0.67578125,
				0.6796875,
				0.681640625,
				0.6826171875,
				0.68359375,
				0.68359375,
				0.6845703125,
				0.6865234375,
				0.689453125,
				0.69921875,
				0.712890625,
				0.72265625,
				0.7451171875,
				0.7578125,
				0.7724609375,
				0.7861328125,
				0.814453125,
				0.828125,
				0.8408203125,
				0.853515625,
				0.86328125,
				0.873046875,
				0.8857421875,
				0.888671875,
				0.8798828125,
				0.865234375,
				0.8037109375,
				0.7568359375,
				0.6962890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				5,
				67.5
			]
		},
		{
			"id": "mhReLSCPZ80bNItmrvAYd",
			"type": "freedraw",
			"x": 3805.985432031316,
			"y": 1683.7673992674006,
			"width": 47.5,
			"height": 50,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 479402591,
			"version": 68,
			"versionNonce": 1005145279,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					-1.25,
					-2.5
				],
				[
					-1.25,
					-3.75
				],
				[
					-2.5,
					-5
				],
				[
					-3.75,
					-6.25
				],
				[
					-5,
					-6.25
				],
				[
					-6.25,
					-6.25
				],
				[
					-8.75,
					-6.25
				],
				[
					-10,
					-5
				],
				[
					-11.25,
					-3.75
				],
				[
					-13.75,
					-1.25
				],
				[
					-16.25,
					2.5
				],
				[
					-18.75,
					7.5
				],
				[
					-18.75,
					10
				],
				[
					-20,
					16.25
				],
				[
					-21.25,
					18.75
				],
				[
					-21.25,
					21.25
				],
				[
					-20,
					26.25
				],
				[
					-20,
					28.75
				],
				[
					-18.75,
					31.25
				],
				[
					-15,
					36.25
				],
				[
					-13.75,
					37.5
				],
				[
					-11.25,
					38.75
				],
				[
					-5,
					41.25
				],
				[
					2.5,
					42.5
				],
				[
					10,
					43.75
				],
				[
					13.75,
					43.75
				],
				[
					22.5,
					42.5
				],
				[
					26.25,
					41.25
				],
				[
					26.25,
					41.25
				]
			],
			"pressures": [
				0.1923828125,
				0.19921875,
				0.2470703125,
				0.30859375,
				0.3818359375,
				0.4970703125,
				0.5478515625,
				0.5947265625,
				0.6533203125,
				0.669921875,
				0.697265625,
				0.720703125,
				0.7421875,
				0.76171875,
				0.771484375,
				0.7880859375,
				0.796875,
				0.8056640625,
				0.8212890625,
				0.828125,
				0.8330078125,
				0.8427734375,
				0.845703125,
				0.8486328125,
				0.845703125,
				0.8310546875,
				0.8037109375,
				0.7822265625,
				0.708984375,
				0.65234375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				26.25,
				41.25
			]
		},
		{
			"id": "mrJ-fXq9_xkBH9SyTrtwp",
			"type": "freedraw",
			"x": 3959.735432031316,
			"y": 1695.0173992674006,
			"width": 85,
			"height": 70,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1231223903,
			"version": 68,
			"versionNonce": 1269703345,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-2.5
				],
				[
					3.75,
					-2.5
				],
				[
					5,
					-2.5
				],
				[
					5,
					-1.25
				],
				[
					5,
					0
				],
				[
					6.25,
					0
				],
				[
					6.25,
					1.25
				],
				[
					6.25,
					2.5
				],
				[
					7.5,
					3.75
				],
				[
					8.75,
					6.25
				],
				[
					8.75,
					7.5
				],
				[
					10,
					10
				],
				[
					11.25,
					11.25
				],
				[
					11.25,
					12.5
				],
				[
					12.5,
					12.5
				],
				[
					12.5,
					13.75
				],
				[
					13.75,
					13.75
				],
				[
					16.25,
					12.5
				],
				[
					18.75,
					11.25
				],
				[
					21.25,
					8.75
				],
				[
					25,
					6.25
				],
				[
					28.75,
					2.5
				],
				[
					40,
					-8.75
				],
				[
					45,
					-15
				],
				[
					58.75,
					-28.75
				],
				[
					72.5,
					-42.5
				],
				[
					85,
					-56.25
				],
				[
					85,
					-56.25
				]
			],
			"pressures": [
				0.1484375,
				0.1533203125,
				0.166015625,
				0.228515625,
				0.333984375,
				0.4501953125,
				0.7666015625,
				0.814453125,
				0.818359375,
				0.8251953125,
				0.828125,
				0.83203125,
				0.84375,
				0.84765625,
				0.853515625,
				0.857421875,
				0.859375,
				0.8642578125,
				0.8681640625,
				0.8720703125,
				0.8798828125,
				0.8828125,
				0.8876953125,
				0.8916015625,
				0.89453125,
				0.896484375,
				0.8916015625,
				0.8623046875,
				0.80078125,
				0.693359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				85,
				-56.25
			]
		},
		{
			"id": "V2Au8Lp6Jxl4ns6WOkkdu",
			"type": "freedraw",
			"x": 2819.735432031316,
			"y": 1851.2673992674006,
			"width": 1.25,
			"height": 70,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1764679263,
			"version": 53,
			"versionNonce": 666852575,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					0,
					0
				],
				[
					0,
					1.25
				],
				[
					0,
					2.5
				],
				[
					1.25,
					5
				],
				[
					1.25,
					11.25
				],
				[
					1.25,
					17.5
				],
				[
					1.25,
					21.25
				],
				[
					1.25,
					31.25
				],
				[
					1.25,
					41.25
				],
				[
					1.25,
					46.25
				],
				[
					1.25,
					55
				],
				[
					1.25,
					60
				],
				[
					1.25,
					68.75
				],
				[
					1.25,
					68.75
				]
			],
			"pressures": [
				0.244140625,
				0.2744140625,
				0.32421875,
				0.3671875,
				0.392578125,
				0.4453125,
				0.4912109375,
				0.5244140625,
				0.5380859375,
				0.55859375,
				0.5673828125,
				0.5634765625,
				0.53515625,
				0.509765625,
				0.4365234375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1.25,
				68.75
			]
		},
		{
			"id": "BvcvdfRMMwtoanGPyTalS",
			"type": "freedraw",
			"x": 2843.485432031316,
			"y": 1883.7673992674006,
			"width": 35,
			"height": 61.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 611523089,
			"version": 87,
			"versionNonce": 1008247953,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					-3.75
				],
				[
					2.5,
					-6.25
				],
				[
					2.5,
					-7.5
				],
				[
					3.75,
					-8.75
				],
				[
					5,
					-11.25
				],
				[
					6.25,
					-13.75
				],
				[
					8.75,
					-15
				],
				[
					11.25,
					-17.5
				],
				[
					12.5,
					-18.75
				],
				[
					13.75,
					-20
				],
				[
					17.5,
					-20
				],
				[
					18.75,
					-20
				],
				[
					22.5,
					-18.75
				],
				[
					25,
					-15
				],
				[
					27.5,
					-11.25
				],
				[
					28.75,
					-8.75
				],
				[
					30,
					-2.5
				],
				[
					31.25,
					5
				],
				[
					30,
					12.5
				],
				[
					30,
					16.25
				],
				[
					28.75,
					23.75
				],
				[
					26.25,
					30
				],
				[
					25,
					32.5
				],
				[
					22.5,
					36.25
				],
				[
					20,
					38.75
				],
				[
					17.5,
					41.25
				],
				[
					16.25,
					41.25
				],
				[
					12.5,
					41.25
				],
				[
					10,
					40
				],
				[
					7.5,
					38.75
				],
				[
					6.25,
					37.5
				],
				[
					3.75,
					35
				],
				[
					2.5,
					33.75
				],
				[
					1.25,
					31.25
				],
				[
					0,
					30
				],
				[
					0,
					28.75
				],
				[
					1.25,
					27.5
				],
				[
					2.5,
					26.25
				],
				[
					5,
					26.25
				],
				[
					8.75,
					26.25
				],
				[
					10,
					26.25
				],
				[
					13.75,
					27.5
				],
				[
					17.5,
					28.75
				],
				[
					22.5,
					30
				],
				[
					25,
					31.25
				],
				[
					28.75,
					32.5
				],
				[
					32.5,
					33.75
				],
				[
					35,
					35
				],
				[
					35,
					35
				]
			],
			"pressures": [
				0.1669921875,
				0.177734375,
				0.1953125,
				0.20703125,
				0.2177734375,
				0.24609375,
				0.2890625,
				0.31640625,
				0.3759765625,
				0.40625,
				0.4384765625,
				0.498046875,
				0.525390625,
				0.5751953125,
				0.615234375,
				0.64453125,
				0.654296875,
				0.669921875,
				0.6796875,
				0.6845703125,
				0.6865234375,
				0.6875,
				0.685546875,
				0.6826171875,
				0.673828125,
				0.6611328125,
				0.6455078125,
				0.6357421875,
				0.6181640625,
				0.603515625,
				0.591796875,
				0.5869140625,
				0.580078125,
				0.578125,
				0.5732421875,
				0.572265625,
				0.5712890625,
				0.5693359375,
				0.5712890625,
				0.5810546875,
				0.591796875,
				0.5986328125,
				0.6123046875,
				0.625,
				0.6328125,
				0.63671875,
				0.634765625,
				0.6142578125,
				0.5927734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				35,
				35
			]
		},
		{
			"id": "fea3qhZVhcGYbKJeV0kpa",
			"type": "freedraw",
			"x": 3017.235432031316,
			"y": 1857.5173992674006,
			"width": 47.5,
			"height": 92.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1997461151,
			"version": 88,
			"versionNonce": 715024639,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-2.5
				],
				[
					2.5,
					-2.5
				],
				[
					2.5,
					-3.75
				],
				[
					1.25,
					-3.75
				],
				[
					-1.25,
					-3.75
				],
				[
					-3.75,
					-2.5
				],
				[
					-6.25,
					-2.5
				],
				[
					-7.5,
					-2.5
				],
				[
					-11.25,
					-1.25
				],
				[
					-15,
					-1.25
				],
				[
					-17.5,
					-1.25
				],
				[
					-20,
					-1.25
				],
				[
					-22.5,
					-1.25
				],
				[
					-25,
					-1.25
				],
				[
					-27.5,
					-1.25
				],
				[
					-30,
					-1.25
				],
				[
					-32.5,
					0
				],
				[
					-33.75,
					0
				],
				[
					-35,
					1.25
				],
				[
					-36.25,
					3.75
				],
				[
					-37.5,
					5
				],
				[
					-38.75,
					10
				],
				[
					-40,
					15
				],
				[
					-40,
					21.25
				],
				[
					-41.25,
					25
				],
				[
					-42.5,
					32.5
				],
				[
					-42.5,
					37.5
				],
				[
					-43.75,
					45
				],
				[
					-43.75,
					50
				],
				[
					-45,
					57.5
				],
				[
					-45,
					66.25
				],
				[
					-45,
					72.5
				],
				[
					-45,
					75
				],
				[
					-45,
					80
				],
				[
					-43.75,
					85
				],
				[
					-43.75,
					86.25
				],
				[
					-42.5,
					87.5
				],
				[
					-41.25,
					87.5
				],
				[
					-40,
					88.75
				],
				[
					-38.75,
					88.75
				],
				[
					-36.25,
					88.75
				],
				[
					-35,
					88.75
				],
				[
					-31.25,
					87.5
				],
				[
					-27.5,
					87.5
				],
				[
					-25,
					86.25
				],
				[
					-22.5,
					86.25
				],
				[
					-18.75,
					85
				],
				[
					-17.5,
					83.75
				],
				[
					-17.5,
					83.75
				]
			],
			"pressures": [
				0.244140625,
				0.2451171875,
				0.2578125,
				0.3076171875,
				0.345703125,
				0.5810546875,
				0.6142578125,
				0.6279296875,
				0.6376953125,
				0.640625,
				0.64453125,
				0.6484375,
				0.6513671875,
				0.65234375,
				0.6552734375,
				0.65625,
				0.6572265625,
				0.6572265625,
				0.658203125,
				0.658203125,
				0.6591796875,
				0.6591796875,
				0.6591796875,
				0.6591796875,
				0.658203125,
				0.658203125,
				0.6572265625,
				0.658203125,
				0.658203125,
				0.658203125,
				0.658203125,
				0.6591796875,
				0.658203125,
				0.6572265625,
				0.6572265625,
				0.6572265625,
				0.658203125,
				0.6591796875,
				0.6611328125,
				0.6630859375,
				0.6650390625,
				0.66796875,
				0.6708984375,
				0.671875,
				0.673828125,
				0.6689453125,
				0.650390625,
				0.630859375,
				0.5654296875,
				0.5166015625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-17.5,
				83.75
			]
		},
		{
			"id": "YYHQ5bYOECDxkPZcASAlO",
			"type": "freedraw",
			"x": 3080.985432031316,
			"y": 1872.5173992674006,
			"width": 31.25,
			"height": 66.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1276104159,
			"version": 85,
			"versionNonce": 597158513,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					0
				],
				[
					1.25,
					1.25
				],
				[
					1.25,
					3.75
				],
				[
					0,
					7.5
				],
				[
					0,
					10
				],
				[
					-2.5,
					15
				],
				[
					-5,
					22.5
				],
				[
					-7.5,
					30
				],
				[
					-8.75,
					33.75
				],
				[
					-12.5,
					41.25
				],
				[
					-15,
					47.5
				],
				[
					-17.5,
					52.5
				],
				[
					-18.75,
					55
				],
				[
					-20,
					57.5
				],
				[
					-20,
					58.75
				],
				[
					-20,
					57.5
				],
				[
					-20,
					56.25
				],
				[
					-20,
					53.75
				],
				[
					-18.75,
					48.75
				],
				[
					-17.5,
					46.25
				],
				[
					-16.25,
					40
				],
				[
					-15,
					32.5
				],
				[
					-13.75,
					25
				],
				[
					-12.5,
					22.5
				],
				[
					-11.25,
					15
				],
				[
					-11.25,
					12.5
				],
				[
					-10,
					6.25
				],
				[
					-10,
					3.75
				],
				[
					-8.75,
					0
				],
				[
					-7.5,
					-3.75
				],
				[
					-6.25,
					-6.25
				],
				[
					-6.25,
					-7.5
				],
				[
					-3.75,
					-7.5
				],
				[
					-2.5,
					-6.25
				],
				[
					-1.25,
					-3.75
				],
				[
					0,
					-2.5
				],
				[
					1.25,
					2.5
				],
				[
					3.75,
					8.75
				],
				[
					3.75,
					12.5
				],
				[
					6.25,
					20
				],
				[
					7.5,
					27.5
				],
				[
					8.75,
					35
				],
				[
					8.75,
					38.75
				],
				[
					10,
					46.25
				],
				[
					11.25,
					51.25
				],
				[
					11.25,
					52.5
				],
				[
					11.25,
					52.5
				]
			],
			"pressures": [
				0.236328125,
				0.2431640625,
				0.369140625,
				0.40234375,
				0.42578125,
				0.4345703125,
				0.4453125,
				0.4541015625,
				0.462890625,
				0.46484375,
				0.4677734375,
				0.4609375,
				0.4365234375,
				0.41796875,
				0.3720703125,
				0.34765625,
				0.26171875,
				0.2314453125,
				0.1796875,
				0.1396484375,
				0.125,
				0.103515625,
				0.09375,
				0.09765625,
				0.10546875,
				0.1259765625,
				0.138671875,
				0.1689453125,
				0.1875,
				0.2236328125,
				0.259765625,
				0.30078125,
				0.322265625,
				0.3662109375,
				0.40625,
				0.4462890625,
				0.4658203125,
				0.49609375,
				0.5166015625,
				0.5244140625,
				0.537109375,
				0.544921875,
				0.5458984375,
				0.541015625,
				0.515625,
				0.4658203125,
				0.4287109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11.25,
				52.5
			]
		},
		{
			"id": "ZwRvWDv0rFgkBRA14Y0hh",
			"type": "freedraw",
			"x": 3065.985432031316,
			"y": 1902.5173992674006,
			"width": 26.25,
			"height": 8.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 258646161,
			"version": 54,
			"versionNonce": 1913057567,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					-2.5
				],
				[
					-3.75,
					-3.75
				],
				[
					-5,
					-3.75
				],
				[
					-5,
					-5
				],
				[
					-6.25,
					-5
				],
				[
					-6.25,
					-6.25
				],
				[
					-6.25,
					-7.5
				],
				[
					-5,
					-7.5
				],
				[
					-3.75,
					-7.5
				],
				[
					0,
					-7.5
				],
				[
					1.25,
					-7.5
				],
				[
					6.25,
					-7.5
				],
				[
					11.25,
					-7.5
				],
				[
					13.75,
					-7.5
				],
				[
					20,
					-8.75
				],
				[
					20,
					-8.75
				]
			],
			"pressures": [
				0.2861328125,
				0.306640625,
				0.3310546875,
				0.341796875,
				0.349609375,
				0.3662109375,
				0.3720703125,
				0.4013671875,
				0.4755859375,
				0.490234375,
				0.5166015625,
				0.52734375,
				0.5400390625,
				0.53125,
				0.515625,
				0.4580078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				20,
				-8.75
			]
		},
		{
			"id": "NCogkFw8KxbWQtEifSd2e",
			"type": "freedraw",
			"x": 3094.735432031316,
			"y": 1903.7673992674006,
			"width": 16.25,
			"height": 5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1335371121,
			"version": 49,
			"versionNonce": 1257469009,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					1.25
				],
				[
					-3.75,
					1.25
				],
				[
					-2.5,
					0
				],
				[
					-1.25,
					0
				],
				[
					0,
					0
				],
				[
					3.75,
					-1.25
				],
				[
					5,
					-2.5
				],
				[
					10,
					-3.75
				],
				[
					12.5,
					-3.75
				],
				[
					12.5,
					-3.75
				]
			],
			"pressures": [
				0.4384765625,
				0.4462890625,
				0.4716796875,
				0.5576171875,
				0.623046875,
				0.623046875,
				0.61328125,
				0.580078125,
				0.5517578125,
				0.4765625,
				0.4296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				12.5,
				-3.75
			]
		},
		{
			"id": "vqzEj_OtWo1U247yy2opS",
			"type": "freedraw",
			"x": 3117.235432031316,
			"y": 1908.7673992674006,
			"width": 13.75,
			"height": 1.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1081508575,
			"version": 49,
			"versionNonce": 661222719,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-2.5,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					0,
					1.25
				],
				[
					2.5,
					1.25
				],
				[
					6.25,
					1.25
				],
				[
					7.5,
					1.25
				],
				[
					10,
					1.25
				],
				[
					10,
					1.25
				]
			],
			"pressures": [
				0.33203125,
				0.3408203125,
				0.3720703125,
				0.4560546875,
				0.5302734375,
				0.533203125,
				0.5302734375,
				0.509765625,
				0.46484375,
				0.43359375,
				0.396484375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				1.25
			]
		},
		{
			"id": "N3vVBpgTBvjwp5ye4xKtV",
			"type": "freedraw",
			"x": 3204.735432031316,
			"y": 1885.0173992674006,
			"width": 33.75,
			"height": 51.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1652882897,
			"version": 96,
			"versionNonce": 1979892273,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					0,
					-2.5
				],
				[
					0,
					-3.75
				],
				[
					0,
					-5
				],
				[
					0,
					-6.25
				],
				[
					0,
					-7.5
				],
				[
					-1.25,
					-8.75
				],
				[
					-1.25,
					-11.25
				],
				[
					-3.75,
					-13.75
				],
				[
					-6.25,
					-16.25
				],
				[
					-7.5,
					-17.5
				],
				[
					-10,
					-17.5
				],
				[
					-11.25,
					-17.5
				],
				[
					-13.75,
					-17.5
				],
				[
					-15,
					-17.5
				],
				[
					-17.5,
					-16.25
				],
				[
					-17.5,
					-15
				],
				[
					-18.75,
					-13.75
				],
				[
					-18.75,
					-11.25
				],
				[
					-17.5,
					-7.5
				],
				[
					-16.25,
					-6.25
				],
				[
					-15,
					-5
				],
				[
					-12.5,
					-1.25
				],
				[
					-8.75,
					2.5
				],
				[
					-5,
					6.25
				],
				[
					-3.75,
					7.5
				],
				[
					0,
					11.25
				],
				[
					3.75,
					15
				],
				[
					6.25,
					18.75
				],
				[
					7.5,
					21.25
				],
				[
					7.5,
					25
				],
				[
					8.75,
					27.5
				],
				[
					7.5,
					30
				],
				[
					7.5,
					31.25
				],
				[
					5,
					32.5
				],
				[
					2.5,
					33.75
				],
				[
					0,
					33.75
				],
				[
					-1.25,
					32.5
				],
				[
					-5,
					31.25
				],
				[
					-7.5,
					30
				],
				[
					-10,
					28.75
				],
				[
					-12.5,
					26.25
				],
				[
					-13.75,
					23.75
				],
				[
					-15,
					21.25
				],
				[
					-15,
					20
				],
				[
					-15,
					16.25
				],
				[
					-15,
					13.75
				],
				[
					-12.5,
					10
				],
				[
					-11.25,
					8.75
				],
				[
					-8.75,
					6.25
				],
				[
					-5,
					2.5
				],
				[
					-1.25,
					0
				],
				[
					1.25,
					-1.25
				],
				[
					5,
					-3.75
				],
				[
					7.5,
					-6.25
				],
				[
					12.5,
					-7.5
				],
				[
					15,
					-8.75
				],
				[
					15,
					-8.75
				]
			],
			"pressures": [
				0.2666015625,
				0.2841796875,
				0.3310546875,
				0.36328125,
				0.390625,
				0.4306640625,
				0.45703125,
				0.482421875,
				0.5234375,
				0.55859375,
				0.599609375,
				0.6171875,
				0.630859375,
				0.6357421875,
				0.642578125,
				0.64453125,
				0.646484375,
				0.646484375,
				0.646484375,
				0.646484375,
				0.6455078125,
				0.64453125,
				0.6455078125,
				0.646484375,
				0.6474609375,
				0.646484375,
				0.646484375,
				0.646484375,
				0.6455078125,
				0.6455078125,
				0.6455078125,
				0.64453125,
				0.6416015625,
				0.6357421875,
				0.6318359375,
				0.6220703125,
				0.6123046875,
				0.6064453125,
				0.603515625,
				0.6025390625,
				0.60546875,
				0.6083984375,
				0.6142578125,
				0.62109375,
				0.6279296875,
				0.630859375,
				0.63671875,
				0.6416015625,
				0.6455078125,
				0.646484375,
				0.6474609375,
				0.6494140625,
				0.6484375,
				0.6455078125,
				0.626953125,
				0.609375,
				0.5419921875,
				0.4931640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15,
				-8.75
			]
		},
		{
			"id": "HhMgOPIKDzHQ_V_BML8HB",
			"type": "freedraw",
			"x": 3239.735432031316,
			"y": 1846.2673992674006,
			"width": 53.75,
			"height": 95,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1374489105,
			"version": 92,
			"versionNonce": 1915123039,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					-1.25
				],
				[
					-1.25,
					-2.5
				],
				[
					-2.5,
					-3.75
				],
				[
					-1.25,
					-3.75
				],
				[
					-1.25,
					-2.5
				],
				[
					0,
					-2.5
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-1.25
				],
				[
					5,
					0
				],
				[
					6.25,
					1.25
				],
				[
					7.5,
					1.25
				],
				[
					10,
					2.5
				],
				[
					12.5,
					2.5
				],
				[
					13.75,
					2.5
				],
				[
					16.25,
					3.75
				],
				[
					17.5,
					3.75
				],
				[
					20,
					3.75
				],
				[
					21.25,
					3.75
				],
				[
					23.75,
					5
				],
				[
					25,
					5
				],
				[
					26.25,
					6.25
				],
				[
					27.5,
					7.5
				],
				[
					28.75,
					8.75
				],
				[
					28.75,
					10
				],
				[
					30,
					13.75
				],
				[
					30,
					15
				],
				[
					31.25,
					20
				],
				[
					31.25,
					22.5
				],
				[
					31.25,
					26.25
				],
				[
					32.5,
					32.5
				],
				[
					33.75,
					36.25
				],
				[
					33.75,
					38.75
				],
				[
					36.25,
					46.25
				],
				[
					38.75,
					53.75
				],
				[
					40,
					57.5
				],
				[
					42.5,
					61.25
				],
				[
					43.75,
					65
				],
				[
					45,
					67.5
				],
				[
					46.25,
					70
				],
				[
					48.75,
					75
				],
				[
					50,
					77.5
				],
				[
					51.25,
					78.75
				],
				[
					51.25,
					80
				],
				[
					51.25,
					81.25
				],
				[
					51.25,
					82.5
				],
				[
					50,
					83.75
				],
				[
					47.5,
					85
				],
				[
					46.25,
					86.25
				],
				[
					43.75,
					87.5
				],
				[
					37.5,
					88.75
				],
				[
					30,
					90
				],
				[
					27.5,
					90
				],
				[
					20,
					91.25
				],
				[
					20,
					91.25
				]
			],
			"pressures": [
				0.2822265625,
				0.2939453125,
				0.365234375,
				0.4638671875,
				0.6826171875,
				0.697265625,
				0.7236328125,
				0.7431640625,
				0.7548828125,
				0.76171875,
				0.765625,
				0.7666015625,
				0.7685546875,
				0.7685546875,
				0.76953125,
				0.7705078125,
				0.7705078125,
				0.76953125,
				0.76953125,
				0.7705078125,
				0.7705078125,
				0.7724609375,
				0.7734375,
				0.7763671875,
				0.7783203125,
				0.7822265625,
				0.78515625,
				0.791015625,
				0.7939453125,
				0.796875,
				0.8037109375,
				0.806640625,
				0.8095703125,
				0.8125,
				0.814453125,
				0.8154296875,
				0.818359375,
				0.8212890625,
				0.8271484375,
				0.833984375,
				0.8525390625,
				0.86328125,
				0.875,
				0.88671875,
				0.896484375,
				0.90625,
				0.9140625,
				0.923828125,
				0.92578125,
				0.923828125,
				0.91015625,
				0.8779296875,
				0.853515625,
				0.7802734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				20,
				91.25
			]
		},
		{
			"id": "7sparhTZKFD3wvruu88B0",
			"type": "freedraw",
			"x": 3385.985432031316,
			"y": 1887.5173992674006,
			"width": 11.25,
			"height": 3.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1300747921,
			"version": 50,
			"versionNonce": 28136465,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					1.25
				],
				[
					-2.5,
					0
				],
				[
					-1.25,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					3.75,
					-2.5
				],
				[
					6.25,
					-2.5
				],
				[
					8.75,
					-2.5
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.5283203125,
				0.5390625,
				0.5615234375,
				0.611328125,
				0.6435546875,
				0.64453125,
				0.64453125,
				0.642578125,
				0.6259765625,
				0.5810546875,
				0.5,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				8.75,
				-2.5
			]
		},
		{
			"id": "GPEOfDvikgRKwtisFPX2v",
			"type": "freedraw",
			"x": 3379.735432031316,
			"y": 1911.2673992674006,
			"width": 17.5,
			"height": 0,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1227297713,
			"version": 52,
			"versionNonce": 965636479,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-5,
					0
				],
				[
					-6.25,
					0
				],
				[
					-7.5,
					0
				],
				[
					-6.25,
					0
				],
				[
					-3.75,
					0
				],
				[
					-2.5,
					0
				],
				[
					0,
					0
				],
				[
					3.75,
					0
				],
				[
					7.5,
					0
				],
				[
					10,
					0
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.3798828125,
				0.3994140625,
				0.431640625,
				0.4580078125,
				0.482421875,
				0.517578125,
				0.5322265625,
				0.5478515625,
				0.55078125,
				0.5498046875,
				0.52734375,
				0.474609375,
				0.4375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				0
			]
		},
		{
			"id": "83vRJ0j1tr09fjPIJzFLY",
			"type": "freedraw",
			"x": 3423.485432031316,
			"y": 1867.5173992674006,
			"width": 31.25,
			"height": 63.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 671322801,
			"version": 72,
			"versionNonce": 1105897969,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					0
				],
				[
					-3.75,
					0
				],
				[
					-5,
					0
				],
				[
					-6.25,
					1.25
				],
				[
					-7.5,
					1.25
				],
				[
					-8.75,
					2.5
				],
				[
					-8.75,
					3.75
				],
				[
					-8.75,
					5
				],
				[
					-7.5,
					6.25
				],
				[
					-6.25,
					7.5
				],
				[
					-3.75,
					8.75
				],
				[
					-2.5,
					10
				],
				[
					0,
					11.25
				],
				[
					3.75,
					12.5
				],
				[
					6.25,
					13.75
				],
				[
					10,
					15
				],
				[
					13.75,
					17.5
				],
				[
					17.5,
					20
				],
				[
					18.75,
					21.25
				],
				[
					20,
					23.75
				],
				[
					21.25,
					26.25
				],
				[
					22.5,
					30
				],
				[
					22.5,
					32.5
				],
				[
					21.25,
					36.25
				],
				[
					20,
					38.75
				],
				[
					18.75,
					41.25
				],
				[
					17.5,
					43.75
				],
				[
					13.75,
					48.75
				],
				[
					11.25,
					51.25
				],
				[
					6.25,
					56.25
				],
				[
					3.75,
					57.5
				],
				[
					-1.25,
					61.25
				],
				[
					-6.25,
					63.75
				],
				[
					-6.25,
					63.75
				]
			],
			"pressures": [
				0.310546875,
				0.3271484375,
				0.37890625,
				0.4365234375,
				0.4921875,
				0.5166015625,
				0.5693359375,
				0.578125,
				0.5859375,
				0.5888671875,
				0.58984375,
				0.5908203125,
				0.5908203125,
				0.591796875,
				0.59375,
				0.5966796875,
				0.6064453125,
				0.623046875,
				0.6474609375,
				0.662109375,
				0.6943359375,
				0.7109375,
				0.744140625,
				0.7607421875,
				0.7880859375,
				0.7998046875,
				0.8095703125,
				0.8173828125,
				0.8291015625,
				0.83203125,
				0.82421875,
				0.8115234375,
				0.76171875,
				0.662109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-6.25,
				63.75
			]
		},
		{
			"id": "Xto268wc3u2k0IFH-AZz9",
			"type": "freedraw",
			"x": 3524.735432031316,
			"y": 1881.2673992674006,
			"width": 38.75,
			"height": 76.25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 110483569,
			"version": 89,
			"versionNonce": 652339615,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					1.25
				],
				[
					-2.5,
					2.5
				],
				[
					-3.75,
					2.5
				],
				[
					-5,
					6.25
				],
				[
					-6.25,
					10
				],
				[
					-8.75,
					18.75
				],
				[
					-10,
					22.5
				],
				[
					-10,
					27.5
				],
				[
					-12.5,
					40
				],
				[
					-13.75,
					43.75
				],
				[
					-15,
					47.5
				],
				[
					-16.25,
					55
				],
				[
					-16.25,
					57.5
				],
				[
					-17.5,
					62.5
				],
				[
					-17.5,
					65
				],
				[
					-17.5,
					66.25
				],
				[
					-16.25,
					63.75
				],
				[
					-15,
					60
				],
				[
					-13.75,
					57.5
				],
				[
					-12.5,
					52.5
				],
				[
					-11.25,
					45
				],
				[
					-11.25,
					41.25
				],
				[
					-10,
					33.75
				],
				[
					-8.75,
					25
				],
				[
					-8.75,
					17.5
				],
				[
					-7.5,
					13.75
				],
				[
					-6.25,
					6.25
				],
				[
					-5,
					0
				],
				[
					-3.75,
					-5
				],
				[
					-2.5,
					-6.25
				],
				[
					-1.25,
					-8.75
				],
				[
					0,
					-10
				],
				[
					1.25,
					-10
				],
				[
					2.5,
					-10
				],
				[
					3.75,
					-7.5
				],
				[
					5,
					-3.75
				],
				[
					7.5,
					1.25
				],
				[
					7.5,
					5
				],
				[
					10,
					11.25
				],
				[
					11.25,
					20
				],
				[
					12.5,
					23.75
				],
				[
					13.75,
					32.5
				],
				[
					15,
					40
				],
				[
					17.5,
					47.5
				],
				[
					17.5,
					51.25
				],
				[
					18.75,
					56.25
				],
				[
					20,
					58.75
				],
				[
					21.25,
					60
				],
				[
					21.25,
					60
				]
			],
			"pressures": [
				0.4150390625,
				0.4169921875,
				0.4501953125,
				0.466796875,
				0.498046875,
				0.5166015625,
				0.5556640625,
				0.5927734375,
				0.6416015625,
				0.654296875,
				0.6650390625,
				0.681640625,
				0.6806640625,
				0.6748046875,
				0.6455078125,
				0.6220703125,
				0.5625,
				0.482421875,
				0.435546875,
				0.2412109375,
				0.16015625,
				0.1240234375,
				0.068359375,
				0.0390625,
				0.033203125,
				0.0390625,
				0.068359375,
				0.1162109375,
				0.14453125,
				0.20703125,
				0.26953125,
				0.326171875,
				0.353515625,
				0.4072265625,
				0.4599609375,
				0.5107421875,
				0.53515625,
				0.578125,
				0.6103515625,
				0.6318359375,
				0.6396484375,
				0.6484375,
				0.65234375,
				0.654296875,
				0.65625,
				0.654296875,
				0.642578125,
				0.630859375,
				0.5869140625,
				0.552734375,
				0.509765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				21.25,
				60
			]
		},
		{
			"id": "pTXVnbT7nDVFOTuFHED0s",
			"type": "freedraw",
			"x": 3517.235432031316,
			"y": 1913.7673992674006,
			"width": 40,
			"height": 10,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1337014879,
			"version": 55,
			"versionNonce": 532825041,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2.5,
					-2.5
				],
				[
					-3.75,
					-5
				],
				[
					-5,
					-5
				],
				[
					-6.25,
					-6.25
				],
				[
					-6.25,
					-7.5
				],
				[
					-7.5,
					-7.5
				],
				[
					-6.25,
					-7.5
				],
				[
					-5,
					-7.5
				],
				[
					-1.25,
					-6.25
				],
				[
					2.5,
					-6.25
				],
				[
					6.25,
					-6.25
				],
				[
					11.25,
					-6.25
				],
				[
					18.75,
					-7.5
				],
				[
					25,
					-8.75
				],
				[
					28.75,
					-10
				],
				[
					32.5,
					-10
				],
				[
					32.5,
					-10
				]
			],
			"pressures": [
				0.279296875,
				0.296875,
				0.3486328125,
				0.3671875,
				0.3974609375,
				0.4384765625,
				0.4697265625,
				0.59765625,
				0.6328125,
				0.65625,
				0.6650390625,
				0.6640625,
				0.6494140625,
				0.6123046875,
				0.548828125,
				0.505859375,
				0.455078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				32.5,
				-10
			]
		},
		{
			"id": "rrOOPF7EehmLvgaRZBwvp",
			"type": "freedraw",
			"x": 3600.985432031316,
			"y": 1897.5173992674006,
			"width": 50,
			"height": 47.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2054722545,
			"version": 66,
			"versionNonce": 1733385663,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-1.25,
					1.25
				],
				[
					-2.5,
					1.25
				],
				[
					-2.5,
					2.5
				],
				[
					-3.75,
					3.75
				],
				[
					-3.75,
					5
				],
				[
					-5,
					6.25
				],
				[
					-5,
					8.75
				],
				[
					-5,
					10
				],
				[
					-5,
					12.5
				],
				[
					-5,
					15
				],
				[
					-5,
					16.25
				],
				[
					-5,
					18.75
				],
				[
					-5,
					20
				],
				[
					-3.75,
					21.25
				],
				[
					-3.75,
					22.5
				],
				[
					-1.25,
					23.75
				],
				[
					0,
					23.75
				],
				[
					1.25,
					23.75
				],
				[
					2.5,
					23.75
				],
				[
					5,
					22.5
				],
				[
					10,
					17.5
				],
				[
					13.75,
					15
				],
				[
					21.25,
					6.25
				],
				[
					30,
					-3.75
				],
				[
					40,
					-16.25
				],
				[
					45,
					-23.75
				],
				[
					45,
					-23.75
				]
			],
			"pressures": [
				0.3583984375,
				0.380859375,
				0.4169921875,
				0.45703125,
				0.490234375,
				0.5458984375,
				0.5732421875,
				0.62109375,
				0.658203125,
				0.6748046875,
				0.7041015625,
				0.7294921875,
				0.740234375,
				0.759765625,
				0.7685546875,
				0.7763671875,
				0.78515625,
				0.80078125,
				0.80859375,
				0.818359375,
				0.8271484375,
				0.8359375,
				0.849609375,
				0.8515625,
				0.84375,
				0.8095703125,
				0.7353515625,
				0.677734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				45,
				-23.75
			]
		},
		{
			"id": "_AY3JeYjK4Q9kSYH1GKah",
			"type": "freedraw",
			"x": 2893.485432031316,
			"y": 2156.267399267401,
			"width": 70,
			"height": 85,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1693039633,
			"version": 102,
			"versionNonce": 2001445297,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					-1.25
				],
				[
					1.25,
					-3.75
				],
				[
					1.25,
					-5
				],
				[
					1.25,
					-6.25
				],
				[
					2.5,
					-7.5
				],
				[
					2.5,
					-10
				],
				[
					2.5,
					-11.25
				],
				[
					3.75,
					-15
				],
				[
					3.75,
					-16.25
				],
				[
					5,
					-20
				],
				[
					6.25,
					-23.75
				],
				[
					7.5,
					-27.5
				],
				[
					8.75,
					-28.75
				],
				[
					11.25,
					-31.25
				],
				[
					15,
					-33.75
				],
				[
					20,
					-36.25
				],
				[
					22.5,
					-36.25
				],
				[
					27.5,
					-37.5
				],
				[
					32.5,
					-37.5
				],
				[
					37.5,
					-36.25
				],
				[
					40,
					-36.25
				],
				[
					45,
					-33.75
				],
				[
					47.5,
					-31.25
				],
				[
					48.75,
					-28.75
				],
				[
					51.25,
					-25
				],
				[
					52.5,
					-20
				],
				[
					52.5,
					-16.25
				],
				[
					52.5,
					-13.75
				],
				[
					51.25,
					-8.75
				],
				[
					50,
					-3.75
				],
				[
					48.75,
					0
				],
				[
					47.5,
					1.25
				],
				[
					46.25,
					5
				],
				[
					46.25,
					7.5
				],
				[
					46.25,
					10
				],
				[
					46.25,
					11.25
				],
				[
					47.5,
					13.75
				],
				[
					48.75,
					16.25
				],
				[
					51.25,
					18.75
				],
				[
					52.5,
					20
				],
				[
					56.25,
					22.5
				],
				[
					58.75,
					25
				],
				[
					61.25,
					27.5
				],
				[
					63.75,
					30
				],
				[
					66.25,
					32.5
				],
				[
					68.75,
					36.25
				],
				[
					70,
					37.5
				],
				[
					70,
					40
				],
				[
					68.75,
					42.5
				],
				[
					67.5,
					45
				],
				[
					66.25,
					46.25
				],
				[
					63.75,
					47.5
				],
				[
					62.5,
					47.5
				],
				[
					57.5,
					47.5
				],
				[
					55,
					47.5
				],
				[
					50,
					46.25
				],
				[
					43.75,
					45
				],
				[
					37.5,
					42.5
				],
				[
					35,
					41.25
				],
				[
					27.5,
					38.75
				],
				[
					21.25,
					36.25
				],
				[
					18.75,
					36.25
				],
				[
					15,
					33.75
				],
				[
					15,
					33.75
				]
			],
			"pressures": [
				0.1904296875,
				0.19140625,
				0.2099609375,
				0.2353515625,
				0.25,
				0.28125,
				0.3232421875,
				0.353515625,
				0.4140625,
				0.44140625,
				0.4853515625,
				0.5166015625,
				0.537109375,
				0.5439453125,
				0.55078125,
				0.5556640625,
				0.5615234375,
				0.564453125,
				0.5693359375,
				0.5732421875,
				0.578125,
				0.580078125,
				0.5859375,
				0.5908203125,
				0.5927734375,
				0.5966796875,
				0.599609375,
				0.6005859375,
				0.6005859375,
				0.599609375,
				0.599609375,
				0.5986328125,
				0.5986328125,
				0.5986328125,
				0.5986328125,
				0.5986328125,
				0.5986328125,
				0.5986328125,
				0.59765625,
				0.599609375,
				0.6015625,
				0.6103515625,
				0.6259765625,
				0.6357421875,
				0.66015625,
				0.6875,
				0.7119140625,
				0.72265625,
				0.7431640625,
				0.7568359375,
				0.7646484375,
				0.7666015625,
				0.7705078125,
				0.771484375,
				0.7734375,
				0.7734375,
				0.7734375,
				0.7734375,
				0.7685546875,
				0.76171875,
				0.73828125,
				0.69140625,
				0.6572265625,
				0.55859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15,
				33.75
			]
		},
		{
			"id": "fYoe34B_xQZJxiQy_wYYr",
			"type": "freedraw",
			"x": 3048.485432031316,
			"y": 2158.767399267401,
			"width": 28.75,
			"height": 40,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1642663409,
			"version": 77,
			"versionNonce": 771575263,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					-1.25,
					-2.5
				],
				[
					-2.5,
					-2.5
				],
				[
					-5,
					-2.5
				],
				[
					-7.5,
					-1.25
				],
				[
					-11.25,
					0
				],
				[
					-12.5,
					1.25
				],
				[
					-15,
					2.5
				],
				[
					-17.5,
					5
				],
				[
					-18.75,
					7.5
				],
				[
					-18.75,
					8.75
				],
				[
					-17.5,
					10
				],
				[
					-17.5,
					11.25
				],
				[
					-15,
					12.5
				],
				[
					-13.75,
					12.5
				],
				[
					-11.25,
					13.75
				],
				[
					-7.5,
					15
				],
				[
					-5,
					15
				],
				[
					-1.25,
					17.5
				],
				[
					2.5,
					18.75
				],
				[
					3.75,
					20
				],
				[
					6.25,
					22.5
				],
				[
					7.5,
					23.75
				],
				[
					8.75,
					25
				],
				[
					10,
					26.25
				],
				[
					8.75,
					28.75
				],
				[
					8.75,
					31.25
				],
				[
					6.25,
					32.5
				],
				[
					5,
					33.75
				],
				[
					2.5,
					35
				],
				[
					-1.25,
					36.25
				],
				[
					-2.5,
					37.5
				],
				[
					-6.25,
					37.5
				],
				[
					-10,
					37.5
				],
				[
					-12.5,
					37.5
				],
				[
					-13.75,
					36.25
				],
				[
					-13.75,
					35
				],
				[
					-15,
					33.75
				],
				[
					-15,
					33.75
				]
			],
			"pressures": [
				0.21484375,
				0.224609375,
				0.2763671875,
				0.291015625,
				0.33984375,
				0.3798828125,
				0.416015625,
				0.43359375,
				0.4677734375,
				0.4912109375,
				0.5048828125,
				0.5107421875,
				0.513671875,
				0.5146484375,
				0.5166015625,
				0.517578125,
				0.5185546875,
				0.51953125,
				0.5224609375,
				0.533203125,
				0.5517578125,
				0.5625,
				0.5888671875,
				0.603515625,
				0.6171875,
				0.6416015625,
				0.658203125,
				0.66796875,
				0.673828125,
				0.6748046875,
				0.6728515625,
				0.6611328125,
				0.650390625,
				0.615234375,
				0.5537109375,
				0.470703125,
				0.4248046875,
				0.326171875,
				0.2763671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-15,
				33.75
			]
		},
		{
			"id": "cXl68boKb_mOtUH1hpUoP",
			"type": "freedraw",
			"x": 3049.735432031316,
			"y": 2175.017399267401,
			"width": 68.75,
			"height": 38.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1185472543,
			"version": 116,
			"versionNonce": 900613009,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.25,
					-1.25
				],
				[
					3.75,
					-2.5
				],
				[
					6.25,
					-3.75
				],
				[
					7.5,
					-3.75
				],
				[
					8.75,
					-3.75
				],
				[
					10,
					-3.75
				],
				[
					12.5,
					-3.75
				],
				[
					15,
					-2.5
				],
				[
					16.25,
					-1.25
				],
				[
					16.25,
					0
				],
				[
					17.5,
					3.75
				],
				[
					17.5,
					6.25
				],
				[
					18.75,
					11.25
				],
				[
					18.75,
					12.5
				],
				[
					18.75,
					16.25
				],
				[
					20,
					20
				],
				[
					20,
					21.25
				],
				[
					20,
					22.5
				],
				[
					21.25,
					23.75
				],
				[
					22.5,
					23.75
				],
				[
					23.75,
					22.5
				],
				[
					25,
					22.5
				],
				[
					26.25,
					20
				],
				[
					27.5,
					17.5
				],
				[
					30,
					13.75
				],
				[
					30,
					12.5
				],
				[
					32.5,
					10
				],
				[
					33.75,
					7.5
				],
				[
					33.75,
					6.25
				],
				[
					35,
					6.25
				],
				[
					35,
					5
				],
				[
					36.25,
					6.25
				],
				[
					37.5,
					8.75
				],
				[
					37.5,
					11.25
				],
				[
					38.75,
					12.5
				],
				[
					40,
					16.25
				],
				[
					41.25,
					20
				],
				[
					42.5,
					21.25
				],
				[
					43.75,
					23.75
				],
				[
					46.25,
					26.25
				],
				[
					47.5,
					27.5
				],
				[
					48.75,
					27.5
				],
				[
					50,
					27.5
				],
				[
					51.25,
					26.25
				],
				[
					52.5,
					26.25
				],
				[
					52.5,
					23.75
				],
				[
					52.5,
					22.5
				],
				[
					52.5,
					21.25
				],
				[
					52.5,
					17.5
				],
				[
					51.25,
					15
				],
				[
					50,
					12.5
				],
				[
					50,
					11.25
				],
				[
					48.75,
					7.5
				],
				[
					47.5,
					5
				],
				[
					47.5,
					2.5
				],
				[
					47.5,
					0
				],
				[
					48.75,
					-1.25
				],
				[
					50,
					-1.25
				],
				[
					52.5,
					-2.5
				],
				[
					55,
					-3.75
				],
				[
					57.5,
					-3.75
				],
				[
					58.75,
					-3.75
				],
				[
					61.25,
					-3.75
				],
				[
					62.5,
					-3.75
				],
				[
					65,
					-2.5
				],
				[
					65,
					-1.25
				],
				[
					67.5,
					0
				],
				[
					67.5,
					3.75
				],
				[
					68.75,
					6.25
				],
				[
					68.75,
					8.75
				],
				[
					68.75,
					13.75
				],
				[
					68.75,
					16.25
				],
				[
					68.75,
					21.25
				],
				[
					68.75,
					25
				],
				[
					68.75,
					27.5
				],
				[
					68.75,
					32.5
				],
				[
					67.5,
					35
				],
				[
					67.5,
					35
				]
			],
			"pressures": [
				0.07421875,
				0.087890625,
				0.107421875,
				0.1279296875,
				0.1474609375,
				0.173828125,
				0.2138671875,
				0.2666015625,
				0.3212890625,
				0.373046875,
				0.396484375,
				0.43359375,
				0.4638671875,
				0.484375,
				0.4912109375,
				0.5009765625,
				0.5048828125,
				0.505859375,
				0.505859375,
				0.5009765625,
				0.490234375,
				0.4560546875,
				0.4423828125,
				0.4140625,
				0.3857421875,
				0.3564453125,
				0.3447265625,
				0.326171875,
				0.3115234375,
				0.306640625,
				0.2998046875,
				0.2998046875,
				0.3046875,
				0.3232421875,
				0.33984375,
				0.349609375,
				0.373046875,
				0.3974609375,
				0.408203125,
				0.4267578125,
				0.4482421875,
				0.4755859375,
				0.490234375,
				0.51953125,
				0.53515625,
				0.5634765625,
				0.583984375,
				0.58984375,
				0.595703125,
				0.58984375,
				0.568359375,
				0.5263671875,
				0.4990234375,
				0.4287109375,
				0.34765625,
				0.23828125,
				0.1884765625,
				0.15625,
				0.146484375,
				0.1357421875,
				0.1337890625,
				0.1357421875,
				0.1396484375,
				0.1552734375,
				0.166015625,
				0.212890625,
				0.232421875,
				0.275390625,
				0.3203125,
				0.359375,
				0.3759765625,
				0.4033203125,
				0.4150390625,
				0.4306640625,
				0.4326171875,
				0.427734375,
				0.3984375,
				0.341796875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				67.5,
				35
			]
		},
		{
			"id": "mRaj6LZTOzNaN8BVqP0k-",
			"type": "freedraw",
			"x": 3122.235432031316,
			"y": 2145.017399267401,
			"width": 8.75,
			"height": 58.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 907040031,
			"version": 62,
			"versionNonce": 1979070975,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					0,
					-2.5
				],
				[
					1.25,
					-3.75
				],
				[
					2.5,
					-2.5
				],
				[
					2.5,
					-1.25
				],
				[
					3.75,
					1.25
				],
				[
					3.75,
					2.5
				],
				[
					5,
					5
				],
				[
					6.25,
					8.75
				],
				[
					7.5,
					10
				],
				[
					7.5,
					13.75
				],
				[
					7.5,
					16.25
				],
				[
					8.75,
					20
				],
				[
					8.75,
					25
				],
				[
					8.75,
					27.5
				],
				[
					8.75,
					32.5
				],
				[
					7.5,
					37.5
				],
				[
					7.5,
					40
				],
				[
					7.5,
					45
				],
				[
					7.5,
					48.75
				],
				[
					7.5,
					51.25
				],
				[
					7.5,
					52.5
				],
				[
					7.5,
					55
				],
				[
					7.5,
					55
				]
			],
			"pressures": [
				0.17578125,
				0.181640625,
				0.19921875,
				0.25390625,
				0.3251953125,
				0.3291015625,
				0.3330078125,
				0.33203125,
				0.3251953125,
				0.3154296875,
				0.310546875,
				0.302734375,
				0.298828125,
				0.2939453125,
				0.291015625,
				0.2900390625,
				0.2919921875,
				0.2890625,
				0.2822265625,
				0.26171875,
				0.236328125,
				0.2001953125,
				0.1787109375,
				0.1337890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7.5,
				55
			]
		},
		{
			"id": "ClIAxoQlgXTSK5ACbzzdB",
			"type": "freedraw",
			"x": 3120.985432031316,
			"y": 2171.267399267401,
			"width": 50,
			"height": 42.5,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1717523135,
			"version": 83,
			"versionNonce": 924952945,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1.25
				],
				[
					1.25,
					-1.25
				],
				[
					2.5,
					-1.25
				],
				[
					5,
					0
				],
				[
					6.25,
					0
				],
				[
					8.75,
					0
				],
				[
					11.25,
					0
				],
				[
					15,
					0
				],
				[
					16.25,
					0
				],
				[
					20,
					-1.25
				],
				[
					22.5,
					-1.25
				],
				[
					25,
					-2.5
				],
				[
					27.5,
					-3.75
				],
				[
					30,
					-5
				],
				[
					32.5,
					-5
				],
				[
					33.75,
					-6.25
				],
				[
					35,
					-7.5
				],
				[
					36.25,
					-8.75
				],
				[
					37.5,
					-10
				],
				[
					37.5,
					-11.25
				],
				[
					37.5,
					-12.5
				],
				[
					36.25,
					-12.5
				],
				[
					35,
					-12.5
				],
				[
					33.75,
					-12.5
				],
				[
					32.5,
					-11.25
				],
				[
					30,
					-8.75
				],
				[
					27.5,
					-6.25
				],
				[
					26.25,
					-5
				],
				[
					23.75,
					-1.25
				],
				[
					22.5,
					3.75
				],
				[
					21.25,
					7.5
				],
				[
					21.25,
					10
				],
				[
					21.25,
					15
				],
				[
					22.5,
					20
				],
				[
					22.5,
					21.25
				],
				[
					25,
					25
				],
				[
					28.75,
					28.75
				],
				[
					31.25,
					30
				],
				[
					33.75,
					30
				],
				[
					37.5,
					30
				],
				[
					41.25,
					27.5
				],
				[
					45,
					23.75
				],
				[
					46.25,
					20
				],
				[
					50,
					13.75
				],
				[
					50,
					13.75
				]
			],
			"pressures": [
				0.1904296875,
				0.22265625,
				0.3779296875,
				0.4580078125,
				0.486328125,
				0.4912109375,
				0.498046875,
				0.4990234375,
				0.4951171875,
				0.490234375,
				0.4716796875,
				0.443359375,
				0.4267578125,
				0.390625,
				0.3505859375,
				0.3310546875,
				0.314453125,
				0.2900390625,
				0.283203125,
				0.2734375,
				0.2685546875,
				0.2744140625,
				0.2880859375,
				0.3046875,
				0.31640625,
				0.3466796875,
				0.3837890625,
				0.419921875,
				0.4365234375,
				0.4638671875,
				0.4814453125,
				0.490234375,
				0.4921875,
				0.494140625,
				0.4951171875,
				0.4951171875,
				0.4951171875,
				0.4921875,
				0.482421875,
				0.4736328125,
				0.4423828125,
				0.396484375,
				0.337890625,
				0.302734375,
				0.2294921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				50,
				13.75
			]
		},
		{
			"id": "aEzXqqCL4X7vy99FJDAPp",
			"type": "freedraw",
			"x": 3182.235432031316,
			"y": 2132.517399267401,
			"width": 75,
			"height": 78.75,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1554160593,
			"version": 130,
			"versionNonce": 71082527,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2.5
				],
				[
					0,
					-5
				],
				[
					0,
					-6.25
				],
				[
					0,
					-7.5
				],
				[
					-1.25,
					-7.5
				],
				[
					-1.25,
					-8.75
				],
				[
					-2.5,
					-7.5
				],
				[
					-2.5,
					-6.25
				],
				[
					-3.75,
					-2.5
				],
				[
					-3.75,
					-1.25
				],
				[
					-3.75,
					3.75
				],
				[
					-3.75,
					10
				],
				[
					-3.75,
					15
				],
				[
					-3.75,
					18.75
				],
				[
					-3.75,
					25
				],
				[
					-2.5,
					32.5
				],
				[
					-2.5,
					38.75
				],
				[
					-1.25,
					42.5
				],
				[
					0,
					48.75
				],
				[
					0,
					55
				],
				[
					1.25,
					57.5
				],
				[
					2.5,
					61.25
				],
				[
					3.75,
					62.5
				],
				[
					5,
					65
				],
				[
					6.25,
					66.25
				],
				[
					7.5,
					66.25
				],
				[
					10,
					63.75
				],
				[
					11.25,
					61.25
				],
				[
					12.5,
					56.25
				],
				[
					13.75,
					55
				],
				[
					16.25,
					48.75
				],
				[
					17.5,
					43.75
				],
				[
					20,
					38.75
				],
				[
					20,
					36.25
				],
				[
					21.25,
					31.25
				],
				[
					22.5,
					27.5
				],
				[
					23.75,
					26.25
				],
				[
					23.75,
					25
				],
				[
					25,
					23.75
				],
				[
					23.75,
					25
				],
				[
					23.75,
					26.25
				],
				[
					23.75,
					27.5
				],
				[
					23.75,
					30
				],
				[
					22.5,
					35
				],
				[
					22.5,
					38.75
				],
				[
					22.5,
					42.5
				],
				[
					22.5,
					47.5
				],
				[
					23.75,
					50
				],
				[
					25,
					55
				],
				[
					26.25,
					60
				],
				[
					27.5,
					65
				],
				[
					28.75,
					66.25
				],
				[
					31.25,
					68.75
				],
				[
					35,
					70
				],
				[
					36.25,
					70
				],
				[
					38.75,
					70
				],
				[
					41.25,
					67.5
				],
				[
					42.5,
					66.25
				],
				[
					45,
					62.5
				],
				[
					47.5,
					58.75
				],
				[
					47.5,
					56.25
				],
				[
					50,
					51.25
				],
				[
					50,
					47.5
				],
				[
					51.25,
					42.5
				],
				[
					51.25,
					40
				],
				[
					50,
					36.25
				],
				[
					50,
					33.75
				],
				[
					48.75,
					31.25
				],
				[
					47.5,
					31.25
				],
				[
					46.25,
					31.25
				],
				[
					45,
					31.25
				],
				[
					43.75,
					32.5
				],
				[
					42.5,
					35
				],
				[
					41.25,
					37.5
				],
				[
					41.25,
					41.25
				],
				[
					41.25,
					42.5
				],
				[
					41.25,
					46.25
				],
				[
					42.5,
					50
				],
				[
					43.75,
					53.75
				],
				[
					43.75,
					55
				],
				[
					46.25,
					58.75
				],
				[
					50,
					60
				],
				[
					52.5,
					61.25
				],
				[
					53.75,
					61.25
				],
				[
					57.5,
					61.25
				],
				[
					61.25,
					58.75
				],
				[
					63.75,
					56.25
				],
				[
					65,
					55
				],
				[
					67.5,
					51.25
				],
				[
					70,
					47.5
				],
				[
					71.25,
					45
				],
				[
					71.25,
					45
				]
			],
			"pressures": [
				0.0966796875,
				0.1103515625,
				0.13671875,
				0.169921875,
				0.185546875,
				0.22265625,
				0.259765625,
				0.3291015625,
				0.3662109375,
				0.400390625,
				0.4189453125,
				0.451171875,
				0.4814453125,
				0.509765625,
				0.5224609375,
				0.5439453125,
				0.5595703125,
				0.5693359375,
				0.5732421875,
				0.5771484375,
				0.5791015625,
				0.580078125,
				0.5771484375,
				0.5732421875,
				0.5595703125,
				0.53515625,
				0.498046875,
				0.423828125,
				0.3740234375,
				0.326171875,
				0.3046875,
				0.271484375,
				0.2490234375,
				0.234375,
				0.23046875,
				0.2275390625,
				0.234375,
				0.2392578125,
				0.24609375,
				0.2626953125,
				0.3388671875,
				0.3583984375,
				0.37890625,
				0.4228515625,
				0.466796875,
				0.505859375,
				0.5234375,
				0.55078125,
				0.5625,
				0.578125,
				0.587890625,
				0.5927734375,
				0.5927734375,
				0.591796875,
				0.5849609375,
				0.578125,
				0.560546875,
				0.53515625,
				0.521484375,
				0.4912109375,
				0.45703125,
				0.439453125,
				0.4052734375,
				0.3779296875,
				0.353515625,
				0.3447265625,
				0.3330078125,
				0.3330078125,
				0.337890625,
				0.341796875,
				0.3515625,
				0.35546875,
				0.3681640625,
				0.380859375,
				0.3896484375,
				0.396484375,
				0.400390625,
				0.4033203125,
				0.40234375,
				0.40234375,
				0.4033203125,
				0.4052734375,
				0.4033203125,
				0.3955078125,
				0.388671875,
				0.365234375,
				0.3271484375,
				0.2802734375,
				0.255859375,
				0.205078125,
				0.154296875,
				0.1298828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				71.25,
				45
			]
		},
		{
			"id": "fwgG6Kpbl_uCSuvBnpdwr",
			"type": "freedraw",
			"x": 3254.735432031316,
			"y": 2157.517399267401,
			"width": 22.5,
			"height": 55,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1519549425,
			"version": 64,
			"versionNonce": 1693274961,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1.25,
					0
				],
				[
					-2.5,
					1.25
				],
				[
					-2.5,
					2.5
				],
				[
					-2.5,
					3.75
				],
				[
					-2.5,
					6.25
				],
				[
					-2.5,
					7.5
				],
				[
					-1.25,
					10
				],
				[
					0,
					13.75
				],
				[
					1.25,
					15
				],
				[
					5,
					20
				],
				[
					7.5,
					23.75
				],
				[
					10,
					27.5
				],
				[
					12.5,
					30
				],
				[
					16.25,
					36.25
				],
				[
					18.75,
					40
				],
				[
					18.75,
					41.25
				],
				[
					20,
					46.25
				],
				[
					20,
					48.75
				],
				[
					18.75,
					51.25
				],
				[
					17.5,
					52.5
				],
				[
					15,
					53.75
				],
				[
					11.25,
					55
				],
				[
					8.75,
					55
				],
				[
					6.25,
					55
				],
				[
					2.5,
					55
				],
				[
					2.5,
					55
				]
			],
			"pressures": [
				0.0634765625,
				0.0966796875,
				0.1376953125,
				0.166015625,
				0.19921875,
				0.23046875,
				0.24609375,
				0.279296875,
				0.318359375,
				0.3359375,
				0.3720703125,
				0.4091796875,
				0.44921875,
				0.46875,
				0.525390625,
				0.5595703125,
				0.576171875,
				0.6171875,
				0.6376953125,
				0.650390625,
				0.6552734375,
				0.6611328125,
				0.66015625,
				0.642578125,
				0.6220703125,
				0.5517578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2.5,
				55
			]
		},
		{
			"id": "DE6r-SO6dyZlBLYm3KjMZ",
			"type": "freedraw",
			"x": 3292.235432031316,
			"y": 2171.267399267401,
			"width": 10,
			"height": 0,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 936383025,
			"version": 46,
			"versionNonce": 700515903,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					3.75,
					0
				],
				[
					5,
					0
				],
				[
					6.25,
					0
				],
				[
					7.5,
					0
				],
				[
					8.75,
					0
				],
				[
					10,
					0
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.35546875,
				0.388671875,
				0.421875,
				0.439453125,
				0.4580078125,
				0.474609375,
				0.44921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				0
			]
		},
		{
			"id": "U17ApmHJYt6yZEiBn8Ixe",
			"type": "image",
			"x": 4638.735432031316,
			"y": -94.9826007325994,
			"width": 1492.8,
			"height": 360,
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
			"seed": 1052764657,
			"version": 92,
			"versionNonce": 325632305,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "eaf08f98080ce3a2d38aa7a60d6f10483f2b0af7",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "O0I4lGlTJzTz-LSot-5Bj",
			"type": "image",
			"x": 4637.985432031316,
			"y": 259.2673992674006,
			"width": 1497.2499999999998,
			"height": 1368.7157772621808,
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
			"seed": 1884172369,
			"version": 235,
			"versionNonce": 1164174943,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "ab96b9b74153b7a77af0d482d123ac8cc216ca71",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "iikbQPCd",
			"type": "text",
			"x": 4695.664003459888,
			"y": 1909.053113553115,
			"width": 962,
			"height": 1273,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 198273023,
			"version": 483,
			"versionNonce": 536572689,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"text": "int main()\n{ \n    int pid;\n    pid = fork();\n    if(pid < 0)\n    {\n        fprintf(stderr, \"Fork Failed\");\n        return 1;\n    }\n    else if(pid == 0)\n    {\n        excelp(\"/bin/ls\", \"ls\", NULL);\n    }\n    else\n    {\n        wait();\n    }\n    return 0;\n}",
			"rawText": "int main()\n{ \n    int pid;\n    pid = fork();\n    if(pid < 0)\n    {\n        fprintf(stderr, \"Fork Failed\");\n        return 1;\n    }\n    else if(pid == 0)\n    {\n        excelp(\"/bin/ls\", \"ls\", NULL);\n    }\n    else\n    {\n        wait();\n    }\n    return 0;\n}",
			"fontSize": 53.33333333333323,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 1253,
			"containerId": null,
			"originalText": "int main()\n{ \n    int pid;\n    pid = fork();\n    if(pid < 0)\n    {\n        fprintf(stderr, \"Fork Failed\");\n        return 1;\n    }\n    else if(pid == 0)\n    {\n        excelp(\"/bin/ls\", \"ls\", NULL);\n    }\n    else\n    {\n        wait();\n    }\n    return 0;\n}"
		},
		{
			"id": "4obJjEqXdfWP4d-XF8LyS",
			"type": "image",
			"x": 6731.164003459888,
			"y": -91.94688644688495,
			"width": 995.5839416058394,
			"height": 433,
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
			"seed": 968600991,
			"version": 185,
			"versionNonce": 99992191,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "9266780d44146174f4f800ff69e4f4b96749c221",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "ESQ19Rjw",
			"type": "text",
			"x": 6828.164003459888,
			"y": 391.80311355311505,
			"width": 847,
			"height": 125,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "sharp",
			"seed": 1793045041,
			"version": 289,
			"versionNonce": 1327294705,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"text": "No, Process and C could occur concurrently and so C might process before A finishes.\nSo it would not go in the proposed order\n\nA deadlock free solution may be\n",
			"rawText": "No, Process and C could occur concurrently and so C might process before A finishes.\nSo it would not go in the proposed order\n\nA deadlock free solution may be\n",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 118,
			"containerId": null,
			"originalText": "No, Process and C could occur concurrently and so C might process before A finishes.\nSo it would not go in the proposed order\n\nA deadlock free solution may be\n"
		},
		{
			"id": "vw7rmD100HKZ7SuwTT5-r",
			"type": "freedraw",
			"x": 6891.164003459888,
			"y": 538.803113553115,
			"width": 23,
			"height": 42,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1578538303,
			"version": 83,
			"versionNonce": 1815550623,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					2
				],
				[
					0,
					5
				],
				[
					0,
					6
				],
				[
					-1,
					11
				],
				[
					-1,
					13
				],
				[
					-3,
					18
				],
				[
					-4,
					24
				],
				[
					-5,
					26
				],
				[
					-7,
					31
				],
				[
					-8,
					35
				],
				[
					-9,
					38
				],
				[
					-9,
					39
				],
				[
					-10,
					40
				],
				[
					-10,
					38
				],
				[
					-10,
					35
				],
				[
					-10,
					32
				],
				[
					-10,
					30
				],
				[
					-9,
					25
				],
				[
					-8,
					21
				],
				[
					-7,
					16
				],
				[
					-7,
					14
				],
				[
					-5,
					10
				],
				[
					-4,
					7
				],
				[
					-3,
					4
				],
				[
					-2,
					3
				],
				[
					-1,
					3
				],
				[
					0,
					2
				],
				[
					1,
					2
				],
				[
					2,
					3
				],
				[
					3,
					4
				],
				[
					3,
					5
				],
				[
					4,
					8
				],
				[
					6,
					12
				],
				[
					6,
					14
				],
				[
					8,
					18
				],
				[
					9,
					22
				],
				[
					10,
					27
				],
				[
					10,
					29
				],
				[
					11,
					31
				],
				[
					11,
					35
				],
				[
					12,
					37
				],
				[
					12,
					40
				],
				[
					13,
					41
				],
				[
					13,
					41
				]
			],
			"pressures": [
				0.1103515625,
				0.1162109375,
				0.22265625,
				0.353515625,
				0.400390625,
				0.4384765625,
				0.453125,
				0.4736328125,
				0.48046875,
				0.490234375,
				0.4970703125,
				0.4970703125,
				0.4833984375,
				0.4501953125,
				0.4013671875,
				0.373046875,
				0.3115234375,
				0.1982421875,
				0.1337890625,
				0.0986328125,
				0.0830078125,
				0.0556640625,
				0.0400390625,
				0.041015625,
				0.046875,
				0.0693359375,
				0.1025390625,
				0.1435546875,
				0.1669921875,
				0.193359375,
				0.248046875,
				0.298828125,
				0.3212890625,
				0.3642578125,
				0.3837890625,
				0.4150390625,
				0.431640625,
				0.4365234375,
				0.4443359375,
				0.4482421875,
				0.447265625,
				0.4462890625,
				0.4453125,
				0.44140625,
				0.43359375,
				0.3994140625,
				0.3720703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				13,
				41
			]
		},
		{
			"id": "WdkMhXHrq0goTxs1DBfT-",
			"type": "freedraw",
			"x": 6890.164003459888,
			"y": 556.803113553115,
			"width": 26,
			"height": 6,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1530699569,
			"version": 53,
			"versionNonce": 1783931601,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-2,
					0
				],
				[
					-3,
					0
				],
				[
					-3,
					1
				],
				[
					-2,
					2
				],
				[
					-1,
					3
				],
				[
					0,
					3
				],
				[
					1,
					5
				],
				[
					4,
					6
				],
				[
					7,
					6
				],
				[
					9,
					6
				],
				[
					13,
					6
				],
				[
					16,
					6
				],
				[
					20,
					5
				],
				[
					22,
					4
				],
				[
					23,
					4
				],
				[
					23,
					4
				]
			],
			"pressures": [
				0.3828125,
				0.3857421875,
				0.4296875,
				0.4921875,
				0.5517578125,
				0.5849609375,
				0.61328125,
				0.6259765625,
				0.64453125,
				0.65625,
				0.6640625,
				0.666015625,
				0.6669921875,
				0.66015625,
				0.63671875,
				0.6162109375,
				0.5859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				23,
				4
			]
		},
		{
			"id": "p6yGbk_E9gLUM9-v8B_JD",
			"type": "freedraw",
			"x": 7194.164003459888,
			"y": 540.803113553115,
			"width": 32,
			"height": 58,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 437008767,
			"version": 127,
			"versionNonce": 215510719,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					1,
					-3
				],
				[
					1,
					-2
				],
				[
					1,
					0
				],
				[
					2,
					2
				],
				[
					2,
					4
				],
				[
					3,
					7
				],
				[
					4,
					11
				],
				[
					4,
					16
				],
				[
					4,
					18
				],
				[
					5,
					23
				],
				[
					5,
					27
				],
				[
					5,
					30
				],
				[
					6,
					32
				],
				[
					6,
					35
				],
				[
					6,
					36
				],
				[
					6,
					37
				],
				[
					6,
					38
				],
				[
					6,
					37
				],
				[
					6,
					35
				],
				[
					5,
					32
				],
				[
					5,
					28
				],
				[
					5,
					25
				],
				[
					5,
					20
				],
				[
					4,
					15
				],
				[
					4,
					9
				],
				[
					4,
					6
				],
				[
					4,
					0
				],
				[
					5,
					-5
				],
				[
					6,
					-9
				],
				[
					6,
					-11
				],
				[
					7,
					-14
				],
				[
					8,
					-16
				],
				[
					9,
					-17
				],
				[
					10,
					-19
				],
				[
					11,
					-20
				],
				[
					12,
					-20
				],
				[
					13,
					-20
				],
				[
					14,
					-20
				],
				[
					16,
					-19
				],
				[
					17,
					-18
				],
				[
					18,
					-17
				],
				[
					19,
					-15
				],
				[
					20,
					-12
				],
				[
					20,
					-10
				],
				[
					21,
					-9
				],
				[
					21,
					-6
				],
				[
					21,
					-4
				],
				[
					20,
					-3
				],
				[
					19,
					-2
				],
				[
					19,
					0
				],
				[
					18,
					1
				],
				[
					17,
					1
				],
				[
					16,
					1
				],
				[
					16,
					2
				],
				[
					15,
					2
				],
				[
					16,
					2
				],
				[
					16,
					3
				],
				[
					17,
					3
				],
				[
					19,
					4
				],
				[
					20,
					5
				],
				[
					22,
					7
				],
				[
					23,
					8
				],
				[
					25,
					10
				],
				[
					26,
					11
				],
				[
					28,
					13
				],
				[
					29,
					15
				],
				[
					30,
					17
				],
				[
					31,
					19
				],
				[
					32,
					21
				],
				[
					32,
					23
				],
				[
					32,
					24
				],
				[
					32,
					26
				],
				[
					31,
					28
				],
				[
					30,
					29
				],
				[
					29,
					30
				],
				[
					28,
					31
				],
				[
					25,
					32
				],
				[
					23,
					32
				],
				[
					22,
					32
				],
				[
					19,
					33
				],
				[
					16,
					33
				],
				[
					14,
					33
				],
				[
					11,
					32
				],
				[
					9,
					31
				],
				[
					6,
					30
				],
				[
					5,
					30
				],
				[
					3,
					28
				],
				[
					2,
					26
				],
				[
					0,
					24
				],
				[
					0,
					24
				]
			],
			"pressures": [
				0.0537109375,
				0.060546875,
				0.0947265625,
				0.15234375,
				0.2626953125,
				0.275390625,
				0.3115234375,
				0.3291015625,
				0.3349609375,
				0.34375,
				0.3486328125,
				0.353515625,
				0.35546875,
				0.3583984375,
				0.3603515625,
				0.3603515625,
				0.3603515625,
				0.361328125,
				0.3623046875,
				0.3642578125,
				0.3662109375,
				0.376953125,
				0.3798828125,
				0.3798828125,
				0.3818359375,
				0.3818359375,
				0.3818359375,
				0.3818359375,
				0.3818359375,
				0.3818359375,
				0.3818359375,
				0.380859375,
				0.3798828125,
				0.3798828125,
				0.37890625,
				0.3798828125,
				0.3798828125,
				0.380859375,
				0.3818359375,
				0.3837890625,
				0.384765625,
				0.38671875,
				0.396484375,
				0.4052734375,
				0.4091796875,
				0.416015625,
				0.421875,
				0.42578125,
				0.4287109375,
				0.4326171875,
				0.4375,
				0.44140625,
				0.4482421875,
				0.4560546875,
				0.4619140625,
				0.46484375,
				0.47265625,
				0.4765625,
				0.482421875,
				0.4794921875,
				0.4794921875,
				0.4794921875,
				0.4794921875,
				0.4794921875,
				0.4794921875,
				0.48046875,
				0.4814453125,
				0.482421875,
				0.48828125,
				0.498046875,
				0.50390625,
				0.51953125,
				0.5400390625,
				0.560546875,
				0.5712890625,
				0.591796875,
				0.611328125,
				0.626953125,
				0.6337890625,
				0.6455078125,
				0.654296875,
				0.662109375,
				0.666015625,
				0.6728515625,
				0.677734375,
				0.6787109375,
				0.6826171875,
				0.681640625,
				0.67578125,
				0.669921875,
				0.6455078125,
				0.6005859375,
				0.5244140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				24
			]
		},
		{
			"id": "3GCHKtetrqARCLRgVQ9-k",
			"type": "freedraw",
			"x": 7533.164003459888,
			"y": 527.803113553115,
			"width": 33,
			"height": 41,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1403700753,
			"version": 73,
			"versionNonce": 507125937,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					-1
				],
				[
					-2,
					-1
				],
				[
					-3,
					-1
				],
				[
					-4,
					-2
				],
				[
					-5,
					-2
				],
				[
					-6,
					-2
				],
				[
					-7,
					-2
				],
				[
					-9,
					-1
				],
				[
					-11,
					-1
				],
				[
					-12,
					0
				],
				[
					-14,
					1
				],
				[
					-16,
					3
				],
				[
					-17,
					4
				],
				[
					-19,
					6
				],
				[
					-21,
					7
				],
				[
					-23,
					10
				],
				[
					-25,
					13
				],
				[
					-26,
					17
				],
				[
					-27,
					18
				],
				[
					-27,
					22
				],
				[
					-27,
					26
				],
				[
					-27,
					27
				],
				[
					-25,
					31
				],
				[
					-24,
					33
				],
				[
					-22,
					35
				],
				[
					-19,
					37
				],
				[
					-16,
					38
				],
				[
					-14,
					39
				],
				[
					-10,
					39
				],
				[
					-7,
					39
				],
				[
					-3,
					39
				],
				[
					-2,
					39
				],
				[
					1,
					39
				],
				[
					3,
					38
				],
				[
					4,
					38
				],
				[
					5,
					38
				],
				[
					6,
					38
				],
				[
					6,
					38
				]
			],
			"pressures": [
				0.1669921875,
				0.216796875,
				0.2470703125,
				0.287109375,
				0.330078125,
				0.388671875,
				0.40625,
				0.4375,
				0.4501953125,
				0.4794921875,
				0.4951171875,
				0.5029296875,
				0.5166015625,
				0.53125,
				0.5380859375,
				0.5517578125,
				0.55859375,
				0.572265625,
				0.583984375,
				0.5927734375,
				0.5966796875,
				0.6015625,
				0.6064453125,
				0.6083984375,
				0.611328125,
				0.615234375,
				0.6171875,
				0.62109375,
				0.623046875,
				0.625,
				0.626953125,
				0.6279296875,
				0.6298828125,
				0.630859375,
				0.6298828125,
				0.6240234375,
				0.6162109375,
				0.5869140625,
				0.53125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				38
			]
		},
		{
			"id": "H7lCkv6iqhCTNLQjUl7fS",
			"type": "freedraw",
			"x": 7491.164003459888,
			"y": 632.803113553115,
			"width": 17,
			"height": 24,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1904505425,
			"version": 77,
			"versionNonce": 310001375,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					0,
					-1
				],
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					-1,
					3
				],
				[
					-1,
					6
				],
				[
					-2,
					9
				],
				[
					-2,
					10
				],
				[
					-2,
					12
				],
				[
					-3,
					14
				],
				[
					-3,
					15
				],
				[
					-3,
					16
				],
				[
					-4,
					17
				],
				[
					-3,
					17
				],
				[
					-3,
					16
				],
				[
					-2,
					16
				],
				[
					-2,
					14
				],
				[
					-1,
					14
				],
				[
					0,
					12
				],
				[
					0,
					11
				],
				[
					1,
					11
				],
				[
					1,
					10
				],
				[
					2,
					10
				],
				[
					3,
					11
				],
				[
					4,
					13
				],
				[
					4,
					14
				],
				[
					5,
					16
				],
				[
					6,
					18
				],
				[
					7,
					18
				],
				[
					8,
					20
				],
				[
					9,
					21
				],
				[
					10,
					22
				],
				[
					11,
					22
				],
				[
					12,
					22
				],
				[
					12,
					21
				],
				[
					13,
					20
				],
				[
					13,
					19
				],
				[
					13,
					17
				],
				[
					13,
					16
				],
				[
					12,
					13
				],
				[
					12,
					12
				],
				[
					12,
					10
				],
				[
					11,
					8
				],
				[
					11,
					6
				],
				[
					11,
					5
				],
				[
					11,
					3
				],
				[
					10,
					2
				],
				[
					11,
					2
				],
				[
					11,
					2
				]
			],
			"pressures": [
				0.05859375,
				0.0673828125,
				0.1640625,
				0.2822265625,
				0.318359375,
				0.330078125,
				0.3544921875,
				0.3662109375,
				0.373046875,
				0.3759765625,
				0.3740234375,
				0.375,
				0.375,
				0.3759765625,
				0.373046875,
				0.3740234375,
				0.369140625,
				0.369140625,
				0.369140625,
				0.3671875,
				0.3623046875,
				0.36328125,
				0.357421875,
				0.3515625,
				0.3388671875,
				0.32421875,
				0.3203125,
				0.3212890625,
				0.3310546875,
				0.3330078125,
				0.3330078125,
				0.333984375,
				0.333984375,
				0.3330078125,
				0.3369140625,
				0.361328125,
				0.3828125,
				0.4111328125,
				0.423828125,
				0.4306640625,
				0.43359375,
				0.43359375,
				0.43359375,
				0.431640625,
				0.427734375,
				0.4169921875,
				0.4091796875,
				0.3701171875,
				0.3193359375,
				0.287109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11,
				2
			]
		},
		{
			"id": "RmDXVmWQNEfU05DCa1YUy",
			"type": "freedraw",
			"x": 7522.164003459888,
			"y": 645.803113553115,
			"width": 14,
			"height": 15,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 150613777,
			"version": 72,
			"versionNonce": 410313361,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-2,
					0
				],
				[
					-3,
					0
				],
				[
					-4,
					0
				],
				[
					-4,
					1
				],
				[
					-5,
					1
				],
				[
					-6,
					2
				],
				[
					-6,
					3
				],
				[
					-7,
					3
				],
				[
					-7,
					4
				],
				[
					-7,
					6
				],
				[
					-8,
					7
				],
				[
					-7,
					8
				],
				[
					-7,
					9
				],
				[
					-6,
					10
				],
				[
					-5,
					10
				],
				[
					-4,
					9
				],
				[
					-3,
					9
				],
				[
					-3,
					8
				],
				[
					-2,
					7
				],
				[
					-1,
					6
				],
				[
					-1,
					5
				],
				[
					-1,
					4
				],
				[
					0,
					3
				],
				[
					0,
					2
				],
				[
					1,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-2
				],
				[
					2,
					-1
				],
				[
					2,
					0
				],
				[
					2,
					1
				],
				[
					2,
					2
				],
				[
					2,
					4
				],
				[
					2,
					6
				],
				[
					2,
					8
				],
				[
					2,
					9
				],
				[
					2,
					11
				],
				[
					3,
					12
				],
				[
					3,
					13
				],
				[
					4,
					13
				],
				[
					6,
					12
				],
				[
					6,
					11
				],
				[
					6,
					11
				]
			],
			"pressures": [
				0.1650390625,
				0.169921875,
				0.2119140625,
				0.2607421875,
				0.2978515625,
				0.3330078125,
				0.3466796875,
				0.3515625,
				0.359375,
				0.36328125,
				0.365234375,
				0.3642578125,
				0.3642578125,
				0.3642578125,
				0.36328125,
				0.361328125,
				0.3603515625,
				0.3603515625,
				0.3603515625,
				0.3486328125,
				0.3359375,
				0.328125,
				0.3125,
				0.3046875,
				0.2939453125,
				0.291015625,
				0.2900390625,
				0.2919921875,
				0.2919921875,
				0.2919921875,
				0.2939453125,
				0.2919921875,
				0.2998046875,
				0.3056640625,
				0.3095703125,
				0.3173828125,
				0.3212890625,
				0.3232421875,
				0.32421875,
				0.322265625,
				0.314453125,
				0.3037109375,
				0.283203125,
				0.1953125,
				0.1689453125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				11
			]
		},
		{
			"id": "Ci3BtWk6v7iZbj7Y5yoeh",
			"type": "freedraw",
			"x": 7542.164003459888,
			"y": 639.803113553115,
			"width": 1,
			"height": 17,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1807072607,
			"version": 37,
			"versionNonce": 2142046975,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					0,
					3
				],
				[
					0,
					5
				],
				[
					0,
					7
				],
				[
					0,
					9
				],
				[
					-1,
					12
				],
				[
					-1,
					16
				],
				[
					-1,
					17
				],
				[
					-1,
					17
				]
			],
			"pressures": [
				0.119140625,
				0.1376953125,
				0.1748046875,
				0.208984375,
				0.2392578125,
				0.2685546875,
				0.2783203125,
				0.29296875,
				0.2958984375,
				0.294921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1,
				17
			]
		},
		{
			"id": "we-zMCw85R3xlJneB1trw",
			"type": "freedraw",
			"x": 7558.164003459888,
			"y": 625.803113553115,
			"width": 4,
			"height": 39,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 733342239,
			"version": 44,
			"versionNonce": 1706846321,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					2,
					1
				],
				[
					2,
					2
				],
				[
					2,
					5
				],
				[
					2,
					8
				],
				[
					2,
					12
				],
				[
					1,
					14
				],
				[
					1,
					18
				],
				[
					0,
					22
				],
				[
					-1,
					27
				],
				[
					-1,
					29
				],
				[
					-2,
					32
				],
				[
					-2,
					35
				],
				[
					-2,
					37
				],
				[
					-2,
					38
				],
				[
					-2,
					38
				]
			],
			"pressures": [
				0.0634765625,
				0.076171875,
				0.244140625,
				0.349609375,
				0.384765625,
				0.408203125,
				0.4248046875,
				0.4345703125,
				0.4375,
				0.4423828125,
				0.447265625,
				0.447265625,
				0.443359375,
				0.4267578125,
				0.392578125,
				0.3408203125,
				0.30859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-2,
				38
			]
		},
		{
			"id": "3KGb6RWHTCydEXj3_lc_x",
			"type": "freedraw",
			"x": 7540.164003459888,
			"y": 623.803113553115,
			"width": 0,
			"height": 1,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1776955249,
			"version": 27,
			"versionNonce": 821121823,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.37890625,
				0.4267578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				-1
			]
		},
		{
			"id": "393v7ohKy28xKepSG55X3",
			"type": "freedraw",
			"x": 7549.164003459888,
			"y": 644.803113553115,
			"width": 24,
			"height": 3,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 408961119,
			"version": 44,
			"versionNonce": 265826897,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-2,
					0
				],
				[
					-3,
					0
				],
				[
					-3,
					-1
				],
				[
					-2,
					-1
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					5,
					-1
				],
				[
					7,
					-1
				],
				[
					10,
					-2
				],
				[
					11,
					-2
				],
				[
					14,
					-2
				],
				[
					16,
					-2
				],
				[
					17,
					-3
				],
				[
					18,
					-3
				],
				[
					20,
					-3
				],
				[
					21,
					-3
				],
				[
					21,
					-2
				],
				[
					21,
					-2
				]
			],
			"pressures": [
				0.220703125,
				0.25,
				0.3330078125,
				0.416015625,
				0.4501953125,
				0.4765625,
				0.5302734375,
				0.5556640625,
				0.56640625,
				0.5830078125,
				0.591796875,
				0.59765625,
				0.5986328125,
				0.6015625,
				0.6025390625,
				0.6015625,
				0.59765625,
				0.5859375,
				0.5068359375,
				0.4716796875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				21,
				-2
			]
		},
		{
			"id": "5cGiov2Obf4idNSbBDlOy",
			"type": "freedraw",
			"x": 7606.164003459888,
			"y": 610.803113553115,
			"width": 26,
			"height": 58,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1042749887,
			"version": 51,
			"versionNonce": 515348287,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626169,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-2
				],
				[
					-2,
					-3
				],
				[
					-3,
					-3
				],
				[
					-4,
					-3
				],
				[
					-5,
					-3
				],
				[
					-7,
					-2
				],
				[
					-9,
					-2
				],
				[
					-11,
					0
				],
				[
					-13,
					3
				],
				[
					-15,
					7
				],
				[
					-16,
					9
				],
				[
					-18,
					15
				],
				[
					-19,
					21
				],
				[
					-20,
					27
				],
				[
					-20,
					30
				],
				[
					-19,
					37
				],
				[
					-18,
					42
				],
				[
					-17,
					45
				],
				[
					-14,
					49
				],
				[
					-11,
					52
				],
				[
					-8,
					54
				],
				[
					-6,
					54
				],
				[
					-2,
					55
				],
				[
					1,
					54
				],
				[
					5,
					54
				],
				[
					6,
					53
				],
				[
					6,
					53
				]
			],
			"pressures": [
				0.185546875,
				0.1943359375,
				0.22265625,
				0.2470703125,
				0.2822265625,
				0.302734375,
				0.3662109375,
				0.3857421875,
				0.4208984375,
				0.453125,
				0.484375,
				0.4990234375,
				0.5234375,
				0.54296875,
				0.5556640625,
				0.5595703125,
				0.5625,
				0.5634765625,
				0.5634765625,
				0.5625,
				0.5615234375,
				0.5625,
				0.5615234375,
				0.5537109375,
				0.533203125,
				0.4892578125,
				0.4560546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				53
			]
		},
		{
			"id": "TQ0NPfTYog4PjnMPHu2lb",
			"type": "freedraw",
			"x": 7633.164003459888,
			"y": 639.803113553115,
			"width": 18,
			"height": 31,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 742206449,
			"version": 76,
			"versionNonce": 2074066993,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-1
				],
				[
					-1,
					-2
				],
				[
					-1,
					-3
				],
				[
					-2,
					-3
				],
				[
					-2,
					-4
				],
				[
					-3,
					-4
				],
				[
					-4,
					-4
				],
				[
					-5,
					-4
				],
				[
					-5,
					-3
				],
				[
					-7,
					-2
				],
				[
					-9,
					0
				],
				[
					-10,
					2
				],
				[
					-11,
					5
				],
				[
					-11,
					6
				],
				[
					-12,
					9
				],
				[
					-12,
					11
				],
				[
					-12,
					14
				],
				[
					-12,
					15
				],
				[
					-11,
					16
				],
				[
					-10,
					17
				],
				[
					-9,
					18
				],
				[
					-8,
					18
				],
				[
					-7,
					18
				],
				[
					-6,
					17
				],
				[
					-5,
					16
				],
				[
					-3,
					14
				],
				[
					-2,
					12
				],
				[
					-2,
					10
				],
				[
					-1,
					8
				],
				[
					-1,
					7
				],
				[
					0,
					5
				],
				[
					0,
					4
				],
				[
					0,
					2
				],
				[
					0,
					1
				],
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					2,
					4
				],
				[
					2,
					6
				],
				[
					2,
					9
				],
				[
					3,
					13
				],
				[
					3,
					16
				],
				[
					3,
					18
				],
				[
					4,
					21
				],
				[
					4,
					24
				],
				[
					5,
					26
				],
				[
					6,
					26
				],
				[
					6,
					27
				],
				[
					6,
					27
				]
			],
			"pressures": [
				0.060546875,
				0.091796875,
				0.1103515625,
				0.1435546875,
				0.2060546875,
				0.2685546875,
				0.287109375,
				0.3193359375,
				0.3447265625,
				0.3583984375,
				0.36328125,
				0.3740234375,
				0.388671875,
				0.3974609375,
				0.4072265625,
				0.4111328125,
				0.4140625,
				0.416015625,
				0.4189453125,
				0.419921875,
				0.41796875,
				0.4111328125,
				0.40625,
				0.39453125,
				0.375,
				0.3623046875,
				0.3359375,
				0.3115234375,
				0.2900390625,
				0.2822265625,
				0.275390625,
				0.2763671875,
				0.2802734375,
				0.283203125,
				0.2880859375,
				0.2900390625,
				0.2919921875,
				0.2958984375,
				0.330078125,
				0.3359375,
				0.3427734375,
				0.357421875,
				0.3662109375,
				0.3818359375,
				0.3974609375,
				0.41015625,
				0.4140625,
				0.4150390625,
				0.408203125,
				0.388671875,
				0.3720703125,
				0.3525390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				27
			]
		},
		{
			"id": "1QISX_lYp9miroyT3Sh8Y",
			"type": "freedraw",
			"x": 7663.164003459888,
			"y": 608.803113553115,
			"width": 5,
			"height": 60,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 469295761,
			"version": 46,
			"versionNonce": 1600149343,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					1,
					2
				],
				[
					1,
					4
				],
				[
					1,
					6
				],
				[
					2,
					10
				],
				[
					2,
					14
				],
				[
					3,
					19
				],
				[
					3,
					21
				],
				[
					3,
					26
				],
				[
					4,
					31
				],
				[
					4,
					36
				],
				[
					4,
					39
				],
				[
					4,
					44
				],
				[
					4,
					48
				],
				[
					5,
					52
				],
				[
					5,
					53
				],
				[
					5,
					56
				],
				[
					5,
					57
				],
				[
					5,
					59
				],
				[
					5,
					59
				]
			],
			"pressures": [
				0.1748046875,
				0.1845703125,
				0.236328125,
				0.298828125,
				0.3232421875,
				0.373046875,
				0.3935546875,
				0.4287109375,
				0.4580078125,
				0.4775390625,
				0.484375,
				0.494140625,
				0.5,
				0.50390625,
				0.5048828125,
				0.505859375,
				0.505859375,
				0.5009765625,
				0.494140625,
				0.46875,
				0.447265625,
				0.3828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				5,
				59
			]
		},
		{
			"id": "AAxJ9qB8QckbxZF3diK5v",
			"type": "freedraw",
			"x": 7713.164003459888,
			"y": 633.803113553115,
			"width": 16,
			"height": 49,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 321827089,
			"version": 78,
			"versionNonce": 117084689,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-1
				],
				[
					-2,
					-2
				],
				[
					-3,
					-2
				],
				[
					-4,
					-1
				],
				[
					-6,
					-1
				],
				[
					-8,
					0
				],
				[
					-9,
					0
				],
				[
					-10,
					2
				],
				[
					-12,
					4
				],
				[
					-12,
					5
				],
				[
					-13,
					7
				],
				[
					-14,
					8
				],
				[
					-14,
					11
				],
				[
					-14,
					12
				],
				[
					-15,
					14
				],
				[
					-14,
					17
				],
				[
					-14,
					18
				],
				[
					-13,
					19
				],
				[
					-12,
					19
				],
				[
					-11,
					19
				],
				[
					-10,
					19
				],
				[
					-8,
					18
				],
				[
					-7,
					16
				],
				[
					-5,
					13
				],
				[
					-4,
					11
				],
				[
					-3,
					7
				],
				[
					-2,
					2
				],
				[
					-1,
					-2
				],
				[
					0,
					-5
				],
				[
					1,
					-9
				],
				[
					1,
					-14
				],
				[
					1,
					-18
				],
				[
					1,
					-20
				],
				[
					1,
					-23
				],
				[
					0,
					-26
				],
				[
					0,
					-27
				],
				[
					0,
					-29
				],
				[
					-1,
					-30
				],
				[
					-1,
					-29
				],
				[
					-1,
					-28
				],
				[
					-1,
					-27
				],
				[
					-1,
					-24
				],
				[
					-1,
					-20
				],
				[
					-1,
					-16
				],
				[
					-1,
					-14
				],
				[
					-1,
					-8
				],
				[
					-1,
					-6
				],
				[
					-1,
					0
				],
				[
					-1,
					3
				],
				[
					-1,
					8
				],
				[
					0,
					12
				],
				[
					0,
					14
				],
				[
					0,
					14
				]
			],
			"pressures": [
				0.1259765625,
				0.12890625,
				0.19140625,
				0.244140625,
				0.2783203125,
				0.30859375,
				0.3310546875,
				0.33984375,
				0.341796875,
				0.345703125,
				0.3466796875,
				0.34375,
				0.33984375,
				0.3388671875,
				0.34375,
				0.3466796875,
				0.349609375,
				0.349609375,
				0.349609375,
				0.3505859375,
				0.349609375,
				0.3486328125,
				0.341796875,
				0.333984375,
				0.322265625,
				0.3046875,
				0.2939453125,
				0.2724609375,
				0.251953125,
				0.2373046875,
				0.2333984375,
				0.2275390625,
				0.2265625,
				0.2255859375,
				0.2255859375,
				0.2275390625,
				0.2314453125,
				0.234375,
				0.2421875,
				0.2509765625,
				0.2626953125,
				0.2734375,
				0.2841796875,
				0.294921875,
				0.302734375,
				0.310546875,
				0.3134765625,
				0.318359375,
				0.3193359375,
				0.3203125,
				0.3193359375,
				0.306640625,
				0.2734375,
				0.2490234375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				14
			]
		},
		{
			"id": "ikILlwguApMx_9eg7dMs2",
			"type": "freedraw",
			"x": 7731.164003459888,
			"y": 634.803113553115,
			"width": 59,
			"height": 41,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1018756497,
			"version": 132,
			"versionNonce": 1765544831,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-2
				],
				[
					-1,
					-1
				],
				[
					-2,
					-1
				],
				[
					-3,
					0
				],
				[
					-3,
					1
				],
				[
					-4,
					4
				],
				[
					-5,
					6
				],
				[
					-5,
					9
				],
				[
					-5,
					11
				],
				[
					-5,
					14
				],
				[
					-4,
					16
				],
				[
					-4,
					18
				],
				[
					-3,
					19
				],
				[
					-2,
					21
				],
				[
					0,
					22
				],
				[
					0,
					21
				],
				[
					2,
					20
				],
				[
					2,
					19
				],
				[
					3,
					18
				],
				[
					4,
					16
				],
				[
					4,
					14
				],
				[
					4,
					11
				],
				[
					4,
					8
				],
				[
					4,
					5
				],
				[
					4,
					3
				],
				[
					4,
					1
				],
				[
					3,
					-1
				],
				[
					3,
					-3
				],
				[
					4,
					-5
				],
				[
					5,
					-6
				],
				[
					6,
					-7
				],
				[
					7,
					-7
				],
				[
					9,
					-7
				],
				[
					10,
					-6
				],
				[
					10,
					-5
				],
				[
					11,
					-4
				],
				[
					12,
					-2
				],
				[
					12,
					0
				],
				[
					13,
					3
				],
				[
					13,
					5
				],
				[
					13,
					8
				],
				[
					13,
					10
				],
				[
					12,
					11
				],
				[
					12,
					13
				],
				[
					12,
					14
				],
				[
					12,
					15
				],
				[
					11,
					15
				],
				[
					11,
					16
				],
				[
					11,
					15
				],
				[
					12,
					15
				],
				[
					12,
					14
				],
				[
					13,
					13
				],
				[
					13,
					12
				],
				[
					14,
					11
				],
				[
					15,
					9
				],
				[
					15,
					7
				],
				[
					16,
					6
				],
				[
					17,
					5
				],
				[
					18,
					3
				],
				[
					19,
					1
				],
				[
					20,
					0
				],
				[
					21,
					0
				],
				[
					22,
					-1
				],
				[
					23,
					0
				],
				[
					23,
					1
				],
				[
					24,
					2
				],
				[
					24,
					3
				],
				[
					24,
					5
				],
				[
					24,
					6
				],
				[
					24,
					9
				],
				[
					25,
					12
				],
				[
					25,
					14
				],
				[
					26,
					16
				],
				[
					26,
					18
				],
				[
					27,
					21
				],
				[
					28,
					22
				],
				[
					29,
					23
				],
				[
					30,
					23
				],
				[
					31,
					23
				],
				[
					33,
					22
				],
				[
					33,
					21
				],
				[
					35,
					19
				],
				[
					37,
					16
				],
				[
					38,
					15
				],
				[
					39,
					11
				],
				[
					41,
					8
				],
				[
					41,
					7
				],
				[
					42,
					4
				],
				[
					43,
					1
				],
				[
					43,
					0
				],
				[
					43,
					-2
				],
				[
					43,
					-3
				],
				[
					42,
					-4
				],
				[
					41,
					-3
				],
				[
					40,
					-2
				],
				[
					40,
					1
				],
				[
					40,
					4
				],
				[
					40,
					6
				],
				[
					41,
					11
				],
				[
					43,
					16
				],
				[
					44,
					18
				],
				[
					46,
					23
				],
				[
					49,
					28
				],
				[
					52,
					31
				],
				[
					53,
					33
				],
				[
					54,
					34
				],
				[
					54,
					34
				]
			],
			"pressures": [
				0.1279296875,
				0.13671875,
				0.16796875,
				0.201171875,
				0.2216796875,
				0.2568359375,
				0.26953125,
				0.29296875,
				0.2939453125,
				0.2958984375,
				0.296875,
				0.2919921875,
				0.2900390625,
				0.29296875,
				0.2978515625,
				0.302734375,
				0.3037109375,
				0.3037109375,
				0.30078125,
				0.2998046875,
				0.30078125,
				0.3076171875,
				0.3095703125,
				0.3125,
				0.310546875,
				0.3056640625,
				0.2998046875,
				0.2890625,
				0.283203125,
				0.283203125,
				0.2822265625,
				0.2822265625,
				0.2880859375,
				0.2919921875,
				0.30859375,
				0.3203125,
				0.3271484375,
				0.34375,
				0.353515625,
				0.3720703125,
				0.38671875,
				0.39453125,
				0.41015625,
				0.4189453125,
				0.419921875,
				0.41796875,
				0.4169921875,
				0.4169921875,
				0.41796875,
				0.4169921875,
				0.4111328125,
				0.408203125,
				0.3974609375,
				0.3818359375,
				0.373046875,
				0.3564453125,
				0.3427734375,
				0.3369140625,
				0.33203125,
				0.3251953125,
				0.32421875,
				0.3193359375,
				0.3154296875,
				0.314453125,
				0.3134765625,
				0.3076171875,
				0.3125,
				0.32421875,
				0.3291015625,
				0.33984375,
				0.34765625,
				0.3623046875,
				0.3720703125,
				0.3740234375,
				0.3759765625,
				0.3779296875,
				0.375,
				0.37109375,
				0.3701171875,
				0.369140625,
				0.3681640625,
				0.3662109375,
				0.365234375,
				0.3623046875,
				0.3583984375,
				0.357421875,
				0.3544921875,
				0.353515625,
				0.353515625,
				0.357421875,
				0.36328125,
				0.3662109375,
				0.3740234375,
				0.380859375,
				0.3935546875,
				0.41796875,
				0.4296875,
				0.4404296875,
				0.443359375,
				0.443359375,
				0.4423828125,
				0.439453125,
				0.4375,
				0.427734375,
				0.4072265625,
				0.37109375,
				0.3466796875,
				0.3154296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				54,
				34
			]
		},
		{
			"id": "Abyt8EZSxFOGxP31T09qk",
			"type": "freedraw",
			"x": 7789.164003459888,
			"y": 588.803113553115,
			"width": 36,
			"height": 92,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 203035825,
			"version": 46,
			"versionNonce": 1725966321,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					2,
					1
				],
				[
					3,
					2
				],
				[
					5,
					3
				],
				[
					7,
					5
				],
				[
					11,
					7
				],
				[
					13,
					9
				],
				[
					17,
					12
				],
				[
					19,
					14
				],
				[
					24,
					18
				],
				[
					26,
					20
				],
				[
					28,
					23
				],
				[
					32,
					30
				],
				[
					34,
					34
				],
				[
					35,
					38
				],
				[
					36,
					47
				],
				[
					36,
					53
				],
				[
					35,
					64
				],
				[
					31,
					76
				],
				[
					28,
					81
				],
				[
					22,
					92
				],
				[
					22,
					92
				]
			],
			"pressures": [
				0.1611328125,
				0.283203125,
				0.359375,
				0.3974609375,
				0.470703125,
				0.5361328125,
				0.595703125,
				0.623046875,
				0.67578125,
				0.7001953125,
				0.7451171875,
				0.765625,
				0.7861328125,
				0.8193359375,
				0.8330078125,
				0.8427734375,
				0.8515625,
				0.8505859375,
				0.828125,
				0.7724609375,
				0.73046875,
				0.6162109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				22,
				92
			]
		},
		{
			"id": "QRXbEidhYtFVZ_T4jahz0",
			"type": "freedraw",
			"x": 6832.164003459888,
			"y": 653.803113553115,
			"width": 22,
			"height": 32,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1169797937,
			"version": 73,
			"versionNonce": 344673183,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					2,
					-4
				],
				[
					2,
					-5
				],
				[
					2,
					-6
				],
				[
					3,
					-7
				],
				[
					2,
					-7
				],
				[
					2,
					-8
				],
				[
					1,
					-8
				],
				[
					-1,
					-8
				],
				[
					-2,
					-8
				],
				[
					-3,
					-7
				],
				[
					-5,
					-7
				],
				[
					-6,
					-6
				],
				[
					-7,
					-5
				],
				[
					-8,
					-4
				],
				[
					-9,
					-3
				],
				[
					-9,
					-2
				],
				[
					-8,
					-1
				],
				[
					-7,
					0
				],
				[
					-6,
					1
				],
				[
					-5,
					1
				],
				[
					-2,
					3
				],
				[
					0,
					5
				],
				[
					3,
					7
				],
				[
					4,
					8
				],
				[
					7,
					10
				],
				[
					9,
					13
				],
				[
					11,
					15
				],
				[
					12,
					16
				],
				[
					13,
					18
				],
				[
					13,
					20
				],
				[
					13,
					21
				],
				[
					12,
					22
				],
				[
					11,
					23
				],
				[
					10,
					24
				],
				[
					9,
					24
				],
				[
					6,
					24
				],
				[
					4,
					24
				],
				[
					1,
					23
				],
				[
					0,
					23
				],
				[
					-2,
					22
				],
				[
					-5,
					21
				],
				[
					-7,
					20
				],
				[
					-7,
					19
				],
				[
					-9,
					18
				],
				[
					-9,
					18
				]
			],
			"pressures": [
				0.025390625,
				0.0419921875,
				0.072265625,
				0.1044921875,
				0.1650390625,
				0.2060546875,
				0.2451171875,
				0.287109375,
				0.3310546875,
				0.3701171875,
				0.3876953125,
				0.4189453125,
				0.45703125,
				0.4619140625,
				0.4697265625,
				0.4755859375,
				0.4775390625,
				0.48046875,
				0.48046875,
				0.4794921875,
				0.478515625,
				0.4765625,
				0.4755859375,
				0.4765625,
				0.4765625,
				0.4765625,
				0.4765625,
				0.4775390625,
				0.4775390625,
				0.478515625,
				0.484375,
				0.4931640625,
				0.5,
				0.515625,
				0.5341796875,
				0.54296875,
				0.55859375,
				0.5703125,
				0.5771484375,
				0.5791015625,
				0.580078125,
				0.5810546875,
				0.5791015625,
				0.576171875,
				0.5625,
				0.53125,
				0.478515625,
				0.4443359375,
				0.3603515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-9,
				18
			]
		},
		{
			"id": "YiEXT5iiAl1JzlADyRWDS",
			"type": "freedraw",
			"x": 6851.164003459888,
			"y": 660.803113553115,
			"width": 9,
			"height": 29,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1557472127,
			"version": 53,
			"versionNonce": 1163395537,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					1
				],
				[
					3,
					2
				],
				[
					4,
					3
				],
				[
					4,
					4
				],
				[
					6,
					6
				],
				[
					7,
					9
				],
				[
					7,
					10
				],
				[
					8,
					13
				],
				[
					8,
					14
				],
				[
					8,
					16
				],
				[
					8,
					17
				],
				[
					8,
					18
				],
				[
					8,
					17
				],
				[
					7,
					16
				],
				[
					7,
					15
				],
				[
					6,
					13
				],
				[
					6,
					11
				],
				[
					5,
					8
				],
				[
					4,
					4
				],
				[
					3,
					3
				],
				[
					2,
					0
				],
				[
					1,
					-3
				],
				[
					0,
					-5
				],
				[
					0,
					-6
				],
				[
					-1,
					-8
				],
				[
					-1,
					-9
				],
				[
					-1,
					-10
				],
				[
					-1,
					-11
				],
				[
					-1,
					-11
				]
			],
			"pressures": [
				0.140625,
				0.1376953125,
				0.1474609375,
				0.162109375,
				0.169921875,
				0.201171875,
				0.2294921875,
				0.244140625,
				0.26953125,
				0.2802734375,
				0.2919921875,
				0.294921875,
				0.2939453125,
				0.28125,
				0.2607421875,
				0.236328125,
				0.2236328125,
				0.1953125,
				0.1650390625,
				0.1376953125,
				0.125,
				0.103515625,
				0.08984375,
				0.0810546875,
				0.0791015625,
				0.0751953125,
				0.0732421875,
				0.0712890625,
				0.0625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1,
				-11
			]
		},
		{
			"id": "eZOMJuXc4ZbAEWUzvPUc5",
			"type": "freedraw",
			"x": 6871.164003459888,
			"y": 652.803113553115,
			"width": 28,
			"height": 64,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 950648849,
			"version": 85,
			"versionNonce": 1568571327,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					0,
					2
				],
				[
					0,
					3
				],
				[
					0,
					4
				],
				[
					-1,
					5
				],
				[
					-2,
					7
				],
				[
					-2,
					8
				],
				[
					-3,
					10
				],
				[
					-4,
					12
				],
				[
					-4,
					15
				],
				[
					-5,
					16
				],
				[
					-5,
					18
				],
				[
					-5,
					20
				],
				[
					-5,
					21
				],
				[
					-4,
					23
				],
				[
					-3,
					23
				],
				[
					-2,
					23
				],
				[
					0,
					23
				],
				[
					1,
					23
				],
				[
					3,
					23
				],
				[
					4,
					22
				],
				[
					6,
					20
				],
				[
					7,
					20
				],
				[
					8,
					18
				],
				[
					9,
					16
				],
				[
					9,
					14
				],
				[
					9,
					13
				],
				[
					9,
					12
				],
				[
					9,
					10
				],
				[
					9,
					9
				],
				[
					9,
					8
				],
				[
					8,
					7
				],
				[
					8,
					6
				],
				[
					8,
					7
				],
				[
					9,
					8
				],
				[
					9,
					10
				],
				[
					10,
					11
				],
				[
					11,
					14
				],
				[
					11,
					16
				],
				[
					12,
					21
				],
				[
					14,
					26
				],
				[
					15,
					33
				],
				[
					15,
					36
				],
				[
					16,
					42
				],
				[
					16,
					48
				],
				[
					15,
					53
				],
				[
					15,
					55
				],
				[
					14,
					59
				],
				[
					12,
					62
				],
				[
					10,
					63
				],
				[
					9,
					64
				],
				[
					6,
					64
				],
				[
					3,
					63
				],
				[
					2,
					63
				],
				[
					-2,
					61
				],
				[
					-5,
					58
				],
				[
					-9,
					55
				],
				[
					-10,
					53
				],
				[
					-12,
					51
				],
				[
					-12,
					51
				]
			],
			"pressures": [
				0.16796875,
				0.173828125,
				0.4697265625,
				0.5029296875,
				0.505859375,
				0.5126953125,
				0.5146484375,
				0.5185546875,
				0.51953125,
				0.5205078125,
				0.51953125,
				0.5185546875,
				0.51953125,
				0.5205078125,
				0.51953125,
				0.51953125,
				0.5205078125,
				0.51953125,
				0.5185546875,
				0.515625,
				0.5146484375,
				0.51171875,
				0.5068359375,
				0.501953125,
				0.5,
				0.4951171875,
				0.4892578125,
				0.484375,
				0.482421875,
				0.4765625,
				0.47265625,
				0.470703125,
				0.4677734375,
				0.4619140625,
				0.447265625,
				0.4404296875,
				0.439453125,
				0.4404296875,
				0.439453125,
				0.4423828125,
				0.443359375,
				0.447265625,
				0.4560546875,
				0.4755859375,
				0.490234375,
				0.51953125,
				0.5537109375,
				0.5869140625,
				0.6015625,
				0.625,
				0.640625,
				0.6484375,
				0.650390625,
				0.6513671875,
				0.64453125,
				0.6376953125,
				0.6142578125,
				0.5751953125,
				0.5146484375,
				0.4755859375,
				0.4306640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-12,
				51
			]
		},
		{
			"id": "lywBaD7zzmka6rzc7KxuU",
			"type": "freedraw",
			"x": 6878.164003459888,
			"y": 660.803113553115,
			"width": 31,
			"height": 26,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1443958111,
			"version": 69,
			"versionNonce": 528064433,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					0
				],
				[
					3,
					-1
				],
				[
					4,
					-1
				],
				[
					5,
					-1
				],
				[
					6,
					-1
				],
				[
					8,
					-1
				],
				[
					9,
					0
				],
				[
					10,
					1
				],
				[
					10,
					2
				],
				[
					11,
					4
				],
				[
					11,
					7
				],
				[
					11,
					10
				],
				[
					11,
					11
				],
				[
					11,
					15
				],
				[
					11,
					18
				],
				[
					11,
					19
				],
				[
					11,
					21
				],
				[
					11,
					23
				],
				[
					11,
					24
				],
				[
					12,
					24
				],
				[
					13,
					22
				],
				[
					14,
					20
				],
				[
					16,
					17
				],
				[
					17,
					15
				],
				[
					18,
					12
				],
				[
					20,
					8
				],
				[
					21,
					5
				],
				[
					22,
					3
				],
				[
					24,
					1
				],
				[
					25,
					-1
				],
				[
					25,
					-2
				],
				[
					26,
					-2
				],
				[
					27,
					-2
				],
				[
					27,
					-1
				],
				[
					27,
					1
				],
				[
					27,
					4
				],
				[
					27,
					8
				],
				[
					27,
					9
				],
				[
					28,
					13
				],
				[
					28,
					16
				],
				[
					29,
					19
				],
				[
					29,
					20
				],
				[
					30,
					21
				],
				[
					31,
					21
				],
				[
					31,
					21
				]
			],
			"pressures": [
				0.0703125,
				0.0751953125,
				0.1025390625,
				0.11328125,
				0.125,
				0.16015625,
				0.220703125,
				0.2724609375,
				0.32421875,
				0.3486328125,
				0.39453125,
				0.4326171875,
				0.4609375,
				0.4716796875,
				0.486328125,
				0.494140625,
				0.4951171875,
				0.4970703125,
				0.49609375,
				0.49609375,
				0.484375,
				0.458984375,
				0.4365234375,
				0.4111328125,
				0.3994140625,
				0.3798828125,
				0.3671875,
				0.3603515625,
				0.3583984375,
				0.357421875,
				0.3583984375,
				0.3603515625,
				0.3623046875,
				0.3701171875,
				0.384765625,
				0.3974609375,
				0.408203125,
				0.41796875,
				0.421875,
				0.4287109375,
				0.421875,
				0.3984375,
				0.3798828125,
				0.3564453125,
				0.29296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				31,
				21
			]
		},
		{
			"id": "EG_8TxWWclbszTVQYandX",
			"type": "freedraw",
			"x": 6924.164003459888,
			"y": 656.803113553115,
			"width": 42,
			"height": 67,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1968678705,
			"version": 108,
			"versionNonce": 1714827231,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-1
				],
				[
					-1,
					0
				],
				[
					-2,
					0
				],
				[
					-3,
					1
				],
				[
					-4,
					3
				],
				[
					-5,
					5
				],
				[
					-5,
					6
				],
				[
					-6,
					8
				],
				[
					-6,
					11
				],
				[
					-7,
					12
				],
				[
					-7,
					15
				],
				[
					-6,
					18
				],
				[
					-6,
					20
				],
				[
					-5,
					21
				],
				[
					-4,
					23
				],
				[
					-3,
					25
				],
				[
					-2,
					26
				],
				[
					-1,
					26
				],
				[
					0,
					25
				],
				[
					1,
					25
				],
				[
					2,
					23
				],
				[
					3,
					21
				],
				[
					4,
					19
				],
				[
					4,
					17
				],
				[
					5,
					14
				],
				[
					6,
					10
				],
				[
					6,
					7
				],
				[
					7,
					6
				],
				[
					7,
					3
				],
				[
					7,
					1
				],
				[
					7,
					0
				],
				[
					7,
					-1
				],
				[
					7,
					-2
				],
				[
					6,
					-2
				],
				[
					6,
					0
				],
				[
					6,
					2
				],
				[
					5,
					4
				],
				[
					5,
					7
				],
				[
					6,
					9
				],
				[
					6,
					12
				],
				[
					7,
					15
				],
				[
					8,
					18
				],
				[
					8,
					19
				],
				[
					10,
					22
				],
				[
					11,
					23
				],
				[
					12,
					24
				],
				[
					14,
					24
				],
				[
					15,
					24
				],
				[
					17,
					23
				],
				[
					19,
					21
				],
				[
					21,
					17
				],
				[
					22,
					15
				],
				[
					24,
					10
				],
				[
					26,
					4
				],
				[
					27,
					-2
				],
				[
					28,
					-5
				],
				[
					30,
					-12
				],
				[
					31,
					-18
				],
				[
					32,
					-24
				],
				[
					32,
					-27
				],
				[
					32,
					-32
				],
				[
					32,
					-34
				],
				[
					32,
					-36
				],
				[
					31,
					-38
				],
				[
					30,
					-39
				],
				[
					28,
					-38
				],
				[
					26,
					-35
				],
				[
					25,
					-31
				],
				[
					24,
					-26
				],
				[
					24,
					-23
				],
				[
					23,
					-17
				],
				[
					23,
					-11
				],
				[
					24,
					-4
				],
				[
					24,
					-1
				],
				[
					25,
					6
				],
				[
					27,
					12
				],
				[
					28,
					17
				],
				[
					29,
					19
				],
				[
					31,
					23
				],
				[
					33,
					26
				],
				[
					34,
					27
				],
				[
					35,
					28
				],
				[
					35,
					28
				]
			],
			"pressures": [
				0.21484375,
				0.2197265625,
				0.2724609375,
				0.296875,
				0.318359375,
				0.3564453125,
				0.388671875,
				0.4130859375,
				0.4228515625,
				0.4365234375,
				0.4453125,
				0.44921875,
				0.4560546875,
				0.4599609375,
				0.4599609375,
				0.458984375,
				0.45703125,
				0.453125,
				0.4443359375,
				0.4375,
				0.4150390625,
				0.400390625,
				0.369140625,
				0.333984375,
				0.2939453125,
				0.27734375,
				0.2509765625,
				0.2314453125,
				0.2177734375,
				0.212890625,
				0.2109375,
				0.2158203125,
				0.220703125,
				0.2275390625,
				0.2470703125,
				0.29296875,
				0.34375,
				0.3857421875,
				0.4072265625,
				0.421875,
				0.4296875,
				0.44140625,
				0.4501953125,
				0.4560546875,
				0.458984375,
				0.4619140625,
				0.4638671875,
				0.46484375,
				0.462890625,
				0.4609375,
				0.453125,
				0.431640625,
				0.3994140625,
				0.380859375,
				0.341796875,
				0.2958984375,
				0.25,
				0.23046875,
				0.1982421875,
				0.17578125,
				0.162109375,
				0.16015625,
				0.1689453125,
				0.1806640625,
				0.197265625,
				0.2392578125,
				0.263671875,
				0.341796875,
				0.4130859375,
				0.4453125,
				0.4716796875,
				0.484375,
				0.5068359375,
				0.5244140625,
				0.5400390625,
				0.5458984375,
				0.5546875,
				0.5576171875,
				0.5517578125,
				0.5439453125,
				0.517578125,
				0.470703125,
				0.439453125,
				0.4033203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				35,
				28
			]
		},
		{
			"id": "wq9tTt52Mvcj-x3XIBZwS",
			"type": "freedraw",
			"x": 6996.164003459888,
			"y": 612.803113553115,
			"width": 18,
			"height": 65,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 92414929,
			"version": 48,
			"versionNonce": 1668055441,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					-1,
					-3
				],
				[
					-2,
					-2
				],
				[
					-3,
					-2
				],
				[
					-5,
					0
				],
				[
					-8,
					3
				],
				[
					-10,
					7
				],
				[
					-11,
					9
				],
				[
					-13,
					14
				],
				[
					-15,
					20
				],
				[
					-16,
					24
				],
				[
					-17,
					30
				],
				[
					-18,
					37
				],
				[
					-18,
					44
				],
				[
					-17,
					47
				],
				[
					-16,
					52
				],
				[
					-15,
					57
				],
				[
					-12,
					59
				],
				[
					-11,
					60
				],
				[
					-8,
					62
				],
				[
					-5,
					62
				],
				[
					-3,
					61
				],
				[
					-3,
					61
				]
			],
			"pressures": [
				0.1923828125,
				0.2041015625,
				0.2412109375,
				0.28515625,
				0.3681640625,
				0.3955078125,
				0.4462890625,
				0.4921875,
				0.5322265625,
				0.548828125,
				0.578125,
				0.6025390625,
				0.6103515625,
				0.62109375,
				0.6259765625,
				0.6279296875,
				0.6279296875,
				0.6259765625,
				0.619140625,
				0.603515625,
				0.591796875,
				0.5537109375,
				0.49609375,
				0.416015625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-3,
				61
			]
		},
		{
			"id": "xzbOjyL3gexail6Qf7e6F",
			"type": "freedraw",
			"x": 7009.164003459888,
			"y": 648.803113553115,
			"width": 15,
			"height": 28,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1939054641,
			"version": 72,
			"versionNonce": 952294399,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-2,
					-1
				],
				[
					-3,
					-1
				],
				[
					-4,
					0
				],
				[
					-5,
					1
				],
				[
					-6,
					2
				],
				[
					-7,
					4
				],
				[
					-7,
					5
				],
				[
					-8,
					7
				],
				[
					-8,
					9
				],
				[
					-9,
					12
				],
				[
					-9,
					13
				],
				[
					-9,
					15
				],
				[
					-8,
					16
				],
				[
					-8,
					17
				],
				[
					-7,
					18
				],
				[
					-6,
					18
				],
				[
					-5,
					18
				],
				[
					-4,
					17
				],
				[
					-2,
					16
				],
				[
					-2,
					15
				],
				[
					0,
					13
				],
				[
					1,
					10
				],
				[
					2,
					8
				],
				[
					2,
					6
				],
				[
					3,
					4
				],
				[
					3,
					2
				],
				[
					3,
					1
				],
				[
					4,
					1
				],
				[
					4,
					0
				],
				[
					3,
					1
				],
				[
					3,
					2
				],
				[
					3,
					3
				],
				[
					3,
					6
				],
				[
					3,
					9
				],
				[
					3,
					10
				],
				[
					3,
					14
				],
				[
					3,
					17
				],
				[
					4,
					20
				],
				[
					4,
					22
				],
				[
					4,
					24
				],
				[
					5,
					25
				],
				[
					5,
					26
				],
				[
					6,
					26
				],
				[
					6,
					26
				]
			],
			"pressures": [
				0.201171875,
				0.203125,
				0.28125,
				0.3203125,
				0.380859375,
				0.4140625,
				0.4287109375,
				0.4619140625,
				0.4755859375,
				0.48046875,
				0.4873046875,
				0.490234375,
				0.4921875,
				0.4921875,
				0.4921875,
				0.4912109375,
				0.4892578125,
				0.4873046875,
				0.486328125,
				0.4853515625,
				0.478515625,
				0.462890625,
				0.4404296875,
				0.412109375,
				0.396484375,
				0.3662109375,
				0.341796875,
				0.326171875,
				0.3212890625,
				0.314453125,
				0.3134765625,
				0.3173828125,
				0.3203125,
				0.32421875,
				0.361328125,
				0.3837890625,
				0.4052734375,
				0.4228515625,
				0.43359375,
				0.4365234375,
				0.4384765625,
				0.4345703125,
				0.4296875,
				0.4248046875,
				0.41015625,
				0.3955078125,
				0.3779296875,
				0.322265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				26
			]
		},
		{
			"id": "DVCgkpH-2pCYg7j2qAzOW",
			"type": "freedraw",
			"x": 7032.164003459888,
			"y": 641.803113553115,
			"width": 9,
			"height": 31,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1222126719,
			"version": 47,
			"versionNonce": 1315448689,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-2
				],
				[
					2,
					-4
				],
				[
					3,
					-5
				],
				[
					4,
					-7
				],
				[
					5,
					-8
				],
				[
					6,
					-10
				],
				[
					7,
					-11
				],
				[
					7,
					-12
				],
				[
					8,
					-13
				],
				[
					9,
					-13
				],
				[
					9,
					-12
				],
				[
					9,
					-11
				],
				[
					9,
					-9
				],
				[
					9,
					-8
				],
				[
					9,
					-5
				],
				[
					9,
					-2
				],
				[
					9,
					-1
				],
				[
					8,
					3
				],
				[
					8,
					6
				],
				[
					8,
					10
				],
				[
					8,
					12
				],
				[
					8,
					15
				],
				[
					8,
					18
				],
				[
					8,
					18
				]
			],
			"pressures": [
				0.1943359375,
				0.197265625,
				0.197265625,
				0.201171875,
				0.2041015625,
				0.2060546875,
				0.20703125,
				0.2099609375,
				0.212890625,
				0.21484375,
				0.2255859375,
				0.24609375,
				0.28515625,
				0.3125,
				0.3359375,
				0.3447265625,
				0.361328125,
				0.373046875,
				0.376953125,
				0.3818359375,
				0.3857421875,
				0.384765625,
				0.380859375,
				0.361328125,
				0.3212890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				8,
				18
			]
		},
		{
			"id": "ZroJiOV2ZcG5RwmQ1Nwe2",
			"type": "freedraw",
			"x": 7032.164003459888,
			"y": 660.803113553115,
			"width": 15,
			"height": 3,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 103647057,
			"version": 34,
			"versionNonce": 1227162655,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					1,
					-2
				],
				[
					2,
					-2
				],
				[
					3,
					-3
				],
				[
					5,
					-3
				],
				[
					7,
					-3
				],
				[
					8,
					-3
				],
				[
					10,
					-3
				],
				[
					12,
					-3
				],
				[
					15,
					-3
				],
				[
					15,
					-3
				]
			],
			"pressures": [
				0.2314453125,
				0.232421875,
				0.2734375,
				0.30078125,
				0.3505859375,
				0.375,
				0.3916015625,
				0.4033203125,
				0.404296875,
				0.3935546875,
				0.36328125,
				0.3115234375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15,
				-3
			]
		},
		{
			"id": "_nxMUWpbtAw-gVG5fM9iQ",
			"type": "freedraw",
			"x": 7062.164003459888,
			"y": 647.803113553115,
			"width": 20,
			"height": 60,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 788470897,
			"version": 77,
			"versionNonce": 179573073,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-1
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-3,
					-2
				],
				[
					-4,
					-2
				],
				[
					-6,
					-2
				],
				[
					-7,
					-1
				],
				[
					-8,
					-1
				],
				[
					-10,
					1
				],
				[
					-12,
					4
				],
				[
					-12,
					5
				],
				[
					-12,
					6
				],
				[
					-13,
					8
				],
				[
					-13,
					11
				],
				[
					-13,
					12
				],
				[
					-12,
					15
				],
				[
					-11,
					17
				],
				[
					-10,
					18
				],
				[
					-10,
					19
				],
				[
					-8,
					19
				],
				[
					-7,
					19
				],
				[
					-6,
					18
				],
				[
					-5,
					17
				],
				[
					-4,
					14
				],
				[
					-2,
					11
				],
				[
					-1,
					7
				],
				[
					0,
					5
				],
				[
					1,
					0
				],
				[
					2,
					-5
				],
				[
					2,
					-8
				],
				[
					3,
					-13
				],
				[
					3,
					-18
				],
				[
					4,
					-23
				],
				[
					4,
					-25
				],
				[
					4,
					-29
				],
				[
					3,
					-32
				],
				[
					3,
					-34
				],
				[
					2,
					-34
				],
				[
					2,
					-32
				],
				[
					1,
					-30
				],
				[
					1,
					-28
				],
				[
					0,
					-23
				],
				[
					0,
					-17
				],
				[
					-1,
					-13
				],
				[
					-1,
					-7
				],
				[
					0,
					0
				],
				[
					0,
					7
				],
				[
					1,
					10
				],
				[
					2,
					15
				],
				[
					2,
					17
				],
				[
					3,
					21
				],
				[
					5,
					24
				],
				[
					6,
					25
				],
				[
					7,
					26
				],
				[
					7,
					26
				]
			],
			"pressures": [
				0.140625,
				0.1435546875,
				0.162109375,
				0.171875,
				0.201171875,
				0.2216796875,
				0.279296875,
				0.314453125,
				0.3291015625,
				0.353515625,
				0.376953125,
				0.380859375,
				0.3828125,
				0.3857421875,
				0.3876953125,
				0.3876953125,
				0.3876953125,
				0.3857421875,
				0.3818359375,
				0.3779296875,
				0.36328125,
				0.3408203125,
				0.3251953125,
				0.2880859375,
				0.2421875,
				0.1904296875,
				0.138671875,
				0.1142578125,
				0.0732421875,
				0.04296875,
				0.0322265625,
				0.0205078125,
				0.0185546875,
				0.0283203125,
				0.0390625,
				0.072265625,
				0.11328125,
				0.16015625,
				0.212890625,
				0.2783203125,
				0.30859375,
				0.3232421875,
				0.349609375,
				0.369140625,
				0.3759765625,
				0.388671875,
				0.3955078125,
				0.400390625,
				0.4033203125,
				0.404296875,
				0.400390625,
				0.3779296875,
				0.3427734375,
				0.29296875,
				0.259765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7,
				26
			]
		},
		{
			"id": "Xnuvj9lKo-qmYoG5v-rtg",
			"type": "freedraw",
			"x": 7075.164003459888,
			"y": 651.803113553115,
			"width": 50,
			"height": 21,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 929720991,
			"version": 129,
			"versionNonce": 927803455,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					1
				],
				[
					-2,
					2
				],
				[
					-2,
					3
				],
				[
					-3,
					4
				],
				[
					-3,
					5
				],
				[
					-3,
					7
				],
				[
					-3,
					9
				],
				[
					-2,
					11
				],
				[
					-2,
					12
				],
				[
					-1,
					14
				],
				[
					1,
					17
				],
				[
					2,
					18
				],
				[
					3,
					18
				],
				[
					4,
					19
				],
				[
					5,
					19
				],
				[
					6,
					18
				],
				[
					7,
					17
				],
				[
					7,
					16
				],
				[
					7,
					15
				],
				[
					8,
					14
				],
				[
					8,
					12
				],
				[
					7,
					10
				],
				[
					7,
					8
				],
				[
					7,
					7
				],
				[
					7,
					5
				],
				[
					6,
					3
				],
				[
					6,
					2
				],
				[
					7,
					1
				],
				[
					7,
					0
				],
				[
					8,
					-1
				],
				[
					9,
					-1
				],
				[
					10,
					-1
				],
				[
					11,
					0
				],
				[
					11,
					1
				],
				[
					12,
					2
				],
				[
					13,
					4
				],
				[
					13,
					5
				],
				[
					13,
					7
				],
				[
					14,
					9
				],
				[
					14,
					11
				],
				[
					14,
					12
				],
				[
					14,
					14
				],
				[
					14,
					16
				],
				[
					14,
					17
				],
				[
					14,
					18
				],
				[
					14,
					17
				],
				[
					15,
					16
				],
				[
					15,
					14
				],
				[
					16,
					13
				],
				[
					17,
					11
				],
				[
					17,
					9
				],
				[
					18,
					7
				],
				[
					19,
					6
				],
				[
					20,
					5
				],
				[
					20,
					3
				],
				[
					21,
					2
				],
				[
					22,
					1
				],
				[
					23,
					1
				],
				[
					23,
					2
				],
				[
					24,
					4
				],
				[
					24,
					6
				],
				[
					25,
					8
				],
				[
					25,
					10
				],
				[
					26,
					11
				],
				[
					27,
					13
				],
				[
					27,
					15
				],
				[
					28,
					16
				],
				[
					29,
					17
				],
				[
					30,
					18
				],
				[
					31,
					18
				],
				[
					32,
					18
				],
				[
					33,
					18
				],
				[
					34,
					18
				],
				[
					35,
					17
				],
				[
					35,
					16
				],
				[
					36,
					14
				],
				[
					37,
					12
				],
				[
					37,
					10
				],
				[
					37,
					9
				],
				[
					38,
					6
				],
				[
					38,
					4
				],
				[
					37,
					2
				],
				[
					37,
					1
				],
				[
					37,
					-1
				],
				[
					36,
					-1
				],
				[
					35,
					-2
				],
				[
					34,
					-1
				],
				[
					33,
					-1
				],
				[
					33,
					1
				],
				[
					33,
					4
				],
				[
					33,
					5
				],
				[
					33,
					8
				],
				[
					34,
					10
				],
				[
					35,
					13
				],
				[
					35,
					14
				],
				[
					36,
					16
				],
				[
					38,
					17
				],
				[
					39,
					18
				],
				[
					40,
					18
				],
				[
					41,
					19
				],
				[
					43,
					19
				],
				[
					44,
					18
				],
				[
					45,
					17
				],
				[
					46,
					16
				],
				[
					47,
					15
				],
				[
					47,
					15
				]
			],
			"pressures": [
				0.09375,
				0.12109375,
				0.1376953125,
				0.15234375,
				0.1640625,
				0.1767578125,
				0.181640625,
				0.1845703125,
				0.1865234375,
				0.1884765625,
				0.189453125,
				0.189453125,
				0.189453125,
				0.189453125,
				0.189453125,
				0.189453125,
				0.1904296875,
				0.1923828125,
				0.193359375,
				0.193359375,
				0.193359375,
				0.1923828125,
				0.19140625,
				0.1904296875,
				0.1884765625,
				0.1884765625,
				0.1884765625,
				0.189453125,
				0.189453125,
				0.189453125,
				0.1904296875,
				0.1923828125,
				0.19921875,
				0.2080078125,
				0.2236328125,
				0.2421875,
				0.2626953125,
				0.2861328125,
				0.296875,
				0.3154296875,
				0.330078125,
				0.33984375,
				0.3427734375,
				0.345703125,
				0.345703125,
				0.345703125,
				0.34375,
				0.33984375,
				0.333984375,
				0.3203125,
				0.314453125,
				0.3037109375,
				0.294921875,
				0.2890625,
				0.2880859375,
				0.2861328125,
				0.287109375,
				0.2880859375,
				0.291015625,
				0.2978515625,
				0.3115234375,
				0.3349609375,
				0.3525390625,
				0.3623046875,
				0.369140625,
				0.37109375,
				0.375,
				0.3759765625,
				0.3759765625,
				0.3759765625,
				0.3759765625,
				0.375,
				0.375,
				0.375,
				0.3740234375,
				0.3720703125,
				0.37109375,
				0.3701171875,
				0.3681640625,
				0.3662109375,
				0.3662109375,
				0.365234375,
				0.365234375,
				0.3662109375,
				0.3671875,
				0.3740234375,
				0.3798828125,
				0.396484375,
				0.427734375,
				0.4365234375,
				0.44921875,
				0.4560546875,
				0.45703125,
				0.4619140625,
				0.46484375,
				0.46484375,
				0.46484375,
				0.46484375,
				0.46484375,
				0.4638671875,
				0.4609375,
				0.45703125,
				0.435546875,
				0.4091796875,
				0.3916015625,
				0.34765625,
				0.318359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				47,
				15
			]
		},
		{
			"id": "9-oBtfx-C2EcyvHLf_wrh",
			"type": "freedraw",
			"x": 7114.164003459888,
			"y": 607.803113553115,
			"width": 21,
			"height": 87,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 79690769,
			"version": 47,
			"versionNonce": 229097265,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-2
				],
				[
					-1,
					-3
				],
				[
					0,
					-3
				],
				[
					0,
					-4
				],
				[
					1,
					-4
				],
				[
					2,
					-3
				],
				[
					4,
					-2
				],
				[
					7,
					1
				],
				[
					8,
					2
				],
				[
					11,
					7
				],
				[
					14,
					12
				],
				[
					16,
					15
				],
				[
					18,
					21
				],
				[
					19,
					29
				],
				[
					20,
					33
				],
				[
					20,
					41
				],
				[
					20,
					49
				],
				[
					18,
					57
				],
				[
					18,
					61
				],
				[
					16,
					68
				],
				[
					14,
					74
				],
				[
					13,
					77
				],
				[
					11,
					81
				],
				[
					10,
					83
				],
				[
					10,
					83
				]
			],
			"pressures": [
				0.1787109375,
				0.193359375,
				0.22265625,
				0.2646484375,
				0.3291015625,
				0.3984375,
				0.4345703125,
				0.54296875,
				0.607421875,
				0.6357421875,
				0.685546875,
				0.72265625,
				0.7373046875,
				0.7607421875,
				0.77734375,
				0.7822265625,
				0.7861328125,
				0.783203125,
				0.7685546875,
				0.755859375,
				0.720703125,
				0.6669921875,
				0.630859375,
				0.5390625,
				0.482421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				83
			]
		},
		{
			"id": "O4UtqvZfXqMxkaZm-IY-n",
			"type": "freedraw",
			"x": 7211.164003459888,
			"y": 638.803113553115,
			"width": 24,
			"height": 29,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1425943327,
			"version": 72,
			"versionNonce": 1360775263,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					0,
					3
				],
				[
					0,
					4
				],
				[
					1,
					6
				],
				[
					1,
					9
				],
				[
					1,
					11
				],
				[
					0,
					14
				],
				[
					0,
					18
				],
				[
					0,
					21
				],
				[
					0,
					23
				],
				[
					0,
					25
				],
				[
					0,
					26
				],
				[
					1,
					28
				],
				[
					1,
					29
				],
				[
					2,
					29
				],
				[
					4,
					28
				],
				[
					5,
					26
				],
				[
					7,
					24
				],
				[
					8,
					23
				],
				[
					9,
					20
				],
				[
					11,
					18
				],
				[
					11,
					17
				],
				[
					12,
					16
				],
				[
					12,
					14
				],
				[
					13,
					13
				],
				[
					13,
					14
				],
				[
					14,
					15
				],
				[
					14,
					16
				],
				[
					15,
					19
				],
				[
					15,
					20
				],
				[
					16,
					22
				],
				[
					17,
					24
				],
				[
					18,
					26
				],
				[
					18,
					27
				],
				[
					20,
					28
				],
				[
					21,
					28
				],
				[
					22,
					27
				],
				[
					23,
					25
				],
				[
					24,
					23
				],
				[
					24,
					22
				],
				[
					24,
					19
				],
				[
					24,
					16
				],
				[
					23,
					13
				],
				[
					23,
					12
				],
				[
					21,
					9
				],
				[
					21,
					8
				],
				[
					19,
					7
				],
				[
					18,
					5
				],
				[
					18,
					5
				]
			],
			"pressures": [
				0.1552734375,
				0.16015625,
				0.255859375,
				0.3203125,
				0.3720703125,
				0.4150390625,
				0.4453125,
				0.4580078125,
				0.478515625,
				0.4931640625,
				0.501953125,
				0.50390625,
				0.505859375,
				0.50390625,
				0.494140625,
				0.482421875,
				0.4765625,
				0.4541015625,
				0.4423828125,
				0.431640625,
				0.4267578125,
				0.4150390625,
				0.4033203125,
				0.3984375,
				0.396484375,
				0.3994140625,
				0.40234375,
				0.408203125,
				0.416015625,
				0.416015625,
				0.41796875,
				0.421875,
				0.4296875,
				0.435546875,
				0.4423828125,
				0.447265625,
				0.45703125,
				0.466796875,
				0.4765625,
				0.4931640625,
				0.505859375,
				0.51171875,
				0.5224609375,
				0.529296875,
				0.5322265625,
				0.53125,
				0.5185546875,
				0.5068359375,
				0.4638671875,
				0.390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				18,
				5
			]
		},
		{
			"id": "rr8XSQofyDPb8R1V3YT2K",
			"type": "freedraw",
			"x": 7248.164003459888,
			"y": 647.803113553115,
			"width": 24,
			"height": 22,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 763265631,
			"version": 90,
			"versionNonce": 900378897,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					0,
					1
				],
				[
					-1,
					1
				],
				[
					-1,
					2
				],
				[
					-2,
					2
				],
				[
					-3,
					3
				],
				[
					-4,
					4
				],
				[
					-5,
					6
				],
				[
					-6,
					8
				],
				[
					-7,
					10
				],
				[
					-7,
					12
				],
				[
					-7,
					13
				],
				[
					-7,
					14
				],
				[
					-7,
					15
				],
				[
					-6,
					16
				],
				[
					-5,
					17
				],
				[
					-4,
					17
				],
				[
					-3,
					16
				],
				[
					-2,
					15
				],
				[
					-1,
					14
				],
				[
					0,
					12
				],
				[
					0,
					11
				],
				[
					2,
					9
				],
				[
					2,
					7
				],
				[
					3,
					5
				],
				[
					3,
					4
				],
				[
					3,
					3
				],
				[
					3,
					2
				],
				[
					3,
					1
				],
				[
					3,
					2
				],
				[
					3,
					3
				],
				[
					3,
					4
				],
				[
					3,
					6
				],
				[
					3,
					7
				],
				[
					3,
					9
				],
				[
					3,
					11
				],
				[
					3,
					13
				],
				[
					4,
					14
				],
				[
					4,
					16
				],
				[
					5,
					17
				],
				[
					6,
					18
				],
				[
					7,
					17
				],
				[
					9,
					16
				],
				[
					9,
					15
				],
				[
					10,
					13
				],
				[
					11,
					11
				],
				[
					12,
					9
				],
				[
					12,
					8
				],
				[
					13,
					6
				],
				[
					14,
					4
				],
				[
					14,
					3
				],
				[
					14,
					2
				],
				[
					15,
					1
				],
				[
					15,
					0
				],
				[
					16,
					0
				],
				[
					16,
					1
				],
				[
					17,
					2
				],
				[
					17,
					4
				],
				[
					17,
					6
				],
				[
					17,
					8
				],
				[
					17,
					10
				],
				[
					16,
					13
				],
				[
					16,
					15
				],
				[
					16,
					18
				],
				[
					16,
					20
				],
				[
					16,
					21
				],
				[
					16,
					22
				],
				[
					16,
					22
				]
			],
			"pressures": [
				0.0966796875,
				0.14453125,
				0.23828125,
				0.2900390625,
				0.302734375,
				0.314453125,
				0.326171875,
				0.3564453125,
				0.3720703125,
				0.3818359375,
				0.3837890625,
				0.3828125,
				0.380859375,
				0.3779296875,
				0.3681640625,
				0.353515625,
				0.3095703125,
				0.294921875,
				0.2607421875,
				0.2216796875,
				0.1767578125,
				0.134765625,
				0.1162109375,
				0.0908203125,
				0.0771484375,
				0.0791015625,
				0.0859375,
				0.0966796875,
				0.1220703125,
				0.150390625,
				0.25390625,
				0.2783203125,
				0.2998046875,
				0.3173828125,
				0.32421875,
				0.3359375,
				0.341796875,
				0.341796875,
				0.3388671875,
				0.3271484375,
				0.3076171875,
				0.267578125,
				0.232421875,
				0.154296875,
				0.134765625,
				0.099609375,
				0.0712890625,
				0.0546875,
				0.0498046875,
				0.046875,
				0.0517578125,
				0.056640625,
				0.0654296875,
				0.08984375,
				0.138671875,
				0.1572265625,
				0.228515625,
				0.2548828125,
				0.2841796875,
				0.298828125,
				0.3056640625,
				0.3173828125,
				0.3232421875,
				0.3212890625,
				0.3076171875,
				0.279296875,
				0.2568359375,
				0.232421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				16,
				22
			]
		},
		{
			"id": "_8LvosulDr1xncHAhd1JJ",
			"type": "freedraw",
			"x": 7277.164003459888,
			"y": 646.803113553115,
			"width": 2,
			"height": 22,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2030751423,
			"version": 36,
			"versionNonce": 1415668863,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					1,
					3
				],
				[
					1,
					5
				],
				[
					1,
					7
				],
				[
					1,
					9
				],
				[
					1,
					11
				],
				[
					0,
					14
				],
				[
					0,
					16
				],
				[
					0,
					19
				],
				[
					-1,
					21
				],
				[
					-1,
					22
				],
				[
					-1,
					22
				]
			],
			"pressures": [
				0.0986328125,
				0.142578125,
				0.205078125,
				0.2236328125,
				0.2255859375,
				0.2265625,
				0.2265625,
				0.2255859375,
				0.224609375,
				0.2197265625,
				0.20703125,
				0.185546875,
				0.171875,
				0.154296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1,
				22
			]
		},
		{
			"id": "h7-PGduJ1vCh4vcv8NJm7",
			"type": "freedraw",
			"x": 7271.164003459888,
			"y": 660.803113553115,
			"width": 14,
			"height": 3,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 693166015,
			"version": 32,
			"versionNonce": 674522865,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					1,
					1
				],
				[
					3,
					2
				],
				[
					4,
					2
				],
				[
					6,
					2
				],
				[
					8,
					3
				],
				[
					11,
					3
				],
				[
					13,
					2
				],
				[
					14,
					2
				],
				[
					14,
					2
				]
			],
			"pressures": [
				0.341796875,
				0.3720703125,
				0.5302734375,
				0.5615234375,
				0.5673828125,
				0.5732421875,
				0.56640625,
				0.537109375,
				0.51171875,
				0.4775390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				14,
				2
			]
		},
		{
			"id": "g90_busKulfaKUfpKv89Z",
			"type": "freedraw",
			"x": 7278.164003459888,
			"y": 636.803113553115,
			"width": 9,
			"height": 2,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1995162751,
			"version": 33,
			"versionNonce": 1893629087,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					0
				],
				[
					-3,
					0
				],
				[
					-4,
					0
				],
				[
					-5,
					0
				],
				[
					-6,
					1
				],
				[
					-7,
					1
				],
				[
					-8,
					1
				],
				[
					-9,
					1
				],
				[
					-9,
					2
				],
				[
					-8,
					2
				],
				[
					-8,
					2
				]
			],
			"pressures": [
				0.46484375,
				0.482421875,
				0.4951171875,
				0.5234375,
				0.5341796875,
				0.5556640625,
				0.56640625,
				0.5703125,
				0.5615234375,
				0.529296875,
				0.3955078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-8,
				2
			]
		},
		{
			"id": "0qY_bPK-MV8z_sy6hpTxO",
			"type": "freedraw",
			"x": 7317.164003459888,
			"y": 628.803113553115,
			"width": 20,
			"height": 48,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1830051377,
			"version": 45,
			"versionNonce": 1875665105,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-4,
					-2
				],
				[
					-6,
					-1
				],
				[
					-11,
					3
				],
				[
					-13,
					4
				],
				[
					-15,
					8
				],
				[
					-16,
					10
				],
				[
					-19,
					14
				],
				[
					-19,
					17
				],
				[
					-20,
					24
				],
				[
					-20,
					27
				],
				[
					-20,
					31
				],
				[
					-19,
					36
				],
				[
					-17,
					39
				],
				[
					-16,
					41
				],
				[
					-14,
					44
				],
				[
					-11,
					45
				],
				[
					-10,
					46
				],
				[
					-8,
					46
				],
				[
					-8,
					46
				]
			],
			"pressures": [
				0.2646484375,
				0.2724609375,
				0.322265625,
				0.361328125,
				0.39453125,
				0.4794921875,
				0.505859375,
				0.587890625,
				0.603515625,
				0.630859375,
				0.6435546875,
				0.66015625,
				0.666015625,
				0.673828125,
				0.673828125,
				0.671875,
				0.6630859375,
				0.6455078125,
				0.634765625,
				0.6044921875,
				0.5556640625,
				0.5234375,
				0.443359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-8,
				46
			]
		},
		{
			"id": "akWsFzZuaExRmfh524ngk",
			"type": "freedraw",
			"x": 7322.164003459888,
			"y": 658.803113553115,
			"width": 10,
			"height": 19,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 206201567,
			"version": 64,
			"versionNonce": 172200127,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					-1,
					-3
				],
				[
					-2,
					-3
				],
				[
					-3,
					-3
				],
				[
					-4,
					-3
				],
				[
					-4,
					-2
				],
				[
					-5,
					-1
				],
				[
					-5,
					0
				],
				[
					-6,
					1
				],
				[
					-7,
					3
				],
				[
					-7,
					4
				],
				[
					-7,
					6
				],
				[
					-7,
					8
				],
				[
					-7,
					10
				],
				[
					-7,
					11
				],
				[
					-6,
					12
				],
				[
					-5,
					13
				],
				[
					-4,
					14
				],
				[
					-3,
					13
				],
				[
					-1,
					12
				],
				[
					0,
					10
				],
				[
					0,
					9
				],
				[
					1,
					7
				],
				[
					2,
					4
				],
				[
					2,
					3
				],
				[
					2,
					1
				],
				[
					3,
					-1
				],
				[
					3,
					-3
				],
				[
					3,
					-4
				],
				[
					2,
					-5
				],
				[
					2,
					-4
				],
				[
					2,
					-3
				],
				[
					2,
					-2
				],
				[
					2,
					0
				],
				[
					2,
					3
				],
				[
					3,
					5
				],
				[
					3,
					6
				],
				[
					3,
					7
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.16796875,
				0.1943359375,
				0.234375,
				0.3115234375,
				0.3349609375,
				0.408203125,
				0.4765625,
				0.5068359375,
				0.517578125,
				0.54296875,
				0.548828125,
				0.556640625,
				0.5634765625,
				0.56640625,
				0.5712890625,
				0.572265625,
				0.5654296875,
				0.5576171875,
				0.53515625,
				0.5078125,
				0.4736328125,
				0.4130859375,
				0.37109375,
				0.3310546875,
				0.3115234375,
				0.27734375,
				0.2529296875,
				0.24609375,
				0.2392578125,
				0.2392578125,
				0.2548828125,
				0.2646484375,
				0.2890625,
				0.34375,
				0.375,
				0.3798828125,
				0.3818359375,
				0.365234375,
				0.330078125,
				0.3056640625,
				0.2763671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3,
				7
			]
		},
		{
			"id": "3XUfiqk9ocW_ef4-ckuXj",
			"type": "freedraw",
			"x": 7336.164003459888,
			"y": 643.803113553115,
			"width": 11,
			"height": 28,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 567136671,
			"version": 57,
			"versionNonce": 1510612657,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					2,
					-3
				],
				[
					3,
					-3
				],
				[
					4,
					-4
				],
				[
					5,
					-4
				],
				[
					6,
					-4
				],
				[
					8,
					-3
				],
				[
					9,
					-3
				],
				[
					9,
					-2
				],
				[
					10,
					-1
				],
				[
					11,
					1
				],
				[
					11,
					3
				],
				[
					10,
					5
				],
				[
					10,
					6
				],
				[
					9,
					9
				],
				[
					8,
					11
				],
				[
					6,
					13
				],
				[
					5,
					15
				],
				[
					4,
					17
				],
				[
					3,
					18
				],
				[
					2,
					19
				],
				[
					1,
					20
				],
				[
					0,
					21
				],
				[
					1,
					21
				],
				[
					2,
					22
				],
				[
					3,
					22
				],
				[
					4,
					22
				],
				[
					5,
					23
				],
				[
					7,
					24
				],
				[
					8,
					24
				],
				[
					9,
					24
				],
				[
					9,
					24
				]
			],
			"pressures": [
				0.171875,
				0.177734375,
				0.201171875,
				0.2177734375,
				0.267578125,
				0.2978515625,
				0.3427734375,
				0.3720703125,
				0.400390625,
				0.4150390625,
				0.45703125,
				0.482421875,
				0.494140625,
				0.5146484375,
				0.5361328125,
				0.544921875,
				0.5498046875,
				0.5498046875,
				0.5498046875,
				0.5498046875,
				0.55078125,
				0.55078125,
				0.55078125,
				0.5517578125,
				0.5517578125,
				0.5517578125,
				0.548828125,
				0.55078125,
				0.5478515625,
				0.537109375,
				0.5263671875,
				0.4990234375,
				0.4560546875,
				0.396484375,
				0.361328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9,
				24
			]
		},
		{
			"id": "WDJNeg0MjEi7luuHcRc57",
			"type": "freedraw",
			"x": 7369.164003459888,
			"y": 646.803113553115,
			"width": 62,
			"height": 44,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 345840017,
			"version": 182,
			"versionNonce": 976298207,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					-1
				],
				[
					-2,
					-1
				],
				[
					-3,
					-1
				],
				[
					-4,
					-1
				],
				[
					-5,
					-1
				],
				[
					-7,
					-1
				],
				[
					-9,
					0
				],
				[
					-9,
					1
				],
				[
					-11,
					2
				],
				[
					-11,
					5
				],
				[
					-12,
					7
				],
				[
					-12,
					8
				],
				[
					-12,
					11
				],
				[
					-12,
					14
				],
				[
					-11,
					16
				],
				[
					-10,
					17
				],
				[
					-9,
					18
				],
				[
					-8,
					18
				],
				[
					-7,
					16
				],
				[
					-5,
					14
				],
				[
					-3,
					11
				],
				[
					-2,
					10
				],
				[
					-1,
					6
				],
				[
					0,
					2
				],
				[
					1,
					-2
				],
				[
					2,
					-4
				],
				[
					2,
					-8
				],
				[
					2,
					-12
				],
				[
					2,
					-15
				],
				[
					2,
					-16
				],
				[
					2,
					-18
				],
				[
					1,
					-19
				],
				[
					0,
					-19
				],
				[
					0,
					-18
				],
				[
					-1,
					-16
				],
				[
					-2,
					-15
				],
				[
					-2,
					-11
				],
				[
					-2,
					-10
				],
				[
					-3,
					-5
				],
				[
					-3,
					0
				],
				[
					-2,
					5
				],
				[
					-2,
					7
				],
				[
					-1,
					12
				],
				[
					0,
					16
				],
				[
					2,
					19
				],
				[
					3,
					20
				],
				[
					5,
					21
				],
				[
					7,
					21
				],
				[
					9,
					20
				],
				[
					10,
					19
				],
				[
					12,
					17
				],
				[
					14,
					15
				],
				[
					14,
					14
				],
				[
					15,
					11
				],
				[
					16,
					9
				],
				[
					16,
					6
				],
				[
					15,
					4
				],
				[
					15,
					3
				],
				[
					14,
					2
				],
				[
					13,
					2
				],
				[
					12,
					3
				],
				[
					11,
					3
				],
				[
					10,
					4
				],
				[
					10,
					5
				],
				[
					9,
					7
				],
				[
					9,
					10
				],
				[
					9,
					12
				],
				[
					9,
					14
				],
				[
					9,
					17
				],
				[
					10,
					19
				],
				[
					10,
					20
				],
				[
					11,
					22
				],
				[
					12,
					24
				],
				[
					13,
					24
				],
				[
					13,
					25
				],
				[
					14,
					24
				],
				[
					15,
					23
				],
				[
					16,
					22
				],
				[
					16,
					21
				],
				[
					17,
					19
				],
				[
					17,
					16
				],
				[
					17,
					14
				],
				[
					17,
					12
				],
				[
					17,
					10
				],
				[
					18,
					7
				],
				[
					18,
					6
				],
				[
					18,
					4
				],
				[
					19,
					2
				],
				[
					19,
					1
				],
				[
					20,
					0
				],
				[
					21,
					0
				],
				[
					22,
					0
				],
				[
					23,
					1
				],
				[
					23,
					2
				],
				[
					24,
					4
				],
				[
					25,
					6
				],
				[
					25,
					7
				],
				[
					25,
					10
				],
				[
					25,
					12
				],
				[
					25,
					13
				],
				[
					25,
					15
				],
				[
					25,
					16
				],
				[
					25,
					18
				],
				[
					25,
					19
				],
				[
					25,
					18
				],
				[
					26,
					17
				],
				[
					27,
					15
				],
				[
					28,
					13
				],
				[
					28,
					12
				],
				[
					29,
					10
				],
				[
					30,
					8
				],
				[
					31,
					6
				],
				[
					31,
					5
				],
				[
					32,
					3
				],
				[
					32,
					2
				],
				[
					32,
					1
				],
				[
					33,
					1
				],
				[
					33,
					2
				],
				[
					33,
					3
				],
				[
					33,
					5
				],
				[
					33,
					6
				],
				[
					33,
					7
				],
				[
					34,
					10
				],
				[
					34,
					12
				],
				[
					35,
					13
				],
				[
					36,
					15
				],
				[
					37,
					16
				],
				[
					38,
					17
				],
				[
					39,
					17
				],
				[
					40,
					18
				],
				[
					41,
					18
				],
				[
					42,
					17
				],
				[
					43,
					16
				],
				[
					44,
					14
				],
				[
					44,
					13
				],
				[
					45,
					11
				],
				[
					45,
					8
				],
				[
					45,
					6
				],
				[
					45,
					5
				],
				[
					44,
					3
				],
				[
					44,
					1
				],
				[
					43,
					0
				],
				[
					42,
					1
				],
				[
					41,
					2
				],
				[
					40,
					3
				],
				[
					40,
					4
				],
				[
					40,
					7
				],
				[
					39,
					9
				],
				[
					40,
					11
				],
				[
					40,
					14
				],
				[
					41,
					16
				],
				[
					42,
					18
				],
				[
					43,
					19
				],
				[
					44,
					21
				],
				[
					46,
					22
				],
				[
					48,
					22
				],
				[
					49,
					22
				],
				[
					50,
					21
				],
				[
					50,
					21
				]
			],
			"pressures": [
				0.1669921875,
				0.193359375,
				0.208984375,
				0.2451171875,
				0.298828125,
				0.3486328125,
				0.380859375,
				0.4599609375,
				0.494140625,
				0.5068359375,
				0.521484375,
				0.52734375,
				0.529296875,
				0.53125,
				0.53125,
				0.5263671875,
				0.5146484375,
				0.484375,
				0.45703125,
				0.439453125,
				0.3984375,
				0.353515625,
				0.310546875,
				0.2900390625,
				0.251953125,
				0.2255859375,
				0.212890625,
				0.208984375,
				0.2099609375,
				0.22265625,
				0.25,
				0.267578125,
				0.3076171875,
				0.328125,
				0.3837890625,
				0.4111328125,
				0.4150390625,
				0.4150390625,
				0.41796875,
				0.419921875,
				0.4189453125,
				0.4140625,
				0.3974609375,
				0.3837890625,
				0.3447265625,
				0.298828125,
				0.25,
				0.2255859375,
				0.181640625,
				0.14453125,
				0.1103515625,
				0.0947265625,
				0.0693359375,
				0.05078125,
				0.0458984375,
				0.0498046875,
				0.0693359375,
				0.1005859375,
				0.16796875,
				0.1923828125,
				0.2607421875,
				0.28125,
				0.314453125,
				0.3359375,
				0.349609375,
				0.353515625,
				0.357421875,
				0.361328125,
				0.3642578125,
				0.3662109375,
				0.3681640625,
				0.3662109375,
				0.3623046875,
				0.3486328125,
				0.33203125,
				0.3134765625,
				0.3046875,
				0.2900390625,
				0.2802734375,
				0.2763671875,
				0.2763671875,
				0.275390625,
				0.275390625,
				0.2744140625,
				0.2744140625,
				0.2734375,
				0.271484375,
				0.26953125,
				0.2666015625,
				0.2626953125,
				0.2607421875,
				0.259765625,
				0.26171875,
				0.2763671875,
				0.302734375,
				0.3134765625,
				0.3505859375,
				0.3857421875,
				0.396484375,
				0.4169921875,
				0.43359375,
				0.4384765625,
				0.443359375,
				0.4443359375,
				0.4326171875,
				0.396484375,
				0.3544921875,
				0.30859375,
				0.2646484375,
				0.2421875,
				0.23046875,
				0.2109375,
				0.1982421875,
				0.1943359375,
				0.1943359375,
				0.1953125,
				0.2021484375,
				0.216796875,
				0.2431640625,
				0.2822265625,
				0.302734375,
				0.3251953125,
				0.3330078125,
				0.3486328125,
				0.3603515625,
				0.3681640625,
				0.37109375,
				0.375,
				0.375,
				0.373046875,
				0.3662109375,
				0.3544921875,
				0.33984375,
				0.32421875,
				0.2978515625,
				0.2783203125,
				0.267578125,
				0.24609375,
				0.224609375,
				0.2080078125,
				0.2021484375,
				0.19921875,
				0.2060546875,
				0.220703125,
				0.2568359375,
				0.2880859375,
				0.3193359375,
				0.333984375,
				0.361328125,
				0.3828125,
				0.390625,
				0.3994140625,
				0.400390625,
				0.3896484375,
				0.3798828125,
				0.3525390625,
				0.3173828125,
				0.2783203125,
				0.255859375,
				0.2333984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				50,
				21
			]
		},
		{
			"id": "PV-xx7MTZWkKb4f0id5uZ",
			"type": "freedraw",
			"x": 7415.164003459888,
			"y": 613.803113553115,
			"width": 21,
			"height": 78,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 254948721,
			"version": 43,
			"versionNonce": 362094737,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					2,
					0
				],
				[
					3,
					1
				],
				[
					4,
					2
				],
				[
					6,
					4
				],
				[
					8,
					6
				],
				[
					10,
					8
				],
				[
					11,
					10
				],
				[
					15,
					17
				],
				[
					17,
					20
				],
				[
					18,
					23
				],
				[
					19,
					26
				],
				[
					21,
					34
				],
				[
					21,
					39
				],
				[
					21,
					49
				],
				[
					20,
					59
				],
				[
					17,
					69
				],
				[
					16,
					73
				],
				[
					14,
					77
				],
				[
					14,
					77
				]
			],
			"pressures": [
				0.2080078125,
				0.2275390625,
				0.2705078125,
				0.2880859375,
				0.34375,
				0.4013671875,
				0.48046875,
				0.560546875,
				0.599609375,
				0.63671875,
				0.7373046875,
				0.765625,
				0.7890625,
				0.810546875,
				0.837890625,
				0.84375,
				0.83203125,
				0.7919921875,
				0.7158203125,
				0.662109375,
				0.595703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				14,
				77
			]
		},
		{
			"id": "Im9_wTV_ABk1EXfEYKI5b",
			"type": "freedraw",
			"x": 6824.164003459888,
			"y": 737.803113553115,
			"width": 67,
			"height": 34,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 85116799,
			"version": 151,
			"versionNonce": 305638655,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					-1,
					4
				],
				[
					-1,
					6
				],
				[
					-1,
					9
				],
				[
					-1,
					12
				],
				[
					-1,
					13
				],
				[
					-1,
					17
				],
				[
					-1,
					19
				],
				[
					-1,
					22
				],
				[
					-1,
					23
				],
				[
					0,
					24
				],
				[
					1,
					25
				],
				[
					2,
					25
				],
				[
					3,
					25
				],
				[
					5,
					24
				],
				[
					6,
					23
				],
				[
					6,
					22
				],
				[
					7,
					21
				],
				[
					8,
					18
				],
				[
					9,
					17
				],
				[
					9,
					16
				],
				[
					9,
					17
				],
				[
					10,
					18
				],
				[
					11,
					20
				],
				[
					12,
					21
				],
				[
					13,
					22
				],
				[
					13,
					23
				],
				[
					14,
					24
				],
				[
					15,
					24
				],
				[
					16,
					25
				],
				[
					18,
					25
				],
				[
					19,
					25
				],
				[
					20,
					25
				],
				[
					22,
					24
				],
				[
					23,
					23
				],
				[
					23,
					22
				],
				[
					23,
					21
				],
				[
					24,
					19
				],
				[
					23,
					17
				],
				[
					23,
					16
				],
				[
					22,
					14
				],
				[
					21,
					12
				],
				[
					20,
					10
				],
				[
					20,
					9
				],
				[
					19,
					8
				],
				[
					18,
					6
				],
				[
					18,
					5
				],
				[
					19,
					5
				],
				[
					20,
					6
				],
				[
					22,
					7
				],
				[
					24,
					8
				],
				[
					25,
					9
				],
				[
					27,
					10
				],
				[
					30,
					11
				],
				[
					32,
					12
				],
				[
					33,
					12
				],
				[
					36,
					13
				],
				[
					37,
					13
				],
				[
					39,
					14
				],
				[
					40,
					14
				],
				[
					41,
					13
				],
				[
					40,
					13
				],
				[
					39,
					13
				],
				[
					38,
					14
				],
				[
					37,
					14
				],
				[
					36,
					15
				],
				[
					35,
					16
				],
				[
					35,
					17
				],
				[
					34,
					19
				],
				[
					34,
					20
				],
				[
					34,
					21
				],
				[
					33,
					22
				],
				[
					33,
					24
				],
				[
					34,
					25
				],
				[
					34,
					26
				],
				[
					34,
					27
				],
				[
					35,
					27
				],
				[
					36,
					27
				],
				[
					37,
					26
				],
				[
					39,
					24
				],
				[
					40,
					23
				],
				[
					41,
					21
				],
				[
					42,
					20
				],
				[
					43,
					18
				],
				[
					43,
					16
				],
				[
					44,
					15
				],
				[
					44,
					14
				],
				[
					44,
					13
				],
				[
					45,
					14
				],
				[
					45,
					15
				],
				[
					45,
					16
				],
				[
					45,
					18
				],
				[
					45,
					19
				],
				[
					45,
					20
				],
				[
					46,
					22
				],
				[
					46,
					23
				],
				[
					47,
					25
				],
				[
					48,
					26
				],
				[
					50,
					27
				],
				[
					51,
					26
				],
				[
					52,
					25
				],
				[
					53,
					25
				],
				[
					54,
					23
				],
				[
					56,
					21
				],
				[
					56,
					20
				],
				[
					58,
					18
				],
				[
					59,
					16
				],
				[
					60,
					14
				],
				[
					61,
					13
				],
				[
					62,
					11
				],
				[
					63,
					9
				],
				[
					64,
					8
				],
				[
					65,
					8
				],
				[
					65,
					7
				],
				[
					66,
					8
				],
				[
					66,
					10
				],
				[
					66,
					11
				],
				[
					66,
					13
				],
				[
					66,
					16
				],
				[
					66,
					20
				],
				[
					66,
					21
				],
				[
					66,
					23
				],
				[
					66,
					26
				],
				[
					65,
					28
				],
				[
					65,
					31
				],
				[
					65,
					33
				],
				[
					65,
					34
				],
				[
					65,
					34
				]
			],
			"pressures": [
				0.126953125,
				0.2587890625,
				0.3056640625,
				0.3515625,
				0.3701171875,
				0.3974609375,
				0.4150390625,
				0.423828125,
				0.4326171875,
				0.4345703125,
				0.435546875,
				0.4345703125,
				0.4365234375,
				0.439453125,
				0.439453125,
				0.439453125,
				0.4375,
				0.4375,
				0.4375,
				0.4404296875,
				0.4453125,
				0.4443359375,
				0.44140625,
				0.4384765625,
				0.4365234375,
				0.4345703125,
				0.43359375,
				0.435546875,
				0.4384765625,
				0.4462890625,
				0.451171875,
				0.4580078125,
				0.484375,
				0.4931640625,
				0.5126953125,
				0.5302734375,
				0.546875,
				0.552734375,
				0.5625,
				0.5693359375,
				0.572265625,
				0.5732421875,
				0.5732421875,
				0.572265625,
				0.5634765625,
				0.5546875,
				0.5400390625,
				0.4716796875,
				0.37890625,
				0.2626953125,
				0.2255859375,
				0.193359375,
				0.1796875,
				0.1767578125,
				0.171875,
				0.1689453125,
				0.1689453125,
				0.1689453125,
				0.16796875,
				0.16796875,
				0.1806640625,
				0.1884765625,
				0.2138671875,
				0.3486328125,
				0.3662109375,
				0.3779296875,
				0.380859375,
				0.3828125,
				0.384765625,
				0.3876953125,
				0.3896484375,
				0.392578125,
				0.396484375,
				0.404296875,
				0.408203125,
				0.408203125,
				0.41015625,
				0.408203125,
				0.4013671875,
				0.3818359375,
				0.3564453125,
				0.306640625,
				0.2705078125,
				0.2421875,
				0.2314453125,
				0.216796875,
				0.2109375,
				0.2080078125,
				0.2080078125,
				0.2119140625,
				0.2529296875,
				0.2705078125,
				0.291015625,
				0.3076171875,
				0.31640625,
				0.3232421875,
				0.3369140625,
				0.337890625,
				0.3359375,
				0.33203125,
				0.2861328125,
				0.25390625,
				0.216796875,
				0.197265625,
				0.1650390625,
				0.1416015625,
				0.1328125,
				0.1181640625,
				0.1103515625,
				0.1083984375,
				0.109375,
				0.1123046875,
				0.119140625,
				0.1318359375,
				0.1533203125,
				0.169921875,
				0.2236328125,
				0.279296875,
				0.2978515625,
				0.328125,
				0.345703125,
				0.3583984375,
				0.3671875,
				0.3720703125,
				0.376953125,
				0.373046875,
				0.3583984375,
				0.322265625,
				0.2939453125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				65,
				34
			]
		},
		{
			"id": "6Plo-Q1RPxE8YiIK2-_gI",
			"type": "freedraw",
			"x": 6911.164003459888,
			"y": 740.803113553115,
			"width": 5,
			"height": 29,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1013188049,
			"version": 35,
			"versionNonce": 270853745,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					-1,
					3
				],
				[
					-1,
					4
				],
				[
					-1,
					7
				],
				[
					-1,
					8
				],
				[
					-2,
					11
				],
				[
					-3,
					15
				],
				[
					-3,
					19
				],
				[
					-4,
					21
				],
				[
					-4,
					25
				],
				[
					-5,
					29
				],
				[
					-5,
					29
				]
			],
			"pressures": [
				0.134765625,
				0.1357421875,
				0.15234375,
				0.162109375,
				0.1767578125,
				0.197265625,
				0.20703125,
				0.224609375,
				0.2412109375,
				0.2529296875,
				0.2578125,
				0.259765625,
				0.2470703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-5,
				29
			]
		},
		{
			"id": "Hhrgv_F3COGwj25GV5NIi",
			"type": "freedraw",
			"x": 6901.164003459888,
			"y": 755.803113553115,
			"width": 15,
			"height": 1,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 606091423,
			"version": 34,
			"versionNonce": 500675871,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					-1
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					3,
					0
				],
				[
					4,
					0
				],
				[
					7,
					0
				],
				[
					8,
					0
				],
				[
					11,
					0
				],
				[
					13,
					0
				],
				[
					14,
					0
				],
				[
					14,
					0
				]
			],
			"pressures": [
				0.203125,
				0.2041015625,
				0.2177734375,
				0.2529296875,
				0.2841796875,
				0.3466796875,
				0.3583984375,
				0.3779296875,
				0.3857421875,
				0.38671875,
				0.375,
				0.353515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				14,
				0
			]
		},
		{
			"id": "nJ7OXs0em8Mn5gsF9O1D4",
			"type": "freedraw",
			"x": 6900.164003459888,
			"y": 734.803113553115,
			"width": 8,
			"height": 2,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 909308287,
			"version": 34,
			"versionNonce": 343994449,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-3,
					0
				],
				[
					-4,
					1
				],
				[
					-5,
					1
				],
				[
					-6,
					2
				],
				[
					-7,
					2
				],
				[
					-8,
					2
				],
				[
					-7,
					2
				],
				[
					-6,
					2
				],
				[
					-5,
					1
				],
				[
					-4,
					1
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.37890625,
				0.3837890625,
				0.400390625,
				0.4189453125,
				0.431640625,
				0.4404296875,
				0.4521484375,
				0.4443359375,
				0.421875,
				0.380859375,
				0.3515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4,
				1
			]
		},
		{
			"id": "swTocuJyF9G0wcYjUTRJg",
			"type": "freedraw",
			"x": 6971.164003459888,
			"y": 702.803113553115,
			"width": 30,
			"height": 69,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1075340895,
			"version": 46,
			"versionNonce": 612481343,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					1
				],
				[
					-3,
					2
				],
				[
					-5,
					3
				],
				[
					-6,
					4
				],
				[
					-9,
					7
				],
				[
					-13,
					11
				],
				[
					-16,
					16
				],
				[
					-18,
					19
				],
				[
					-22,
					25
				],
				[
					-25,
					31
				],
				[
					-27,
					38
				],
				[
					-28,
					41
				],
				[
					-30,
					47
				],
				[
					-30,
					53
				],
				[
					-30,
					55
				],
				[
					-29,
					60
				],
				[
					-27,
					64
				],
				[
					-24,
					66
				],
				[
					-23,
					67
				],
				[
					-19,
					68
				],
				[
					-17,
					69
				],
				[
					-13,
					69
				],
				[
					-9,
					69
				],
				[
					-9,
					69
				]
			],
			"pressures": [
				0.2294921875,
				0.2890625,
				0.328125,
				0.3671875,
				0.38671875,
				0.4580078125,
				0.525390625,
				0.5810546875,
				0.6044921875,
				0.640625,
				0.6650390625,
				0.6787109375,
				0.68359375,
				0.689453125,
				0.693359375,
				0.693359375,
				0.6943359375,
				0.6943359375,
				0.6904296875,
				0.685546875,
				0.6689453125,
				0.6552734375,
				0.609375,
				0.5283203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-9,
				69
			]
		},
		{
			"id": "sE1ctyf00XBwQqHS0YTMJ",
			"type": "freedraw",
			"x": 6997.164003459888,
			"y": 745.803113553115,
			"width": 23,
			"height": 29,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1713855487,
			"version": 53,
			"versionNonce": 679525937,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					2,
					-3
				],
				[
					2,
					-4
				],
				[
					1,
					-5
				],
				[
					0,
					-6
				],
				[
					-1,
					-6
				],
				[
					-2,
					-6
				],
				[
					-4,
					-5
				],
				[
					-4,
					-4
				],
				[
					-6,
					-3
				],
				[
					-7,
					-2
				],
				[
					-9,
					0
				],
				[
					-10,
					3
				],
				[
					-12,
					6
				],
				[
					-12,
					7
				],
				[
					-13,
					11
				],
				[
					-14,
					14
				],
				[
					-13,
					16
				],
				[
					-13,
					18
				],
				[
					-12,
					20
				],
				[
					-9,
					21
				],
				[
					-8,
					22
				],
				[
					-6,
					23
				],
				[
					-2,
					23
				],
				[
					1,
					23
				],
				[
					2,
					22
				],
				[
					6,
					21
				],
				[
					9,
					20
				],
				[
					9,
					20
				]
			],
			"pressures": [
				0.0751953125,
				0.0791015625,
				0.1064453125,
				0.1357421875,
				0.1640625,
				0.18359375,
				0.2490234375,
				0.31640625,
				0.380859375,
				0.41796875,
				0.4501953125,
				0.46484375,
				0.4970703125,
				0.513671875,
				0.5458984375,
				0.5751953125,
				0.6025390625,
				0.6123046875,
				0.6259765625,
				0.6337890625,
				0.638671875,
				0.640625,
				0.642578125,
				0.64453125,
				0.646484375,
				0.6484375,
				0.6484375,
				0.6396484375,
				0.62890625,
				0.587890625,
				0.515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9,
				20
			]
		},
		{
			"id": "dXwCsBJ7s-rlxf7jSJiZD",
			"type": "freedraw",
			"x": 7036.164003459888,
			"y": 744.803113553115,
			"width": 101,
			"height": 60,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2081826161,
			"version": 188,
			"versionNonce": 731265375,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-1
				],
				[
					-2,
					-1
				],
				[
					-3,
					-1
				],
				[
					-4,
					-1
				],
				[
					-5,
					0
				],
				[
					-6,
					1
				],
				[
					-7,
					2
				],
				[
					-8,
					3
				],
				[
					-9,
					5
				],
				[
					-10,
					8
				],
				[
					-10,
					11
				],
				[
					-11,
					12
				],
				[
					-11,
					15
				],
				[
					-11,
					18
				],
				[
					-11,
					20
				],
				[
					-10,
					21
				],
				[
					-10,
					23
				],
				[
					-9,
					23
				],
				[
					-7,
					23
				],
				[
					-5,
					21
				],
				[
					-3,
					19
				],
				[
					-2,
					15
				],
				[
					-1,
					13
				],
				[
					1,
					9
				],
				[
					2,
					4
				],
				[
					3,
					1
				],
				[
					4,
					-4
				],
				[
					5,
					-10
				],
				[
					5,
					-15
				],
				[
					5,
					-17
				],
				[
					5,
					-22
				],
				[
					5,
					-26
				],
				[
					4,
					-29
				],
				[
					4,
					-31
				],
				[
					3,
					-32
				],
				[
					3,
					-33
				],
				[
					3,
					-32
				],
				[
					2,
					-31
				],
				[
					2,
					-28
				],
				[
					2,
					-24
				],
				[
					2,
					-18
				],
				[
					3,
					-15
				],
				[
					3,
					-9
				],
				[
					3,
					-2
				],
				[
					4,
					1
				],
				[
					4,
					8
				],
				[
					5,
					13
				],
				[
					6,
					18
				],
				[
					6,
					19
				],
				[
					8,
					22
				],
				[
					9,
					23
				],
				[
					11,
					23
				],
				[
					12,
					22
				],
				[
					14,
					20
				],
				[
					16,
					17
				],
				[
					18,
					13
				],
				[
					20,
					12
				],
				[
					21,
					8
				],
				[
					23,
					4
				],
				[
					24,
					1
				],
				[
					24,
					0
				],
				[
					25,
					-3
				],
				[
					25,
					-4
				],
				[
					25,
					-5
				],
				[
					24,
					-5
				],
				[
					23,
					-3
				],
				[
					22,
					-1
				],
				[
					22,
					0
				],
				[
					21,
					3
				],
				[
					21,
					6
				],
				[
					21,
					10
				],
				[
					21,
					11
				],
				[
					21,
					15
				],
				[
					21,
					16
				],
				[
					22,
					18
				],
				[
					23,
					19
				],
				[
					24,
					20
				],
				[
					25,
					21
				],
				[
					26,
					20
				],
				[
					27,
					20
				],
				[
					28,
					18
				],
				[
					29,
					17
				],
				[
					29,
					15
				],
				[
					29,
					14
				],
				[
					30,
					12
				],
				[
					30,
					9
				],
				[
					30,
					6
				],
				[
					31,
					4
				],
				[
					31,
					2
				],
				[
					32,
					0
				],
				[
					32,
					-2
				],
				[
					33,
					-4
				],
				[
					34,
					-5
				],
				[
					35,
					-5
				],
				[
					35,
					-4
				],
				[
					36,
					-3
				],
				[
					37,
					-1
				],
				[
					37,
					1
				],
				[
					38,
					3
				],
				[
					39,
					6
				],
				[
					39,
					8
				],
				[
					39,
					10
				],
				[
					40,
					12
				],
				[
					40,
					14
				],
				[
					40,
					15
				],
				[
					40,
					16
				],
				[
					40,
					17
				],
				[
					41,
					17
				],
				[
					42,
					16
				],
				[
					42,
					15
				],
				[
					43,
					14
				],
				[
					44,
					12
				],
				[
					45,
					10
				],
				[
					46,
					8
				],
				[
					47,
					6
				],
				[
					48,
					4
				],
				[
					49,
					3
				],
				[
					49,
					2
				],
				[
					50,
					1
				],
				[
					50,
					0
				],
				[
					51,
					-1
				],
				[
					51,
					0
				],
				[
					51,
					2
				],
				[
					51,
					3
				],
				[
					51,
					5
				],
				[
					51,
					7
				],
				[
					52,
					9
				],
				[
					52,
					11
				],
				[
					52,
					13
				],
				[
					53,
					15
				],
				[
					54,
					17
				],
				[
					55,
					18
				],
				[
					56,
					20
				],
				[
					57,
					21
				],
				[
					59,
					22
				],
				[
					60,
					21
				],
				[
					62,
					19
				],
				[
					62,
					18
				],
				[
					64,
					16
				],
				[
					65,
					13
				],
				[
					65,
					11
				],
				[
					66,
					8
				],
				[
					66,
					7
				],
				[
					67,
					5
				],
				[
					67,
					3
				],
				[
					66,
					1
				],
				[
					65,
					1
				],
				[
					64,
					1
				],
				[
					63,
					3
				],
				[
					62,
					4
				],
				[
					61,
					7
				],
				[
					61,
					11
				],
				[
					61,
					14
				],
				[
					62,
					16
				],
				[
					64,
					20
				],
				[
					66,
					22
				],
				[
					67,
					24
				],
				[
					70,
					26
				],
				[
					74,
					27
				],
				[
					77,
					27
				],
				[
					79,
					27
				],
				[
					83,
					27
				],
				[
					86,
					26
				],
				[
					90,
					25
				],
				[
					90,
					25
				]
			],
			"pressures": [
				0.189453125,
				0.2265625,
				0.248046875,
				0.3037109375,
				0.337890625,
				0.3671875,
				0.392578125,
				0.4150390625,
				0.435546875,
				0.4453125,
				0.462890625,
				0.4755859375,
				0.484375,
				0.4873046875,
				0.4912109375,
				0.4931640625,
				0.4931640625,
				0.4931640625,
				0.4931640625,
				0.4921875,
				0.482421875,
				0.451171875,
				0.416015625,
				0.373046875,
				0.349609375,
				0.3037109375,
				0.263671875,
				0.248046875,
				0.2255859375,
				0.212890625,
				0.2060546875,
				0.205078125,
				0.2060546875,
				0.212890625,
				0.22265625,
				0.2294921875,
				0.236328125,
				0.255859375,
				0.2822265625,
				0.3095703125,
				0.33984375,
				0.373046875,
				0.4052734375,
				0.419921875,
				0.443359375,
				0.4599609375,
				0.4658203125,
				0.47265625,
				0.46875,
				0.4482421875,
				0.4326171875,
				0.3896484375,
				0.3349609375,
				0.2734375,
				0.2431640625,
				0.1845703125,
				0.134765625,
				0.0927734375,
				0.076171875,
				0.05078125,
				0.0390625,
				0.0478515625,
				0.05859375,
				0.0869140625,
				0.103515625,
				0.1396484375,
				0.2119140625,
				0.2529296875,
				0.2763671875,
				0.2890625,
				0.3115234375,
				0.328125,
				0.341796875,
				0.3505859375,
				0.365234375,
				0.3720703125,
				0.3798828125,
				0.3818359375,
				0.3828125,
				0.3818359375,
				0.380859375,
				0.375,
				0.3681640625,
				0.365234375,
				0.3623046875,
				0.3603515625,
				0.35546875,
				0.3447265625,
				0.3291015625,
				0.3076171875,
				0.296875,
				0.27734375,
				0.2626953125,
				0.2548828125,
				0.2548828125,
				0.2607421875,
				0.2783203125,
				0.3017578125,
				0.341796875,
				0.3564453125,
				0.3828125,
				0.3994140625,
				0.408203125,
				0.41015625,
				0.41015625,
				0.4072265625,
				0.4033203125,
				0.396484375,
				0.3857421875,
				0.37890625,
				0.341796875,
				0.3330078125,
				0.314453125,
				0.30078125,
				0.2939453125,
				0.291015625,
				0.287109375,
				0.2861328125,
				0.2841796875,
				0.2841796875,
				0.287109375,
				0.2890625,
				0.294921875,
				0.337890625,
				0.369140625,
				0.3818359375,
				0.4033203125,
				0.4208984375,
				0.4326171875,
				0.4384765625,
				0.44921875,
				0.4580078125,
				0.4658203125,
				0.4677734375,
				0.47265625,
				0.474609375,
				0.4697265625,
				0.45703125,
				0.4365234375,
				0.4296875,
				0.4140625,
				0.40234375,
				0.3994140625,
				0.3974609375,
				0.3955078125,
				0.3974609375,
				0.3994140625,
				0.4248046875,
				0.4521484375,
				0.48828125,
				0.5517578125,
				0.5732421875,
				0.6103515625,
				0.6396484375,
				0.6572265625,
				0.662109375,
				0.6689453125,
				0.671875,
				0.6728515625,
				0.671875,
				0.6630859375,
				0.6455078125,
				0.630859375,
				0.58984375,
				0.5234375,
				0.4306640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				90,
				25
			]
		},
		{
			"id": "g0w1RFvm5ZAr_dw6_urks",
			"type": "freedraw",
			"x": 7121.164003459888,
			"y": 705.803113553115,
			"width": 20,
			"height": 76,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1740167921,
			"version": 42,
			"versionNonce": 722194449,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					2,
					0
				],
				[
					3,
					0
				],
				[
					5,
					2
				],
				[
					7,
					5
				],
				[
					8,
					6
				],
				[
					10,
					10
				],
				[
					12,
					13
				],
				[
					14,
					18
				],
				[
					15,
					22
				],
				[
					18,
					29
				],
				[
					19,
					33
				],
				[
					19,
					37
				],
				[
					20,
					41
				],
				[
					20,
					51
				],
				[
					20,
					61
				],
				[
					19,
					70
				],
				[
					18,
					75
				],
				[
					18,
					75
				]
			],
			"pressures": [
				0.2978515625,
				0.3115234375,
				0.439453125,
				0.4931640625,
				0.5283203125,
				0.595703125,
				0.650390625,
				0.673828125,
				0.7177734375,
				0.73828125,
				0.775390625,
				0.791015625,
				0.818359375,
				0.828125,
				0.8369140625,
				0.8408203125,
				0.83203125,
				0.79296875,
				0.7138671875,
				0.65625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				18,
				75
			]
		},
		{
			"id": "eodjE05C0p5B4C2O0n6r8",
			"type": "freedraw",
			"x": 7522.164003459888,
			"y": 736.803113553115,
			"width": 22,
			"height": 28,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 262386577,
			"version": 61,
			"versionNonce": 946189695,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					0,
					-4
				],
				[
					-1,
					-4
				],
				[
					-2,
					-4
				],
				[
					-3,
					-4
				],
				[
					-4,
					-4
				],
				[
					-6,
					-4
				],
				[
					-8,
					-3
				],
				[
					-9,
					-2
				],
				[
					-10,
					-1
				],
				[
					-9,
					0
				],
				[
					-9,
					1
				],
				[
					-7,
					1
				],
				[
					-6,
					2
				],
				[
					-4,
					2
				],
				[
					-2,
					3
				],
				[
					1,
					3
				],
				[
					2,
					4
				],
				[
					5,
					5
				],
				[
					7,
					6
				],
				[
					9,
					7
				],
				[
					10,
					8
				],
				[
					11,
					10
				],
				[
					11,
					11
				],
				[
					12,
					13
				],
				[
					12,
					14
				],
				[
					12,
					16
				],
				[
					11,
					18
				],
				[
					10,
					19
				],
				[
					9,
					20
				],
				[
					7,
					22
				],
				[
					5,
					23
				],
				[
					4,
					24
				],
				[
					1,
					24
				],
				[
					-1,
					24
				],
				[
					-2,
					23
				],
				[
					-2,
					23
				]
			],
			"pressures": [
				0.16796875,
				0.2099609375,
				0.30078125,
				0.404296875,
				0.490234375,
				0.51171875,
				0.5263671875,
				0.5322265625,
				0.5361328125,
				0.54296875,
				0.5439453125,
				0.5439453125,
				0.54296875,
				0.5390625,
				0.5361328125,
				0.533203125,
				0.53125,
				0.52734375,
				0.5244140625,
				0.5224609375,
				0.5224609375,
				0.5224609375,
				0.5234375,
				0.5244140625,
				0.525390625,
				0.5302734375,
				0.5341796875,
				0.5458984375,
				0.5517578125,
				0.5654296875,
				0.5771484375,
				0.58203125,
				0.5869140625,
				0.5830078125,
				0.5673828125,
				0.552734375,
				0.5087890625,
				0.4404296875,
				0.3974609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-2,
				23
			]
		},
		{
			"id": "eZqBqDZuVAvZz0oUNGVMm",
			"type": "freedraw",
			"x": 7543.164003459888,
			"y": 736.803113553115,
			"width": 4,
			"height": 13,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 877851775,
			"version": 34,
			"versionNonce": 840541681,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					0
				],
				[
					3,
					0
				],
				[
					3,
					1
				],
				[
					3,
					2
				],
				[
					4,
					4
				],
				[
					4,
					5
				],
				[
					4,
					7
				],
				[
					3,
					9
				],
				[
					3,
					11
				],
				[
					2,
					12
				],
				[
					2,
					13
				],
				[
					2,
					13
				]
			],
			"pressures": [
				0.134765625,
				0.1533203125,
				0.17578125,
				0.185546875,
				0.2099609375,
				0.2353515625,
				0.24609375,
				0.26171875,
				0.2685546875,
				0.265625,
				0.2587890625,
				0.228515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2,
				13
			]
		},
		{
			"id": "Iik1pA_LeZduHrDhUPuiv",
			"type": "freedraw",
			"x": 7546.164003459888,
			"y": 720.803113553115,
			"width": 1,
			"height": 2,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1172949343,
			"version": 27,
			"versionNonce": 1378921887,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					-1,
					-2
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.2080078125,
				0.208984375,
				0.2197265625,
				0.2109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1,
				-2
			]
		},
		{
			"id": "NC4_G9gC7ThXyW86JAmjx",
			"type": "freedraw",
			"x": 7566.164003459888,
			"y": 734.803113553115,
			"width": 21,
			"height": 55,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1527713201,
			"version": 78,
			"versionNonce": 682737617,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					-1,
					1
				],
				[
					-2,
					2
				],
				[
					-3,
					2
				],
				[
					-4,
					2
				],
				[
					-6,
					3
				],
				[
					-8,
					3
				],
				[
					-9,
					4
				],
				[
					-10,
					5
				],
				[
					-11,
					6
				],
				[
					-12,
					7
				],
				[
					-13,
					8
				],
				[
					-13,
					9
				],
				[
					-12,
					10
				],
				[
					-12,
					11
				],
				[
					-12,
					12
				],
				[
					-10,
					13
				],
				[
					-9,
					14
				],
				[
					-8,
					14
				],
				[
					-7,
					14
				],
				[
					-5,
					13
				],
				[
					-4,
					12
				],
				[
					-2,
					11
				],
				[
					-1,
					9
				],
				[
					0,
					8
				],
				[
					1,
					7
				],
				[
					1,
					5
				],
				[
					1,
					3
				],
				[
					1,
					2
				],
				[
					1,
					1
				],
				[
					1,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					-2
				],
				[
					2,
					-1
				],
				[
					2,
					0
				],
				[
					3,
					1
				],
				[
					3,
					3
				],
				[
					4,
					7
				],
				[
					5,
					9
				],
				[
					6,
					13
				],
				[
					7,
					19
				],
				[
					8,
					24
				],
				[
					8,
					27
				],
				[
					8,
					33
				],
				[
					8,
					38
				],
				[
					7,
					43
				],
				[
					6,
					45
				],
				[
					5,
					49
				],
				[
					3,
					51
				],
				[
					1,
					52
				],
				[
					0,
					53
				],
				[
					-2,
					52
				],
				[
					-5,
					51
				],
				[
					-6,
					50
				],
				[
					-8,
					47
				],
				[
					-8,
					47
				]
			],
			"pressures": [
				0.1982421875,
				0.2138671875,
				0.23046875,
				0.2998046875,
				0.3193359375,
				0.35546875,
				0.3857421875,
				0.4091796875,
				0.4248046875,
				0.4296875,
				0.4365234375,
				0.439453125,
				0.4404296875,
				0.4404296875,
				0.439453125,
				0.439453125,
				0.4365234375,
				0.4091796875,
				0.375,
				0.353515625,
				0.3076171875,
				0.2607421875,
				0.240234375,
				0.2109375,
				0.193359375,
				0.1845703125,
				0.1826171875,
				0.1806640625,
				0.1806640625,
				0.1806640625,
				0.1796875,
				0.1796875,
				0.181640625,
				0.18359375,
				0.1953125,
				0.2021484375,
				0.2060546875,
				0.2177734375,
				0.236328125,
				0.2509765625,
				0.2861328125,
				0.3310546875,
				0.3857421875,
				0.4150390625,
				0.47265625,
				0.5263671875,
				0.5712890625,
				0.5888671875,
				0.6162109375,
				0.6318359375,
				0.634765625,
				0.6298828125,
				0.6044921875,
				0.5546875,
				0.51953125,
				0.4248046875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-8,
				47
			]
		},
		{
			"id": "Obf3YN9beZ7XNXqChZPew",
			"type": "freedraw",
			"x": 7583.164003459888,
			"y": 725.803113553115,
			"width": 15,
			"height": 26,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2604049,
			"version": 58,
			"versionNonce": 1143447999,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					1
				],
				[
					3,
					2
				],
				[
					3,
					3
				],
				[
					4,
					4
				],
				[
					4,
					5
				],
				[
					4,
					6
				],
				[
					5,
					9
				],
				[
					5,
					11
				],
				[
					6,
					14
				],
				[
					6,
					17
				],
				[
					5,
					20
				],
				[
					5,
					21
				],
				[
					5,
					23
				],
				[
					5,
					25
				],
				[
					5,
					26
				],
				[
					5,
					25
				],
				[
					6,
					24
				],
				[
					7,
					22
				],
				[
					8,
					20
				],
				[
					9,
					17
				],
				[
					9,
					16
				],
				[
					10,
					13
				],
				[
					12,
					10
				],
				[
					12,
					8
				],
				[
					13,
					7
				],
				[
					14,
					6
				],
				[
					14,
					5
				],
				[
					14,
					6
				],
				[
					14,
					8
				],
				[
					14,
					10
				],
				[
					14,
					11
				],
				[
					14,
					15
				],
				[
					14,
					18
				],
				[
					14,
					20
				],
				[
					15,
					23
				],
				[
					15,
					23
				]
			],
			"pressures": [
				0.1435546875,
				0.14453125,
				0.16015625,
				0.1708984375,
				0.1962890625,
				0.2109375,
				0.2412109375,
				0.29296875,
				0.3193359375,
				0.3662109375,
				0.4013671875,
				0.4228515625,
				0.4296875,
				0.4326171875,
				0.4296875,
				0.40234375,
				0.38671875,
				0.3212890625,
				0.2392578125,
				0.1865234375,
				0.142578125,
				0.1259765625,
				0.1025390625,
				0.09375,
				0.1044921875,
				0.1162109375,
				0.14453125,
				0.1611328125,
				0.2333984375,
				0.2724609375,
				0.2861328125,
				0.2900390625,
				0.2919921875,
				0.2763671875,
				0.2626953125,
				0.2236328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15,
				23
			]
		},
		{
			"id": "Ny6Q2yCftEfMxgRAa-MBf",
			"type": "freedraw",
			"x": 7617.164003459888,
			"y": 726.803113553115,
			"width": 28,
			"height": 35,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 207423409,
			"version": 74,
			"versionNonce": 753638833,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-2,
					1
				],
				[
					-3,
					1
				],
				[
					-4,
					2
				],
				[
					-5,
					3
				],
				[
					-5,
					4
				],
				[
					-7,
					7
				],
				[
					-8,
					8
				],
				[
					-9,
					12
				],
				[
					-10,
					15
				],
				[
					-10,
					17
				],
				[
					-10,
					21
				],
				[
					-10,
					24
				],
				[
					-9,
					26
				],
				[
					-8,
					28
				],
				[
					-7,
					30
				],
				[
					-5,
					31
				],
				[
					-4,
					31
				],
				[
					-2,
					30
				],
				[
					0,
					29
				],
				[
					1,
					28
				],
				[
					3,
					25
				],
				[
					4,
					22
				],
				[
					5,
					18
				],
				[
					5,
					17
				],
				[
					5,
					13
				],
				[
					5,
					10
				],
				[
					5,
					7
				],
				[
					5,
					6
				],
				[
					5,
					4
				],
				[
					5,
					2
				],
				[
					4,
					2
				],
				[
					4,
					3
				],
				[
					3,
					4
				],
				[
					3,
					6
				],
				[
					3,
					8
				],
				[
					3,
					12
				],
				[
					3,
					15
				],
				[
					4,
					17
				],
				[
					4,
					21
				],
				[
					5,
					25
				],
				[
					6,
					29
				],
				[
					7,
					30
				],
				[
					8,
					33
				],
				[
					10,
					35
				],
				[
					11,
					35
				],
				[
					12,
					35
				],
				[
					14,
					35
				],
				[
					15,
					33
				],
				[
					17,
					30
				],
				[
					18,
					28
				],
				[
					18,
					28
				]
			],
			"pressures": [
				0.1796875,
				0.18359375,
				0.201171875,
				0.21875,
				0.236328125,
				0.251953125,
				0.267578125,
				0.3017578125,
				0.318359375,
				0.349609375,
				0.375,
				0.384765625,
				0.400390625,
				0.404296875,
				0.400390625,
				0.3798828125,
				0.3505859375,
				0.3134765625,
				0.29296875,
				0.25,
				0.212890625,
				0.1962890625,
				0.1689453125,
				0.1474609375,
				0.1318359375,
				0.125,
				0.12109375,
				0.1259765625,
				0.140625,
				0.150390625,
				0.162109375,
				0.2060546875,
				0.2509765625,
				0.27734375,
				0.30078125,
				0.3125,
				0.3369140625,
				0.361328125,
				0.3837890625,
				0.3935546875,
				0.4111328125,
				0.4248046875,
				0.4306640625,
				0.4296875,
				0.4189453125,
				0.400390625,
				0.3876953125,
				0.357421875,
				0.3203125,
				0.279296875,
				0.232421875,
				0.20703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				18,
				28
			]
		},
		{
			"id": "__udAPlgkbyQrKdPxb-Lf",
			"type": "freedraw",
			"x": 7638.164003459888,
			"y": 710.803113553115,
			"width": 8,
			"height": 58,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1173493329,
			"version": 41,
			"versionNonce": 527110623,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2
				],
				[
					-1,
					-2
				],
				[
					-1,
					-1
				],
				[
					-1,
					0
				],
				[
					-2,
					3
				],
				[
					-3,
					4
				],
				[
					-3,
					9
				],
				[
					-4,
					14
				],
				[
					-4,
					20
				],
				[
					-4,
					24
				],
				[
					-4,
					30
				],
				[
					-3,
					36
				],
				[
					-2,
					39
				],
				[
					-1,
					45
				],
				[
					0,
					49
				],
				[
					1,
					53
				],
				[
					2,
					54
				],
				[
					4,
					56
				],
				[
					4,
					56
				]
			],
			"pressures": [
				0.2109375,
				0.2255859375,
				0.271484375,
				0.30859375,
				0.3564453125,
				0.4140625,
				0.44140625,
				0.48828125,
				0.5224609375,
				0.5478515625,
				0.556640625,
				0.5703125,
				0.576171875,
				0.5751953125,
				0.5576171875,
				0.5185546875,
				0.4580078125,
				0.421875,
				0.337890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				4,
				56
			]
		},
		{
			"id": "LedmeZtPIROUtyhOu1fOm",
			"type": "freedraw",
			"x": 7692.164003459888,
			"y": 692.803113553115,
			"width": 23,
			"height": 74,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1729279007,
			"version": 47,
			"versionNonce": 770621329,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-3,
					-1
				],
				[
					-5,
					1
				],
				[
					-6,
					3
				],
				[
					-7,
					5
				],
				[
					-9,
					9
				],
				[
					-10,
					12
				],
				[
					-12,
					18
				],
				[
					-14,
					25
				],
				[
					-15,
					32
				],
				[
					-15,
					36
				],
				[
					-16,
					44
				],
				[
					-15,
					51
				],
				[
					-14,
					55
				],
				[
					-12,
					60
				],
				[
					-10,
					65
				],
				[
					-7,
					68
				],
				[
					-5,
					70
				],
				[
					-2,
					71
				],
				[
					2,
					72
				],
				[
					6,
					72
				],
				[
					7,
					71
				],
				[
					7,
					71
				]
			],
			"pressures": [
				0.2421875,
				0.251953125,
				0.302734375,
				0.40625,
				0.4609375,
				0.5087890625,
				0.5498046875,
				0.5859375,
				0.603515625,
				0.6357421875,
				0.6494140625,
				0.671875,
				0.689453125,
				0.701171875,
				0.705078125,
				0.7119140625,
				0.7158203125,
				0.716796875,
				0.716796875,
				0.71484375,
				0.7060546875,
				0.6982421875,
				0.6728515625,
				0.6298828125,
				0.560546875,
				0.515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7,
				71
			]
		},
		{
			"id": "EMwqapud-EaHmW5cbhgEg",
			"type": "freedraw",
			"x": 7733.164003459888,
			"y": 734.803113553115,
			"width": 15,
			"height": 27,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1923400159,
			"version": 47,
			"versionNonce": 2097905151,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					-1,
					-3
				],
				[
					-2,
					-4
				],
				[
					-3,
					-4
				],
				[
					-4,
					-5
				],
				[
					-5,
					-5
				],
				[
					-7,
					-5
				],
				[
					-8,
					-5
				],
				[
					-10,
					-4
				],
				[
					-11,
					-3
				],
				[
					-12,
					-1
				],
				[
					-13,
					1
				],
				[
					-14,
					2
				],
				[
					-15,
					5
				],
				[
					-15,
					8
				],
				[
					-14,
					11
				],
				[
					-14,
					13
				],
				[
					-13,
					16
				],
				[
					-12,
					18
				],
				[
					-11,
					19
				],
				[
					-9,
					20
				],
				[
					-7,
					21
				],
				[
					-6,
					22
				],
				[
					-4,
					21
				],
				[
					-4,
					21
				]
			],
			"pressures": [
				0.203125,
				0.2119140625,
				0.236328125,
				0.2880859375,
				0.34765625,
				0.4033203125,
				0.4541015625,
				0.474609375,
				0.509765625,
				0.5390625,
				0.5634765625,
				0.57421875,
				0.5927734375,
				0.6083984375,
				0.61328125,
				0.6220703125,
				0.626953125,
				0.6298828125,
				0.6298828125,
				0.6259765625,
				0.611328125,
				0.5986328125,
				0.55859375,
				0.4912109375,
				0.447265625,
				0.345703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4,
				21
			]
		},
		{
			"id": "x7RBi-3QfBmzQI28ZwSOa",
			"type": "freedraw",
			"x": 7753.164003459888,
			"y": 735.803113553115,
			"width": 25,
			"height": 53,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2069348255,
			"version": 79,
			"versionNonce": 1240638833,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					1,
					-4
				],
				[
					1,
					-5
				],
				[
					0,
					-6
				],
				[
					-1,
					-6
				],
				[
					-2,
					-6
				],
				[
					-3,
					-5
				],
				[
					-4,
					-4
				],
				[
					-6,
					-2
				],
				[
					-7,
					0
				],
				[
					-8,
					2
				],
				[
					-8,
					5
				],
				[
					-9,
					8
				],
				[
					-9,
					10
				],
				[
					-9,
					13
				],
				[
					-9,
					16
				],
				[
					-8,
					17
				],
				[
					-7,
					19
				],
				[
					-6,
					20
				],
				[
					-5,
					21
				],
				[
					-3,
					20
				],
				[
					-1,
					19
				],
				[
					0,
					17
				],
				[
					2,
					14
				],
				[
					5,
					9
				],
				[
					6,
					7
				],
				[
					8,
					2
				],
				[
					9,
					-4
				],
				[
					10,
					-10
				],
				[
					10,
					-12
				],
				[
					11,
					-17
				],
				[
					11,
					-22
				],
				[
					10,
					-26
				],
				[
					10,
					-27
				],
				[
					9,
					-30
				],
				[
					9,
					-31
				],
				[
					8,
					-32
				],
				[
					8,
					-31
				],
				[
					7,
					-30
				],
				[
					7,
					-29
				],
				[
					6,
					-26
				],
				[
					6,
					-25
				],
				[
					6,
					-21
				],
				[
					6,
					-19
				],
				[
					6,
					-17
				],
				[
					7,
					-12
				],
				[
					7,
					-6
				],
				[
					8,
					-1
				],
				[
					8,
					1
				],
				[
					9,
					6
				],
				[
					10,
					8
				],
				[
					11,
					12
				],
				[
					13,
					14
				],
				[
					14,
					16
				],
				[
					15,
					16
				],
				[
					16,
					16
				],
				[
					16,
					16
				]
			],
			"pressures": [
				0.1513671875,
				0.1640625,
				0.185546875,
				0.2333984375,
				0.2822265625,
				0.3671875,
				0.435546875,
				0.46484375,
				0.4755859375,
				0.4921875,
				0.50390625,
				0.51171875,
				0.515625,
				0.5205078125,
				0.5244140625,
				0.5263671875,
				0.5283203125,
				0.52734375,
				0.5244140625,
				0.513671875,
				0.50390625,
				0.4765625,
				0.4345703125,
				0.380859375,
				0.3525390625,
				0.2978515625,
				0.251953125,
				0.2314453125,
				0.203125,
				0.189453125,
				0.18359375,
				0.1826171875,
				0.18359375,
				0.1923828125,
				0.2099609375,
				0.220703125,
				0.2470703125,
				0.2734375,
				0.296875,
				0.306640625,
				0.3212890625,
				0.33203125,
				0.341796875,
				0.3466796875,
				0.3583984375,
				0.365234375,
				0.37109375,
				0.37890625,
				0.380859375,
				0.37890625,
				0.3740234375,
				0.353515625,
				0.337890625,
				0.302734375,
				0.26171875,
				0.2138671875,
				0.1875,
				0.1611328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				16,
				16
			]
		},
		{
			"id": "fgr-Pe7_xnS23x76F2GaJ",
			"type": "freedraw",
			"x": 7778.164003459888,
			"y": 738.803113553115,
			"width": 53,
			"height": 27,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 126979935,
			"version": 123,
			"versionNonce": 615967,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-2,
					-1
				],
				[
					-3,
					0
				],
				[
					-3,
					1
				],
				[
					-3,
					3
				],
				[
					-4,
					6
				],
				[
					-4,
					9
				],
				[
					-4,
					11
				],
				[
					-3,
					14
				],
				[
					-3,
					15
				],
				[
					-2,
					18
				],
				[
					-1,
					20
				],
				[
					-1,
					21
				],
				[
					0,
					22
				],
				[
					2,
					22
				],
				[
					3,
					21
				],
				[
					4,
					19
				],
				[
					4,
					16
				],
				[
					5,
					15
				],
				[
					5,
					13
				],
				[
					5,
					10
				],
				[
					5,
					7
				],
				[
					5,
					6
				],
				[
					6,
					3
				],
				[
					6,
					1
				],
				[
					7,
					-1
				],
				[
					7,
					-2
				],
				[
					7,
					-3
				],
				[
					8,
					-4
				],
				[
					8,
					-5
				],
				[
					9,
					-4
				],
				[
					9,
					-2
				],
				[
					9,
					0
				],
				[
					10,
					2
				],
				[
					10,
					4
				],
				[
					10,
					5
				],
				[
					10,
					8
				],
				[
					10,
					10
				],
				[
					10,
					12
				],
				[
					10,
					14
				],
				[
					10,
					16
				],
				[
					10,
					17
				],
				[
					10,
					18
				],
				[
					11,
					18
				],
				[
					11,
					17
				],
				[
					12,
					17
				],
				[
					13,
					15
				],
				[
					13,
					14
				],
				[
					15,
					12
				],
				[
					17,
					10
				],
				[
					18,
					7
				],
				[
					19,
					6
				],
				[
					21,
					4
				],
				[
					22,
					2
				],
				[
					23,
					1
				],
				[
					24,
					-1
				],
				[
					25,
					-2
				],
				[
					25,
					-1
				],
				[
					25,
					0
				],
				[
					26,
					1
				],
				[
					26,
					3
				],
				[
					26,
					4
				],
				[
					26,
					6
				],
				[
					27,
					9
				],
				[
					28,
					11
				],
				[
					28,
					12
				],
				[
					29,
					15
				],
				[
					31,
					17
				],
				[
					32,
					18
				],
				[
					33,
					19
				],
				[
					34,
					20
				],
				[
					36,
					20
				],
				[
					37,
					20
				],
				[
					38,
					19
				],
				[
					40,
					18
				],
				[
					42,
					16
				],
				[
					43,
					15
				],
				[
					44,
					12
				],
				[
					45,
					9
				],
				[
					45,
					6
				],
				[
					45,
					5
				],
				[
					45,
					2
				],
				[
					45,
					-1
				],
				[
					44,
					-3
				],
				[
					44,
					-4
				],
				[
					43,
					-5
				],
				[
					40,
					-4
				],
				[
					39,
					-2
				],
				[
					39,
					-1
				],
				[
					39,
					2
				],
				[
					39,
					7
				],
				[
					40,
					10
				],
				[
					42,
					15
				],
				[
					43,
					16
				],
				[
					45,
					19
				],
				[
					46,
					20
				],
				[
					48,
					21
				],
				[
					49,
					21
				],
				[
					49,
					21
				]
			],
			"pressures": [
				0.0615234375,
				0.0673828125,
				0.0859375,
				0.1669921875,
				0.1875,
				0.1962890625,
				0.212890625,
				0.2216796875,
				0.23828125,
				0.251953125,
				0.2626953125,
				0.2666015625,
				0.2705078125,
				0.2724609375,
				0.275390625,
				0.27734375,
				0.2763671875,
				0.275390625,
				0.275390625,
				0.275390625,
				0.275390625,
				0.2802734375,
				0.2822265625,
				0.279296875,
				0.2734375,
				0.2666015625,
				0.26171875,
				0.2529296875,
				0.2431640625,
				0.2373046875,
				0.234375,
				0.2333984375,
				0.232421875,
				0.236328125,
				0.2548828125,
				0.2900390625,
				0.31640625,
				0.333984375,
				0.3544921875,
				0.3642578125,
				0.380859375,
				0.400390625,
				0.4189453125,
				0.4345703125,
				0.439453125,
				0.4423828125,
				0.4404296875,
				0.42578125,
				0.4228515625,
				0.419921875,
				0.412109375,
				0.40625,
				0.3955078125,
				0.3828125,
				0.37109375,
				0.3662109375,
				0.357421875,
				0.3544921875,
				0.353515625,
				0.35546875,
				0.3623046875,
				0.3935546875,
				0.4072265625,
				0.4228515625,
				0.4375,
				0.4443359375,
				0.4560546875,
				0.4697265625,
				0.4814453125,
				0.486328125,
				0.4921875,
				0.4970703125,
				0.5,
				0.5,
				0.4990234375,
				0.4951171875,
				0.4912109375,
				0.4814453125,
				0.46875,
				0.455078125,
				0.4482421875,
				0.43359375,
				0.421875,
				0.4130859375,
				0.41015625,
				0.4072265625,
				0.408203125,
				0.4130859375,
				0.416015625,
				0.4228515625,
				0.4423828125,
				0.451171875,
				0.4541015625,
				0.4599609375,
				0.4658203125,
				0.466796875,
				0.4609375,
				0.4541015625,
				0.4287109375,
				0.4091796875,
				0.359375,
				0.328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				49,
				21
			]
		},
		{
			"id": "rHxNU9LsNIHh_0_NYSxwz",
			"type": "freedraw",
			"x": 7830.164003459888,
			"y": 693.803113553115,
			"width": 27,
			"height": 89,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1447955935,
			"version": 44,
			"versionNonce": 1816055633,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					3,
					-1
				],
				[
					4,
					-1
				],
				[
					6,
					-1
				],
				[
					7,
					0
				],
				[
					10,
					1
				],
				[
					12,
					2
				],
				[
					15,
					5
				],
				[
					17,
					7
				],
				[
					19,
					9
				],
				[
					22,
					14
				],
				[
					23,
					17
				],
				[
					24,
					20
				],
				[
					26,
					29
				],
				[
					27,
					33
				],
				[
					27,
					38
				],
				[
					25,
					49
				],
				[
					23,
					61
				],
				[
					21,
					66
				],
				[
					16,
					78
				],
				[
					9,
					88
				],
				[
					9,
					88
				]
			],
			"pressures": [
				0.251953125,
				0.2587890625,
				0.306640625,
				0.3525390625,
				0.375,
				0.4345703125,
				0.47265625,
				0.5498046875,
				0.5869140625,
				0.6533203125,
				0.6845703125,
				0.71484375,
				0.7685546875,
				0.7919921875,
				0.8125,
				0.8427734375,
				0.853515625,
				0.859375,
				0.8515625,
				0.8203125,
				0.7958984375,
				0.7236328125,
				0.615234375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9,
				88
			]
		},
		{
			"id": "lgykuyCu8M3awjPbInYE_",
			"type": "freedraw",
			"x": 6826.164003459888,
			"y": 827.803113553115,
			"width": 31,
			"height": 34,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 842387985,
			"version": 97,
			"versionNonce": 391465535,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					1,
					-4
				],
				[
					2,
					-4
				],
				[
					2,
					-5
				],
				[
					2,
					-6
				],
				[
					2,
					-7
				],
				[
					1,
					-7
				],
				[
					1,
					-8
				],
				[
					0,
					-8
				],
				[
					0,
					-9
				],
				[
					-1,
					-9
				],
				[
					-2,
					-9
				],
				[
					-3,
					-9
				],
				[
					-4,
					-9
				],
				[
					-5,
					-9
				],
				[
					-6,
					-9
				],
				[
					-7,
					-8
				],
				[
					-8,
					-7
				],
				[
					-8,
					-6
				],
				[
					-7,
					-5
				],
				[
					-6,
					-4
				],
				[
					-6,
					-3
				],
				[
					-4,
					-1
				],
				[
					-2,
					0
				],
				[
					-1,
					1
				],
				[
					1,
					3
				],
				[
					3,
					5
				],
				[
					5,
					7
				],
				[
					6,
					8
				],
				[
					8,
					10
				],
				[
					9,
					12
				],
				[
					11,
					14
				],
				[
					11,
					16
				],
				[
					11,
					18
				],
				[
					11,
					19
				],
				[
					11,
					20
				],
				[
					10,
					21
				],
				[
					8,
					22
				],
				[
					7,
					23
				],
				[
					6,
					23
				],
				[
					4,
					24
				],
				[
					2,
					24
				],
				[
					1,
					24
				],
				[
					-1,
					23
				],
				[
					-2,
					23
				],
				[
					-3,
					22
				],
				[
					-4,
					21
				],
				[
					-4,
					20
				],
				[
					-3,
					18
				],
				[
					-2,
					16
				],
				[
					-2,
					15
				],
				[
					0,
					13
				],
				[
					3,
					10
				],
				[
					5,
					8
				],
				[
					7,
					7
				],
				[
					9,
					5
				],
				[
					12,
					3
				],
				[
					14,
					2
				],
				[
					15,
					2
				],
				[
					17,
					3
				],
				[
					18,
					3
				],
				[
					19,
					5
				],
				[
					20,
					7
				],
				[
					20,
					9
				],
				[
					21,
					12
				],
				[
					21,
					15
				],
				[
					22,
					19
				],
				[
					22,
					20
				],
				[
					22,
					21
				],
				[
					22,
					23
				],
				[
					22,
					25
				],
				[
					23,
					25
				],
				[
					23,
					24
				],
				[
					23,
					24
				]
			],
			"pressures": [
				0.0341796875,
				0.037109375,
				0.0517578125,
				0.0859375,
				0.1259765625,
				0.1455078125,
				0.1884765625,
				0.2353515625,
				0.3037109375,
				0.3251953125,
				0.3818359375,
				0.4091796875,
				0.42578125,
				0.431640625,
				0.4384765625,
				0.443359375,
				0.447265625,
				0.44921875,
				0.4521484375,
				0.4560546875,
				0.458984375,
				0.45703125,
				0.4580078125,
				0.4541015625,
				0.4521484375,
				0.4501953125,
				0.4501953125,
				0.451171875,
				0.4521484375,
				0.453125,
				0.4541015625,
				0.4560546875,
				0.4638671875,
				0.4755859375,
				0.4931640625,
				0.5283203125,
				0.5498046875,
				0.568359375,
				0.576171875,
				0.587890625,
				0.5947265625,
				0.599609375,
				0.6005859375,
				0.599609375,
				0.5927734375,
				0.5849609375,
				0.55859375,
				0.515625,
				0.4873046875,
				0.4228515625,
				0.38671875,
				0.28515625,
				0.2333984375,
				0.212890625,
				0.185546875,
				0.171875,
				0.16796875,
				0.1689453125,
				0.17578125,
				0.1904296875,
				0.21484375,
				0.2294921875,
				0.2646484375,
				0.2861328125,
				0.326171875,
				0.361328125,
				0.375,
				0.396484375,
				0.4091796875,
				0.41015625,
				0.40625,
				0.400390625,
				0.384765625,
				0.3525390625,
				0.3271484375,
				0.2333984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				23,
				24
			]
		},
		{
			"id": "tjvNok7qLvnySM_w3TVJ9",
			"type": "freedraw",
			"x": 6851.164003459888,
			"y": 827.803113553115,
			"width": 32,
			"height": 80,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1096088369,
			"version": 98,
			"versionNonce": 724221233,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-3
				],
				[
					-1,
					-6
				],
				[
					-1,
					-7
				],
				[
					-2,
					-8
				],
				[
					-3,
					-9
				],
				[
					-3,
					-11
				],
				[
					-4,
					-11
				],
				[
					-4,
					-12
				],
				[
					-5,
					-12
				],
				[
					-4,
					-12
				],
				[
					-4,
					-11
				],
				[
					-4,
					-10
				],
				[
					-3,
					-9
				],
				[
					-1,
					-7
				],
				[
					0,
					-6
				],
				[
					2,
					-4
				],
				[
					4,
					-2
				],
				[
					5,
					-1
				],
				[
					7,
					0
				],
				[
					10,
					1
				],
				[
					12,
					2
				],
				[
					13,
					3
				],
				[
					15,
					3
				],
				[
					16,
					3
				],
				[
					17,
					3
				],
				[
					16,
					3
				],
				[
					14,
					3
				],
				[
					13,
					3
				],
				[
					11,
					3
				],
				[
					10,
					4
				],
				[
					8,
					5
				],
				[
					7,
					7
				],
				[
					6,
					8
				],
				[
					5,
					10
				],
				[
					5,
					11
				],
				[
					5,
					13
				],
				[
					5,
					15
				],
				[
					6,
					18
				],
				[
					7,
					19
				],
				[
					9,
					21
				],
				[
					11,
					22
				],
				[
					13,
					23
				],
				[
					14,
					23
				],
				[
					17,
					23
				],
				[
					19,
					22
				],
				[
					20,
					21
				],
				[
					22,
					19
				],
				[
					23,
					18
				],
				[
					24,
					15
				],
				[
					25,
					13
				],
				[
					26,
					11
				],
				[
					26,
					10
				],
				[
					26,
					9
				],
				[
					26,
					8
				],
				[
					26,
					10
				],
				[
					26,
					13
				],
				[
					26,
					14
				],
				[
					26,
					19
				],
				[
					27,
					23
				],
				[
					27,
					29
				],
				[
					27,
					32
				],
				[
					27,
					38
				],
				[
					26,
					41
				],
				[
					25,
					47
				],
				[
					24,
					52
				],
				[
					23,
					55
				],
				[
					21,
					60
				],
				[
					18,
					64
				],
				[
					16,
					67
				],
				[
					14,
					67
				],
				[
					12,
					68
				],
				[
					9,
					67
				],
				[
					7,
					64
				],
				[
					6,
					63
				],
				[
					5,
					58
				],
				[
					4,
					53
				],
				[
					4,
					53
				]
			],
			"pressures": [
				0.1298828125,
				0.1396484375,
				0.1611328125,
				0.17578125,
				0.185546875,
				0.197265625,
				0.2099609375,
				0.2138671875,
				0.2177734375,
				0.21484375,
				0.2041015625,
				0.197265625,
				0.1787109375,
				0.1533203125,
				0.1279296875,
				0.1162109375,
				0.0986328125,
				0.0859375,
				0.0830078125,
				0.08203125,
				0.080078125,
				0.078125,
				0.0791015625,
				0.0927734375,
				0.115234375,
				0.1416015625,
				0.2568359375,
				0.3037109375,
				0.3349609375,
				0.3583984375,
				0.365234375,
				0.373046875,
				0.3798828125,
				0.3818359375,
				0.38671875,
				0.3876953125,
				0.3896484375,
				0.3876953125,
				0.38671875,
				0.3857421875,
				0.3818359375,
				0.3779296875,
				0.3759765625,
				0.375,
				0.3701171875,
				0.3583984375,
				0.3515625,
				0.3349609375,
				0.3251953125,
				0.3046875,
				0.287109375,
				0.2763671875,
				0.2724609375,
				0.26953125,
				0.271484375,
				0.296875,
				0.3095703125,
				0.3154296875,
				0.3359375,
				0.369140625,
				0.4072265625,
				0.4267578125,
				0.46484375,
				0.4833984375,
				0.5146484375,
				0.5380859375,
				0.5478515625,
				0.5625,
				0.572265625,
				0.5751953125,
				0.572265625,
				0.5595703125,
				0.5302734375,
				0.478515625,
				0.4443359375,
				0.3642578125,
				0.2744140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				4,
				53
			]
		},
		{
			"id": "2CucaR6KPHvsy7vDvpGe0",
			"type": "freedraw",
			"x": 6867.164003459888,
			"y": 840.803113553115,
			"width": 40,
			"height": 30,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1363870015,
			"version": 68,
			"versionNonce": 2144315999,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					3,
					-3
				],
				[
					4,
					-4
				],
				[
					6,
					-6
				],
				[
					8,
					-7
				],
				[
					9,
					-8
				],
				[
					11,
					-8
				],
				[
					13,
					-8
				],
				[
					15,
					-7
				],
				[
					16,
					-5
				],
				[
					17,
					-3
				],
				[
					18,
					0
				],
				[
					19,
					4
				],
				[
					20,
					8
				],
				[
					20,
					10
				],
				[
					20,
					14
				],
				[
					21,
					17
				],
				[
					21,
					18
				],
				[
					21,
					20
				],
				[
					22,
					21
				],
				[
					22,
					22
				],
				[
					23,
					21
				],
				[
					23,
					20
				],
				[
					24,
					19
				],
				[
					25,
					16
				],
				[
					26,
					13
				],
				[
					27,
					12
				],
				[
					28,
					9
				],
				[
					29,
					6
				],
				[
					30,
					3
				],
				[
					30,
					2
				],
				[
					31,
					1
				],
				[
					31,
					-1
				],
				[
					32,
					-1
				],
				[
					32,
					-2
				],
				[
					32,
					-1
				],
				[
					32,
					0
				],
				[
					32,
					3
				],
				[
					33,
					4
				],
				[
					33,
					5
				],
				[
					33,
					9
				],
				[
					34,
					12
				],
				[
					35,
					15
				],
				[
					35,
					16
				],
				[
					37,
					18
				],
				[
					39,
					19
				],
				[
					40,
					19
				],
				[
					40,
					19
				]
			],
			"pressures": [
				0.064453125,
				0.0703125,
				0.076171875,
				0.099609375,
				0.12890625,
				0.1572265625,
				0.177734375,
				0.2216796875,
				0.26953125,
				0.3193359375,
				0.3427734375,
				0.38671875,
				0.4248046875,
				0.4521484375,
				0.4609375,
				0.470703125,
				0.4755859375,
				0.4755859375,
				0.470703125,
				0.4638671875,
				0.4599609375,
				0.439453125,
				0.4169921875,
				0.3896484375,
				0.3623046875,
				0.3349609375,
				0.3203125,
				0.2998046875,
				0.2861328125,
				0.2763671875,
				0.2734375,
				0.26953125,
				0.2666015625,
				0.267578125,
				0.275390625,
				0.283203125,
				0.2919921875,
				0.3076171875,
				0.3095703125,
				0.3115234375,
				0.3134765625,
				0.3125,
				0.30078125,
				0.2919921875,
				0.271484375,
				0.2373046875,
				0.2138671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				40,
				19
			]
		},
		{
			"id": "ORwnNsKDxU7mS3zhLKE7v",
			"type": "freedraw",
			"x": 6924.164003459888,
			"y": 835.803113553115,
			"width": 42,
			"height": 60,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1528361777,
			"version": 100,
			"versionNonce": 1713237777,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					1
				],
				[
					-1,
					2
				],
				[
					-2,
					2
				],
				[
					-2,
					3
				],
				[
					-2,
					4
				],
				[
					-4,
					6
				],
				[
					-4,
					7
				],
				[
					-5,
					10
				],
				[
					-5,
					11
				],
				[
					-6,
					14
				],
				[
					-6,
					18
				],
				[
					-6,
					19
				],
				[
					-6,
					22
				],
				[
					-5,
					25
				],
				[
					-4,
					25
				],
				[
					-2,
					27
				],
				[
					-1,
					27
				],
				[
					1,
					27
				],
				[
					2,
					26
				],
				[
					4,
					25
				],
				[
					5,
					23
				],
				[
					6,
					22
				],
				[
					7,
					19
				],
				[
					8,
					16
				],
				[
					9,
					13
				],
				[
					9,
					11
				],
				[
					10,
					9
				],
				[
					10,
					6
				],
				[
					10,
					4
				],
				[
					10,
					3
				],
				[
					10,
					1
				],
				[
					10,
					0
				],
				[
					9,
					1
				],
				[
					9,
					3
				],
				[
					9,
					5
				],
				[
					9,
					6
				],
				[
					9,
					9
				],
				[
					9,
					12
				],
				[
					9,
					14
				],
				[
					10,
					17
				],
				[
					10,
					18
				],
				[
					11,
					21
				],
				[
					13,
					23
				],
				[
					14,
					24
				],
				[
					15,
					24
				],
				[
					17,
					24
				],
				[
					18,
					24
				],
				[
					20,
					22
				],
				[
					22,
					19
				],
				[
					24,
					17
				],
				[
					26,
					12
				],
				[
					27,
					10
				],
				[
					28,
					7
				],
				[
					30,
					1
				],
				[
					31,
					-5
				],
				[
					32,
					-8
				],
				[
					33,
					-14
				],
				[
					33,
					-20
				],
				[
					33,
					-25
				],
				[
					32,
					-26
				],
				[
					31,
					-29
				],
				[
					30,
					-30
				],
				[
					28,
					-29
				],
				[
					27,
					-28
				],
				[
					26,
					-25
				],
				[
					24,
					-21
				],
				[
					24,
					-16
				],
				[
					24,
					-13
				],
				[
					24,
					-7
				],
				[
					24,
					0
				],
				[
					25,
					6
				],
				[
					26,
					10
				],
				[
					27,
					15
				],
				[
					29,
					21
				],
				[
					30,
					23
				],
				[
					32,
					26
				],
				[
					33,
					28
				],
				[
					36,
					30
				],
				[
					36,
					30
				]
			],
			"pressures": [
				0.1650390625,
				0.1904296875,
				0.208984375,
				0.21875,
				0.234375,
				0.2421875,
				0.2744140625,
				0.2900390625,
				0.314453125,
				0.32421875,
				0.341796875,
				0.35546875,
				0.357421875,
				0.3603515625,
				0.3603515625,
				0.3564453125,
				0.33984375,
				0.3173828125,
				0.291015625,
				0.275390625,
				0.240234375,
				0.2080078125,
				0.1923828125,
				0.1630859375,
				0.1376953125,
				0.115234375,
				0.10546875,
				0.0908203125,
				0.087890625,
				0.095703125,
				0.103515625,
				0.1259765625,
				0.16015625,
				0.240234375,
				0.2939453125,
				0.328125,
				0.3447265625,
				0.37109375,
				0.3935546875,
				0.4033203125,
				0.4228515625,
				0.4306640625,
				0.4404296875,
				0.4453125,
				0.4453125,
				0.4453125,
				0.44140625,
				0.4384765625,
				0.427734375,
				0.41015625,
				0.3994140625,
				0.3759765625,
				0.3642578125,
				0.3525390625,
				0.326171875,
				0.302734375,
				0.29296875,
				0.279296875,
				0.27734375,
				0.2890625,
				0.30078125,
				0.33984375,
				0.36328125,
				0.439453125,
				0.4638671875,
				0.5078125,
				0.5439453125,
				0.572265625,
				0.583984375,
				0.603515625,
				0.6162109375,
				0.6220703125,
				0.6240234375,
				0.6201171875,
				0.603515625,
				0.5908203125,
				0.5517578125,
				0.525390625,
				0.4541015625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				36,
				30
			]
		},
		{
			"id": "If2_50b65mx5AFVNEHsWH",
			"type": "freedraw",
			"x": 7013.164003459888,
			"y": 809.803113553115,
			"width": 23,
			"height": 61,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 275122527,
			"version": 46,
			"versionNonce": 105449087,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-3,
					-3
				],
				[
					-4,
					-3
				],
				[
					-6,
					-3
				],
				[
					-8,
					-3
				],
				[
					-9,
					-3
				],
				[
					-11,
					-1
				],
				[
					-14,
					1
				],
				[
					-16,
					5
				],
				[
					-17,
					7
				],
				[
					-19,
					12
				],
				[
					-21,
					18
				],
				[
					-22,
					24
				],
				[
					-22,
					27
				],
				[
					-23,
					34
				],
				[
					-22,
					40
				],
				[
					-21,
					46
				],
				[
					-21,
					49
				],
				[
					-19,
					53
				],
				[
					-17,
					55
				],
				[
					-14,
					57
				],
				[
					-12,
					58
				],
				[
					-11,
					58
				],
				[
					-11,
					58
				]
			],
			"pressures": [
				0.177734375,
				0.193359375,
				0.205078125,
				0.2666015625,
				0.3046875,
				0.365234375,
				0.42578125,
				0.4521484375,
				0.49609375,
				0.53125,
				0.5625,
				0.576171875,
				0.6005859375,
				0.6171875,
				0.62890625,
				0.6328125,
				0.63671875,
				0.6357421875,
				0.6240234375,
				0.61328125,
				0.580078125,
				0.529296875,
				0.4580078125,
				0.416015625,
				0.37109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-11,
				58
			]
		},
		{
			"id": "BSzE53v5hn9Y5iKaSVBRl",
			"type": "freedraw",
			"x": 7027.164003459888,
			"y": 840.803113553115,
			"width": 17,
			"height": 30,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2117637233,
			"version": 65,
			"versionNonce": 596632817,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-1
				],
				[
					-1,
					0
				],
				[
					-3,
					1
				],
				[
					-4,
					2
				],
				[
					-4,
					3
				],
				[
					-6,
					5
				],
				[
					-6,
					6
				],
				[
					-7,
					9
				],
				[
					-8,
					12
				],
				[
					-8,
					14
				],
				[
					-8,
					16
				],
				[
					-8,
					18
				],
				[
					-8,
					20
				],
				[
					-7,
					21
				],
				[
					-6,
					22
				],
				[
					-5,
					22
				],
				[
					-4,
					21
				],
				[
					-2,
					20
				],
				[
					-2,
					19
				],
				[
					0,
					16
				],
				[
					2,
					12
				],
				[
					2,
					10
				],
				[
					4,
					6
				],
				[
					5,
					3
				],
				[
					6,
					-1
				],
				[
					6,
					-2
				],
				[
					7,
					-5
				],
				[
					7,
					-7
				],
				[
					7,
					-8
				],
				[
					7,
					-7
				],
				[
					7,
					-6
				],
				[
					7,
					-4
				],
				[
					6,
					-3
				],
				[
					6,
					0
				],
				[
					6,
					3
				],
				[
					6,
					5
				],
				[
					6,
					8
				],
				[
					6,
					9
				],
				[
					7,
					12
				],
				[
					7,
					15
				],
				[
					8,
					16
				],
				[
					9,
					17
				],
				[
					9,
					17
				]
			],
			"pressures": [
				0.2138671875,
				0.2177734375,
				0.271484375,
				0.29296875,
				0.345703125,
				0.388671875,
				0.41015625,
				0.4501953125,
				0.4677734375,
				0.4990234375,
				0.5205078125,
				0.5341796875,
				0.5380859375,
				0.5400390625,
				0.537109375,
				0.5322265625,
				0.521484375,
				0.501953125,
				0.470703125,
				0.4296875,
				0.4072265625,
				0.359375,
				0.31640625,
				0.2978515625,
				0.2685546875,
				0.251953125,
				0.248046875,
				0.2509765625,
				0.267578125,
				0.2919921875,
				0.3193359375,
				0.369140625,
				0.3974609375,
				0.4169921875,
				0.4248046875,
				0.435546875,
				0.4423828125,
				0.443359375,
				0.443359375,
				0.44140625,
				0.4248046875,
				0.3876953125,
				0.36328125,
				0.3017578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9,
				17
			]
		},
		{
			"id": "-JT3QexKH5qt0X0yOOYAa",
			"type": "freedraw",
			"x": 7057.164003459888,
			"y": 809.803113553115,
			"width": 2,
			"height": 53,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1228696465,
			"version": 37,
			"versionNonce": 159506079,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					1,
					5
				],
				[
					1,
					6
				],
				[
					1,
					11
				],
				[
					1,
					14
				],
				[
					1,
					20
				],
				[
					1,
					26
				],
				[
					1,
					32
				],
				[
					1,
					35
				],
				[
					1,
					40
				],
				[
					1,
					45
				],
				[
					1,
					47
				],
				[
					2,
					50
				],
				[
					2,
					52
				],
				[
					2,
					52
				]
			],
			"pressures": [
				0.20703125,
				0.220703125,
				0.2578125,
				0.466796875,
				0.4873046875,
				0.525390625,
				0.541015625,
				0.564453125,
				0.580078125,
				0.587890625,
				0.5859375,
				0.5712890625,
				0.5380859375,
				0.5126953125,
				0.4453125,
				0.357421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2,
				52
			]
		},
		{
			"id": "YVuVrtzqLvmYM-8Vdw7-G",
			"type": "freedraw",
			"x": 7098.164003459888,
			"y": 844.803113553115,
			"width": 19,
			"height": 63,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1000181873,
			"version": 86,
			"versionNonce": 789061329,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					-1,
					-4
				],
				[
					-1,
					-5
				],
				[
					-2,
					-7
				],
				[
					-3,
					-7
				],
				[
					-5,
					-9
				],
				[
					-6,
					-10
				],
				[
					-7,
					-10
				],
				[
					-8,
					-11
				],
				[
					-10,
					-11
				],
				[
					-11,
					-11
				],
				[
					-12,
					-10
				],
				[
					-13,
					-9
				],
				[
					-14,
					-8
				],
				[
					-15,
					-6
				],
				[
					-15,
					-4
				],
				[
					-16,
					-2
				],
				[
					-16,
					1
				],
				[
					-16,
					3
				],
				[
					-16,
					6
				],
				[
					-15,
					9
				],
				[
					-15,
					11
				],
				[
					-14,
					13
				],
				[
					-14,
					14
				],
				[
					-13,
					15
				],
				[
					-12,
					15
				],
				[
					-11,
					15
				],
				[
					-10,
					14
				],
				[
					-9,
					12
				],
				[
					-7,
					9
				],
				[
					-7,
					7
				],
				[
					-5,
					2
				],
				[
					-4,
					-4
				],
				[
					-3,
					-9
				],
				[
					-3,
					-12
				],
				[
					-2,
					-18
				],
				[
					-2,
					-24
				],
				[
					-1,
					-26
				],
				[
					-1,
					-33
				],
				[
					-2,
					-35
				],
				[
					-2,
					-39
				],
				[
					-2,
					-40
				],
				[
					-3,
					-42
				],
				[
					-3,
					-43
				],
				[
					-3,
					-42
				],
				[
					-4,
					-41
				],
				[
					-4,
					-39
				],
				[
					-4,
					-36
				],
				[
					-5,
					-32
				],
				[
					-5,
					-30
				],
				[
					-5,
					-25
				],
				[
					-5,
					-19
				],
				[
					-4,
					-13
				],
				[
					-4,
					-10
				],
				[
					-4,
					-3
				],
				[
					-3,
					3
				],
				[
					-3,
					6
				],
				[
					-2,
					11
				],
				[
					-1,
					15
				],
				[
					1,
					18
				],
				[
					2,
					19
				],
				[
					3,
					20
				],
				[
					3,
					20
				]
			],
			"pressures": [
				0.1669921875,
				0.1708984375,
				0.1796875,
				0.2041015625,
				0.2216796875,
				0.2587890625,
				0.2978515625,
				0.3193359375,
				0.359375,
				0.3955078125,
				0.41015625,
				0.43359375,
				0.4521484375,
				0.4609375,
				0.462890625,
				0.4658203125,
				0.4677734375,
				0.4677734375,
				0.4677734375,
				0.4677734375,
				0.4677734375,
				0.4677734375,
				0.46875,
				0.4677734375,
				0.466796875,
				0.4658203125,
				0.46484375,
				0.4638671875,
				0.45703125,
				0.451171875,
				0.4326171875,
				0.4013671875,
				0.36328125,
				0.3427734375,
				0.3017578125,
				0.265625,
				0.240234375,
				0.2314453125,
				0.220703125,
				0.2158203125,
				0.21484375,
				0.2138671875,
				0.2177734375,
				0.228515625,
				0.2353515625,
				0.2529296875,
				0.27734375,
				0.2919921875,
				0.3212890625,
				0.3505859375,
				0.37890625,
				0.400390625,
				0.4091796875,
				0.423828125,
				0.4326171875,
				0.4384765625,
				0.4404296875,
				0.44140625,
				0.4345703125,
				0.42578125,
				0.3955078125,
				0.353515625,
				0.3046875,
				0.2783203125,
				0.2197265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3,
				20
			]
		},
		{
			"id": "lg6qUnTDTx6E6SascG-ja",
			"type": "freedraw",
			"x": 7113.164003459888,
			"y": 841.803113553115,
			"width": 57,
			"height": 31,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1562522431,
			"version": 133,
			"versionNonce": 1009431231,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-2
				],
				[
					-1,
					-3
				],
				[
					-2,
					-3
				],
				[
					-3,
					-3
				],
				[
					-4,
					-2
				],
				[
					-5,
					0
				],
				[
					-5,
					1
				],
				[
					-6,
					4
				],
				[
					-6,
					7
				],
				[
					-6,
					10
				],
				[
					-6,
					12
				],
				[
					-6,
					15
				],
				[
					-5,
					18
				],
				[
					-4,
					20
				],
				[
					-4,
					21
				],
				[
					-2,
					23
				],
				[
					-1,
					24
				],
				[
					0,
					24
				],
				[
					1,
					24
				],
				[
					2,
					24
				],
				[
					3,
					23
				],
				[
					3,
					21
				],
				[
					4,
					19
				],
				[
					4,
					18
				],
				[
					5,
					15
				],
				[
					5,
					12
				],
				[
					5,
					9
				],
				[
					5,
					7
				],
				[
					5,
					4
				],
				[
					5,
					3
				],
				[
					5,
					1
				],
				[
					6,
					-1
				],
				[
					6,
					-3
				],
				[
					7,
					-3
				],
				[
					8,
					-4
				],
				[
					9,
					-4
				],
				[
					11,
					-4
				],
				[
					12,
					-2
				],
				[
					13,
					0
				],
				[
					13,
					1
				],
				[
					14,
					4
				],
				[
					15,
					8
				],
				[
					15,
					11
				],
				[
					15,
					13
				],
				[
					15,
					16
				],
				[
					15,
					19
				],
				[
					15,
					21
				],
				[
					14,
					22
				],
				[
					14,
					23
				],
				[
					14,
					24
				],
				[
					15,
					24
				],
				[
					15,
					23
				],
				[
					16,
					22
				],
				[
					16,
					20
				],
				[
					17,
					19
				],
				[
					18,
					16
				],
				[
					19,
					13
				],
				[
					20,
					10
				],
				[
					20,
					8
				],
				[
					21,
					6
				],
				[
					22,
					3
				],
				[
					22,
					1
				],
				[
					22,
					0
				],
				[
					23,
					-1
				],
				[
					23,
					-2
				],
				[
					23,
					-1
				],
				[
					23,
					0
				],
				[
					24,
					2
				],
				[
					24,
					4
				],
				[
					24,
					5
				],
				[
					25,
					8
				],
				[
					26,
					10
				],
				[
					27,
					13
				],
				[
					28,
					14
				],
				[
					29,
					16
				],
				[
					30,
					18
				],
				[
					31,
					20
				],
				[
					32,
					20
				],
				[
					33,
					21
				],
				[
					34,
					21
				],
				[
					35,
					21
				],
				[
					36,
					21
				],
				[
					37,
					19
				],
				[
					38,
					17
				],
				[
					39,
					16
				],
				[
					40,
					13
				],
				[
					40,
					11
				],
				[
					40,
					8
				],
				[
					41,
					5
				],
				[
					41,
					2
				],
				[
					40,
					0
				],
				[
					40,
					-2
				],
				[
					40,
					-3
				],
				[
					40,
					-4
				],
				[
					39,
					-5
				],
				[
					38,
					-5
				],
				[
					38,
					-3
				],
				[
					38,
					-1
				],
				[
					38,
					1
				],
				[
					39,
					3
				],
				[
					39,
					6
				],
				[
					40,
					9
				],
				[
					41,
					11
				],
				[
					42,
					15
				],
				[
					44,
					18
				],
				[
					45,
					21
				],
				[
					46,
					22
				],
				[
					48,
					25
				],
				[
					49,
					26
				],
				[
					51,
					26
				],
				[
					51,
					26
				]
			],
			"pressures": [
				0.1083984375,
				0.123046875,
				0.1708984375,
				0.181640625,
				0.2138671875,
				0.2587890625,
				0.2822265625,
				0.302734375,
				0.3115234375,
				0.3310546875,
				0.3486328125,
				0.36328125,
				0.3681640625,
				0.376953125,
				0.3818359375,
				0.3828125,
				0.3828125,
				0.3818359375,
				0.380859375,
				0.3798828125,
				0.37890625,
				0.37890625,
				0.376953125,
				0.3720703125,
				0.3642578125,
				0.359375,
				0.349609375,
				0.3369140625,
				0.322265625,
				0.31640625,
				0.306640625,
				0.3037109375,
				0.298828125,
				0.2958984375,
				0.2939453125,
				0.296875,
				0.2998046875,
				0.310546875,
				0.3310546875,
				0.349609375,
				0.3681640625,
				0.376953125,
				0.392578125,
				0.41015625,
				0.427734375,
				0.4375,
				0.453125,
				0.4658203125,
				0.474609375,
				0.4765625,
				0.4755859375,
				0.466796875,
				0.4462890625,
				0.435546875,
				0.4091796875,
				0.3818359375,
				0.369140625,
				0.34375,
				0.322265625,
				0.3056640625,
				0.2998046875,
				0.2919921875,
				0.2880859375,
				0.287109375,
				0.2880859375,
				0.2890625,
				0.2939453125,
				0.359375,
				0.3798828125,
				0.400390625,
				0.421875,
				0.4326171875,
				0.451171875,
				0.4677734375,
				0.484375,
				0.490234375,
				0.4990234375,
				0.50390625,
				0.5048828125,
				0.50390625,
				0.4990234375,
				0.4951171875,
				0.486328125,
				0.4716796875,
				0.4541015625,
				0.4365234375,
				0.4287109375,
				0.4169921875,
				0.4140625,
				0.4111328125,
				0.4111328125,
				0.416015625,
				0.419921875,
				0.4306640625,
				0.435546875,
				0.443359375,
				0.4580078125,
				0.4833984375,
				0.4892578125,
				0.4921875,
				0.4951171875,
				0.498046875,
				0.505859375,
				0.5146484375,
				0.5185546875,
				0.5244140625,
				0.5283203125,
				0.5205078125,
				0.51171875,
				0.484375,
				0.44140625,
				0.3779296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				51,
				26
			]
		},
		{
			"id": "YQKjQKUQA1AN0K1KwAm9c",
			"type": "freedraw",
			"x": 7165.164003459888,
			"y": 801.803113553115,
			"width": 13,
			"height": 78,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1339984479,
			"version": 43,
			"versionNonce": 1998462129,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					3,
					-1
				],
				[
					3,
					0
				],
				[
					4,
					0
				],
				[
					5,
					2
				],
				[
					6,
					3
				],
				[
					8,
					6
				],
				[
					9,
					8
				],
				[
					9,
					10
				],
				[
					10,
					13
				],
				[
					12,
					19
				],
				[
					12,
					23
				],
				[
					13,
					27
				],
				[
					13,
					36
				],
				[
					13,
					47
				],
				[
					13,
					52
				],
				[
					12,
					62
				],
				[
					10,
					70
				],
				[
					9,
					77
				],
				[
					9,
					77
				]
			],
			"pressures": [
				0.2216796875,
				0.2353515625,
				0.26953125,
				0.3837890625,
				0.470703125,
				0.513671875,
				0.5546875,
				0.6328125,
				0.66796875,
				0.732421875,
				0.759765625,
				0.78515625,
				0.8076171875,
				0.8427734375,
				0.85546875,
				0.8662109375,
				0.8720703125,
				0.857421875,
				0.841796875,
				0.7958984375,
				0.72265625,
				0.61328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9,
				77
			]
		},
		{
			"id": "skjMtiPp7jCzmH_WeR5rF",
			"type": "freedraw",
			"x": 7049.164003459888,
			"y": 822.803113553115,
			"width": 38,
			"height": 46,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 240833503,
			"version": 72,
			"versionNonce": 652477151,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					0,
					-4
				],
				[
					0,
					-5
				],
				[
					1,
					-6
				],
				[
					1,
					-7
				],
				[
					1,
					-8
				],
				[
					2,
					-8
				],
				[
					4,
					-8
				],
				[
					4,
					-9
				],
				[
					6,
					-9
				],
				[
					8,
					-9
				],
				[
					10,
					-9
				],
				[
					11,
					-9
				],
				[
					12,
					-8
				],
				[
					14,
					-7
				],
				[
					15,
					-6
				],
				[
					16,
					-5
				],
				[
					16,
					-2
				],
				[
					16,
					1
				],
				[
					16,
					4
				],
				[
					16,
					6
				],
				[
					15,
					10
				],
				[
					13,
					15
				],
				[
					13,
					17
				],
				[
					11,
					22
				],
				[
					9,
					26
				],
				[
					8,
					30
				],
				[
					7,
					31
				],
				[
					6,
					34
				],
				[
					6,
					35
				],
				[
					6,
					36
				],
				[
					6,
					37
				],
				[
					8,
					37
				],
				[
					9,
					37
				],
				[
					10,
					37
				],
				[
					12,
					37
				],
				[
					15,
					36
				],
				[
					16,
					36
				],
				[
					18,
					35
				],
				[
					21,
					35
				],
				[
					24,
					34
				],
				[
					25,
					34
				],
				[
					28,
					33
				],
				[
					31,
					32
				],
				[
					33,
					32
				],
				[
					34,
					31
				],
				[
					37,
					31
				],
				[
					38,
					30
				],
				[
					38,
					30
				]
			],
			"pressures": [
				0.21875,
				0.27734375,
				0.3359375,
				0.3984375,
				0.44140625,
				0.474609375,
				0.509765625,
				0.525390625,
				0.544921875,
				0.55078125,
				0.5634765625,
				0.568359375,
				0.578125,
				0.5888671875,
				0.6005859375,
				0.607421875,
				0.6201171875,
				0.6328125,
				0.6435546875,
				0.6474609375,
				0.654296875,
				0.658203125,
				0.6611328125,
				0.6630859375,
				0.6650390625,
				0.6669921875,
				0.66796875,
				0.6708984375,
				0.671875,
				0.673828125,
				0.6748046875,
				0.67578125,
				0.6767578125,
				0.6767578125,
				0.6767578125,
				0.6787109375,
				0.681640625,
				0.68359375,
				0.6875,
				0.69140625,
				0.693359375,
				0.6962890625,
				0.6982421875,
				0.69921875,
				0.6982421875,
				0.6953125,
				0.681640625,
				0.650390625,
				0.6240234375,
				0.5498046875,
				0.5,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				38,
				30
			]
		},
		{
			"id": "T55xp065ynsRS5QtotT75",
			"type": "image",
			"x": 6799.164003459888,
			"y": 946.803113553115,
			"width": 1008.0400000000001,
			"height": 158,
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
			"seed": 403973841,
			"version": 127,
			"versionNonce": 729374353,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626170,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "b30ddda565f28a602d0ed4d23b9641872e1f7577",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "nAsUmpEci92o24WO8li1q",
			"type": "freedraw",
			"x": 6844.164003459888,
			"y": 1212.803113553115,
			"width": 4,
			"height": 46,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1562226079,
			"version": 37,
			"versionNonce": 852138879,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					-2
				],
				[
					2,
					-2
				],
				[
					2,
					-1
				],
				[
					1,
					1
				],
				[
					1,
					4
				],
				[
					1,
					8
				],
				[
					0,
					10
				],
				[
					0,
					15
				],
				[
					-1,
					21
				],
				[
					-2,
					27
				],
				[
					-2,
					30
				],
				[
					-2,
					35
				],
				[
					-2,
					37
				],
				[
					-2,
					42
				],
				[
					-2,
					44
				],
				[
					-2,
					44
				]
			],
			"pressures": [
				0.234375,
				0.2392578125,
				0.279296875,
				0.3935546875,
				0.4521484375,
				0.5283203125,
				0.568359375,
				0.5986328125,
				0.609375,
				0.625,
				0.6328125,
				0.6298828125,
				0.623046875,
				0.5947265625,
				0.5712890625,
				0.5009765625,
				0.451171875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-2,
				44
			]
		},
		{
			"id": "cuEncdnih3T58nq_1p2pM",
			"type": "freedraw",
			"x": 7060.164003459888,
			"y": 1220.803113553115,
			"width": 39,
			"height": 53,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1713446065,
			"version": 74,
			"versionNonce": 694034417,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					2,
					-2
				],
				[
					3,
					-2
				],
				[
					4,
					-3
				],
				[
					5,
					-4
				],
				[
					7,
					-4
				],
				[
					8,
					-4
				],
				[
					9,
					-4
				],
				[
					11,
					-3
				],
				[
					13,
					-2
				],
				[
					15,
					-1
				],
				[
					17,
					0
				],
				[
					19,
					2
				],
				[
					21,
					5
				],
				[
					22,
					8
				],
				[
					23,
					9
				],
				[
					23,
					13
				],
				[
					23,
					17
				],
				[
					23,
					19
				],
				[
					21,
					24
				],
				[
					19,
					28
				],
				[
					18,
					31
				],
				[
					15,
					35
				],
				[
					13,
					38
				],
				[
					12,
					40
				],
				[
					9,
					42
				],
				[
					8,
					43
				],
				[
					6,
					43
				],
				[
					5,
					43
				],
				[
					4,
					42
				],
				[
					3,
					40
				],
				[
					3,
					39
				],
				[
					3,
					37
				],
				[
					3,
					36
				],
				[
					3,
					34
				],
				[
					4,
					33
				],
				[
					5,
					32
				],
				[
					6,
					32
				],
				[
					8,
					33
				],
				[
					11,
					34
				],
				[
					13,
					35
				],
				[
					15,
					36
				],
				[
					18,
					38
				],
				[
					21,
					41
				],
				[
					25,
					43
				],
				[
					26,
					44
				],
				[
					29,
					45
				],
				[
					30,
					46
				],
				[
					33,
					48
				],
				[
					36,
					49
				],
				[
					38,
					49
				],
				[
					39,
					49
				],
				[
					39,
					49
				]
			],
			"pressures": [
				0.1552734375,
				0.1806640625,
				0.2099609375,
				0.23828125,
				0.2607421875,
				0.3212890625,
				0.357421875,
				0.3984375,
				0.421875,
				0.4326171875,
				0.451171875,
				0.4638671875,
				0.4755859375,
				0.4814453125,
				0.490234375,
				0.4970703125,
				0.501953125,
				0.50390625,
				0.505859375,
				0.5078125,
				0.5078125,
				0.5087890625,
				0.5078125,
				0.505859375,
				0.4990234375,
				0.4892578125,
				0.4833984375,
				0.46875,
				0.455078125,
				0.4462890625,
				0.4384765625,
				0.43359375,
				0.4326171875,
				0.43359375,
				0.4345703125,
				0.4345703125,
				0.4384765625,
				0.44140625,
				0.4609375,
				0.4814453125,
				0.5078125,
				0.5361328125,
				0.5634765625,
				0.57421875,
				0.591796875,
				0.6044921875,
				0.611328125,
				0.6142578125,
				0.6171875,
				0.6171875,
				0.615234375,
				0.6005859375,
				0.5859375,
				0.56640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				39,
				49
			]
		},
		{
			"id": "uEz_CAm7OKoGFa4COjgw3",
			"type": "freedraw",
			"x": 7295.164003459888,
			"y": 1229.803113553115,
			"width": 37,
			"height": 46,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 746567985,
			"version": 81,
			"versionNonce": 990434207,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-1
				],
				[
					-2,
					-1
				],
				[
					-3,
					-1
				],
				[
					-3,
					-2
				],
				[
					-4,
					-2
				],
				[
					-4,
					-3
				],
				[
					-3,
					-3
				],
				[
					-2,
					-3
				],
				[
					-2,
					-4
				],
				[
					0,
					-4
				],
				[
					2,
					-5
				],
				[
					4,
					-5
				],
				[
					5,
					-5
				],
				[
					8,
					-5
				],
				[
					9,
					-4
				],
				[
					11,
					-4
				],
				[
					12,
					-3
				],
				[
					13,
					-2
				],
				[
					14,
					-1
				],
				[
					14,
					1
				],
				[
					14,
					3
				],
				[
					14,
					5
				],
				[
					14,
					6
				],
				[
					13,
					8
				],
				[
					13,
					9
				],
				[
					12,
					11
				],
				[
					11,
					12
				],
				[
					11,
					13
				],
				[
					11,
					14
				],
				[
					12,
					14
				],
				[
					13,
					15
				],
				[
					14,
					16
				],
				[
					16,
					17
				],
				[
					17,
					18
				],
				[
					19,
					20
				],
				[
					20,
					21
				],
				[
					22,
					23
				],
				[
					23,
					24
				],
				[
					25,
					26
				],
				[
					26,
					28
				],
				[
					27,
					30
				],
				[
					28,
					31
				],
				[
					28,
					33
				],
				[
					28,
					34
				],
				[
					27,
					36
				],
				[
					27,
					37
				],
				[
					25,
					38
				],
				[
					23,
					39
				],
				[
					22,
					40
				],
				[
					20,
					41
				],
				[
					18,
					41
				],
				[
					15,
					41
				],
				[
					11,
					41
				],
				[
					9,
					40
				],
				[
					5,
					40
				],
				[
					1,
					39
				],
				[
					-1,
					38
				],
				[
					-4,
					37
				],
				[
					-8,
					36
				],
				[
					-9,
					35
				],
				[
					-9,
					35
				]
			],
			"pressures": [
				0.1962890625,
				0.20703125,
				0.263671875,
				0.353515625,
				0.3779296875,
				0.447265625,
				0.46484375,
				0.4658203125,
				0.46875,
				0.4697265625,
				0.4716796875,
				0.4736328125,
				0.474609375,
				0.4755859375,
				0.4775390625,
				0.478515625,
				0.4853515625,
				0.4951171875,
				0.4990234375,
				0.5087890625,
				0.5185546875,
				0.5263671875,
				0.5302734375,
				0.53125,
				0.533203125,
				0.5341796875,
				0.5341796875,
				0.533203125,
				0.533203125,
				0.533203125,
				0.533203125,
				0.5341796875,
				0.5341796875,
				0.5361328125,
				0.5361328125,
				0.5361328125,
				0.537109375,
				0.544921875,
				0.55078125,
				0.5673828125,
				0.591796875,
				0.6220703125,
				0.638671875,
				0.669921875,
				0.685546875,
				0.7138671875,
				0.7265625,
				0.7490234375,
				0.7666015625,
				0.7734375,
				0.783203125,
				0.787109375,
				0.7900390625,
				0.791015625,
				0.791015625,
				0.787109375,
				0.7734375,
				0.759765625,
				0.716796875,
				0.6396484375,
				0.583984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-9,
				35
			]
		},
		{
			"id": "mX4qOogzJptFFpGaYWsvQ",
			"type": "freedraw",
			"x": 7550.164003459888,
			"y": 1194.803113553115,
			"width": 28,
			"height": 39,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 521851455,
			"version": 51,
			"versionNonce": 1968634321,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					0,
					4
				],
				[
					-2,
					8
				],
				[
					-4,
					12
				],
				[
					-5,
					14
				],
				[
					-7,
					19
				],
				[
					-8,
					21
				],
				[
					-9,
					24
				],
				[
					-10,
					28
				],
				[
					-11,
					29
				],
				[
					-11,
					32
				],
				[
					-11,
					33
				],
				[
					-10,
					34
				],
				[
					-9,
					36
				],
				[
					-7,
					37
				],
				[
					-6,
					37
				],
				[
					-4,
					38
				],
				[
					-1,
					38
				],
				[
					2,
					38
				],
				[
					4,
					38
				],
				[
					7,
					38
				],
				[
					9,
					38
				],
				[
					12,
					38
				],
				[
					13,
					37
				],
				[
					15,
					37
				],
				[
					17,
					37
				],
				[
					17,
					37
				]
			],
			"pressures": [
				0.1669921875,
				0.1689453125,
				0.1875,
				0.21875,
				0.2509765625,
				0.271484375,
				0.31640625,
				0.36328125,
				0.408203125,
				0.427734375,
				0.458984375,
				0.4716796875,
				0.4892578125,
				0.5009765625,
				0.505859375,
				0.5146484375,
				0.51953125,
				0.5234375,
				0.5322265625,
				0.5361328125,
				0.5380859375,
				0.5419921875,
				0.54296875,
				0.54296875,
				0.5439453125,
				0.544921875,
				0.537109375,
				0.51171875,
				0.490234375,
				0.4306640625,
				0.34765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				17,
				37
			]
		},
		{
			"id": "NxmLytk78dR-lJnKjpjhV",
			"type": "freedraw",
			"x": 7563.164003459888,
			"y": 1217.803113553115,
			"width": 3,
			"height": 38,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 37270321,
			"version": 36,
			"versionNonce": 1795884991,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-2,
					1
				],
				[
					-2,
					3
				],
				[
					-2,
					6
				],
				[
					-2,
					7
				],
				[
					-2,
					8
				],
				[
					-2,
					12
				],
				[
					-2,
					14
				],
				[
					-2,
					17
				],
				[
					-3,
					22
				],
				[
					-3,
					26
				],
				[
					-3,
					28
				],
				[
					-2,
					32
				],
				[
					-2,
					33
				],
				[
					-2,
					38
				],
				[
					-2,
					38
				]
			],
			"pressures": [
				0.193359375,
				0.19921875,
				0.3466796875,
				0.4384765625,
				0.515625,
				0.53515625,
				0.5537109375,
				0.5810546875,
				0.591796875,
				0.6083984375,
				0.6171875,
				0.6201171875,
				0.6201171875,
				0.6103515625,
				0.5966796875,
				0.5,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-2,
				38
			]
		},
		{
			"id": "wyg0nQx4VFl8dT8-yCgeY",
			"type": "freedraw",
			"x": 7772.164003459888,
			"y": 1205.803113553115,
			"width": 4,
			"height": 49,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 950682641,
			"version": 38,
			"versionNonce": 1691981745,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					2,
					0
				],
				[
					3,
					1
				],
				[
					3,
					2
				],
				[
					3,
					5
				],
				[
					3,
					7
				],
				[
					4,
					12
				],
				[
					4,
					17
				],
				[
					3,
					23
				],
				[
					3,
					26
				],
				[
					3,
					32
				],
				[
					3,
					38
				],
				[
					3,
					41
				],
				[
					3,
					46
				],
				[
					3,
					48
				],
				[
					3,
					48
				]
			],
			"pressures": [
				0.1865234375,
				0.19140625,
				0.203125,
				0.27734375,
				0.4150390625,
				0.4716796875,
				0.5205078125,
				0.5556640625,
				0.568359375,
				0.5869140625,
				0.5986328125,
				0.60546875,
				0.607421875,
				0.6083984375,
				0.6015625,
				0.5927734375,
				0.5546875,
				0.521484375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3,
				48
			]
		},
		{
			"id": "bCj9DqB7uwL0TVp9V5IC7",
			"type": "freedraw",
			"x": 7998.164003459888,
			"y": 1191.803113553115,
			"width": 26,
			"height": 48,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 384144081,
			"version": 64,
			"versionNonce": 552712159,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-2
				],
				[
					2,
					-3
				],
				[
					2,
					-4
				],
				[
					3,
					-4
				],
				[
					5,
					-6
				],
				[
					6,
					-7
				],
				[
					8,
					-8
				],
				[
					10,
					-8
				],
				[
					12,
					-8
				],
				[
					13,
					-7
				],
				[
					14,
					-6
				],
				[
					15,
					-5
				],
				[
					16,
					-2
				],
				[
					17,
					1
				],
				[
					17,
					2
				],
				[
					16,
					6
				],
				[
					15,
					10
				],
				[
					13,
					15
				],
				[
					12,
					17
				],
				[
					10,
					21
				],
				[
					7,
					25
				],
				[
					6,
					27
				],
				[
					4,
					30
				],
				[
					2,
					33
				],
				[
					1,
					35
				],
				[
					0,
					36
				],
				[
					-1,
					38
				],
				[
					-1,
					39
				],
				[
					0,
					39
				],
				[
					1,
					40
				],
				[
					2,
					40
				],
				[
					3,
					40
				],
				[
					6,
					40
				],
				[
					7,
					40
				],
				[
					10,
					40
				],
				[
					12,
					40
				],
				[
					15,
					40
				],
				[
					17,
					40
				],
				[
					20,
					40
				],
				[
					22,
					40
				],
				[
					24,
					40
				],
				[
					25,
					40
				],
				[
					25,
					40
				]
			],
			"pressures": [
				0.15234375,
				0.16015625,
				0.1806640625,
				0.1884765625,
				0.2001953125,
				0.2080078125,
				0.2470703125,
				0.2763671875,
				0.3076171875,
				0.3623046875,
				0.3984375,
				0.41796875,
				0.458984375,
				0.4794921875,
				0.529296875,
				0.5537109375,
				0.5625,
				0.57421875,
				0.578125,
				0.5791015625,
				0.578125,
				0.578125,
				0.5771484375,
				0.5771484375,
				0.576171875,
				0.576171875,
				0.5771484375,
				0.5771484375,
				0.576171875,
				0.5771484375,
				0.5771484375,
				0.5771484375,
				0.578125,
				0.5771484375,
				0.5771484375,
				0.5771484375,
				0.578125,
				0.580078125,
				0.5830078125,
				0.583984375,
				0.578125,
				0.5498046875,
				0.5224609375,
				0.482421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				25,
				40
			]
		},
		{
			"id": "2Z1q5dl394j8d9lhYjCOj",
			"type": "freedraw",
			"x": 6812.164003459888,
			"y": 1286.803113553115,
			"width": 1474,
			"height": 38,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1949865457,
			"version": 114,
			"versionNonce": 1779267985,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					2,
					0
				],
				[
					5,
					1
				],
				[
					6,
					1
				],
				[
					11,
					2
				],
				[
					16,
					4
				],
				[
					20,
					4
				],
				[
					27,
					5
				],
				[
					35,
					6
				],
				[
					44,
					7
				],
				[
					49,
					7
				],
				[
					60,
					7
				],
				[
					72,
					7
				],
				[
					85,
					8
				],
				[
					92,
					8
				],
				[
					106,
					7
				],
				[
					122,
					7
				],
				[
					131,
					7
				],
				[
					148,
					7
				],
				[
					167,
					6
				],
				[
					186,
					5
				],
				[
					196,
					5
				],
				[
					217,
					4
				],
				[
					239,
					2
				],
				[
					262,
					1
				],
				[
					273,
					0
				],
				[
					297,
					-1
				],
				[
					321,
					-3
				],
				[
					333,
					-3
				],
				[
					358,
					-5
				],
				[
					384,
					-6
				],
				[
					397,
					-7
				],
				[
					424,
					-8
				],
				[
					451,
					-10
				],
				[
					479,
					-11
				],
				[
					493,
					-11
				],
				[
					520,
					-12
				],
				[
					547,
					-13
				],
				[
					561,
					-13
				],
				[
					587,
					-14
				],
				[
					615,
					-15
				],
				[
					628,
					-15
				],
				[
					641,
					-15
				],
				[
					669,
					-16
				],
				[
					696,
					-17
				],
				[
					725,
					-18
				],
				[
					739,
					-18
				],
				[
					768,
					-19
				],
				[
					798,
					-20
				],
				[
					828,
					-22
				],
				[
					842,
					-23
				],
				[
					871,
					-24
				],
				[
					899,
					-26
				],
				[
					913,
					-26
				],
				[
					941,
					-28
				],
				[
					968,
					-29
				],
				[
					995,
					-29
				],
				[
					1008,
					-30
				],
				[
					1035,
					-30
				],
				[
					1061,
					-30
				],
				[
					1087,
					-30
				],
				[
					1100,
					-30
				],
				[
					1125,
					-29
				],
				[
					1149,
					-29
				],
				[
					1173,
					-28
				],
				[
					1185,
					-28
				],
				[
					1208,
					-27
				],
				[
					1231,
					-26
				],
				[
					1252,
					-26
				],
				[
					1263,
					-26
				],
				[
					1284,
					-26
				],
				[
					1304,
					-26
				],
				[
					1313,
					-26
				],
				[
					1332,
					-26
				],
				[
					1349,
					-26
				],
				[
					1365,
					-26
				],
				[
					1373,
					-26
				],
				[
					1388,
					-26
				],
				[
					1402,
					-26
				],
				[
					1415,
					-26
				],
				[
					1420,
					-26
				],
				[
					1431,
					-26
				],
				[
					1441,
					-25
				],
				[
					1450,
					-25
				],
				[
					1453,
					-25
				],
				[
					1460,
					-24
				],
				[
					1465,
					-23
				],
				[
					1469,
					-23
				],
				[
					1470,
					-22
				],
				[
					1473,
					-22
				],
				[
					1473,
					-21
				],
				[
					1473,
					-21
				]
			],
			"pressures": [
				0.1787109375,
				0.189453125,
				0.22265625,
				0.244140625,
				0.2578125,
				0.28515625,
				0.298828125,
				0.328125,
				0.3583984375,
				0.37109375,
				0.390625,
				0.408203125,
				0.4208984375,
				0.4248046875,
				0.4287109375,
				0.4306640625,
				0.435546875,
				0.4375,
				0.4453125,
				0.453125,
				0.45703125,
				0.462890625,
				0.4677734375,
				0.4716796875,
				0.47265625,
				0.474609375,
				0.4755859375,
				0.4765625,
				0.4765625,
				0.4775390625,
				0.4814453125,
				0.4853515625,
				0.494140625,
				0.5048828125,
				0.5107421875,
				0.5224609375,
				0.5341796875,
				0.5439453125,
				0.5478515625,
				0.55859375,
				0.568359375,
				0.5712890625,
				0.5771484375,
				0.5810546875,
				0.5830078125,
				0.583984375,
				0.587890625,
				0.5908203125,
				0.5927734375,
				0.5927734375,
				0.5947265625,
				0.5966796875,
				0.5986328125,
				0.6005859375,
				0.6044921875,
				0.607421875,
				0.6083984375,
				0.6103515625,
				0.611328125,
				0.6123046875,
				0.6142578125,
				0.619140625,
				0.625,
				0.6318359375,
				0.634765625,
				0.6396484375,
				0.6435546875,
				0.646484375,
				0.6474609375,
				0.650390625,
				0.6533203125,
				0.65625,
				0.6572265625,
				0.6591796875,
				0.6611328125,
				0.6611328125,
				0.662109375,
				0.6630859375,
				0.6640625,
				0.6640625,
				0.6650390625,
				0.6650390625,
				0.666015625,
				0.666015625,
				0.6669921875,
				0.6669921875,
				0.6640625,
				0.6611328125,
				0.65234375,
				0.63671875,
				0.61328125,
				0.5986328125,
				0.5517578125,
				0.517578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1473,
				-21
			]
		},
		{
			"id": "EhLLwYypugwLpbyud4HxT",
			"type": "freedraw",
			"x": 6715.164003459888,
			"y": 1130.803113553115,
			"width": 37,
			"height": 38,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1876758513,
			"version": 53,
			"versionNonce": 583885823,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					2,
					0
				],
				[
					2,
					1
				],
				[
					3,
					1
				],
				[
					3,
					2
				],
				[
					3,
					3
				],
				[
					2,
					4
				],
				[
					2,
					5
				],
				[
					1,
					6
				],
				[
					0,
					7
				],
				[
					-2,
					8
				],
				[
					-4,
					10
				],
				[
					-6,
					11
				],
				[
					-9,
					12
				],
				[
					-13,
					13
				],
				[
					-16,
					14
				],
				[
					-18,
					14
				],
				[
					-22,
					15
				],
				[
					-26,
					16
				],
				[
					-29,
					16
				],
				[
					-30,
					16
				],
				[
					-32,
					16
				],
				[
					-33,
					17
				],
				[
					-34,
					18
				],
				[
					-34,
					20
				],
				[
					-34,
					22
				],
				[
					-33,
					23
				],
				[
					-33,
					26
				],
				[
					-32,
					30
				],
				[
					-32,
					34
				],
				[
					-31,
					36
				],
				[
					-31,
					38
				],
				[
					-31,
					38
				]
			],
			"pressures": [
				0.1787109375,
				0.1806640625,
				0.2099609375,
				0.2587890625,
				0.2763671875,
				0.3720703125,
				0.431640625,
				0.48046875,
				0.4990234375,
				0.5263671875,
				0.5341796875,
				0.5478515625,
				0.552734375,
				0.5537109375,
				0.5546875,
				0.5537109375,
				0.552734375,
				0.552734375,
				0.5517578125,
				0.55078125,
				0.55078125,
				0.5498046875,
				0.548828125,
				0.546875,
				0.5458984375,
				0.5458984375,
				0.546875,
				0.546875,
				0.5478515625,
				0.5478515625,
				0.5400390625,
				0.529296875,
				0.5146484375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-31,
				38
			]
		},
		{
			"id": "pJZzjElFNzhXCHQBs5aRJ",
			"type": "freedraw",
			"x": 6687.164003459888,
			"y": 1159.803113553115,
			"width": 20,
			"height": 3,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 657078719,
			"version": 36,
			"versionNonce": 1177165681,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-1
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-3,
					-3
				],
				[
					-4,
					-3
				],
				[
					-3,
					-3
				],
				[
					-3,
					-2
				],
				[
					-1,
					-2
				],
				[
					0,
					-1
				],
				[
					2,
					-1
				],
				[
					3,
					-1
				],
				[
					6,
					0
				],
				[
					10,
					0
				],
				[
					12,
					0
				],
				[
					16,
					-1
				],
				[
					16,
					-1
				]
			],
			"pressures": [
				0.3330078125,
				0.3623046875,
				0.400390625,
				0.4375,
				0.5458984375,
				0.5849609375,
				0.640625,
				0.6474609375,
				0.65234375,
				0.654296875,
				0.654296875,
				0.6513671875,
				0.6337890625,
				0.58984375,
				0.5556640625,
				0.4638671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				16,
				-1
			]
		},
		{
			"id": "M8fO0uVTp2Kgk9aOA7cLe",
			"type": "freedraw",
			"x": 6729.164003459888,
			"y": 1155.803113553115,
			"width": 5,
			"height": 31,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 582720223,
			"version": 32,
			"versionNonce": 547261471,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					-1,
					3
				],
				[
					-1,
					4
				],
				[
					-1,
					6
				],
				[
					-2,
					9
				],
				[
					-2,
					13
				],
				[
					-3,
					16
				],
				[
					-4,
					21
				],
				[
					-4,
					23
				],
				[
					-5,
					29
				],
				[
					-5,
					31
				],
				[
					-5,
					31
				]
			],
			"pressures": [
				0.2275390625,
				0.240234375,
				0.27734375,
				0.2919921875,
				0.3310546875,
				0.361328125,
				0.3955078125,
				0.4091796875,
				0.4267578125,
				0.431640625,
				0.4189453125,
				0.3984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-5,
				31
			]
		},
		{
			"id": "E491w5BhF8cmXdyxwdnjd",
			"type": "freedraw",
			"x": 6761.164003459888,
			"y": 1147.803113553115,
			"width": 18,
			"height": 27,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1646222271,
			"version": 48,
			"versionNonce": 662112593,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					2,
					1
				],
				[
					2,
					2
				],
				[
					3,
					3
				],
				[
					2,
					3
				],
				[
					1,
					3
				],
				[
					0,
					3
				],
				[
					-1,
					3
				],
				[
					-2,
					3
				],
				[
					-5,
					3
				],
				[
					-6,
					3
				],
				[
					-8,
					3
				],
				[
					-10,
					3
				],
				[
					-11,
					3
				],
				[
					-12,
					3
				],
				[
					-14,
					4
				],
				[
					-14,
					5
				],
				[
					-15,
					5
				],
				[
					-15,
					7
				],
				[
					-15,
					8
				],
				[
					-15,
					10
				],
				[
					-14,
					14
				],
				[
					-14,
					18
				],
				[
					-14,
					20
				],
				[
					-14,
					25
				],
				[
					-14,
					27
				],
				[
					-14,
					27
				]
			],
			"pressures": [
				0.1552734375,
				0.162109375,
				0.1767578125,
				0.212890625,
				0.27734375,
				0.4267578125,
				0.58203125,
				0.587890625,
				0.587890625,
				0.5869140625,
				0.5869140625,
				0.5869140625,
				0.5869140625,
				0.5869140625,
				0.5869140625,
				0.587890625,
				0.587890625,
				0.5888671875,
				0.5888671875,
				0.5888671875,
				0.5888671875,
				0.5888671875,
				0.5888671875,
				0.583984375,
				0.568359375,
				0.5537109375,
				0.5029296875,
				0.4638671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-14,
				27
			]
		},
		{
			"id": "hVGPbOfWptnW4oHBAHKcU",
			"type": "freedraw",
			"x": 6744.164003459888,
			"y": 1178.803113553115,
			"width": 55,
			"height": 33,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1585777055,
			"version": 74,
			"versionNonce": 1985327167,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					0,
					-4
				],
				[
					1,
					-5
				],
				[
					2,
					-5
				],
				[
					3,
					-5
				],
				[
					4,
					-4
				],
				[
					6,
					-4
				],
				[
					9,
					-4
				],
				[
					11,
					-4
				],
				[
					14,
					-4
				],
				[
					18,
					-5
				],
				[
					22,
					-7
				],
				[
					24,
					-7
				],
				[
					28,
					-9
				],
				[
					31,
					-11
				],
				[
					33,
					-13
				],
				[
					34,
					-14
				],
				[
					36,
					-16
				],
				[
					37,
					-17
				],
				[
					37,
					-19
				],
				[
					36,
					-20
				],
				[
					35,
					-20
				],
				[
					34,
					-20
				],
				[
					33,
					-19
				],
				[
					32,
					-17
				],
				[
					30,
					-15
				],
				[
					30,
					-13
				],
				[
					29,
					-10
				],
				[
					29,
					-8
				],
				[
					29,
					-4
				],
				[
					29,
					-2
				],
				[
					31,
					2
				],
				[
					32,
					6
				],
				[
					35,
					9
				],
				[
					37,
					11
				],
				[
					40,
					12
				],
				[
					44,
					13
				],
				[
					47,
					12
				],
				[
					49,
					11
				],
				[
					52,
					9
				],
				[
					54,
					7
				],
				[
					54,
					5
				],
				[
					55,
					3
				],
				[
					55,
					0
				],
				[
					53,
					-3
				],
				[
					52,
					-4
				],
				[
					50,
					-7
				],
				[
					46,
					-10
				],
				[
					43,
					-12
				],
				[
					41,
					-13
				],
				[
					37,
					-15
				],
				[
					35,
					-16
				],
				[
					35,
					-16
				]
			],
			"pressures": [
				0.2041015625,
				0.212890625,
				0.2451171875,
				0.2861328125,
				0.3779296875,
				0.435546875,
				0.4619140625,
				0.4765625,
				0.482421875,
				0.484375,
				0.484375,
				0.4814453125,
				0.4716796875,
				0.4521484375,
				0.4384765625,
				0.404296875,
				0.3642578125,
				0.326171875,
				0.3095703125,
				0.283203125,
				0.275390625,
				0.26953125,
				0.291015625,
				0.3203125,
				0.3388671875,
				0.3759765625,
				0.4140625,
				0.4501953125,
				0.4658203125,
				0.4921875,
				0.5029296875,
				0.5244140625,
				0.533203125,
				0.5478515625,
				0.55859375,
				0.5673828125,
				0.5703125,
				0.578125,
				0.5888671875,
				0.6025390625,
				0.611328125,
				0.62890625,
				0.6484375,
				0.6572265625,
				0.673828125,
				0.6845703125,
				0.6904296875,
				0.69140625,
				0.6904296875,
				0.6796875,
				0.65625,
				0.6357421875,
				0.5703125,
				0.5224609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				35,
				-16
			]
		},
		{
			"id": "1wNeHvWPFgGouYwj7oipM",
			"type": "freedraw",
			"x": 6855.164003459888,
			"y": 1323.803113553115,
			"width": 5,
			"height": 35,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1670042911,
			"version": 38,
			"versionNonce": 122402609,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					0,
					1
				],
				[
					0,
					3
				],
				[
					-1,
					5
				],
				[
					-1,
					8
				],
				[
					-2,
					10
				],
				[
					-2,
					13
				],
				[
					-3,
					15
				],
				[
					-3,
					19
				],
				[
					-4,
					23
				],
				[
					-4,
					27
				],
				[
					-4,
					29
				],
				[
					-4,
					33
				],
				[
					-4,
					34
				],
				[
					-4,
					34
				]
			],
			"pressures": [
				0.177734375,
				0.2138671875,
				0.2470703125,
				0.41015625,
				0.482421875,
				0.4990234375,
				0.5244140625,
				0.5390625,
				0.546875,
				0.5498046875,
				0.552734375,
				0.5546875,
				0.5556640625,
				0.5439453125,
				0.5146484375,
				0.4912109375,
				0.4248046875,
				0.3818359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4,
				34
			]
		},
		{
			"id": "QQhDCwd3WktSqBr_1J5H8",
			"type": "freedraw",
			"x": 6824.164003459888,
			"y": 1620.803113553115,
			"width": 13,
			"height": 17,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 370854495,
			"version": 33,
			"versionNonce": 768823391,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					1,
					2
				],
				[
					2,
					2
				],
				[
					2,
					3
				],
				[
					3,
					3
				],
				[
					3,
					4
				],
				[
					4,
					5
				],
				[
					6,
					7
				],
				[
					8,
					9
				],
				[
					9,
					11
				],
				[
					11,
					14
				],
				[
					13,
					17
				],
				[
					13,
					17
				]
			],
			"pressures": [
				0.095703125,
				0.1083984375,
				0.12109375,
				0.1484375,
				0.1572265625,
				0.1728515625,
				0.1806640625,
				0.1962890625,
				0.224609375,
				0.2392578125,
				0.2431640625,
				0.2451171875,
				0.2333984375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				13,
				17
			]
		},
		{
			"id": "4dIoBj8_aSwr_J1ktFSXF",
			"type": "freedraw",
			"x": 6846.164003459888,
			"y": 1622.803113553115,
			"width": 27,
			"height": 19,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1217961009,
			"version": 32,
			"versionNonce": 1208985873,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-3,
					0
				],
				[
					-5,
					0
				],
				[
					-6,
					1
				],
				[
					-8,
					2
				],
				[
					-9,
					2
				],
				[
					-10,
					3
				],
				[
					-14,
					6
				],
				[
					-19,
					10
				],
				[
					-21,
					12
				],
				[
					-25,
					17
				],
				[
					-27,
					19
				],
				[
					-27,
					19
				]
			],
			"pressures": [
				0.1796875,
				0.1923828125,
				0.2177734375,
				0.2255859375,
				0.2353515625,
				0.240234375,
				0.2451171875,
				0.267578125,
				0.2802734375,
				0.28125,
				0.2744140625,
				0.2626953125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-27,
				19
			]
		},
		{
			"id": "8Dg8xHvITCWSHgUL4ypXB",
			"type": "freedraw",
			"x": 7071.164003459888,
			"y": 1332.803113553115,
			"width": 4,
			"height": 35,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 763129169,
			"version": 48,
			"versionNonce": 1088941183,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626171,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					0,
					-4
				],
				[
					1,
					-4
				],
				[
					1,
					-5
				],
				[
					1,
					-6
				],
				[
					1,
					-7
				],
				[
					1,
					-8
				],
				[
					2,
					-9
				],
				[
					2,
					-10
				],
				[
					1,
					-10
				],
				[
					1,
					-9
				],
				[
					1,
					-8
				],
				[
					1,
					-7
				],
				[
					1,
					-4
				],
				[
					1,
					-3
				],
				[
					1,
					0
				],
				[
					0,
					2
				],
				[
					0,
					6
				],
				[
					0,
					10
				],
				[
					-1,
					14
				],
				[
					-1,
					16
				],
				[
					-1,
					19
				],
				[
					-2,
					22
				],
				[
					-2,
					23
				],
				[
					-1,
					25
				],
				[
					-1,
					25
				]
			],
			"pressures": [
				0.1298828125,
				0.1337890625,
				0.1494140625,
				0.181640625,
				0.2177734375,
				0.2333984375,
				0.248046875,
				0.271484375,
				0.28125,
				0.298828125,
				0.3095703125,
				0.3203125,
				0.1787109375,
				0.498046875,
				0.521484375,
				0.529296875,
				0.5498046875,
				0.5546875,
				0.5654296875,
				0.5703125,
				0.5771484375,
				0.58203125,
				0.583984375,
				0.583984375,
				0.576171875,
				0.546875,
				0.521484375,
				0.4462890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1,
				25
			]
		},
		{
			"id": "wz-FJse-IB0T2myo-SOZb",
			"type": "freedraw",
			"x": 7056.164003459888,
			"y": 1396.803113553115,
			"width": 27,
			"height": 49,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 610173297,
			"version": 61,
			"versionNonce": 322592497,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					3,
					-1
				],
				[
					4,
					-2
				],
				[
					5,
					-2
				],
				[
					7,
					-2
				],
				[
					9,
					-1
				],
				[
					10,
					-1
				],
				[
					12,
					1
				],
				[
					13,
					3
				],
				[
					15,
					5
				],
				[
					15,
					7
				],
				[
					15,
					10
				],
				[
					15,
					14
				],
				[
					15,
					16
				],
				[
					14,
					20
				],
				[
					14,
					22
				],
				[
					12,
					26
				],
				[
					11,
					30
				],
				[
					8,
					33
				],
				[
					7,
					34
				],
				[
					5,
					37
				],
				[
					3,
					39
				],
				[
					1,
					41
				],
				[
					-1,
					42
				],
				[
					-2,
					43
				],
				[
					-1,
					43
				],
				[
					0,
					43
				],
				[
					2,
					44
				],
				[
					4,
					44
				],
				[
					6,
					44
				],
				[
					10,
					45
				],
				[
					13,
					45
				],
				[
					15,
					45
				],
				[
					18,
					46
				],
				[
					21,
					46
				],
				[
					23,
					46
				],
				[
					24,
					47
				],
				[
					25,
					47
				],
				[
					25,
					47
				]
			],
			"pressures": [
				0.2900390625,
				0.291015625,
				0.3642578125,
				0.408203125,
				0.4423828125,
				0.4521484375,
				0.4697265625,
				0.4833984375,
				0.5048828125,
				0.51171875,
				0.5224609375,
				0.5302734375,
				0.533203125,
				0.533203125,
				0.533203125,
				0.53125,
				0.53125,
				0.53125,
				0.5322265625,
				0.533203125,
				0.533203125,
				0.533203125,
				0.5341796875,
				0.533203125,
				0.5322265625,
				0.53125,
				0.53125,
				0.529296875,
				0.529296875,
				0.537109375,
				0.5556640625,
				0.5625,
				0.576171875,
				0.5888671875,
				0.595703125,
				0.5966796875,
				0.591796875,
				0.5712890625,
				0.525390625,
				0.4912109375,
				0.447265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				25,
				47
			]
		},
		{
			"id": "MqpPxNdjB8LqeoJUpjHJw",
			"type": "freedraw",
			"x": 7058.164003459888,
			"y": 1606.803113553115,
			"width": 5,
			"height": 24,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1856452799,
			"version": 35,
			"versionNonce": 458491039,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					0,
					3
				],
				[
					0,
					4
				],
				[
					1,
					6
				],
				[
					1,
					7
				],
				[
					1,
					10
				],
				[
					2,
					12
				],
				[
					2,
					15
				],
				[
					3,
					17
				],
				[
					3,
					19
				],
				[
					4,
					22
				],
				[
					5,
					23
				],
				[
					5,
					24
				],
				[
					5,
					24
				]
			],
			"pressures": [
				0.2958984375,
				0.2978515625,
				0.3349609375,
				0.357421875,
				0.3857421875,
				0.4140625,
				0.4267578125,
				0.4501953125,
				0.466796875,
				0.4775390625,
				0.4814453125,
				0.482421875,
				0.4658203125,
				0.447265625,
				0.419921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				5,
				24
			]
		},
		{
			"id": "7HsYTHgVSzjbPzXMkr6kK",
			"type": "freedraw",
			"x": 7065.164003459888,
			"y": 1612.803113553115,
			"width": 18,
			"height": 20,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 362706353,
			"version": 30,
			"versionNonce": 2001950929,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					1
				],
				[
					-4,
					3
				],
				[
					-5,
					4
				],
				[
					-6,
					6
				],
				[
					-8,
					7
				],
				[
					-9,
					9
				],
				[
					-12,
					13
				],
				[
					-15,
					16
				],
				[
					-18,
					20
				],
				[
					-18,
					20
				]
			],
			"pressures": [
				0.328125,
				0.3359375,
				0.3564453125,
				0.36328125,
				0.3740234375,
				0.380859375,
				0.3876953125,
				0.3984375,
				0.3955078125,
				0.3662109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-18,
				20
			]
		},
		{
			"id": "5E8SkZRSu0R9JISVYPfvp",
			"type": "freedraw",
			"x": 7307.164003459888,
			"y": 1315.803113553115,
			"width": 2,
			"height": 28,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 239123697,
			"version": 31,
			"versionNonce": 1556617407,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					1,
					5
				],
				[
					1,
					6
				],
				[
					1,
					9
				],
				[
					0,
					13
				],
				[
					0,
					18
				],
				[
					-1,
					22
				],
				[
					-1,
					28
				],
				[
					-1,
					28
				]
			],
			"pressures": [
				0.2802734375,
				0.2861328125,
				0.3779296875,
				0.451171875,
				0.49609375,
				0.505859375,
				0.5166015625,
				0.5185546875,
				0.5048828125,
				0.4638671875,
				0.3955078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-1,
				28
			]
		},
		{
			"id": "Sn96JwUguGqbpHzYdTyPp",
			"type": "freedraw",
			"x": 7299.164003459888,
			"y": 1391.803113553115,
			"width": 16,
			"height": 38,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1771225951,
			"version": 56,
			"versionNonce": 1173493425,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					-1
				],
				[
					0,
					-3
				],
				[
					1,
					-3
				],
				[
					1,
					-4
				],
				[
					3,
					-5
				],
				[
					5,
					-6
				],
				[
					6,
					-7
				],
				[
					8,
					-7
				],
				[
					10,
					-7
				],
				[
					11,
					-7
				],
				[
					12,
					-6
				],
				[
					13,
					-5
				],
				[
					13,
					-2
				],
				[
					13,
					-1
				],
				[
					13,
					2
				],
				[
					11,
					6
				],
				[
					10,
					10
				],
				[
					9,
					11
				],
				[
					8,
					15
				],
				[
					6,
					18
				],
				[
					5,
					21
				],
				[
					4,
					22
				],
				[
					3,
					24
				],
				[
					3,
					25
				],
				[
					3,
					27
				],
				[
					3,
					28
				],
				[
					4,
					29
				],
				[
					6,
					29
				],
				[
					7,
					30
				],
				[
					9,
					30
				],
				[
					11,
					30
				],
				[
					12,
					31
				],
				[
					14,
					31
				],
				[
					15,
					31
				],
				[
					15,
					31
				]
			],
			"pressures": [
				0.201171875,
				0.23828125,
				0.2861328125,
				0.3291015625,
				0.337890625,
				0.34765625,
				0.361328125,
				0.3701171875,
				0.3740234375,
				0.3828125,
				0.3916015625,
				0.39453125,
				0.3994140625,
				0.40625,
				0.4111328125,
				0.4111328125,
				0.408203125,
				0.4091796875,
				0.4130859375,
				0.4140625,
				0.4140625,
				0.41796875,
				0.4228515625,
				0.423828125,
				0.4248046875,
				0.42578125,
				0.4384765625,
				0.4482421875,
				0.46484375,
				0.4755859375,
				0.4794921875,
				0.484375,
				0.4853515625,
				0.484375,
				0.466796875,
				0.4443359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15,
				31
			]
		},
		{
			"id": "rc4DSP27MOoM3tlaZ5mn5",
			"type": "freedraw",
			"x": 7302.164003459888,
			"y": 1486.803113553115,
			"width": 27,
			"height": 42,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 713657791,
			"version": 71,
			"versionNonce": 1524934879,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-2
				],
				[
					-1,
					-3
				],
				[
					-1,
					-4
				],
				[
					-1,
					-5
				],
				[
					0,
					-6
				],
				[
					1,
					-7
				],
				[
					3,
					-8
				],
				[
					4,
					-8
				],
				[
					6,
					-9
				],
				[
					7,
					-9
				],
				[
					9,
					-9
				],
				[
					10,
					-9
				],
				[
					11,
					-8
				],
				[
					12,
					-8
				],
				[
					13,
					-7
				],
				[
					13,
					-6
				],
				[
					13,
					-5
				],
				[
					13,
					-3
				],
				[
					13,
					-2
				],
				[
					13,
					-1
				],
				[
					12,
					1
				],
				[
					11,
					3
				],
				[
					11,
					4
				],
				[
					10,
					5
				],
				[
					10,
					6
				],
				[
					10,
					7
				],
				[
					11,
					8
				],
				[
					11,
					9
				],
				[
					12,
					11
				],
				[
					13,
					12
				],
				[
					15,
					13
				],
				[
					16,
					14
				],
				[
					18,
					16
				],
				[
					20,
					17
				],
				[
					22,
					18
				],
				[
					23,
					19
				],
				[
					24,
					21
				],
				[
					25,
					22
				],
				[
					26,
					24
				],
				[
					26,
					26
				],
				[
					26,
					27
				],
				[
					26,
					28
				],
				[
					25,
					29
				],
				[
					24,
					30
				],
				[
					22,
					31
				],
				[
					21,
					31
				],
				[
					19,
					32
				],
				[
					17,
					33
				],
				[
					15,
					33
				],
				[
					15,
					33
				]
			],
			"pressures": [
				0.267578125,
				0.2734375,
				0.3251953125,
				0.3515625,
				0.376953125,
				0.412109375,
				0.4287109375,
				0.443359375,
				0.462890625,
				0.4658203125,
				0.4697265625,
				0.4716796875,
				0.474609375,
				0.4755859375,
				0.4794921875,
				0.4814453125,
				0.48828125,
				0.4912109375,
				0.4921875,
				0.4970703125,
				0.498046875,
				0.4970703125,
				0.4970703125,
				0.5009765625,
				0.5009765625,
				0.5,
				0.5,
				0.4990234375,
				0.498046875,
				0.4951171875,
				0.494140625,
				0.4931640625,
				0.4931640625,
				0.4931640625,
				0.4931640625,
				0.4990234375,
				0.5126953125,
				0.5224609375,
				0.5478515625,
				0.5771484375,
				0.609375,
				0.6474609375,
				0.6640625,
				0.669921875,
				0.6787109375,
				0.6826171875,
				0.6826171875,
				0.6787109375,
				0.6572265625,
				0.6015625,
				0.5556640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15,
				33
			]
		},
		{
			"id": "-40gy9htJ3DQi3W7tVkHM",
			"type": "freedraw",
			"x": 7302.164003459888,
			"y": 1612.803113553115,
			"width": 8,
			"height": 21,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 434353777,
			"version": 33,
			"versionNonce": 834541713,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					1,
					3
				],
				[
					1,
					4
				],
				[
					2,
					6
				],
				[
					3,
					7
				],
				[
					4,
					9
				],
				[
					5,
					12
				],
				[
					6,
					15
				],
				[
					7,
					17
				],
				[
					8,
					20
				],
				[
					8,
					21
				],
				[
					8,
					21
				]
			],
			"pressures": [
				0.310546875,
				0.3154296875,
				0.359375,
				0.390625,
				0.421875,
				0.44921875,
				0.4599609375,
				0.4755859375,
				0.486328125,
				0.4912109375,
				0.486328125,
				0.451171875,
				0.4189453125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				8,
				21
			]
		},
		{
			"id": "9V4IsJ0KbApE_ihyAbkf3",
			"type": "freedraw",
			"x": 7320.164003459888,
			"y": 1611.803113553115,
			"width": 22,
			"height": 22,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1731702271,
			"version": 29,
			"versionNonce": 1664759039,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-3,
					2
				],
				[
					-6,
					5
				],
				[
					-8,
					7
				],
				[
					-9,
					8
				],
				[
					-11,
					11
				],
				[
					-14,
					13
				],
				[
					-18,
					17
				],
				[
					-22,
					22
				],
				[
					-22,
					22
				]
			],
			"pressures": [
				0.279296875,
				0.279296875,
				0.294921875,
				0.3017578125,
				0.3037109375,
				0.306640625,
				0.3095703125,
				0.3076171875,
				0.2841796875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-22,
				22
			]
		},
		{
			"id": "yAvjT42nhYS1XadFCEJQP",
			"type": "freedraw",
			"x": 7480.164003459888,
			"y": 1316.803113553115,
			"width": 2,
			"height": 39,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 654951519,
			"version": 41,
			"versionNonce": 1324926993,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					1,
					-4
				],
				[
					2,
					-4
				],
				[
					2,
					-5
				],
				[
					2,
					-6
				],
				[
					2,
					-5
				],
				[
					2,
					-4
				],
				[
					2,
					-3
				],
				[
					2,
					-2
				],
				[
					2,
					1
				],
				[
					2,
					2
				],
				[
					2,
					5
				],
				[
					2,
					9
				],
				[
					2,
					12
				],
				[
					2,
					14
				],
				[
					2,
					18
				],
				[
					2,
					21
				],
				[
					2,
					24
				],
				[
					2,
					26
				],
				[
					2,
					28
				],
				[
					2,
					30
				],
				[
					2,
					31
				],
				[
					2,
					32
				],
				[
					2,
					33
				],
				[
					2,
					33
				]
			],
			"pressures": [
				0.0712890625,
				0.0869140625,
				0.1318359375,
				0.169921875,
				0.2392578125,
				0.26953125,
				0.2998046875,
				0.4501953125,
				0.4931640625,
				0.5302734375,
				0.5419921875,
				0.5498046875,
				0.5556640625,
				0.5576171875,
				0.5625,
				0.56640625,
				0.5673828125,
				0.568359375,
				0.5703125,
				0.5703125,
				0.5693359375,
				0.5673828125,
				0.5576171875,
				0.537109375,
				0.5205078125,
				0.4697265625,
				0.3955078125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2,
				33
			]
		},
		{
			"id": "-wuRocQsgXPhzVWQFqPTh",
			"type": "freedraw",
			"x": 7485.164003459888,
			"y": 1297.803113553115,
			"width": 47,
			"height": 61,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 194483025,
			"version": 60,
			"versionNonce": 1340358015,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-3
				],
				[
					-2,
					-4
				],
				[
					-3,
					-4
				],
				[
					-4,
					-5
				],
				[
					-7,
					-5
				],
				[
					-8,
					-5
				],
				[
					-11,
					-5
				],
				[
					-14,
					-4
				],
				[
					-16,
					-3
				],
				[
					-19,
					0
				],
				[
					-23,
					3
				],
				[
					-26,
					8
				],
				[
					-28,
					11
				],
				[
					-30,
					17
				],
				[
					-32,
					23
				],
				[
					-32,
					29
				],
				[
					-32,
					32
				],
				[
					-31,
					38
				],
				[
					-30,
					43
				],
				[
					-28,
					45
				],
				[
					-25,
					49
				],
				[
					-22,
					52
				],
				[
					-20,
					53
				],
				[
					-16,
					55
				],
				[
					-12,
					56
				],
				[
					-10,
					56
				],
				[
					-5,
					54
				],
				[
					-1,
					52
				],
				[
					4,
					50
				],
				[
					6,
					48
				],
				[
					9,
					44
				],
				[
					12,
					40
				],
				[
					14,
					35
				],
				[
					14,
					33
				],
				[
					15,
					28
				],
				[
					14,
					24
				],
				[
					13,
					20
				],
				[
					12,
					18
				],
				[
					10,
					15
				],
				[
					8,
					13
				],
				[
					5,
					11
				],
				[
					2,
					9
				],
				[
					1,
					8
				],
				[
					-2,
					8
				],
				[
					-2,
					8
				]
			],
			"pressures": [
				0.1484375,
				0.1513671875,
				0.1748046875,
				0.2109375,
				0.2470703125,
				0.2919921875,
				0.3369140625,
				0.3603515625,
				0.404296875,
				0.4375,
				0.44921875,
				0.474609375,
				0.49609375,
				0.51171875,
				0.5185546875,
				0.5302734375,
				0.5390625,
				0.5439453125,
				0.5458984375,
				0.5498046875,
				0.5517578125,
				0.5517578125,
				0.5546875,
				0.55859375,
				0.55859375,
				0.5595703125,
				0.5615234375,
				0.5615234375,
				0.5625,
				0.5625,
				0.564453125,
				0.564453125,
				0.56640625,
				0.568359375,
				0.5693359375,
				0.5693359375,
				0.5703125,
				0.572265625,
				0.572265625,
				0.5712890625,
				0.56640625,
				0.560546875,
				0.53515625,
				0.486328125,
				0.4521484375,
				0.369140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-2,
				8
			]
		},
		{
			"id": "CunJFvOpjyvY8dP3Gn14e",
			"type": "freedraw",
			"x": 7563.164003459888,
			"y": 1305.803113553115,
			"width": 17,
			"height": 28,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 7024721,
			"version": 41,
			"versionNonce": 1034395121,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					2
				],
				[
					0,
					4
				],
				[
					-1,
					5
				],
				[
					-2,
					8
				],
				[
					-3,
					11
				],
				[
					-4,
					13
				],
				[
					-5,
					15
				],
				[
					-6,
					17
				],
				[
					-6,
					19
				],
				[
					-7,
					21
				],
				[
					-7,
					22
				],
				[
					-7,
					23
				],
				[
					-6,
					24
				],
				[
					-5,
					25
				],
				[
					-3,
					26
				],
				[
					-1,
					26
				],
				[
					1,
					27
				],
				[
					2,
					27
				],
				[
					3,
					27
				],
				[
					5,
					27
				],
				[
					7,
					27
				],
				[
					9,
					26
				],
				[
					10,
					26
				],
				[
					10,
					26
				]
			],
			"pressures": [
				0.10546875,
				0.1064453125,
				0.109375,
				0.2626953125,
				0.357421875,
				0.4111328125,
				0.4296875,
				0.45703125,
				0.4755859375,
				0.486328125,
				0.490234375,
				0.4951171875,
				0.4970703125,
				0.4990234375,
				0.5,
				0.501953125,
				0.5048828125,
				0.509765625,
				0.517578125,
				0.521484375,
				0.5234375,
				0.5244140625,
				0.5244140625,
				0.5205078125,
				0.50390625,
				0.4658203125,
				0.3994140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				26
			]
		},
		{
			"id": "0YX-Dk4ETzBPCLi1qvYdM",
			"type": "freedraw",
			"x": 7571.164003459888,
			"y": 1317.803113553115,
			"width": 6,
			"height": 36,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1158156031,
			"version": 32,
			"versionNonce": 144586143,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					1
				],
				[
					-2,
					2
				],
				[
					-2,
					3
				],
				[
					-3,
					5
				],
				[
					-4,
					6
				],
				[
					-4,
					8
				],
				[
					-5,
					11
				],
				[
					-5,
					13
				],
				[
					-6,
					16
				],
				[
					-6,
					19
				],
				[
					-6,
					21
				],
				[
					-6,
					24
				],
				[
					-5,
					28
				],
				[
					-5,
					31
				],
				[
					-4,
					32
				],
				[
					-4,
					35
				],
				[
					-3,
					36
				],
				[
					-3,
					36
				]
			],
			"pressures": [
				0.208984375,
				0.2294921875,
				0.287109375,
				0.318359375,
				0.3857421875,
				0.412109375,
				0.45703125,
				0.4892578125,
				0.5009765625,
				0.517578125,
				0.5263671875,
				0.529296875,
				0.5302734375,
				0.521484375,
				0.498046875,
				0.478515625,
				0.42578125,
				0.390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-3,
				36
			]
		},
		{
			"id": "ZkQ57x8_yXxAPtON-7scl",
			"type": "freedraw",
			"x": 7554.164003459888,
			"y": 1405.803113553115,
			"width": 18,
			"height": 37,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 259206207,
			"version": 52,
			"versionNonce": 2143336401,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					0,
					-4
				],
				[
					0,
					-5
				],
				[
					0,
					-6
				],
				[
					0,
					-7
				],
				[
					1,
					-8
				],
				[
					2,
					-10
				],
				[
					3,
					-10
				],
				[
					5,
					-11
				],
				[
					7,
					-12
				],
				[
					9,
					-12
				],
				[
					11,
					-11
				],
				[
					12,
					-10
				],
				[
					12,
					-7
				],
				[
					12,
					-6
				],
				[
					11,
					-2
				],
				[
					10,
					2
				],
				[
					9,
					4
				],
				[
					8,
					8
				],
				[
					6,
					12
				],
				[
					5,
					15
				],
				[
					4,
					17
				],
				[
					3,
					19
				],
				[
					3,
					20
				],
				[
					3,
					22
				],
				[
					4,
					23
				],
				[
					5,
					23
				],
				[
					6,
					24
				],
				[
					8,
					24
				],
				[
					10,
					24
				],
				[
					12,
					24
				],
				[
					13,
					25
				],
				[
					15,
					25
				],
				[
					17,
					25
				],
				[
					18,
					25
				],
				[
					18,
					25
				]
			],
			"pressures": [
				0.2607421875,
				0.265625,
				0.298828125,
				0.3447265625,
				0.384765625,
				0.412109375,
				0.42578125,
				0.42578125,
				0.42578125,
				0.4296875,
				0.4306640625,
				0.4326171875,
				0.435546875,
				0.4375,
				0.4375,
				0.439453125,
				0.4482421875,
				0.4541015625,
				0.470703125,
				0.4912109375,
				0.5029296875,
				0.5283203125,
				0.55078125,
				0.56640625,
				0.572265625,
				0.58203125,
				0.5849609375,
				0.5888671875,
				0.5927734375,
				0.5947265625,
				0.59765625,
				0.599609375,
				0.6015625,
				0.599609375,
				0.5947265625,
				0.576171875,
				0.5302734375,
				0.49609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				18,
				25
			]
		},
		{
			"id": "sX7mI6uBb3HE5-waijvEU",
			"type": "freedraw",
			"x": 7552.164003459888,
			"y": 1505.803113553115,
			"width": 36,
			"height": 40,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 346470079,
			"version": 76,
			"versionNonce": 1671702975,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-2
				],
				[
					1,
					-4
				],
				[
					1,
					-5
				],
				[
					1,
					-6
				],
				[
					1,
					-8
				],
				[
					2,
					-10
				],
				[
					2,
					-11
				],
				[
					2,
					-13
				],
				[
					2,
					-15
				],
				[
					2,
					-16
				],
				[
					3,
					-17
				],
				[
					3,
					-18
				],
				[
					4,
					-18
				],
				[
					6,
					-18
				],
				[
					8,
					-17
				],
				[
					9,
					-17
				],
				[
					10,
					-17
				],
				[
					12,
					-16
				],
				[
					13,
					-16
				],
				[
					14,
					-15
				],
				[
					15,
					-14
				],
				[
					16,
					-12
				],
				[
					17,
					-12
				],
				[
					17,
					-10
				],
				[
					18,
					-9
				],
				[
					18,
					-8
				],
				[
					18,
					-7
				],
				[
					17,
					-6
				],
				[
					17,
					-4
				],
				[
					16,
					-3
				],
				[
					16,
					-2
				],
				[
					16,
					-1
				],
				[
					16,
					0
				],
				[
					16,
					1
				],
				[
					16,
					2
				],
				[
					17,
					3
				],
				[
					18,
					5
				],
				[
					19,
					6
				],
				[
					20,
					7
				],
				[
					22,
					9
				],
				[
					23,
					11
				],
				[
					25,
					13
				],
				[
					27,
					15
				],
				[
					27,
					17
				],
				[
					28,
					18
				],
				[
					28,
					19
				],
				[
					28,
					20
				],
				[
					27,
					21
				],
				[
					26,
					22
				],
				[
					25,
					22
				],
				[
					24,
					22
				],
				[
					22,
					22
				],
				[
					19,
					22
				],
				[
					18,
					22
				],
				[
					14,
					21
				],
				[
					11,
					20
				],
				[
					8,
					19
				],
				[
					6,
					19
				],
				[
					2,
					17
				],
				[
					-4,
					16
				],
				[
					-8,
					15
				],
				[
					-8,
					15
				]
			],
			"pressures": [
				0.24609375,
				0.26171875,
				0.287109375,
				0.3046875,
				0.314453125,
				0.3515625,
				0.38671875,
				0.40234375,
				0.4306640625,
				0.4521484375,
				0.4599609375,
				0.47265625,
				0.4912109375,
				0.494140625,
				0.5048828125,
				0.5078125,
				0.5078125,
				0.5087890625,
				0.51171875,
				0.51171875,
				0.5126953125,
				0.515625,
				0.5205078125,
				0.521484375,
				0.525390625,
				0.5283203125,
				0.529296875,
				0.5302734375,
				0.5302734375,
				0.5302734375,
				0.5322265625,
				0.533203125,
				0.5341796875,
				0.53515625,
				0.53515625,
				0.53515625,
				0.5341796875,
				0.53515625,
				0.537109375,
				0.5458984375,
				0.5615234375,
				0.583984375,
				0.61328125,
				0.662109375,
				0.6923828125,
				0.7197265625,
				0.7314453125,
				0.7529296875,
				0.771484375,
				0.7890625,
				0.79296875,
				0.7998046875,
				0.802734375,
				0.8017578125,
				0.80078125,
				0.79296875,
				0.7783203125,
				0.7529296875,
				0.7353515625,
				0.6904296875,
				0.58984375,
				0.4921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-8,
				15
			]
		},
		{
			"id": "K0OMZual9Tw7ju3yUj2Yg",
			"type": "freedraw",
			"x": 7554.164003459888,
			"y": 1612.803113553115,
			"width": 8,
			"height": 16,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1356397247,
			"version": 27,
			"versionNonce": 928748977,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626172,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					2,
					2
				],
				[
					2,
					3
				],
				[
					3,
					5
				],
				[
					3,
					6
				],
				[
					4,
					8
				],
				[
					5,
					9
				],
				[
					6,
					12
				],
				[
					7,
					14
				],
				[
					8,
					16
				],
				[
					8,
					16
				]
			],
			"pressures": [
				0.185546875,
				0.2353515625,
				0.2490234375,
				0.28125,
				0.296875,
				0.3115234375,
				0.3359375,
				0.34375,
				0.353515625,
				0.3544921875,
				0.3515625,
				0.3349609375,
				0.296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				8,
				16
			]
		},
		{
			"id": "h56NZidA6VMuYeKm8921F",
			"type": "freedraw",
			"x": 7572.164003459888,
			"y": 1612.803113553115,
			"width": 23,
			"height": 20,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 909686225,
			"version": 26,
			"versionNonce": 773233119,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-3,
					1
				],
				[
					-4,
					2
				],
				[
					-5,
					3
				],
				[
					-7,
					4
				],
				[
					-8,
					5
				],
				[
					-12,
					9
				],
				[
					-13,
					10
				],
				[
					-17,
					14
				],
				[
					-19,
					16
				],
				[
					-23,
					20
				],
				[
					-23,
					20
				]
			],
			"pressures": [
				0.20703125,
				0.2080078125,
				0.240234375,
				0.2509765625,
				0.2724609375,
				0.2861328125,
				0.298828125,
				0.3193359375,
				0.328125,
				0.33984375,
				0.3388671875,
				0.3125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-23,
				20
			]
		},
		{
			"id": "UNrm2kd5k18BwNhFbsfjJ",
			"type": "freedraw",
			"x": 7771.164003459888,
			"y": 1298.803113553115,
			"width": 19,
			"height": 26,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 849844977,
			"version": 43,
			"versionNonce": 1470085009,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-2
				],
				[
					3,
					-2
				],
				[
					3,
					-3
				],
				[
					4,
					-3
				],
				[
					4,
					-2
				],
				[
					3,
					0
				],
				[
					3,
					2
				],
				[
					2,
					4
				],
				[
					2,
					5
				],
				[
					1,
					8
				],
				[
					0,
					11
				],
				[
					0,
					14
				],
				[
					-1,
					15
				],
				[
					-1,
					17
				],
				[
					-1,
					19
				],
				[
					0,
					20
				],
				[
					0,
					21
				],
				[
					2,
					22
				],
				[
					3,
					23
				],
				[
					4,
					23
				],
				[
					6,
					23
				],
				[
					8,
					23
				],
				[
					10,
					23
				],
				[
					11,
					23
				],
				[
					14,
					22
				],
				[
					16,
					21
				],
				[
					18,
					20
				],
				[
					18,
					20
				]
			],
			"pressures": [
				0.109375,
				0.1162109375,
				0.1259765625,
				0.1630859375,
				0.208984375,
				0.228515625,
				0.2880859375,
				0.365234375,
				0.3955078125,
				0.4208984375,
				0.4326171875,
				0.453125,
				0.46484375,
				0.47265625,
				0.4765625,
				0.4814453125,
				0.484375,
				0.486328125,
				0.4892578125,
				0.4931640625,
				0.498046875,
				0.5,
				0.5048828125,
				0.5087890625,
				0.5126953125,
				0.5126953125,
				0.5087890625,
				0.4853515625,
				0.43359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				18,
				20
			]
		},
		{
			"id": "hATPAgtf3Q2ljD8XVJoaX",
			"type": "freedraw",
			"x": 7794.164003459888,
			"y": 1297.803113553115,
			"width": 12,
			"height": 50,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1938592383,
			"version": 33,
			"versionNonce": 1023804927,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					1
				],
				[
					-3,
					2
				],
				[
					-3,
					3
				],
				[
					-4,
					3
				],
				[
					-5,
					5
				],
				[
					-6,
					6
				],
				[
					-7,
					8
				],
				[
					-9,
					11
				],
				[
					-10,
					15
				],
				[
					-11,
					17
				],
				[
					-11,
					21
				],
				[
					-12,
					23
				],
				[
					-12,
					28
				],
				[
					-12,
					33
				],
				[
					-12,
					39
				],
				[
					-12,
					41
				],
				[
					-11,
					46
				],
				[
					-10,
					50
				],
				[
					-10,
					50
				]
			],
			"pressures": [
				0.2119140625,
				0.20703125,
				0.2216796875,
				0.23828125,
				0.2470703125,
				0.2626953125,
				0.27734375,
				0.3115234375,
				0.3466796875,
				0.3740234375,
				0.3837890625,
				0.4013671875,
				0.408203125,
				0.4140625,
				0.4091796875,
				0.3935546875,
				0.380859375,
				0.341796875,
				0.28515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-10,
				50
			]
		},
		{
			"id": "26yBTjIYeqlI0C5CHBknx",
			"type": "freedraw",
			"x": 7733.164003459888,
			"y": 1394.803113553115,
			"width": 15,
			"height": 27,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1909303007,
			"version": 54,
			"versionNonce": 1869803039,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					3,
					-2
				],
				[
					4,
					-2
				],
				[
					5,
					-2
				],
				[
					6,
					-2
				],
				[
					7,
					-2
				],
				[
					8,
					-1
				],
				[
					9,
					0
				],
				[
					10,
					1
				],
				[
					10,
					2
				],
				[
					10,
					4
				],
				[
					10,
					6
				],
				[
					9,
					8
				],
				[
					9,
					10
				],
				[
					7,
					13
				],
				[
					6,
					15
				],
				[
					5,
					17
				],
				[
					3,
					19
				],
				[
					1,
					20
				],
				[
					0,
					22
				],
				[
					-1,
					23
				],
				[
					-2,
					23
				],
				[
					-3,
					24
				],
				[
					-4,
					24
				],
				[
					-4,
					25
				],
				[
					-5,
					25
				],
				[
					-4,
					24
				],
				[
					-3,
					24
				],
				[
					-2,
					24
				],
				[
					-1,
					24
				],
				[
					0,
					24
				],
				[
					1,
					24
				],
				[
					2,
					24
				],
				[
					3,
					24
				],
				[
					4,
					24
				],
				[
					5,
					24
				],
				[
					6,
					24
				],
				[
					7,
					23
				],
				[
					7,
					23
				]
			],
			"pressures": [
				0.091796875,
				0.177734375,
				0.2080078125,
				0.2275390625,
				0.24609375,
				0.2626953125,
				0.271484375,
				0.2919921875,
				0.3037109375,
				0.3232421875,
				0.3388671875,
				0.3525390625,
				0.357421875,
				0.361328125,
				0.3603515625,
				0.3603515625,
				0.361328125,
				0.3623046875,
				0.36328125,
				0.36328125,
				0.365234375,
				0.3662109375,
				0.3671875,
				0.3671875,
				0.3671875,
				0.3681640625,
				0.3681640625,
				0.3671875,
				0.365234375,
				0.3681640625,
				0.3701171875,
				0.376953125,
				0.3828125,
				0.38671875,
				0.388671875,
				0.392578125,
				0.388671875,
				0.3720703125,
				0.3408203125,
				0.298828125,
				0.2470703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7,
				23
			]
		},
		{
			"id": "OdNJ5MXxjDD_D8lKZQi3_",
			"type": "freedraw",
			"x": 7737.164003459888,
			"y": 1373.803113553115,
			"width": 36,
			"height": 59,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1030864369,
			"version": 50,
			"versionNonce": 672253777,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					0
				],
				[
					-4,
					1
				],
				[
					-5,
					1
				],
				[
					-6,
					2
				],
				[
					-7,
					2
				],
				[
					-9,
					4
				],
				[
					-10,
					5
				],
				[
					-12,
					8
				],
				[
					-14,
					9
				],
				[
					-16,
					13
				],
				[
					-17,
					17
				],
				[
					-18,
					23
				],
				[
					-18,
					26
				],
				[
					-18,
					32
				],
				[
					-17,
					38
				],
				[
					-15,
					43
				],
				[
					-14,
					46
				],
				[
					-7,
					56
				],
				[
					-4,
					58
				],
				[
					0,
					59
				],
				[
					4,
					58
				],
				[
					6,
					58
				],
				[
					9,
					56
				],
				[
					12,
					54
				],
				[
					14,
					53
				],
				[
					17,
					47
				],
				[
					18,
					39
				],
				[
					18,
					37
				],
				[
					16,
					33
				],
				[
					15,
					29
				],
				[
					13,
					26
				],
				[
					12,
					25
				],
				[
					10,
					23
				],
				[
					8,
					21
				],
				[
					6,
					19
				],
				[
					5,
					19
				],
				[
					5,
					19
				]
			],
			"pressures": [
				0.150390625,
				0.154296875,
				0.173828125,
				0.1884765625,
				0.1953125,
				0.2109375,
				0.2353515625,
				0.251953125,
				0.2900390625,
				0.310546875,
				0.3525390625,
				0.3916015625,
				0.42578125,
				0.4404296875,
				0.4599609375,
				0.4697265625,
				0.4755859375,
				0.4765625,
				0.478515625,
				0.48046875,
				0.484375,
				0.4921875,
				0.4970703125,
				0.5078125,
				0.517578125,
				0.5234375,
				0.537109375,
				0.5400390625,
				0.5400390625,
				0.5400390625,
				0.5380859375,
				0.53125,
				0.5234375,
				0.5126953125,
				0.4775390625,
				0.416015625,
				0.375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				5,
				19
			]
		},
		{
			"id": "yJ1QGA1jaAwOGmoEw6hTR",
			"type": "freedraw",
			"x": 7799.164003459888,
			"y": 1391.803113553115,
			"width": 1,
			"height": 33,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 82741247,
			"version": 28,
			"versionNonce": 1884148287,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					1,
					2
				],
				[
					1,
					4
				],
				[
					0,
					7
				],
				[
					0,
					11
				],
				[
					0,
					13
				],
				[
					0,
					17
				],
				[
					0,
					21
				],
				[
					0,
					23
				],
				[
					0,
					27
				],
				[
					1,
					30
				],
				[
					1,
					32
				],
				[
					1,
					32
				]
			],
			"pressures": [
				0.2900390625,
				0.2939453125,
				0.34765625,
				0.373046875,
				0.390625,
				0.423828125,
				0.453125,
				0.4736328125,
				0.48046875,
				0.4892578125,
				0.490234375,
				0.484375,
				0.4619140625,
				0.4150390625,
				0.380859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1,
				32
			]
		},
		{
			"id": "jHKv0amhYSm7RJ6ujbqED",
			"type": "freedraw",
			"x": 7790.164003459888,
			"y": 1470.803113553115,
			"width": 26,
			"height": 39,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 428210801,
			"version": 74,
			"versionNonce": 1641985329,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					-1
				],
				[
					-2,
					-1
				],
				[
					-3,
					-1
				],
				[
					-4,
					-2
				],
				[
					-3,
					-3
				],
				[
					-2,
					-3
				],
				[
					-1,
					-4
				],
				[
					0,
					-4
				],
				[
					2,
					-4
				],
				[
					4,
					-5
				],
				[
					5,
					-5
				],
				[
					8,
					-5
				],
				[
					10,
					-4
				],
				[
					12,
					-4
				],
				[
					13,
					-4
				],
				[
					14,
					-3
				],
				[
					15,
					-1
				],
				[
					15,
					0
				],
				[
					15,
					1
				],
				[
					14,
					3
				],
				[
					14,
					4
				],
				[
					13,
					6
				],
				[
					12,
					7
				],
				[
					11,
					8
				],
				[
					10,
					10
				],
				[
					9,
					11
				],
				[
					8,
					12
				],
				[
					7,
					12
				],
				[
					7,
					13
				],
				[
					8,
					13
				],
				[
					8,
					14
				],
				[
					9,
					15
				],
				[
					10,
					16
				],
				[
					12,
					17
				],
				[
					12,
					18
				],
				[
					14,
					19
				],
				[
					15,
					20
				],
				[
					17,
					22
				],
				[
					19,
					24
				],
				[
					20,
					25
				],
				[
					20,
					26
				],
				[
					21,
					27
				],
				[
					22,
					28
				],
				[
					22,
					29
				],
				[
					22,
					30
				],
				[
					21,
					31
				],
				[
					20,
					32
				],
				[
					19,
					33
				],
				[
					18,
					33
				],
				[
					17,
					34
				],
				[
					15,
					34
				],
				[
					13,
					34
				],
				[
					12,
					34
				],
				[
					10,
					34
				],
				[
					7,
					34
				],
				[
					5,
					33
				],
				[
					4,
					33
				],
				[
					1,
					32
				],
				[
					0,
					32
				],
				[
					0,
					32
				]
			],
			"pressures": [
				0.263671875,
				0.28125,
				0.314453125,
				0.3271484375,
				0.3701171875,
				0.41796875,
				0.4287109375,
				0.4306640625,
				0.431640625,
				0.431640625,
				0.4326171875,
				0.43359375,
				0.43359375,
				0.4345703125,
				0.4365234375,
				0.44140625,
				0.443359375,
				0.4482421875,
				0.453125,
				0.4580078125,
				0.4599609375,
				0.4638671875,
				0.46875,
				0.4755859375,
				0.4794921875,
				0.486328125,
				0.4921875,
				0.4970703125,
				0.498046875,
				0.4970703125,
				0.4970703125,
				0.4970703125,
				0.49609375,
				0.4951171875,
				0.494140625,
				0.4931640625,
				0.4931640625,
				0.4931640625,
				0.4951171875,
				0.5029296875,
				0.5234375,
				0.5439453125,
				0.5556640625,
				0.5830078125,
				0.609375,
				0.62109375,
				0.64453125,
				0.6650390625,
				0.681640625,
				0.6953125,
				0.7001953125,
				0.708984375,
				0.71484375,
				0.7177734375,
				0.71875,
				0.7177734375,
				0.7119140625,
				0.6943359375,
				0.6767578125,
				0.6171875,
				0.5703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				32
			]
		},
		{
			"id": "Q7LQHF7OUvDXDBRWVDY8n",
			"type": "freedraw",
			"x": 7779.164003459888,
			"y": 1583.803113553115,
			"width": 14,
			"height": 19,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 248552703,
			"version": 26,
			"versionNonce": 947335775,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					1,
					1
				],
				[
					2,
					2
				],
				[
					3,
					3
				],
				[
					4,
					5
				],
				[
					6,
					6
				],
				[
					7,
					7
				],
				[
					8,
					10
				],
				[
					10,
					12
				],
				[
					12,
					15
				],
				[
					13,
					16
				],
				[
					14,
					19
				],
				[
					14,
					19
				]
			],
			"pressures": [
				0.08203125,
				0.41796875,
				0.4482421875,
				0.478515625,
				0.498046875,
				0.5126953125,
				0.525390625,
				0.5302734375,
				0.5361328125,
				0.5380859375,
				0.529296875,
				0.515625,
				0.4619140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				14,
				19
			]
		},
		{
			"id": "50YFue3u8ti_YIDjFgCQ2",
			"type": "freedraw",
			"x": 7805.164003459888,
			"y": 1574.803113553115,
			"width": 29,
			"height": 32,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2064568209,
			"version": 26,
			"versionNonce": 328394513,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-3,
					0
				],
				[
					-4,
					0
				],
				[
					-6,
					1
				],
				[
					-7,
					2
				],
				[
					-10,
					4
				],
				[
					-14,
					8
				],
				[
					-17,
					13
				],
				[
					-19,
					16
				],
				[
					-23,
					22
				],
				[
					-25,
					25
				],
				[
					-29,
					32
				],
				[
					-29,
					32
				]
			],
			"pressures": [
				0.2890625,
				0.2939453125,
				0.3369140625,
				0.3515625,
				0.3916015625,
				0.40234375,
				0.4443359375,
				0.4794921875,
				0.50390625,
				0.51171875,
				0.515625,
				0.51171875,
				0.47265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-29,
				32
			]
		},
		{
			"id": "UtAxbbST0Kfy9ntrVU50r",
			"type": "freedraw",
			"x": 8004.164003459888,
			"y": 1303.803113553115,
			"width": 18,
			"height": 24,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1006301919,
			"version": 38,
			"versionNonce": 1354731135,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					-1,
					4
				],
				[
					-1,
					5
				],
				[
					-2,
					7
				],
				[
					-3,
					10
				],
				[
					-3,
					12
				],
				[
					-3,
					13
				],
				[
					-4,
					15
				],
				[
					-4,
					17
				],
				[
					-4,
					18
				],
				[
					-4,
					20
				],
				[
					-3,
					21
				],
				[
					-3,
					22
				],
				[
					-2,
					23
				],
				[
					-1,
					23
				],
				[
					0,
					24
				],
				[
					2,
					24
				],
				[
					3,
					23
				],
				[
					4,
					23
				],
				[
					6,
					23
				],
				[
					8,
					22
				],
				[
					10,
					20
				],
				[
					11,
					19
				],
				[
					14,
					17
				],
				[
					14,
					17
				]
			],
			"pressures": [
				0.1279296875,
				0.421875,
				0.49609375,
				0.5068359375,
				0.52734375,
				0.552734375,
				0.5595703125,
				0.5654296875,
				0.57421875,
				0.5791015625,
				0.580078125,
				0.5830078125,
				0.583984375,
				0.5859375,
				0.587890625,
				0.58984375,
				0.59375,
				0.5966796875,
				0.5986328125,
				0.599609375,
				0.59765625,
				0.583984375,
				0.548828125,
				0.51953125,
				0.4345703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				14,
				17
			]
		},
		{
			"id": "WID9MOq97Z4k_Ht8wSQL_",
			"type": "freedraw",
			"x": 8022.164003459888,
			"y": 1301.803113553115,
			"width": 9,
			"height": 39,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 170226417,
			"version": 30,
			"versionNonce": 1202052337,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					1
				],
				[
					-2,
					2
				],
				[
					-2,
					3
				],
				[
					-3,
					4
				],
				[
					-4,
					6
				],
				[
					-4,
					7
				],
				[
					-6,
					10
				],
				[
					-7,
					14
				],
				[
					-8,
					18
				],
				[
					-8,
					19
				],
				[
					-9,
					24
				],
				[
					-9,
					26
				],
				[
					-9,
					30
				],
				[
					-9,
					32
				],
				[
					-9,
					35
				],
				[
					-9,
					39
				],
				[
					-9,
					39
				]
			],
			"pressures": [
				0.236328125,
				0.2568359375,
				0.2822265625,
				0.3046875,
				0.3173828125,
				0.3544921875,
				0.3779296875,
				0.423828125,
				0.4638671875,
				0.494140625,
				0.505859375,
				0.5205078125,
				0.525390625,
				0.51953125,
				0.5078125,
				0.466796875,
				0.4033203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-9,
				39
			]
		},
		{
			"id": "MS9PyFhR1qgaw2FwH2Dxy",
			"type": "freedraw",
			"x": 8016.164003459888,
			"y": 1378.803113553115,
			"width": 6,
			"height": 31,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1089477375,
			"version": 27,
			"versionNonce": 1302271697,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					1,
					2
				],
				[
					1,
					3
				],
				[
					2,
					5
				],
				[
					2,
					6
				],
				[
					3,
					8
				],
				[
					4,
					11
				],
				[
					5,
					15
				],
				[
					5,
					16
				],
				[
					5,
					20
				],
				[
					5,
					23
				],
				[
					6,
					27
				],
				[
					6,
					29
				],
				[
					6,
					31
				],
				[
					6,
					31
				]
			],
			"pressures": [
				0.1005859375,
				0.3017578125,
				0.37890625,
				0.4267578125,
				0.4658203125,
				0.48046875,
				0.5029296875,
				0.5166015625,
				0.5244140625,
				0.52734375,
				0.5234375,
				0.5029296875,
				0.4599609375,
				0.4287109375,
				0.390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				31
			]
		},
		{
			"id": "UHIBa3sRpsYEQbBi5FMIR",
			"type": "freedraw",
			"x": 8012.164003459888,
			"y": 1471.803113553115,
			"width": 25,
			"height": 38,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2041452401,
			"version": 66,
			"versionNonce": 815741631,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-2,
					0
				],
				[
					-2,
					-1
				],
				[
					-1,
					-1
				],
				[
					0,
					-2
				],
				[
					1,
					-2
				],
				[
					2,
					-3
				],
				[
					3,
					-3
				],
				[
					5,
					-4
				],
				[
					7,
					-5
				],
				[
					9,
					-5
				],
				[
					10,
					-5
				],
				[
					12,
					-5
				],
				[
					14,
					-5
				],
				[
					15,
					-4
				],
				[
					16,
					-3
				],
				[
					17,
					-1
				],
				[
					17,
					2
				],
				[
					16,
					5
				],
				[
					16,
					6
				],
				[
					15,
					10
				],
				[
					13,
					14
				],
				[
					11,
					17
				],
				[
					11,
					18
				],
				[
					9,
					21
				],
				[
					8,
					23
				],
				[
					6,
					24
				],
				[
					6,
					25
				],
				[
					4,
					25
				],
				[
					3,
					26
				],
				[
					2,
					26
				],
				[
					1,
					26
				],
				[
					0,
					25
				],
				[
					-1,
					25
				],
				[
					0,
					25
				],
				[
					1,
					25
				],
				[
					2,
					25
				],
				[
					3,
					25
				],
				[
					4,
					25
				],
				[
					6,
					26
				],
				[
					8,
					26
				],
				[
					10,
					27
				],
				[
					11,
					27
				],
				[
					13,
					28
				],
				[
					15,
					29
				],
				[
					16,
					29
				],
				[
					18,
					30
				],
				[
					19,
					31
				],
				[
					21,
					31
				],
				[
					21,
					32
				],
				[
					22,
					32
				],
				[
					23,
					32
				],
				[
					23,
					33
				],
				[
					23,
					33
				]
			],
			"pressures": [
				0.0302734375,
				0.0615234375,
				0.240234375,
				0.3515625,
				0.3603515625,
				0.37890625,
				0.3974609375,
				0.412109375,
				0.4189453125,
				0.427734375,
				0.435546875,
				0.44140625,
				0.4443359375,
				0.4521484375,
				0.4599609375,
				0.4677734375,
				0.4755859375,
				0.4833984375,
				0.48828125,
				0.4912109375,
				0.4912109375,
				0.4921875,
				0.4921875,
				0.4921875,
				0.4921875,
				0.4921875,
				0.4931640625,
				0.494140625,
				0.494140625,
				0.4951171875,
				0.4951171875,
				0.49609375,
				0.4951171875,
				0.4951171875,
				0.494140625,
				0.48828125,
				0.48828125,
				0.48828125,
				0.48828125,
				0.48828125,
				0.4892578125,
				0.4892578125,
				0.490234375,
				0.490234375,
				0.4912109375,
				0.4921875,
				0.4921875,
				0.4912109375,
				0.486328125,
				0.470703125,
				0.45703125,
				0.439453125,
				0.3681640625,
				0.302734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				23,
				33
			]
		},
		{
			"id": "ZLh4HRm9d_fPu0y5A6G9n",
			"type": "freedraw",
			"x": 7945.164003459888,
			"y": 1478.803113553115,
			"width": 19,
			"height": 30,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 923570737,
			"version": 61,
			"versionNonce": 730303199,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					-1
				],
				[
					-1,
					-2
				],
				[
					-1,
					-3
				],
				[
					0,
					-3
				],
				[
					1,
					-4
				],
				[
					2,
					-4
				],
				[
					4,
					-5
				],
				[
					6,
					-6
				],
				[
					8,
					-6
				],
				[
					10,
					-6
				],
				[
					11,
					-5
				],
				[
					12,
					-4
				],
				[
					12,
					-3
				],
				[
					12,
					-1
				],
				[
					12,
					0
				],
				[
					12,
					1
				],
				[
					11,
					3
				],
				[
					11,
					4
				],
				[
					10,
					5
				],
				[
					10,
					6
				],
				[
					9,
					7
				],
				[
					9,
					8
				],
				[
					8,
					8
				],
				[
					8,
					9
				],
				[
					9,
					9
				],
				[
					9,
					10
				],
				[
					10,
					10
				],
				[
					11,
					11
				],
				[
					11,
					12
				],
				[
					12,
					13
				],
				[
					14,
					13
				],
				[
					15,
					14
				],
				[
					16,
					15
				],
				[
					16,
					16
				],
				[
					16,
					17
				],
				[
					16,
					18
				],
				[
					15,
					19
				],
				[
					14,
					20
				],
				[
					13,
					21
				],
				[
					11,
					22
				],
				[
					10,
					22
				],
				[
					8,
					23
				],
				[
					6,
					24
				],
				[
					4,
					24
				],
				[
					2,
					24
				],
				[
					0,
					24
				],
				[
					-1,
					24
				],
				[
					-3,
					24
				],
				[
					-3,
					24
				]
			],
			"pressures": [
				0.322265625,
				0.2919921875,
				0.2900390625,
				0.2958984375,
				0.30078125,
				0.306640625,
				0.322265625,
				0.328125,
				0.3369140625,
				0.3427734375,
				0.3505859375,
				0.3662109375,
				0.3818359375,
				0.4013671875,
				0.41796875,
				0.4326171875,
				0.4345703125,
				0.4365234375,
				0.4375,
				0.4384765625,
				0.4384765625,
				0.4404296875,
				0.4423828125,
				0.44140625,
				0.44140625,
				0.4423828125,
				0.44140625,
				0.44140625,
				0.4404296875,
				0.439453125,
				0.4375,
				0.435546875,
				0.4375,
				0.44921875,
				0.48046875,
				0.5087890625,
				0.5576171875,
				0.5830078125,
				0.6083984375,
				0.619140625,
				0.6220703125,
				0.6298828125,
				0.630859375,
				0.630859375,
				0.6259765625,
				0.607421875,
				0.591796875,
				0.5400390625,
				0.5029296875,
				0.4560546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-3,
				24
			]
		},
		{
			"id": "c-dFaFvGH3pQfJ79NQqoG",
			"type": "freedraw",
			"x": 7955.164003459888,
			"y": 1455.803113553115,
			"width": 43,
			"height": 76,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 815412977,
			"version": 53,
			"versionNonce": 1521637009,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-1
				],
				[
					-2,
					-1
				],
				[
					-3,
					-1
				],
				[
					-4,
					-1
				],
				[
					-6,
					0
				],
				[
					-8,
					1
				],
				[
					-11,
					3
				],
				[
					-13,
					4
				],
				[
					-16,
					7
				],
				[
					-19,
					10
				],
				[
					-20,
					12
				],
				[
					-23,
					17
				],
				[
					-24,
					20
				],
				[
					-25,
					26
				],
				[
					-26,
					33
				],
				[
					-26,
					36
				],
				[
					-25,
					44
				],
				[
					-24,
					53
				],
				[
					-23,
					56
				],
				[
					-20,
					63
				],
				[
					-17,
					69
				],
				[
					-14,
					73
				],
				[
					-12,
					74
				],
				[
					-8,
					75
				],
				[
					-6,
					74
				],
				[
					-2,
					73
				],
				[
					3,
					69
				],
				[
					7,
					65
				],
				[
					9,
					62
				],
				[
					12,
					56
				],
				[
					15,
					49
				],
				[
					17,
					43
				],
				[
					17,
					40
				],
				[
					17,
					34
				],
				[
					16,
					29
				],
				[
					15,
					24
				],
				[
					13,
					22
				],
				[
					12,
					21
				],
				[
					9,
					18
				],
				[
					5,
					15
				],
				[
					1,
					14
				],
				[
					1,
					14
				]
			],
			"pressures": [
				0.1923828125,
				0.2021484375,
				0.255859375,
				0.291015625,
				0.2998046875,
				0.337890625,
				0.369140625,
				0.38671875,
				0.3896484375,
				0.396484375,
				0.40234375,
				0.4052734375,
				0.4091796875,
				0.4130859375,
				0.4248046875,
				0.4404296875,
				0.447265625,
				0.455078125,
				0.462890625,
				0.46484375,
				0.46484375,
				0.462890625,
				0.4619140625,
				0.4619140625,
				0.4638671875,
				0.466796875,
				0.4765625,
				0.490234375,
				0.5078125,
				0.517578125,
				0.537109375,
				0.5517578125,
				0.5615234375,
				0.56640625,
				0.5712890625,
				0.572265625,
				0.56640625,
				0.55859375,
				0.546875,
				0.5107421875,
				0.4521484375,
				0.3662109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1,
				14
			]
		},
		{
			"id": "knhKWkzLCNwwgO5_VSkZ5",
			"type": "freedraw",
			"x": 7993.164003459888,
			"y": 1562.803113553115,
			"width": 12,
			"height": 25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1422887985,
			"version": 23,
			"versionNonce": 556848895,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					0
				],
				[
					1,
					2
				],
				[
					2,
					5
				],
				[
					4,
					7
				],
				[
					5,
					10
				],
				[
					6,
					12
				],
				[
					8,
					16
				],
				[
					10,
					19
				],
				[
					12,
					22
				],
				[
					12,
					24
				],
				[
					12,
					24
				]
			],
			"pressures": [
				0.3037109375,
				0.3076171875,
				0.3173828125,
				0.333984375,
				0.3681640625,
				0.39453125,
				0.4189453125,
				0.4296875,
				0.4462890625,
				0.4443359375,
				0.4130859375,
				0.3857421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				12,
				24
			]
		},
		{
			"id": "PYf--U1AMtRBLz-TQ2xfq",
			"type": "freedraw",
			"x": 8001.164003459888,
			"y": 1566.803113553115,
			"width": 19,
			"height": 13,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1507941713,
			"version": 22,
			"versionNonce": 1747672177,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					0
				],
				[
					-4,
					1
				],
				[
					-5,
					2
				],
				[
					-7,
					3
				],
				[
					-8,
					3
				],
				[
					-8,
					4
				],
				[
					-12,
					6
				],
				[
					-15,
					9
				],
				[
					-16,
					10
				],
				[
					-19,
					13
				],
				[
					-19,
					13
				]
			],
			"pressures": [
				0.271484375,
				0.28125,
				0.294921875,
				0.3056640625,
				0.3115234375,
				0.314453125,
				0.31640625,
				0.32421875,
				0.3193359375,
				0.3095703125,
				0.275390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-19,
				13
			]
		},
		{
			"id": "6ERAWwT74eg2Fg4RQCn2c",
			"type": "freedraw",
			"x": 6833.164003459888,
			"y": 1736.803113553115,
			"width": 15,
			"height": 54,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1085153535,
			"version": 67,
			"versionNonce": 136027935,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					2,
					-3
				],
				[
					2,
					-4
				],
				[
					2,
					-3
				],
				[
					2,
					-2
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					0,
					6
				],
				[
					-1,
					11
				],
				[
					-2,
					17
				],
				[
					-3,
					20
				],
				[
					-4,
					26
				],
				[
					-6,
					31
				],
				[
					-7,
					34
				],
				[
					-8,
					39
				],
				[
					-9,
					42
				],
				[
					-10,
					45
				],
				[
					-10,
					46
				],
				[
					-10,
					45
				],
				[
					-10,
					43
				],
				[
					-10,
					41
				],
				[
					-9,
					37
				],
				[
					-8,
					33
				],
				[
					-7,
					28
				],
				[
					-7,
					25
				],
				[
					-6,
					20
				],
				[
					-5,
					14
				],
				[
					-4,
					9
				],
				[
					-4,
					7
				],
				[
					-3,
					2
				],
				[
					-3,
					-2
				],
				[
					-2,
					-3
				],
				[
					-2,
					-6
				],
				[
					-2,
					-7
				],
				[
					-1,
					-8
				],
				[
					-1,
					-7
				],
				[
					-1,
					-6
				],
				[
					-1,
					-5
				],
				[
					0,
					-3
				],
				[
					0,
					-2
				],
				[
					1,
					0
				],
				[
					1,
					3
				],
				[
					2,
					6
				],
				[
					3,
					7
				],
				[
					3,
					11
				],
				[
					4,
					15
				],
				[
					4,
					20
				],
				[
					4,
					22
				],
				[
					4,
					27
				],
				[
					4,
					32
				],
				[
					4,
					35
				],
				[
					5,
					39
				],
				[
					5,
					43
				],
				[
					5,
					43
				]
			],
			"pressures": [
				0.10546875,
				0.1162109375,
				0.1337890625,
				0.1611328125,
				0.1708984375,
				0.2216796875,
				0.3466796875,
				0.37890625,
				0.404296875,
				0.4140625,
				0.4287109375,
				0.4365234375,
				0.4384765625,
				0.439453125,
				0.44140625,
				0.4423828125,
				0.4384765625,
				0.4189453125,
				0.37890625,
				0.3232421875,
				0.25390625,
				0.1796875,
				0.09765625,
				0.0810546875,
				0.056640625,
				0.046875,
				0.048828125,
				0.052734375,
				0.0615234375,
				0.0712890625,
				0.0859375,
				0.095703125,
				0.1162109375,
				0.1376953125,
				0.150390625,
				0.177734375,
				0.2001953125,
				0.2197265625,
				0.248046875,
				0.265625,
				0.287109375,
				0.3134765625,
				0.326171875,
				0.3466796875,
				0.3662109375,
				0.3828125,
				0.38671875,
				0.392578125,
				0.3984375,
				0.40234375,
				0.4013671875,
				0.3984375,
				0.3916015625,
				0.3828125,
				0.3505859375,
				0.3017578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				5,
				43
			]
		},
		{
			"id": "8EpGsV5LnicCPvIu0CglZ",
			"type": "freedraw",
			"x": 6825.164003459888,
			"y": 1766.803113553115,
			"width": 15,
			"height": 3,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 527643807,
			"version": 20,
			"versionNonce": 1346938449,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					-1
				],
				[
					0,
					-1
				],
				[
					2,
					0
				],
				[
					6,
					1
				],
				[
					8,
					1
				],
				[
					11,
					1
				],
				[
					14,
					2
				],
				[
					14,
					2
				]
			],
			"pressures": [
				0.2578125,
				0.2724609375,
				0.2890625,
				0.421875,
				0.458984375,
				0.4716796875,
				0.4658203125,
				0.4384765625,
				0.384765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				14,
				2
			]
		},
		{
			"id": "Wdfr4rZX9qLsL07NyUAhn",
			"type": "freedraw",
			"x": 6859.164003459888,
			"y": 1735.803113553115,
			"width": 4,
			"height": 48,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 66487857,
			"version": 30,
			"versionNonce": 850944831,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-1
				],
				[
					-1,
					0
				],
				[
					-1,
					1
				],
				[
					-1,
					2
				],
				[
					-1,
					3
				],
				[
					-2,
					5
				],
				[
					-2,
					9
				],
				[
					-2,
					14
				],
				[
					-2,
					16
				],
				[
					-2,
					22
				],
				[
					-2,
					27
				],
				[
					-1,
					33
				],
				[
					-1,
					35
				],
				[
					-1,
					40
				],
				[
					0,
					43
				],
				[
					0,
					44
				],
				[
					1,
					46
				],
				[
					2,
					47
				],
				[
					2,
					47
				]
			],
			"pressures": [
				0.1796875,
				0.2138671875,
				0.2314453125,
				0.2705078125,
				0.2890625,
				0.3056640625,
				0.3232421875,
				0.3603515625,
				0.3984375,
				0.4140625,
				0.4384765625,
				0.453125,
				0.4619140625,
				0.4609375,
				0.4453125,
				0.4072265625,
				0.3818359375,
				0.3193359375,
				0.2822265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2,
				47
			]
		},
		{
			"id": "FvGEsmPpuQZdQWIR9ep_o",
			"type": "freedraw",
			"x": 6877.164003459888,
			"y": 1732.803113553115,
			"width": 3,
			"height": 59,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 463902367,
			"version": 30,
			"versionNonce": 1038201905,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2
				],
				[
					0,
					-1
				],
				[
					0,
					1
				],
				[
					-1,
					4
				],
				[
					-1,
					8
				],
				[
					-1,
					11
				],
				[
					-2,
					16
				],
				[
					-2,
					21
				],
				[
					-2,
					27
				],
				[
					-3,
					30
				],
				[
					-3,
					35
				],
				[
					-3,
					40
				],
				[
					-2,
					45
				],
				[
					-2,
					47
				],
				[
					-2,
					51
				],
				[
					-1,
					54
				],
				[
					-1,
					55
				],
				[
					0,
					57
				],
				[
					0,
					57
				]
			],
			"pressures": [
				0.1640625,
				0.189453125,
				0.314453125,
				0.3955078125,
				0.455078125,
				0.501953125,
				0.51953125,
				0.544921875,
				0.5634765625,
				0.57421875,
				0.578125,
				0.58203125,
				0.5791015625,
				0.5654296875,
				0.5517578125,
				0.5107421875,
				0.44921875,
				0.412109375,
				0.3720703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				57
			]
		},
		{
			"id": "V-ieQKk_eA3Udi9iWYCGC",
			"type": "freedraw",
			"x": 6945.164003459888,
			"y": 1760.803113553115,
			"width": 23,
			"height": 41,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1870513553,
			"version": 67,
			"versionNonce": 1365746527,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					0
				],
				[
					-1,
					1
				],
				[
					-1,
					3
				],
				[
					-1,
					5
				],
				[
					-1,
					9
				],
				[
					-2,
					11
				],
				[
					-2,
					16
				],
				[
					-3,
					20
				],
				[
					-4,
					25
				],
				[
					-4,
					28
				],
				[
					-5,
					32
				],
				[
					-5,
					35
				],
				[
					-5,
					37
				],
				[
					-6,
					39
				],
				[
					-6,
					40
				],
				[
					-6,
					39
				],
				[
					-6,
					38
				],
				[
					-6,
					36
				],
				[
					-6,
					34
				],
				[
					-6,
					31
				],
				[
					-6,
					27
				],
				[
					-5,
					22
				],
				[
					-5,
					20
				],
				[
					-3,
					15
				],
				[
					-2,
					11
				],
				[
					0,
					8
				],
				[
					1,
					6
				],
				[
					3,
					3
				],
				[
					5,
					1
				],
				[
					6,
					1
				],
				[
					7,
					-1
				],
				[
					9,
					-1
				],
				[
					11,
					-1
				],
				[
					12,
					-1
				],
				[
					13,
					0
				],
				[
					15,
					2
				],
				[
					16,
					4
				],
				[
					16,
					5
				],
				[
					17,
					7
				],
				[
					17,
					10
				],
				[
					17,
					12
				],
				[
					16,
					15
				],
				[
					16,
					16
				],
				[
					14,
					19
				],
				[
					14,
					20
				],
				[
					12,
					22
				],
				[
					10,
					24
				],
				[
					8,
					25
				],
				[
					7,
					26
				],
				[
					5,
					26
				],
				[
					3,
					27
				],
				[
					2,
					27
				],
				[
					1,
					27
				],
				[
					0,
					26
				],
				[
					0,
					26
				]
			],
			"pressures": [
				0.1650390625,
				0.171875,
				0.330078125,
				0.3671875,
				0.39453125,
				0.416015625,
				0.4404296875,
				0.4501953125,
				0.46484375,
				0.4765625,
				0.490234375,
				0.4970703125,
				0.5078125,
				0.515625,
				0.51953125,
				0.5263671875,
				0.5302734375,
				0.537109375,
				0.5380859375,
				0.5380859375,
				0.537109375,
				0.5341796875,
				0.53125,
				0.5263671875,
				0.5244140625,
				0.521484375,
				0.51953125,
				0.5166015625,
				0.515625,
				0.5146484375,
				0.513671875,
				0.513671875,
				0.513671875,
				0.513671875,
				0.5146484375,
				0.515625,
				0.5185546875,
				0.5244140625,
				0.53515625,
				0.541015625,
				0.556640625,
				0.57421875,
				0.5927734375,
				0.6103515625,
				0.6181640625,
				0.6318359375,
				0.6376953125,
				0.646484375,
				0.65234375,
				0.6513671875,
				0.6484375,
				0.62890625,
				0.587890625,
				0.5205078125,
				0.4775390625,
				0.376953125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				26
			]
		},
		{
			"id": "Qfni8irgeCUq9qmEpWYQJ",
			"type": "freedraw",
			"x": 6971.164003459888,
			"y": 1765.803113553115,
			"width": 47,
			"height": 69,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1515317233,
			"version": 128,
			"versionNonce": 350094865,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					-2
				],
				[
					3,
					-2
				],
				[
					4,
					-3
				],
				[
					5,
					-4
				],
				[
					6,
					-4
				],
				[
					6,
					-5
				],
				[
					5,
					-5
				],
				[
					4,
					-4
				],
				[
					3,
					-3
				],
				[
					1,
					-2
				],
				[
					0,
					0
				],
				[
					-1,
					1
				],
				[
					-2,
					4
				],
				[
					-3,
					7
				],
				[
					-4,
					8
				],
				[
					-4,
					11
				],
				[
					-5,
					13
				],
				[
					-5,
					15
				],
				[
					-4,
					18
				],
				[
					-3,
					19
				],
				[
					-3,
					20
				],
				[
					-1,
					20
				],
				[
					1,
					20
				],
				[
					2,
					19
				],
				[
					4,
					18
				],
				[
					6,
					15
				],
				[
					8,
					12
				],
				[
					9,
					9
				],
				[
					10,
					8
				],
				[
					11,
					5
				],
				[
					13,
					2
				],
				[
					13,
					1
				],
				[
					13,
					-2
				],
				[
					14,
					-3
				],
				[
					14,
					-4
				],
				[
					13,
					-5
				],
				[
					13,
					-4
				],
				[
					13,
					-3
				],
				[
					12,
					-2
				],
				[
					12,
					0
				],
				[
					11,
					1
				],
				[
					11,
					4
				],
				[
					11,
					8
				],
				[
					12,
					11
				],
				[
					12,
					13
				],
				[
					13,
					16
				],
				[
					14,
					19
				],
				[
					14,
					20
				],
				[
					16,
					21
				],
				[
					18,
					22
				],
				[
					19,
					21
				],
				[
					20,
					21
				],
				[
					22,
					19
				],
				[
					24,
					17
				],
				[
					26,
					15
				],
				[
					27,
					14
				],
				[
					29,
					11
				],
				[
					30,
					8
				],
				[
					31,
					5
				],
				[
					31,
					4
				],
				[
					32,
					1
				],
				[
					32,
					-1
				],
				[
					32,
					-2
				],
				[
					31,
					-3
				],
				[
					30,
					-3
				],
				[
					29,
					-2
				],
				[
					28,
					0
				],
				[
					27,
					2
				],
				[
					25,
					5
				],
				[
					25,
					7
				],
				[
					24,
					10
				],
				[
					23,
					14
				],
				[
					22,
					16
				],
				[
					22,
					17
				],
				[
					23,
					19
				],
				[
					24,
					20
				],
				[
					25,
					21
				],
				[
					26,
					21
				],
				[
					27,
					20
				],
				[
					29,
					19
				],
				[
					30,
					18
				],
				[
					32,
					16
				],
				[
					33,
					14
				],
				[
					34,
					13
				],
				[
					35,
					10
				],
				[
					36,
					8
				],
				[
					36,
					7
				],
				[
					37,
					5
				],
				[
					37,
					3
				],
				[
					38,
					2
				],
				[
					38,
					1
				],
				[
					38,
					0
				],
				[
					38,
					1
				],
				[
					38,
					2
				],
				[
					38,
					4
				],
				[
					39,
					7
				],
				[
					39,
					10
				],
				[
					40,
					15
				],
				[
					41,
					21
				],
				[
					42,
					27
				],
				[
					42,
					31
				],
				[
					41,
					37
				],
				[
					40,
					44
				],
				[
					39,
					50
				],
				[
					38,
					53
				],
				[
					36,
					58
				],
				[
					34,
					61
				],
				[
					32,
					63
				],
				[
					31,
					64
				],
				[
					29,
					64
				],
				[
					27,
					63
				],
				[
					24,
					61
				],
				[
					23,
					60
				],
				[
					21,
					57
				],
				[
					18,
					52
				],
				[
					17,
					50
				],
				[
					17,
					50
				]
			],
			"pressures": [
				0.1279296875,
				0.1328125,
				0.1376953125,
				0.1572265625,
				0.201171875,
				0.2607421875,
				0.28125,
				0.2998046875,
				0.3486328125,
				0.3837890625,
				0.4013671875,
				0.4150390625,
				0.4208984375,
				0.4326171875,
				0.44140625,
				0.443359375,
				0.4462890625,
				0.447265625,
				0.451171875,
				0.4541015625,
				0.453125,
				0.4521484375,
				0.4443359375,
				0.4248046875,
				0.396484375,
				0.3798828125,
				0.34765625,
				0.3154296875,
				0.291015625,
				0.2822265625,
				0.26953125,
				0.2626953125,
				0.2607421875,
				0.259765625,
				0.2607421875,
				0.2626953125,
				0.2685546875,
				0.26953125,
				0.2734375,
				0.2763671875,
				0.279296875,
				0.2822265625,
				0.287109375,
				0.2900390625,
				0.2900390625,
				0.2890625,
				0.28515625,
				0.2705078125,
				0.26171875,
				0.240234375,
				0.212890625,
				0.1787109375,
				0.1591796875,
				0.1220703125,
				0.0888671875,
				0.064453125,
				0.0556640625,
				0.0439453125,
				0.0400390625,
				0.0400390625,
				0.04296875,
				0.05078125,
				0.068359375,
				0.0810546875,
				0.115234375,
				0.1748046875,
				0.21484375,
				0.2490234375,
				0.2763671875,
				0.2978515625,
				0.3056640625,
				0.31640625,
				0.322265625,
				0.32421875,
				0.32421875,
				0.3232421875,
				0.322265625,
				0.3173828125,
				0.314453125,
				0.3076171875,
				0.2998046875,
				0.2958984375,
				0.2890625,
				0.283203125,
				0.283203125,
				0.2841796875,
				0.2841796875,
				0.283203125,
				0.28125,
				0.28125,
				0.2763671875,
				0.2734375,
				0.2724609375,
				0.2900390625,
				0.2998046875,
				0.318359375,
				0.34375,
				0.3564453125,
				0.3857421875,
				0.42578125,
				0.470703125,
				0.494140625,
				0.53515625,
				0.57421875,
				0.60546875,
				0.6181640625,
				0.638671875,
				0.6533203125,
				0.662109375,
				0.6640625,
				0.6650390625,
				0.654296875,
				0.62890625,
				0.6103515625,
				0.5576171875,
				0.4794921875,
				0.431640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				17,
				50
			]
		},
		{
			"id": "aOGrosnaG-EW62hgnq10s",
			"type": "freedraw",
			"x": 7010.164003459888,
			"y": 1779.803113553115,
			"width": 29,
			"height": 26,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2108805887,
			"version": 50,
			"versionNonce": 880402303,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					0
				],
				[
					4,
					0
				],
				[
					5,
					0
				],
				[
					6,
					-1
				],
				[
					7,
					-1
				],
				[
					10,
					-2
				],
				[
					11,
					-2
				],
				[
					12,
					-3
				],
				[
					13,
					-3
				],
				[
					16,
					-5
				],
				[
					17,
					-6
				],
				[
					19,
					-8
				],
				[
					19,
					-9
				],
				[
					20,
					-10
				],
				[
					20,
					-11
				],
				[
					20,
					-12
				],
				[
					20,
					-13
				],
				[
					18,
					-13
				],
				[
					17,
					-13
				],
				[
					16,
					-13
				],
				[
					14,
					-13
				],
				[
					12,
					-12
				],
				[
					10,
					-10
				],
				[
					9,
					-9
				],
				[
					8,
					-7
				],
				[
					8,
					-6
				],
				[
					8,
					-3
				],
				[
					8,
					0
				],
				[
					9,
					3
				],
				[
					10,
					4
				],
				[
					11,
					7
				],
				[
					13,
					9
				],
				[
					16,
					11
				],
				[
					17,
					12
				],
				[
					20,
					13
				],
				[
					23,
					13
				],
				[
					25,
					13
				],
				[
					29,
					11
				],
				[
					29,
					11
				]
			],
			"pressures": [
				0.1474609375,
				0.154296875,
				0.1630859375,
				0.1748046875,
				0.185546875,
				0.19140625,
				0.22265625,
				0.234375,
				0.248046875,
				0.2587890625,
				0.287109375,
				0.3134765625,
				0.3388671875,
				0.3515625,
				0.3662109375,
				0.392578125,
				0.4169921875,
				0.4453125,
				0.4755859375,
				0.5068359375,
				0.5234375,
				0.5517578125,
				0.57421875,
				0.5908203125,
				0.5966796875,
				0.6044921875,
				0.607421875,
				0.6123046875,
				0.6171875,
				0.6201171875,
				0.6201171875,
				0.611328125,
				0.5849609375,
				0.5400390625,
				0.51171875,
				0.4423828125,
				0.365234375,
				0.3271484375,
				0.25390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				29,
				11
			]
		},
		{
			"id": "ik5zFZ_biz6ANTnz_cQSa",
			"type": "freedraw",
			"x": 7083.164003459888,
			"y": 1728.803113553115,
			"width": 17,
			"height": 93,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1201233393,
			"version": 40,
			"versionNonce": 1345657841,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-3,
					-2
				],
				[
					-3,
					-1
				],
				[
					-6,
					-1
				],
				[
					-8,
					0
				],
				[
					-10,
					1
				],
				[
					-11,
					2
				],
				[
					-13,
					3
				],
				[
					-14,
					5
				],
				[
					-16,
					7
				],
				[
					-16,
					8
				],
				[
					-17,
					12
				],
				[
					-17,
					15
				],
				[
					-16,
					20
				],
				[
					-16,
					23
				],
				[
					-15,
					28
				],
				[
					-13,
					35
				],
				[
					-11,
					43
				],
				[
					-10,
					47
				],
				[
					-9,
					56
				],
				[
					-7,
					64
				],
				[
					-7,
					69
				],
				[
					-6,
					76
				],
				[
					-5,
					80
				],
				[
					-4,
					86
				],
				[
					-4,
					91
				],
				[
					-4,
					91
				]
			],
			"pressures": [
				0.1025390625,
				0.1171875,
				0.1591796875,
				0.22265625,
				0.2451171875,
				0.28515625,
				0.357421875,
				0.421875,
				0.46875,
				0.484375,
				0.5048828125,
				0.5146484375,
				0.51953125,
				0.5205078125,
				0.5244140625,
				0.53125,
				0.54296875,
				0.548828125,
				0.5625,
				0.576171875,
				0.5859375,
				0.58984375,
				0.5908203125,
				0.5810546875,
				0.5703125,
				0.537109375,
				0.513671875,
				0.4521484375,
				0.3662109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4,
				91
			]
		},
		{
			"id": "lwGUjq4HKk6BAsX-yHLUw",
			"type": "freedraw",
			"x": 7064.164003459888,
			"y": 1791.803113553115,
			"width": 27,
			"height": 27,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1665933183,
			"version": 33,
			"versionNonce": 1311741855,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					-6
				],
				[
					-3,
					-10
				],
				[
					-4,
					-12
				],
				[
					-4,
					-13
				],
				[
					-4,
					-14
				],
				[
					-4,
					-17
				],
				[
					-5,
					-18
				],
				[
					-4,
					-19
				],
				[
					-4,
					-20
				],
				[
					-3,
					-21
				],
				[
					-2,
					-21
				],
				[
					0,
					-21
				],
				[
					2,
					-22
				],
				[
					4,
					-22
				],
				[
					6,
					-22
				],
				[
					8,
					-23
				],
				[
					11,
					-23
				],
				[
					14,
					-24
				],
				[
					16,
					-25
				],
				[
					20,
					-26
				],
				[
					22,
					-27
				],
				[
					22,
					-27
				]
			],
			"pressures": [
				0.1435546875,
				0.158203125,
				0.19140625,
				0.216796875,
				0.23046875,
				0.2607421875,
				0.3173828125,
				0.345703125,
				0.3740234375,
				0.4267578125,
				0.4716796875,
				0.50390625,
				0.5234375,
				0.53515625,
				0.5380859375,
				0.54296875,
				0.5439453125,
				0.541015625,
				0.51953125,
				0.4990234375,
				0.4423828125,
				0.4033203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				22,
				-27
			]
		},
		{
			"id": "6O1c8treRbjYBfo9WKVSu",
			"type": "freedraw",
			"x": 7120.164003459888,
			"y": 1760.803113553115,
			"width": 46,
			"height": 27,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1511373055,
			"version": 107,
			"versionNonce": 535721425,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-2
				],
				[
					-2,
					-3
				],
				[
					-3,
					-3
				],
				[
					-4,
					-4
				],
				[
					-5,
					-5
				],
				[
					-7,
					-5
				],
				[
					-8,
					-5
				],
				[
					-10,
					-4
				],
				[
					-12,
					-3
				],
				[
					-13,
					-1
				],
				[
					-14,
					0
				],
				[
					-16,
					2
				],
				[
					-17,
					5
				],
				[
					-17,
					7
				],
				[
					-18,
					9
				],
				[
					-17,
					12
				],
				[
					-17,
					14
				],
				[
					-17,
					15
				],
				[
					-15,
					16
				],
				[
					-14,
					17
				],
				[
					-12,
					16
				],
				[
					-9,
					14
				],
				[
					-8,
					12
				],
				[
					-6,
					9
				],
				[
					-5,
					7
				],
				[
					-4,
					4
				],
				[
					-3,
					2
				],
				[
					-3,
					0
				],
				[
					-3,
					-2
				],
				[
					-2,
					-3
				],
				[
					-2,
					-5
				],
				[
					-2,
					-6
				],
				[
					-3,
					-5
				],
				[
					-3,
					-2
				],
				[
					-4,
					0
				],
				[
					-4,
					1
				],
				[
					-4,
					4
				],
				[
					-3,
					7
				],
				[
					-3,
					9
				],
				[
					-2,
					11
				],
				[
					-1,
					13
				],
				[
					0,
					15
				],
				[
					0,
					16
				],
				[
					2,
					16
				],
				[
					2,
					17
				],
				[
					4,
					16
				],
				[
					5,
					14
				],
				[
					7,
					12
				],
				[
					8,
					11
				],
				[
					9,
					8
				],
				[
					10,
					5
				],
				[
					11,
					2
				],
				[
					11,
					1
				],
				[
					12,
					-1
				],
				[
					12,
					-3
				],
				[
					12,
					-4
				],
				[
					12,
					-5
				],
				[
					12,
					-6
				],
				[
					12,
					-5
				],
				[
					12,
					-4
				],
				[
					12,
					-3
				],
				[
					12,
					0
				],
				[
					12,
					3
				],
				[
					12,
					6
				],
				[
					12,
					8
				],
				[
					12,
					11
				],
				[
					13,
					13
				],
				[
					13,
					16
				],
				[
					14,
					18
				],
				[
					15,
					18
				],
				[
					16,
					17
				],
				[
					17,
					17
				],
				[
					17,
					16
				],
				[
					19,
					14
				],
				[
					20,
					11
				],
				[
					21,
					10
				],
				[
					22,
					7
				],
				[
					23,
					4
				],
				[
					24,
					1
				],
				[
					25,
					0
				],
				[
					25,
					-1
				],
				[
					26,
					-2
				],
				[
					26,
					-1
				],
				[
					25,
					1
				],
				[
					25,
					4
				],
				[
					25,
					5
				],
				[
					25,
					8
				],
				[
					25,
					10
				],
				[
					25,
					13
				],
				[
					25,
					14
				],
				[
					26,
					17
				],
				[
					26,
					19
				],
				[
					27,
					20
				],
				[
					28,
					21
				],
				[
					28,
					21
				]
			],
			"pressures": [
				0.1728515625,
				0.1806640625,
				0.22265625,
				0.28515625,
				0.328125,
				0.3662109375,
				0.3916015625,
				0.4072265625,
				0.4140625,
				0.421875,
				0.4248046875,
				0.4267578125,
				0.4267578125,
				0.4267578125,
				0.42578125,
				0.42578125,
				0.4248046875,
				0.4248046875,
				0.4248046875,
				0.4248046875,
				0.4150390625,
				0.4072265625,
				0.3662109375,
				0.296875,
				0.244140625,
				0.193359375,
				0.169921875,
				0.1318359375,
				0.1064453125,
				0.0986328125,
				0.09375,
				0.095703125,
				0.1083984375,
				0.1259765625,
				0.208984375,
				0.2626953125,
				0.2890625,
				0.30078125,
				0.3212890625,
				0.337890625,
				0.3515625,
				0.35546875,
				0.361328125,
				0.3603515625,
				0.357421875,
				0.34765625,
				0.3388671875,
				0.3115234375,
				0.2763671875,
				0.2412109375,
				0.224609375,
				0.1953125,
				0.1767578125,
				0.1708984375,
				0.1708984375,
				0.171875,
				0.177734375,
				0.1845703125,
				0.203125,
				0.2294921875,
				0.3154296875,
				0.3515625,
				0.37890625,
				0.40234375,
				0.423828125,
				0.4384765625,
				0.443359375,
				0.4501953125,
				0.453125,
				0.451171875,
				0.4365234375,
				0.419921875,
				0.3857421875,
				0.3720703125,
				0.357421875,
				0.333984375,
				0.3115234375,
				0.30078125,
				0.2822265625,
				0.271484375,
				0.2685546875,
				0.26953125,
				0.2841796875,
				0.310546875,
				0.3974609375,
				0.416015625,
				0.421875,
				0.4228515625,
				0.423828125,
				0.4248046875,
				0.42578125,
				0.42578125,
				0.4140625,
				0.3837890625,
				0.361328125,
				0.302734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				28,
				21
			]
		},
		{
			"id": "LtM0MX3UFcvoCnR32Tx4Q",
			"type": "freedraw",
			"x": 7168.164003459888,
			"y": 1721.803113553115,
			"width": 4,
			"height": 54,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 518481695,
			"version": 27,
			"versionNonce": 1958300607,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					0,
					3
				],
				[
					0,
					5
				],
				[
					0,
					6
				],
				[
					0,
					10
				],
				[
					-1,
					16
				],
				[
					-1,
					22
				],
				[
					-1,
					25
				],
				[
					-2,
					32
				],
				[
					-3,
					39
				],
				[
					-4,
					42
				],
				[
					-4,
					47
				],
				[
					-4,
					52
				],
				[
					-4,
					54
				],
				[
					-4,
					54
				]
			],
			"pressures": [
				0.228515625,
				0.27734375,
				0.3037109375,
				0.3154296875,
				0.3369140625,
				0.34765625,
				0.390625,
				0.4287109375,
				0.45703125,
				0.4658203125,
				0.4794921875,
				0.4814453125,
				0.474609375,
				0.4375,
				0.37890625,
				0.3427734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4,
				54
			]
		},
		{
			"id": "Ld4YWFwfK2S1VLlYYGHKg",
			"type": "freedraw",
			"x": 7192.164003459888,
			"y": 1734.803113553115,
			"width": 33,
			"height": 48,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1770830911,
			"version": 89,
			"versionNonce": 1193382833,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					1
				],
				[
					-1,
					2
				],
				[
					-1,
					3
				],
				[
					-1,
					5
				],
				[
					-2,
					6
				],
				[
					-2,
					10
				],
				[
					-3,
					14
				],
				[
					-3,
					16
				],
				[
					-4,
					21
				],
				[
					-4,
					25
				],
				[
					-4,
					28
				],
				[
					-4,
					33
				],
				[
					-5,
					38
				],
				[
					-5,
					40
				],
				[
					-5,
					44
				],
				[
					-5,
					46
				],
				[
					-5,
					48
				],
				[
					-5,
					47
				],
				[
					-5,
					46
				],
				[
					-5,
					43
				],
				[
					-5,
					41
				],
				[
					-5,
					37
				],
				[
					-6,
					33
				],
				[
					-6,
					28
				],
				[
					-6,
					26
				],
				[
					-7,
					22
				],
				[
					-7,
					19
				],
				[
					-8,
					17
				],
				[
					-8,
					16
				],
				[
					-8,
					15
				],
				[
					-7,
					15
				],
				[
					-7,
					16
				],
				[
					-6,
					16
				],
				[
					-5,
					16
				],
				[
					-3,
					17
				],
				[
					-2,
					17
				],
				[
					1,
					17
				],
				[
					3,
					17
				],
				[
					5,
					17
				],
				[
					7,
					17
				],
				[
					9,
					16
				],
				[
					10,
					15
				],
				[
					12,
					14
				],
				[
					14,
					13
				],
				[
					15,
					11
				],
				[
					15,
					10
				],
				[
					16,
					9
				],
				[
					16,
					8
				],
				[
					16,
					7
				],
				[
					15,
					7
				],
				[
					15,
					6
				],
				[
					14,
					6
				],
				[
					13,
					6
				],
				[
					12,
					6
				],
				[
					12,
					7
				],
				[
					12,
					9
				],
				[
					13,
					10
				],
				[
					14,
					13
				],
				[
					15,
					14
				],
				[
					17,
					16
				],
				[
					18,
					17
				],
				[
					19,
					19
				],
				[
					21,
					21
				],
				[
					22,
					22
				],
				[
					23,
					24
				],
				[
					24,
					26
				],
				[
					25,
					27
				],
				[
					25,
					28
				],
				[
					24,
					29
				],
				[
					23,
					31
				],
				[
					21,
					32
				],
				[
					20,
					32
				],
				[
					16,
					33
				],
				[
					15,
					33
				],
				[
					11,
					33
				],
				[
					8,
					33
				],
				[
					7,
					32
				],
				[
					7,
					32
				]
			],
			"pressures": [
				0.2080078125,
				0.2412109375,
				0.2548828125,
				0.2666015625,
				0.283203125,
				0.294921875,
				0.314453125,
				0.3310546875,
				0.3408203125,
				0.3623046875,
				0.380859375,
				0.38671875,
				0.390625,
				0.3759765625,
				0.359375,
				0.30859375,
				0.2431640625,
				0.177734375,
				0.0849609375,
				0.0751953125,
				0.072265625,
				0.080078125,
				0.1064453125,
				0.142578125,
				0.1875,
				0.2119140625,
				0.2607421875,
				0.3056640625,
				0.3427734375,
				0.3759765625,
				0.4013671875,
				0.421875,
				0.4228515625,
				0.421875,
				0.4169921875,
				0.412109375,
				0.4091796875,
				0.4013671875,
				0.390625,
				0.3837890625,
				0.3720703125,
				0.3583984375,
				0.3505859375,
				0.333984375,
				0.322265625,
				0.310546875,
				0.3056640625,
				0.3017578125,
				0.3037109375,
				0.31640625,
				0.337890625,
				0.3515625,
				0.3994140625,
				0.4296875,
				0.458984375,
				0.46484375,
				0.4716796875,
				0.4716796875,
				0.470703125,
				0.47265625,
				0.4755859375,
				0.4775390625,
				0.484375,
				0.5029296875,
				0.515625,
				0.546875,
				0.58203125,
				0.6015625,
				0.6376953125,
				0.6630859375,
				0.685546875,
				0.69140625,
				0.6923828125,
				0.6943359375,
				0.6904296875,
				0.66796875,
				0.6142578125,
				0.5712890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				7,
				32
			]
		},
		{
			"id": "cKT_5iFWCLl5vnURlx3G5",
			"type": "freedraw",
			"x": 6694.164003459888,
			"y": 1874.803113553115,
			"width": 41,
			"height": 50,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 782602559,
			"version": 48,
			"versionNonce": 1681357791,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					1,
					3
				],
				[
					0,
					4
				],
				[
					0,
					5
				],
				[
					-1,
					8
				],
				[
					-2,
					11
				],
				[
					-2,
					13
				],
				[
					-4,
					18
				],
				[
					-5,
					22
				],
				[
					-6,
					25
				],
				[
					-7,
					29
				],
				[
					-8,
					33
				],
				[
					-8,
					34
				],
				[
					-8,
					37
				],
				[
					-8,
					40
				],
				[
					-7,
					41
				],
				[
					-6,
					43
				],
				[
					-4,
					45
				],
				[
					-3,
					47
				],
				[
					-2,
					48
				],
				[
					1,
					49
				],
				[
					3,
					50
				],
				[
					6,
					50
				],
				[
					8,
					50
				],
				[
					11,
					50
				],
				[
					15,
					49
				],
				[
					16,
					49
				],
				[
					19,
					48
				],
				[
					23,
					46
				],
				[
					26,
					45
				],
				[
					27,
					44
				],
				[
					30,
					43
				],
				[
					32,
					41
				],
				[
					33,
					40
				],
				[
					33,
					40
				]
			],
			"pressures": [
				0.1728515625,
				0.18359375,
				0.1982421875,
				0.224609375,
				0.244140625,
				0.267578125,
				0.2900390625,
				0.337890625,
				0.3876953125,
				0.4140625,
				0.4609375,
				0.4990234375,
				0.5146484375,
				0.5400390625,
				0.556640625,
				0.5634765625,
				0.57421875,
				0.5830078125,
				0.587890625,
				0.595703125,
				0.6044921875,
				0.6123046875,
				0.6162109375,
				0.6240234375,
				0.630859375,
				0.63671875,
				0.6396484375,
				0.642578125,
				0.64453125,
				0.64453125,
				0.6435546875,
				0.6337890625,
				0.6064453125,
				0.5849609375,
				0.521484375,
				0.4345703125,
				0.3857421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				33,
				40
			]
		},
		{
			"id": "Qn9UZus9CFRnBPf3p7CMy",
			"type": "freedraw",
			"x": 6731.164003459888,
			"y": 1895.803113553115,
			"width": 26,
			"height": 48,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1864771025,
			"version": 76,
			"versionNonce": 972420497,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-2
				],
				[
					-1,
					-3
				],
				[
					-1,
					-4
				],
				[
					-1,
					-5
				],
				[
					-1,
					-4
				],
				[
					-1,
					-3
				],
				[
					-1,
					-2
				],
				[
					-1,
					0
				],
				[
					-1,
					2
				],
				[
					-1,
					6
				],
				[
					-1,
					11
				],
				[
					-2,
					16
				],
				[
					-2,
					19
				],
				[
					-3,
					24
				],
				[
					-4,
					29
				],
				[
					-4,
					30
				],
				[
					-5,
					33
				],
				[
					-5,
					34
				],
				[
					-5,
					35
				],
				[
					-6,
					35
				],
				[
					-6,
					34
				],
				[
					-6,
					33
				],
				[
					-6,
					30
				],
				[
					-5,
					25
				],
				[
					-5,
					20
				],
				[
					-4,
					18
				],
				[
					-3,
					12
				],
				[
					-2,
					7
				],
				[
					-1,
					3
				],
				[
					0,
					1
				],
				[
					2,
					-2
				],
				[
					4,
					-5
				],
				[
					5,
					-6
				],
				[
					7,
					-7
				],
				[
					9,
					-7
				],
				[
					11,
					-6
				],
				[
					13,
					-5
				],
				[
					14,
					-3
				],
				[
					14,
					0
				],
				[
					14,
					1
				],
				[
					14,
					4
				],
				[
					14,
					6
				],
				[
					13,
					8
				],
				[
					12,
					9
				],
				[
					11,
					12
				],
				[
					9,
					13
				],
				[
					7,
					15
				],
				[
					6,
					16
				],
				[
					4,
					17
				],
				[
					2,
					19
				],
				[
					0,
					20
				],
				[
					0,
					21
				],
				[
					0,
					22
				],
				[
					2,
					24
				],
				[
					2,
					25
				],
				[
					4,
					27
				],
				[
					6,
					29
				],
				[
					7,
					31
				],
				[
					10,
					34
				],
				[
					12,
					37
				],
				[
					15,
					39
				],
				[
					16,
					40
				],
				[
					18,
					41
				],
				[
					20,
					41
				],
				[
					20,
					41
				]
			],
			"pressures": [
				0.1376953125,
				0.1435546875,
				0.15234375,
				0.16796875,
				0.189453125,
				0.3154296875,
				0.341796875,
				0.369140625,
				0.4189453125,
				0.44140625,
				0.478515625,
				0.5048828125,
				0.5224609375,
				0.5302734375,
				0.544921875,
				0.5576171875,
				0.5634765625,
				0.572265625,
				0.5751953125,
				0.5771484375,
				0.5791015625,
				0.578125,
				0.5771484375,
				0.576171875,
				0.576171875,
				0.5751953125,
				0.57421875,
				0.5732421875,
				0.5712890625,
				0.5693359375,
				0.568359375,
				0.5673828125,
				0.56640625,
				0.5654296875,
				0.5654296875,
				0.5654296875,
				0.56640625,
				0.5673828125,
				0.568359375,
				0.5703125,
				0.572265625,
				0.57421875,
				0.5751953125,
				0.5771484375,
				0.5771484375,
				0.5771484375,
				0.576171875,
				0.576171875,
				0.576171875,
				0.576171875,
				0.5751953125,
				0.5732421875,
				0.5712890625,
				0.5703125,
				0.5712890625,
				0.5712890625,
				0.5732421875,
				0.57421875,
				0.57421875,
				0.5703125,
				0.5517578125,
				0.509765625,
				0.4794921875,
				0.404296875,
				0.3603515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				20,
				41
			]
		},
		{
			"id": "ouh5cDYkVgv88bCqvSqAm",
			"type": "freedraw",
			"x": 6767.164003459888,
			"y": 1895.803113553115,
			"width": 32,
			"height": 46,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1067356127,
			"version": 48,
			"versionNonce": 12232703,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-2
				],
				[
					1,
					-3
				],
				[
					1,
					-2
				],
				[
					0,
					-2
				],
				[
					0,
					-1
				],
				[
					0,
					1
				],
				[
					0,
					4
				],
				[
					0,
					5
				],
				[
					-1,
					9
				],
				[
					0,
					14
				],
				[
					0,
					19
				],
				[
					0,
					21
				],
				[
					1,
					26
				],
				[
					2,
					31
				],
				[
					3,
					35
				],
				[
					4,
					37
				],
				[
					6,
					40
				],
				[
					8,
					42
				],
				[
					10,
					43
				],
				[
					12,
					43
				],
				[
					15,
					42
				],
				[
					18,
					40
				],
				[
					19,
					39
				],
				[
					22,
					36
				],
				[
					25,
					33
				],
				[
					27,
					29
				],
				[
					28,
					27
				],
				[
					30,
					23
				],
				[
					31,
					20
				],
				[
					31,
					16
				],
				[
					31,
					15
				],
				[
					30,
					11
				],
				[
					29,
					8
				],
				[
					28,
					7
				],
				[
					27,
					5
				],
				[
					26,
					3
				],
				[
					26,
					3
				]
			],
			"pressures": [
				0.2041015625,
				0.2177734375,
				0.2705078125,
				0.2783203125,
				0.3369140625,
				0.357421875,
				0.3935546875,
				0.4296875,
				0.44921875,
				0.4853515625,
				0.5166015625,
				0.5439453125,
				0.5556640625,
				0.5751953125,
				0.587890625,
				0.5947265625,
				0.59765625,
				0.6025390625,
				0.607421875,
				0.6142578125,
				0.6181640625,
				0.626953125,
				0.6337890625,
				0.6376953125,
				0.6435546875,
				0.6484375,
				0.65234375,
				0.6533203125,
				0.6552734375,
				0.65625,
				0.654296875,
				0.6513671875,
				0.638671875,
				0.6162109375,
				0.6005859375,
				0.5546875,
				0.4765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				26,
				3
			]
		},
		{
			"id": "Qtz7wRVA57YWwTBtRQHqm",
			"type": "freedraw",
			"x": 6820.164003459888,
			"y": 1998.803113553115,
			"width": 3,
			"height": 37,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1327258929,
			"version": 23,
			"versionNonce": 2074286961,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					3
				],
				[
					2,
					13
				],
				[
					3,
					18
				],
				[
					3,
					24
				],
				[
					3,
					29
				],
				[
					3,
					31
				],
				[
					3,
					36
				],
				[
					3,
					36
				]
			],
			"pressures": [
				0.205078125,
				0.2158203125,
				0.3779296875,
				0.4052734375,
				0.45703125,
				0.5009765625,
				0.5576171875,
				0.5673828125,
				0.5693359375,
				0.5546875,
				0.541015625,
				0.48828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3,
				36
			]
		},
		{
			"id": "x86-ztMSLUfiJtrjnzOzi",
			"type": "freedraw",
			"x": 7017.164003459888,
			"y": 1996.803113553115,
			"width": 49,
			"height": 49,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1123241553,
			"version": 58,
			"versionNonce": 1480806431,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					3,
					-1
				],
				[
					4,
					-1
				],
				[
					6,
					-1
				],
				[
					8,
					-1
				],
				[
					9,
					-1
				],
				[
					12,
					-1
				],
				[
					14,
					0
				],
				[
					17,
					1
				],
				[
					20,
					2
				],
				[
					21,
					3
				],
				[
					24,
					6
				],
				[
					27,
					9
				],
				[
					28,
					11
				],
				[
					29,
					14
				],
				[
					30,
					18
				],
				[
					31,
					20
				],
				[
					31,
					24
				],
				[
					30,
					29
				],
				[
					29,
					32
				],
				[
					28,
					34
				],
				[
					27,
					37
				],
				[
					25,
					40
				],
				[
					22,
					42
				],
				[
					21,
					43
				],
				[
					19,
					44
				],
				[
					17,
					45
				],
				[
					14,
					45
				],
				[
					12,
					44
				],
				[
					11,
					43
				],
				[
					11,
					42
				],
				[
					10,
					42
				],
				[
					11,
					41
				],
				[
					12,
					41
				],
				[
					14,
					40
				],
				[
					15,
					41
				],
				[
					18,
					41
				],
				[
					21,
					42
				],
				[
					25,
					44
				],
				[
					27,
					44
				],
				[
					32,
					46
				],
				[
					37,
					47
				],
				[
					42,
					48
				],
				[
					45,
					48
				],
				[
					49,
					48
				],
				[
					49,
					48
				]
			],
			"pressures": [
				0.2509765625,
				0.2509765625,
				0.2724609375,
				0.283203125,
				0.298828125,
				0.3193359375,
				0.3466796875,
				0.36328125,
				0.40234375,
				0.4228515625,
				0.462890625,
				0.4970703125,
				0.51171875,
				0.5361328125,
				0.5537109375,
				0.5595703125,
				0.5673828125,
				0.5732421875,
				0.57421875,
				0.57421875,
				0.5732421875,
				0.5732421875,
				0.5732421875,
				0.572265625,
				0.5732421875,
				0.572265625,
				0.5712890625,
				0.5693359375,
				0.5673828125,
				0.564453125,
				0.5595703125,
				0.556640625,
				0.5546875,
				0.5546875,
				0.5546875,
				0.5576171875,
				0.560546875,
				0.5625,
				0.56640625,
				0.5693359375,
				0.5732421875,
				0.5751953125,
				0.5732421875,
				0.5537109375,
				0.5048828125,
				0.4677734375,
				0.4228515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				49,
				48
			]
		},
		{
			"id": "-oUyrQ3pcEgdzIVKwhakX",
			"type": "freedraw",
			"x": 7270.164003459888,
			"y": 1996.803113553115,
			"width": 40,
			"height": 40,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1247669823,
			"version": 74,
			"versionNonce": 1014007121,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					-1,
					-3
				],
				[
					-2,
					-4
				],
				[
					-3,
					-5
				],
				[
					-4,
					-6
				],
				[
					-5,
					-6
				],
				[
					-5,
					-7
				],
				[
					-4,
					-8
				],
				[
					-3,
					-8
				],
				[
					-1,
					-9
				],
				[
					1,
					-10
				],
				[
					3,
					-10
				],
				[
					6,
					-11
				],
				[
					9,
					-11
				],
				[
					13,
					-12
				],
				[
					15,
					-12
				],
				[
					19,
					-12
				],
				[
					22,
					-12
				],
				[
					25,
					-12
				],
				[
					26,
					-12
				],
				[
					28,
					-11
				],
				[
					29,
					-10
				],
				[
					29,
					-9
				],
				[
					29,
					-8
				],
				[
					28,
					-6
				],
				[
					26,
					-4
				],
				[
					25,
					-3
				],
				[
					23,
					-2
				],
				[
					22,
					0
				],
				[
					21,
					1
				],
				[
					20,
					2
				],
				[
					19,
					3
				],
				[
					19,
					5
				],
				[
					20,
					5
				],
				[
					20,
					7
				],
				[
					22,
					9
				],
				[
					24,
					10
				],
				[
					25,
					11
				],
				[
					27,
					13
				],
				[
					29,
					14
				],
				[
					31,
					15
				],
				[
					31,
					16
				],
				[
					33,
					17
				],
				[
					34,
					18
				],
				[
					34,
					19
				],
				[
					35,
					20
				],
				[
					35,
					21
				],
				[
					34,
					22
				],
				[
					33,
					24
				],
				[
					31,
					25
				],
				[
					30,
					26
				],
				[
					29,
					27
				],
				[
					28,
					27
				],
				[
					25,
					28
				],
				[
					21,
					28
				],
				[
					17,
					28
				],
				[
					15,
					28
				],
				[
					11,
					28
				],
				[
					7,
					27
				],
				[
					5,
					27
				],
				[
					2,
					26
				],
				[
					2,
					26
				]
			],
			"pressures": [
				0.4560546875,
				0.486328125,
				0.53515625,
				0.5439453125,
				0.5751953125,
				0.6044921875,
				0.6279296875,
				0.63671875,
				0.640625,
				0.640625,
				0.638671875,
				0.638671875,
				0.638671875,
				0.6396484375,
				0.6396484375,
				0.640625,
				0.6416015625,
				0.6416015625,
				0.6416015625,
				0.6416015625,
				0.6455078125,
				0.6474609375,
				0.650390625,
				0.6533203125,
				0.6572265625,
				0.658203125,
				0.658203125,
				0.658203125,
				0.658203125,
				0.6591796875,
				0.66015625,
				0.66015625,
				0.66015625,
				0.66015625,
				0.658203125,
				0.6572265625,
				0.65625,
				0.6552734375,
				0.654296875,
				0.6533203125,
				0.6533203125,
				0.65625,
				0.6650390625,
				0.671875,
				0.69140625,
				0.7041015625,
				0.7294921875,
				0.755859375,
				0.767578125,
				0.7890625,
				0.8115234375,
				0.8291015625,
				0.833984375,
				0.8369140625,
				0.83984375,
				0.84375,
				0.8369140625,
				0.8134765625,
				0.796875,
				0.7490234375,
				0.67578125,
				0.626953125,
				0.5087890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2,
				26
			]
		},
		{
			"id": "zjvlp4Z0HLI3exfPo2H9W",
			"type": "freedraw",
			"x": 7549.164003459888,
			"y": 1964.803113553115,
			"width": 17,
			"height": 37,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1758483761,
			"version": 35,
			"versionNonce": 1690432575,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-2
				],
				[
					3,
					-2
				],
				[
					3,
					-1
				],
				[
					2,
					1
				],
				[
					2,
					2
				],
				[
					1,
					5
				],
				[
					0,
					8
				],
				[
					-2,
					12
				],
				[
					-2,
					14
				],
				[
					-3,
					17
				],
				[
					-4,
					21
				],
				[
					-4,
					23
				],
				[
					-4,
					26
				],
				[
					-3,
					29
				],
				[
					-2,
					30
				],
				[
					0,
					32
				],
				[
					2,
					34
				],
				[
					4,
					34
				],
				[
					7,
					35
				],
				[
					8,
					35
				],
				[
					11,
					35
				],
				[
					13,
					34
				],
				[
					13,
					34
				]
			],
			"pressures": [
				0.232421875,
				0.2587890625,
				0.32421875,
				0.4541015625,
				0.5390625,
				0.5869140625,
				0.60546875,
				0.6357421875,
				0.6591796875,
				0.673828125,
				0.6787109375,
				0.6845703125,
				0.6875,
				0.6884765625,
				0.6884765625,
				0.6884765625,
				0.6884765625,
				0.689453125,
				0.689453125,
				0.689453125,
				0.6845703125,
				0.67578125,
				0.6357421875,
				0.5966796875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				13,
				34
			]
		},
		{
			"id": "Btt08GBczjbJtS2k_6hve",
			"type": "freedraw",
			"x": 7570.164003459888,
			"y": 1970.803113553115,
			"width": 5,
			"height": 44,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 373527953,
			"version": 25,
			"versionNonce": 934654769,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					2
				],
				[
					-2,
					4
				],
				[
					-2,
					6
				],
				[
					-3,
					8
				],
				[
					-3,
					9
				],
				[
					-4,
					13
				],
				[
					-4,
					15
				],
				[
					-5,
					20
				],
				[
					-5,
					26
				],
				[
					-5,
					31
				],
				[
					-5,
					34
				],
				[
					-4,
					39
				],
				[
					-3,
					44
				],
				[
					-3,
					44
				]
			],
			"pressures": [
				0.4453125,
				0.4580078125,
				0.498046875,
				0.5244140625,
				0.546875,
				0.5556640625,
				0.591796875,
				0.607421875,
				0.62890625,
				0.638671875,
				0.630859375,
				0.619140625,
				0.57421875,
				0.4970703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-3,
				44
			]
		},
		{
			"id": "R2KCYIRDviGfmm-IAguyD",
			"type": "freedraw",
			"x": 7831.164003459888,
			"y": 1958.803113553115,
			"width": 1,
			"height": 34,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1897411729,
			"version": 24,
			"versionNonce": 236393567,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					2
				],
				[
					1,
					4
				],
				[
					1,
					6
				],
				[
					1,
					7
				],
				[
					1,
					8
				],
				[
					1,
					12
				],
				[
					1,
					14
				],
				[
					1,
					19
				],
				[
					1,
					24
				],
				[
					1,
					29
				],
				[
					1,
					32
				],
				[
					1,
					34
				],
				[
					1,
					34
				]
			],
			"pressures": [
				0.333984375,
				0.3388671875,
				0.3662109375,
				0.3896484375,
				0.3994140625,
				0.416015625,
				0.447265625,
				0.4609375,
				0.48046875,
				0.48828125,
				0.4755859375,
				0.45703125,
				0.4287109375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1,
				34
			]
		},
		{
			"id": "5kP39sqC2g9oP1ml2yLoO",
			"type": "freedraw",
			"x": 8054.164003459888,
			"y": 1933.803113553115,
			"width": 31,
			"height": 41,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1266466271,
			"version": 46,
			"versionNonce": 1373250833,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					1,
					-2
				],
				[
					2,
					-3
				],
				[
					4,
					-3
				],
				[
					5,
					-4
				],
				[
					7,
					-4
				],
				[
					8,
					-4
				],
				[
					9,
					-3
				],
				[
					10,
					-3
				],
				[
					10,
					-2
				],
				[
					11,
					-1
				],
				[
					11,
					1
				],
				[
					10,
					3
				],
				[
					9,
					7
				],
				[
					8,
					11
				],
				[
					7,
					13
				],
				[
					6,
					18
				],
				[
					5,
					20
				],
				[
					4,
					25
				],
				[
					4,
					27
				],
				[
					4,
					31
				],
				[
					4,
					34
				],
				[
					4,
					35
				],
				[
					6,
					36
				],
				[
					7,
					37
				],
				[
					10,
					37
				],
				[
					13,
					37
				],
				[
					17,
					36
				],
				[
					18,
					35
				],
				[
					22,
					34
				],
				[
					26,
					32
				],
				[
					29,
					30
				],
				[
					31,
					29
				],
				[
					31,
					29
				]
			],
			"pressures": [
				0.3740234375,
				0.390625,
				0.4345703125,
				0.4658203125,
				0.52734375,
				0.5576171875,
				0.595703125,
				0.6171875,
				0.6376953125,
				0.6669921875,
				0.6767578125,
				0.6953125,
				0.705078125,
				0.72265625,
				0.73828125,
				0.7548828125,
				0.7705078125,
				0.77734375,
				0.7890625,
				0.79296875,
				0.80078125,
				0.8037109375,
				0.8056640625,
				0.8046875,
				0.8037109375,
				0.80078125,
				0.7998046875,
				0.7919921875,
				0.78125,
				0.763671875,
				0.7509765625,
				0.712890625,
				0.6474609375,
				0.5498046875,
				0.4892578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				31,
				29
			]
		},
		{
			"id": "NNu46J12SA3CZW-Pf3j6e",
			"type": "freedraw",
			"x": 6759.164003459888,
			"y": 2090.803113553115,
			"width": 1414,
			"height": 93,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2136973649,
			"version": 64,
			"versionNonce": 1813196927,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					2,
					1
				],
				[
					4,
					1
				],
				[
					6,
					1
				],
				[
					7,
					1
				],
				[
					11,
					2
				],
				[
					16,
					2
				],
				[
					22,
					2
				],
				[
					26,
					2
				],
				[
					35,
					2
				],
				[
					46,
					2
				],
				[
					58,
					1
				],
				[
					65,
					0
				],
				[
					81,
					-1
				],
				[
					99,
					-3
				],
				[
					108,
					-4
				],
				[
					129,
					-6
				],
				[
					153,
					-9
				],
				[
					179,
					-11
				],
				[
					193,
					-13
				],
				[
					223,
					-15
				],
				[
					256,
					-18
				],
				[
					291,
					-21
				],
				[
					310,
					-23
				],
				[
					348,
					-25
				],
				[
					389,
					-27
				],
				[
					410,
					-28
				],
				[
					432,
					-29
				],
				[
					477,
					-31
				],
				[
					525,
					-32
				],
				[
					550,
					-33
				],
				[
					602,
					-34
				],
				[
					657,
					-36
				],
				[
					712,
					-38
				],
				[
					740,
					-39
				],
				[
					795,
					-41
				],
				[
					849,
					-43
				],
				[
					902,
					-45
				],
				[
					927,
					-46
				],
				[
					978,
					-49
				],
				[
					1027,
					-53
				],
				[
					1075,
					-57
				],
				[
					1122,
					-61
				],
				[
					1189,
					-68
				],
				[
					1231,
					-73
				],
				[
					1271,
					-78
				],
				[
					1307,
					-82
				],
				[
					1339,
					-85
				],
				[
					1354,
					-87
				],
				[
					1381,
					-89
				],
				[
					1393,
					-90
				],
				[
					1414,
					-91
				],
				[
					1414,
					-91
				]
			],
			"pressures": [
				0.1279296875,
				0.15625,
				0.201171875,
				0.2314453125,
				0.2666015625,
				0.28515625,
				0.326171875,
				0.3701171875,
				0.4150390625,
				0.4365234375,
				0.47265625,
				0.5,
				0.5185546875,
				0.5263671875,
				0.537109375,
				0.544921875,
				0.5478515625,
				0.5517578125,
				0.5537109375,
				0.5556640625,
				0.5556640625,
				0.556640625,
				0.5576171875,
				0.55859375,
				0.55859375,
				0.55859375,
				0.5595703125,
				0.560546875,
				0.5615234375,
				0.5654296875,
				0.568359375,
				0.5693359375,
				0.5712890625,
				0.5732421875,
				0.5732421875,
				0.572265625,
				0.572265625,
				0.5732421875,
				0.5732421875,
				0.5732421875,
				0.5732421875,
				0.5751953125,
				0.5771484375,
				0.578125,
				0.5791015625,
				0.5791015625,
				0.5751953125,
				0.564453125,
				0.54296875,
				0.5263671875,
				0.4765625,
				0.443359375,
				0.361328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1414,
				-91
			]
		},
		{
			"id": "ifZWyaB7sOuM4EppNeYsf",
			"type": "freedraw",
			"x": 6852.164003459888,
			"y": 2109.803113553115,
			"width": 4,
			"height": 34,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 718110623,
			"version": 23,
			"versionNonce": 1985305329,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					0,
					4
				],
				[
					-1,
					5
				],
				[
					-1,
					7
				],
				[
					-1,
					12
				],
				[
					-2,
					18
				],
				[
					-2,
					21
				],
				[
					-3,
					27
				],
				[
					-3,
					31
				],
				[
					-4,
					34
				],
				[
					-4,
					34
				]
			],
			"pressures": [
				0.2822265625,
				0.2978515625,
				0.3173828125,
				0.3388671875,
				0.34375,
				0.3505859375,
				0.3681640625,
				0.376953125,
				0.3779296875,
				0.3740234375,
				0.3642578125,
				0.3486328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4,
				34
			]
		},
		{
			"id": "JQzIo4XWu4XxGXG60Sib3",
			"type": "freedraw",
			"x": 6811.164003459888,
			"y": 2340.803113553115,
			"width": 10,
			"height": 26,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 686168191,
			"version": 23,
			"versionNonce": 1215744159,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					1,
					2
				],
				[
					1,
					3
				],
				[
					2,
					4
				],
				[
					2,
					6
				],
				[
					3,
					8
				],
				[
					5,
					11
				],
				[
					6,
					15
				],
				[
					8,
					20
				],
				[
					9,
					22
				],
				[
					10,
					26
				],
				[
					10,
					26
				]
			],
			"pressures": [
				0.232421875,
				0.255859375,
				0.310546875,
				0.3271484375,
				0.3369140625,
				0.3759765625,
				0.3935546875,
				0.4150390625,
				0.4296875,
				0.4375,
				0.4326171875,
				0.3994140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				26
			]
		},
		{
			"id": "FczwTsbCfO0SRfe89C2OJ",
			"type": "freedraw",
			"x": 6828.164003459888,
			"y": 2353.803113553115,
			"width": 23,
			"height": 11,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1512926559,
			"version": 22,
			"versionNonce": 900650193,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					-2
				],
				[
					-3,
					-3
				],
				[
					-5,
					-3
				],
				[
					-7,
					-3
				],
				[
					-8,
					-2
				],
				[
					-12,
					-1
				],
				[
					-15,
					1
				],
				[
					-18,
					3
				],
				[
					-20,
					5
				],
				[
					-23,
					8
				],
				[
					-23,
					8
				]
			],
			"pressures": [
				0.279296875,
				0.2939453125,
				0.3271484375,
				0.345703125,
				0.3642578125,
				0.3759765625,
				0.392578125,
				0.3984375,
				0.388671875,
				0.375,
				0.3291015625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-23,
				8
			]
		},
		{
			"id": "vW1brGMJRJHGhEwe4I64r",
			"type": "freedraw",
			"x": 7059.164003459888,
			"y": 2104.803113553115,
			"width": 4,
			"height": 27,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 25169055,
			"version": 23,
			"versionNonce": 595464881,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					3
				],
				[
					2,
					6
				],
				[
					2,
					8
				],
				[
					2,
					11
				],
				[
					3,
					16
				],
				[
					3,
					18
				],
				[
					3,
					22
				],
				[
					4,
					26
				],
				[
					4,
					26
				]
			],
			"pressures": [
				0.20703125,
				0.21484375,
				0.2412109375,
				0.4130859375,
				0.4658203125,
				0.5078125,
				0.5341796875,
				0.54296875,
				0.5546875,
				0.5576171875,
				0.5537109375,
				0.5283203125,
				0.4697265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				4,
				26
			]
		},
		{
			"id": "kF7EILZ71Fcfa_vQls4nu",
			"type": "freedraw",
			"x": 7059.164003459888,
			"y": 2201.803113553115,
			"width": 23,
			"height": 34,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1893144049,
			"version": 43,
			"versionNonce": 1764125919,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					-1,
					-1
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					1,
					-2
				],
				[
					2,
					-2
				],
				[
					3,
					-3
				],
				[
					4,
					-3
				],
				[
					5,
					-3
				],
				[
					7,
					-3
				],
				[
					8,
					-3
				],
				[
					9,
					-3
				],
				[
					10,
					-2
				],
				[
					9,
					0
				],
				[
					9,
					2
				],
				[
					8,
					5
				],
				[
					6,
					9
				],
				[
					5,
					11
				],
				[
					4,
					16
				],
				[
					3,
					20
				],
				[
					2,
					22
				],
				[
					2,
					25
				],
				[
					2,
					27
				],
				[
					3,
					28
				],
				[
					4,
					30
				],
				[
					7,
					31
				],
				[
					10,
					31
				],
				[
					11,
					31
				],
				[
					14,
					31
				],
				[
					18,
					31
				],
				[
					21,
					31
				],
				[
					22,
					31
				],
				[
					22,
					31
				]
			],
			"pressures": [
				0.2109375,
				0.21875,
				0.224609375,
				0.2490234375,
				0.3125,
				0.333984375,
				0.3740234375,
				0.3935546875,
				0.4111328125,
				0.4267578125,
				0.4677734375,
				0.4794921875,
				0.4970703125,
				0.5126953125,
				0.533203125,
				0.5400390625,
				0.5517578125,
				0.5654296875,
				0.5712890625,
				0.5830078125,
				0.5927734375,
				0.5966796875,
				0.6025390625,
				0.6064453125,
				0.6083984375,
				0.6103515625,
				0.611328125,
				0.6123046875,
				0.6103515625,
				0.59765625,
				0.5673828125,
				0.5078125,
				0.4638671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				22,
				31
			]
		},
		{
			"id": "tOl4UKHtLnzZZ_hdu0EeR",
			"type": "freedraw",
			"x": 7059.164003459888,
			"y": 2324.803113553115,
			"width": 3,
			"height": 23,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 999052223,
			"version": 19,
			"versionNonce": 1953141905,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					0,
					7
				],
				[
					1,
					10
				],
				[
					1,
					14
				],
				[
					2,
					20
				],
				[
					3,
					22
				],
				[
					3,
					23
				],
				[
					3,
					23
				]
			],
			"pressures": [
				0.2294921875,
				0.255859375,
				0.2666015625,
				0.2841796875,
				0.29296875,
				0.294921875,
				0.2763671875,
				0.259765625,
				0.23828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3,
				23
			]
		},
		{
			"id": "1wpsfPymRA0BTBJ0BAQaP",
			"type": "freedraw",
			"x": 7074.164003459888,
			"y": 2336.803113553115,
			"width": 18,
			"height": 6,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1001430289,
			"version": 19,
			"versionNonce": 1285781759,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					-1
				],
				[
					-4,
					-1
				],
				[
					-5,
					-1
				],
				[
					-7,
					0
				],
				[
					-10,
					1
				],
				[
					-12,
					1
				],
				[
					-16,
					4
				],
				[
					-18,
					5
				],
				[
					-18,
					5
				]
			],
			"pressures": [
				0.1142578125,
				0.1162109375,
				0.1357421875,
				0.1435546875,
				0.1484375,
				0.15625,
				0.1611328125,
				0.1611328125,
				0.154296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-18,
				5
			]
		},
		{
			"id": "jRa1S8zTfR1P0S-ewzUfB",
			"type": "freedraw",
			"x": 7283.164003459888,
			"y": 2076.803113553115,
			"width": 1,
			"height": 27,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 850528543,
			"version": 23,
			"versionNonce": 1546377841,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					1,
					3
				],
				[
					1,
					5
				],
				[
					1,
					6
				],
				[
					1,
					9
				],
				[
					1,
					13
				],
				[
					1,
					18
				],
				[
					1,
					20
				],
				[
					1,
					25
				],
				[
					1,
					27
				],
				[
					1,
					27
				]
			],
			"pressures": [
				0.15234375,
				0.3525390625,
				0.384765625,
				0.4453125,
				0.4697265625,
				0.5048828125,
				0.5146484375,
				0.5283203125,
				0.5322265625,
				0.51953125,
				0.5068359375,
				0.466796875,
				0.4365234375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1,
				27
			]
		},
		{
			"id": "B_VBv_mwmyANHVi5esvGT",
			"type": "freedraw",
			"x": 7282.164003459888,
			"y": 2148.803113553115,
			"width": 17,
			"height": 33,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 681120113,
			"version": 48,
			"versionNonce": 820642079,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-2,
					-1
				],
				[
					-1,
					-1
				],
				[
					-1,
					-2
				],
				[
					0,
					-2
				],
				[
					1,
					-3
				],
				[
					2,
					-3
				],
				[
					4,
					-4
				],
				[
					5,
					-4
				],
				[
					7,
					-5
				],
				[
					9,
					-5
				],
				[
					10,
					-5
				],
				[
					12,
					-5
				],
				[
					13,
					-5
				],
				[
					14,
					-4
				],
				[
					14,
					-3
				],
				[
					14,
					-1
				],
				[
					13,
					2
				],
				[
					12,
					5
				],
				[
					11,
					7
				],
				[
					10,
					11
				],
				[
					8,
					15
				],
				[
					6,
					18
				],
				[
					5,
					20
				],
				[
					4,
					22
				],
				[
					4,
					24
				],
				[
					3,
					25
				],
				[
					3,
					26
				],
				[
					4,
					27
				],
				[
					5,
					27
				],
				[
					5,
					28
				],
				[
					7,
					28
				],
				[
					9,
					28
				],
				[
					11,
					28
				],
				[
					12,
					28
				],
				[
					14,
					28
				],
				[
					15,
					28
				],
				[
					15,
					28
				]
			],
			"pressures": [
				0.109375,
				0.1357421875,
				0.287109375,
				0.3046875,
				0.396484375,
				0.4150390625,
				0.4462890625,
				0.4580078125,
				0.4873046875,
				0.4951171875,
				0.505859375,
				0.515625,
				0.521484375,
				0.533203125,
				0.5439453125,
				0.552734375,
				0.556640625,
				0.564453125,
				0.5732421875,
				0.5830078125,
				0.587890625,
				0.599609375,
				0.611328125,
				0.6201171875,
				0.6240234375,
				0.62890625,
				0.630859375,
				0.6328125,
				0.6328125,
				0.6337890625,
				0.634765625,
				0.634765625,
				0.634765625,
				0.6298828125,
				0.6103515625,
				0.5927734375,
				0.53515625,
				0.4921875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				15,
				28
			]
		},
		{
			"id": "DKDKf4EIIhGLtBRrM4-DJ",
			"type": "freedraw",
			"x": 7277.164003459888,
			"y": 2241.803113553115,
			"width": 21,
			"height": 34,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1726467825,
			"version": 60,
			"versionNonce": 730424401,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-3
				],
				[
					0,
					-4
				],
				[
					0,
					-5
				],
				[
					1,
					-6
				],
				[
					1,
					-8
				],
				[
					1,
					-9
				],
				[
					1,
					-10
				],
				[
					2,
					-11
				],
				[
					2,
					-12
				],
				[
					3,
					-13
				],
				[
					4,
					-14
				],
				[
					5,
					-14
				],
				[
					6,
					-14
				],
				[
					7,
					-14
				],
				[
					8,
					-13
				],
				[
					9,
					-13
				],
				[
					9,
					-12
				],
				[
					10,
					-12
				],
				[
					10,
					-11
				],
				[
					10,
					-10
				],
				[
					10,
					-9
				],
				[
					9,
					-7
				],
				[
					8,
					-6
				],
				[
					8,
					-5
				],
				[
					7,
					-4
				],
				[
					7,
					-3
				],
				[
					7,
					-2
				],
				[
					7,
					0
				],
				[
					8,
					1
				],
				[
					8,
					2
				],
				[
					10,
					3
				],
				[
					11,
					5
				],
				[
					12,
					5
				],
				[
					15,
					6
				],
				[
					16,
					7
				],
				[
					18,
					8
				],
				[
					19,
					8
				],
				[
					20,
					9
				],
				[
					21,
					10
				],
				[
					20,
					11
				],
				[
					20,
					12
				],
				[
					18,
					13
				],
				[
					16,
					14
				],
				[
					15,
					15
				],
				[
					13,
					16
				],
				[
					10,
					18
				],
				[
					7,
					19
				],
				[
					6,
					20
				],
				[
					6,
					20
				]
			],
			"pressures": [
				0.2509765625,
				0.259765625,
				0.32421875,
				0.3603515625,
				0.3896484375,
				0.4306640625,
				0.4814453125,
				0.501953125,
				0.5322265625,
				0.5439453125,
				0.5615234375,
				0.572265625,
				0.5830078125,
				0.5869140625,
				0.58984375,
				0.58984375,
				0.5908203125,
				0.591796875,
				0.5927734375,
				0.5927734375,
				0.595703125,
				0.6005859375,
				0.603515625,
				0.60546875,
				0.6064453125,
				0.6064453125,
				0.6064453125,
				0.6064453125,
				0.607421875,
				0.6083984375,
				0.609375,
				0.609375,
				0.609375,
				0.609375,
				0.6103515625,
				0.615234375,
				0.62890625,
				0.6494140625,
				0.6630859375,
				0.677734375,
				0.720703125,
				0.7509765625,
				0.759765625,
				0.763671875,
				0.76171875,
				0.7578125,
				0.740234375,
				0.703125,
				0.630859375,
				0.5771484375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				20
			]
		},
		{
			"id": "0XiXLP1a7EWAuGromP-LV",
			"type": "freedraw",
			"x": 7277.164003459888,
			"y": 2300.803113553115,
			"width": 9,
			"height": 25,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1558381489,
			"version": 21,
			"versionNonce": 929727807,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					2,
					3
				],
				[
					2,
					4
				],
				[
					3,
					6
				],
				[
					4,
					10
				],
				[
					6,
					14
				],
				[
					6,
					16
				],
				[
					8,
					21
				],
				[
					9,
					25
				],
				[
					9,
					25
				]
			],
			"pressures": [
				0.29296875,
				0.3095703125,
				0.337890625,
				0.359375,
				0.3681640625,
				0.3701171875,
				0.3828125,
				0.3837890625,
				0.3818359375,
				0.361328125,
				0.3193359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9,
				25
			]
		},
		{
			"id": "RUEHb4fscNWp1hTrqKPGz",
			"type": "freedraw",
			"x": 7298.164003459888,
			"y": 2308.803113553115,
			"width": 34,
			"height": 24,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 710432927,
			"version": 24,
			"versionNonce": 777695793,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-2
				],
				[
					-3,
					-2
				],
				[
					-5,
					-3
				],
				[
					-7,
					-2
				],
				[
					-8,
					-2
				],
				[
					-11,
					-1
				],
				[
					-15,
					1
				],
				[
					-19,
					4
				],
				[
					-22,
					6
				],
				[
					-26,
					10
				],
				[
					-29,
					15
				],
				[
					-31,
					17
				],
				[
					-34,
					21
				],
				[
					-34,
					21
				]
			],
			"pressures": [
				0.2255859375,
				0.25,
				0.2841796875,
				0.3359375,
				0.359375,
				0.3671875,
				0.40625,
				0.431640625,
				0.44140625,
				0.443359375,
				0.4443359375,
				0.439453125,
				0.4306640625,
				0.390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-34,
				21
			]
		},
		{
			"id": "QUTPV9zxOjphQnzZcA-jH",
			"type": "freedraw",
			"x": 7542.164003459888,
			"y": 2065.803113553115,
			"width": 6,
			"height": 52,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1995270111,
			"version": 30,
			"versionNonce": 1233601553,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-2
				],
				[
					2,
					-3
				],
				[
					3,
					-3
				],
				[
					4,
					-3
				],
				[
					4,
					-2
				],
				[
					4,
					-1
				],
				[
					5,
					1
				],
				[
					5,
					4
				],
				[
					5,
					8
				],
				[
					5,
					10
				],
				[
					6,
					15
				],
				[
					6,
					20
				],
				[
					6,
					25
				],
				[
					6,
					27
				],
				[
					6,
					32
				],
				[
					6,
					37
				],
				[
					6,
					40
				],
				[
					6,
					45
				],
				[
					6,
					49
				],
				[
					6,
					49
				]
			],
			"pressures": [
				0.0888671875,
				0.1015625,
				0.1376953125,
				0.16796875,
				0.1962890625,
				0.287109375,
				0.3544921875,
				0.423828125,
				0.486328125,
				0.5322265625,
				0.5634765625,
				0.57421875,
				0.5888671875,
				0.595703125,
				0.59765625,
				0.5966796875,
				0.5859375,
				0.5634765625,
				0.546875,
				0.5009765625,
				0.431640625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				49
			]
		},
		{
			"id": "BvB6-JFuGx9aYb5zkVbGB",
			"type": "freedraw",
			"x": 7546.164003459888,
			"y": 2153.803113553115,
			"width": 23,
			"height": 40,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 548800049,
			"version": 47,
			"versionNonce": 1753973119,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-1,
					1
				],
				[
					-1,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-2
				],
				[
					3,
					-3
				],
				[
					4,
					-4
				],
				[
					6,
					-5
				],
				[
					7,
					-6
				],
				[
					8,
					-5
				],
				[
					9,
					-4
				],
				[
					9,
					-2
				],
				[
					9,
					1
				],
				[
					8,
					5
				],
				[
					8,
					7
				],
				[
					8,
					11
				],
				[
					7,
					14
				],
				[
					6,
					16
				],
				[
					6,
					20
				],
				[
					6,
					21
				],
				[
					5,
					24
				],
				[
					5,
					26
				],
				[
					6,
					27
				],
				[
					6,
					28
				],
				[
					7,
					29
				],
				[
					7,
					30
				],
				[
					8,
					31
				],
				[
					9,
					31
				],
				[
					10,
					32
				],
				[
					11,
					32
				],
				[
					13,
					33
				],
				[
					14,
					33
				],
				[
					15,
					33
				],
				[
					17,
					33
				],
				[
					19,
					33
				],
				[
					20,
					33
				],
				[
					22,
					34
				],
				[
					22,
					34
				]
			],
			"pressures": [
				0.263671875,
				0.279296875,
				0.328125,
				0.341796875,
				0.4404296875,
				0.486328125,
				0.51171875,
				0.5283203125,
				0.5419921875,
				0.5546875,
				0.560546875,
				0.578125,
				0.591796875,
				0.5966796875,
				0.599609375,
				0.6005859375,
				0.6005859375,
				0.5986328125,
				0.59765625,
				0.595703125,
				0.5947265625,
				0.59375,
				0.59375,
				0.59375,
				0.5947265625,
				0.595703125,
				0.595703125,
				0.595703125,
				0.59765625,
				0.5986328125,
				0.599609375,
				0.599609375,
				0.5986328125,
				0.591796875,
				0.5849609375,
				0.556640625,
				0.5341796875,
				0.42578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				22,
				34
			]
		},
		{
			"id": "rjfyMBDoF4b0JOAzC8Ey2",
			"type": "freedraw",
			"x": 7548.164003459888,
			"y": 2231.803113553115,
			"width": 29,
			"height": 41,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1466098609,
			"version": 55,
			"versionNonce": 1493604849,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					0,
					-2
				],
				[
					0,
					-3
				],
				[
					1,
					-3
				],
				[
					4,
					-2
				],
				[
					8,
					0
				],
				[
					9,
					1
				],
				[
					10,
					1
				],
				[
					11,
					2
				],
				[
					12,
					3
				],
				[
					12,
					5
				],
				[
					13,
					5
				],
				[
					12,
					7
				],
				[
					12,
					9
				],
				[
					12,
					10
				],
				[
					11,
					12
				],
				[
					9,
					14
				],
				[
					9,
					15
				],
				[
					8,
					16
				],
				[
					7,
					18
				],
				[
					6,
					19
				],
				[
					7,
					20
				],
				[
					8,
					21
				],
				[
					9,
					22
				],
				[
					10,
					22
				],
				[
					11,
					23
				],
				[
					13,
					24
				],
				[
					14,
					26
				],
				[
					14,
					27
				],
				[
					15,
					28
				],
				[
					15,
					30
				],
				[
					16,
					32
				],
				[
					15,
					33
				],
				[
					15,
					34
				],
				[
					14,
					36
				],
				[
					12,
					37
				],
				[
					12,
					38
				],
				[
					10,
					38
				],
				[
					8,
					38
				],
				[
					4,
					38
				],
				[
					3,
					38
				],
				[
					-1,
					37
				],
				[
					-6,
					35
				],
				[
					-10,
					33
				],
				[
					-13,
					32
				],
				[
					-13,
					32
				]
			],
			"pressures": [
				0.228515625,
				0.2529296875,
				0.3671875,
				0.455078125,
				0.51171875,
				0.521484375,
				0.5244140625,
				0.5244140625,
				0.525390625,
				0.5263671875,
				0.52734375,
				0.5283203125,
				0.5283203125,
				0.5302734375,
				0.53125,
				0.5322265625,
				0.53125,
				0.533203125,
				0.53515625,
				0.5361328125,
				0.537109375,
				0.5390625,
				0.53515625,
				0.5400390625,
				0.5498046875,
				0.556640625,
				0.56640625,
				0.599609375,
				0.6259765625,
				0.640625,
				0.66796875,
				0.693359375,
				0.7177734375,
				0.728515625,
				0.748046875,
				0.765625,
				0.7841796875,
				0.7880859375,
				0.794921875,
				0.7939453125,
				0.78125,
				0.7705078125,
				0.7373046875,
				0.681640625,
				0.5966796875,
				0.54296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-13,
				32
			]
		},
		{
			"id": "bJwNWjrli-Zzm33V_cdTm",
			"type": "freedraw",
			"x": 7468.164003459888,
			"y": 2070.803113553115,
			"width": 3,
			"height": 39,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1769693361,
			"version": 35,
			"versionNonce": 331151775,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					3,
					-1
				],
				[
					3,
					0
				],
				[
					2,
					0
				],
				[
					2,
					1
				],
				[
					2,
					2
				],
				[
					2,
					3
				],
				[
					1,
					3
				],
				[
					1,
					4
				],
				[
					1,
					5
				],
				[
					1,
					6
				],
				[
					1,
					7
				],
				[
					1,
					9
				],
				[
					1,
					12
				],
				[
					1,
					14
				],
				[
					1,
					16
				],
				[
					2,
					19
				],
				[
					1,
					23
				],
				[
					1,
					26
				],
				[
					1,
					28
				],
				[
					1,
					31
				],
				[
					0,
					34
				],
				[
					0,
					37
				],
				[
					0,
					38
				],
				[
					0,
					38
				]
			],
			"pressures": [
				0.15234375,
				0.1611328125,
				0.2783203125,
				0.365234375,
				0.490234375,
				0.494140625,
				0.4951171875,
				0.49609375,
				0.4951171875,
				0.49609375,
				0.5029296875,
				0.53515625,
				0.5400390625,
				0.54296875,
				0.5498046875,
				0.556640625,
				0.5625,
				0.5654296875,
				0.5712890625,
				0.576171875,
				0.578125,
				0.578125,
				0.572265625,
				0.5478515625,
				0.494140625,
				0.4560546875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				0,
				38
			]
		},
		{
			"id": "RINA0tfONvhNTyHEnUWib",
			"type": "freedraw",
			"x": 7467.164003459888,
			"y": 2055.803113553115,
			"width": 54,
			"height": 66,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 205891313,
			"version": 51,
			"versionNonce": 1306538961,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-2
				],
				[
					-2,
					-2
				],
				[
					-3,
					-2
				],
				[
					-5,
					-2
				],
				[
					-7,
					-1
				],
				[
					-9,
					0
				],
				[
					-12,
					3
				],
				[
					-15,
					6
				],
				[
					-17,
					8
				],
				[
					-21,
					15
				],
				[
					-23,
					21
				],
				[
					-25,
					27
				],
				[
					-26,
					34
				],
				[
					-26,
					37
				],
				[
					-26,
					40
				],
				[
					-25,
					46
				],
				[
					-24,
					51
				],
				[
					-23,
					54
				],
				[
					-20,
					58
				],
				[
					-16,
					61
				],
				[
					-12,
					63
				],
				[
					-9,
					64
				],
				[
					-4,
					64
				],
				[
					1,
					63
				],
				[
					6,
					61
				],
				[
					9,
					59
				],
				[
					14,
					55
				],
				[
					18,
					51
				],
				[
					22,
					45
				],
				[
					24,
					42
				],
				[
					25,
					39
				],
				[
					27,
					32
				],
				[
					28,
					26
				],
				[
					27,
					20
				],
				[
					26,
					17
				],
				[
					24,
					12
				],
				[
					21,
					8
				],
				[
					18,
					5
				],
				[
					16,
					4
				],
				[
					13,
					3
				],
				[
					11,
					2
				],
				[
					11,
					2
				]
			],
			"pressures": [
				0.1748046875,
				0.1884765625,
				0.21484375,
				0.2431640625,
				0.2939453125,
				0.3388671875,
				0.37890625,
				0.416015625,
				0.44921875,
				0.4599609375,
				0.4794921875,
				0.4873046875,
				0.490234375,
				0.4921875,
				0.494140625,
				0.49609375,
				0.5009765625,
				0.505859375,
				0.5068359375,
				0.509765625,
				0.5126953125,
				0.515625,
				0.517578125,
				0.521484375,
				0.5283203125,
				0.53515625,
				0.5390625,
				0.5478515625,
				0.5546875,
				0.560546875,
				0.5634765625,
				0.5654296875,
				0.5693359375,
				0.5712890625,
				0.5712890625,
				0.572265625,
				0.5703125,
				0.5615234375,
				0.541015625,
				0.5244140625,
				0.47265625,
				0.4365234375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11,
				2
			]
		},
		{
			"id": "s127BjEKJ_qalQuOlxb1T",
			"type": "freedraw",
			"x": 7526.164003459888,
			"y": 2069.803113553115,
			"width": 53,
			"height": 29,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1615264817,
			"version": 39,
			"versionNonce": 642411967,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626173,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					3
				],
				[
					1,
					5
				],
				[
					1,
					6
				],
				[
					1,
					8
				],
				[
					1,
					11
				],
				[
					1,
					15
				],
				[
					1,
					16
				],
				[
					1,
					20
				],
				[
					1,
					22
				],
				[
					1,
					24
				],
				[
					3,
					26
				],
				[
					4,
					27
				],
				[
					7,
					28
				],
				[
					8,
					29
				],
				[
					12,
					29
				],
				[
					16,
					28
				],
				[
					21,
					27
				],
				[
					24,
					26
				],
				[
					29,
					25
				],
				[
					32,
					24
				],
				[
					37,
					23
				],
				[
					42,
					21
				],
				[
					45,
					21
				],
				[
					47,
					20
				],
				[
					50,
					20
				],
				[
					52,
					20
				],
				[
					53,
					20
				],
				[
					53,
					20
				]
			],
			"pressures": [
				0.12109375,
				0.2548828125,
				0.322265625,
				0.3720703125,
				0.40234375,
				0.4169921875,
				0.4453125,
				0.4716796875,
				0.4931640625,
				0.501953125,
				0.51953125,
				0.533203125,
				0.5390625,
				0.552734375,
				0.5654296875,
				0.580078125,
				0.5869140625,
				0.599609375,
				0.609375,
				0.615234375,
				0.6171875,
				0.619140625,
				0.6201171875,
				0.6220703125,
				0.62109375,
				0.6142578125,
				0.6064453125,
				0.578125,
				0.5263671875,
				0.4443359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				53,
				20
			]
		},
		{
			"id": "M4ftVcVR_I15HQZhRrxdq",
			"type": "freedraw",
			"x": 7509.164003459888,
			"y": 2338.803113553115,
			"width": 9,
			"height": 15,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 959445553,
			"version": 21,
			"versionNonce": 204181937,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					2,
					-1
				],
				[
					3,
					0
				],
				[
					4,
					0
				],
				[
					5,
					1
				],
				[
					6,
					3
				],
				[
					7,
					5
				],
				[
					8,
					6
				],
				[
					8,
					9
				],
				[
					9,
					12
				],
				[
					9,
					14
				],
				[
					9,
					14
				]
			],
			"pressures": [
				0.189453125,
				0.1904296875,
				0.2373046875,
				0.271484375,
				0.3076171875,
				0.3701171875,
				0.396484375,
				0.4140625,
				0.4150390625,
				0.396484375,
				0.3525390625,
				0.3232421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				9,
				14
			]
		},
		{
			"id": "0gt4rgkXr5R68URgIEK12",
			"type": "freedraw",
			"x": 7527.164003459888,
			"y": 2344.803113553115,
			"width": 15,
			"height": 8,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 833194833,
			"version": 19,
			"versionNonce": 1263820255,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					-1
				],
				[
					-3,
					-1
				],
				[
					-4,
					0
				],
				[
					-5,
					0
				],
				[
					-6,
					1
				],
				[
					-8,
					1
				],
				[
					-11,
					3
				],
				[
					-12,
					4
				],
				[
					-15,
					7
				],
				[
					-15,
					7
				]
			],
			"pressures": [
				0.142578125,
				0.146484375,
				0.1591796875,
				0.16796875,
				0.1708984375,
				0.1767578125,
				0.181640625,
				0.19140625,
				0.193359375,
				0.1884765625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-15,
				7
			]
		},
		{
			"id": "blN0gfUMHduAwxer2V76x",
			"type": "freedraw",
			"x": 7833.164003459888,
			"y": 2053.803113553115,
			"width": 18,
			"height": 39,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1755781777,
			"version": 35,
			"versionNonce": 152056721,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					0,
					3
				],
				[
					0,
					6
				],
				[
					-1,
					8
				],
				[
					-2,
					11
				],
				[
					-3,
					15
				],
				[
					-4,
					19
				],
				[
					-5,
					21
				],
				[
					-6,
					25
				],
				[
					-7,
					28
				],
				[
					-7,
					31
				],
				[
					-7,
					32
				],
				[
					-7,
					34
				],
				[
					-6,
					36
				],
				[
					-5,
					36
				],
				[
					-4,
					37
				],
				[
					-1,
					38
				],
				[
					1,
					38
				],
				[
					3,
					38
				],
				[
					6,
					37
				],
				[
					8,
					36
				],
				[
					11,
					35
				],
				[
					11,
					35
				]
			],
			"pressures": [
				0.048828125,
				0.1005859375,
				0.123046875,
				0.4287109375,
				0.4638671875,
				0.490234375,
				0.5107421875,
				0.5185546875,
				0.5361328125,
				0.55078125,
				0.564453125,
				0.5712890625,
				0.58203125,
				0.5908203125,
				0.5966796875,
				0.59765625,
				0.6005859375,
				0.6025390625,
				0.6044921875,
				0.6064453125,
				0.6083984375,
				0.6103515625,
				0.611328125,
				0.6044921875,
				0.5771484375,
				0.513671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11,
				35
			]
		},
		{
			"id": "Mo2-e3yguoCzNxy7mteJn",
			"type": "freedraw",
			"x": 7848.164003459888,
			"y": 2061.803113553115,
			"width": 10,
			"height": 43,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1564252369,
			"version": 25,
			"versionNonce": 1978354175,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					1
				],
				[
					-3,
					2
				],
				[
					-4,
					4
				],
				[
					-5,
					5
				],
				[
					-5,
					6
				],
				[
					-7,
					9
				],
				[
					-8,
					12
				],
				[
					-9,
					16
				],
				[
					-9,
					18
				],
				[
					-9,
					23
				],
				[
					-10,
					28
				],
				[
					-10,
					30
				],
				[
					-9,
					35
				],
				[
					-9,
					40
				],
				[
					-9,
					43
				],
				[
					-9,
					43
				]
			],
			"pressures": [
				0.3828125,
				0.392578125,
				0.4306640625,
				0.470703125,
				0.4892578125,
				0.498046875,
				0.533203125,
				0.55859375,
				0.5732421875,
				0.578125,
				0.5849609375,
				0.583984375,
				0.578125,
				0.548828125,
				0.4912109375,
				0.4501953125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-9,
				43
			]
		},
		{
			"id": "3lUL0bztMAnPCcv5EFwOI",
			"type": "freedraw",
			"x": 7852.164003459888,
			"y": 2158.803113553115,
			"width": 2,
			"height": 29,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1222432177,
			"version": 24,
			"versionNonce": 684038513,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					-1,
					2
				],
				[
					-1,
					3
				],
				[
					-1,
					4
				],
				[
					-1,
					6
				],
				[
					0,
					9
				],
				[
					0,
					13
				],
				[
					0,
					14
				],
				[
					0,
					18
				],
				[
					0,
					19
				],
				[
					0,
					22
				],
				[
					1,
					24
				],
				[
					1,
					27
				],
				[
					1,
					29
				],
				[
					1,
					29
				]
			],
			"pressures": [
				0.2177734375,
				0.2734375,
				0.31640625,
				0.353515625,
				0.376953125,
				0.4208984375,
				0.453125,
				0.4736328125,
				0.4814453125,
				0.4921875,
				0.49609375,
				0.4853515625,
				0.470703125,
				0.421875,
				0.3505859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				1,
				29
			]
		},
		{
			"id": "77ctKFgvrqLs3zOcaFbEh",
			"type": "freedraw",
			"x": 7759.164003459888,
			"y": 2161.803113553115,
			"width": 12,
			"height": 35,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1861896927,
			"version": 45,
			"versionNonce": 1661973023,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					2,
					-2
				],
				[
					3,
					-2
				],
				[
					5,
					-2
				],
				[
					6,
					-3
				],
				[
					7,
					-3
				],
				[
					8,
					-3
				],
				[
					9,
					-2
				],
				[
					10,
					-1
				],
				[
					11,
					1
				],
				[
					11,
					3
				],
				[
					11,
					5
				],
				[
					10,
					8
				],
				[
					9,
					11
				],
				[
					7,
					15
				],
				[
					7,
					16
				],
				[
					5,
					20
				],
				[
					4,
					23
				],
				[
					3,
					25
				],
				[
					3,
					26
				],
				[
					2,
					28
				],
				[
					2,
					29
				],
				[
					2,
					30
				],
				[
					3,
					30
				],
				[
					4,
					31
				],
				[
					5,
					32
				],
				[
					6,
					32
				],
				[
					7,
					32
				],
				[
					8,
					31
				],
				[
					10,
					31
				],
				[
					12,
					30
				],
				[
					12,
					30
				]
			],
			"pressures": [
				0.0439453125,
				0.076171875,
				0.1669921875,
				0.2578125,
				0.28125,
				0.314453125,
				0.322265625,
				0.3291015625,
				0.3466796875,
				0.35546875,
				0.3603515625,
				0.3642578125,
				0.375,
				0.3837890625,
				0.3984375,
				0.408203125,
				0.41015625,
				0.4111328125,
				0.4130859375,
				0.4150390625,
				0.4150390625,
				0.4140625,
				0.41796875,
				0.4248046875,
				0.4287109375,
				0.43359375,
				0.4345703125,
				0.4345703125,
				0.4345703125,
				0.43359375,
				0.4306640625,
				0.4296875,
				0.427734375,
				0.4248046875,
				0.4013671875,
				0.3515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				12,
				30
			]
		},
		{
			"id": "iKXrqzQSB3bQn9rcIBtjz",
			"type": "freedraw",
			"x": 7774.164003459888,
			"y": 2139.803113553115,
			"width": 50,
			"height": 71,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2035631423,
			"version": 49,
			"versionNonce": 1553154897,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					-2
				],
				[
					-4,
					-2
				],
				[
					-5,
					-2
				],
				[
					-6,
					-2
				],
				[
					-8,
					-2
				],
				[
					-11,
					-2
				],
				[
					-12,
					-1
				],
				[
					-16,
					1
				],
				[
					-19,
					3
				],
				[
					-22,
					6
				],
				[
					-23,
					8
				],
				[
					-26,
					13
				],
				[
					-27,
					19
				],
				[
					-27,
					25
				],
				[
					-27,
					37
				],
				[
					-25,
					45
				],
				[
					-21,
					55
				],
				[
					-17,
					61
				],
				[
					-13,
					65
				],
				[
					-8,
					67
				],
				[
					-6,
					68
				],
				[
					0,
					69
				],
				[
					4,
					68
				],
				[
					7,
					67
				],
				[
					12,
					65
				],
				[
					17,
					60
				],
				[
					19,
					58
				],
				[
					20,
					56
				],
				[
					22,
					52
				],
				[
					23,
					48
				],
				[
					23,
					46
				],
				[
					22,
					41
				],
				[
					21,
					37
				],
				[
					19,
					32
				],
				[
					17,
					30
				],
				[
					14,
					26
				],
				[
					11,
					23
				],
				[
					8,
					21
				],
				[
					6,
					20
				],
				[
					6,
					20
				]
			],
			"pressures": [
				0.0947265625,
				0.1123046875,
				0.1416015625,
				0.1611328125,
				0.171875,
				0.1943359375,
				0.240234375,
				0.263671875,
				0.3125,
				0.36328125,
				0.4111328125,
				0.4326171875,
				0.470703125,
				0.501953125,
				0.5244140625,
				0.5439453125,
				0.55078125,
				0.556640625,
				0.55859375,
				0.5615234375,
				0.564453125,
				0.56640625,
				0.5712890625,
				0.576171875,
				0.578125,
				0.583984375,
				0.591796875,
				0.59375,
				0.5947265625,
				0.595703125,
				0.5966796875,
				0.59765625,
				0.5966796875,
				0.5927734375,
				0.5849609375,
				0.578125,
				0.5556640625,
				0.515625,
				0.451171875,
				0.4091796875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				20
			]
		},
		{
			"id": "ocH7dfL0ejuzqbd8AYIWu",
			"type": "freedraw",
			"x": 7857.164003459888,
			"y": 2246.803113553115,
			"width": 21,
			"height": 46,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1159725023,
			"version": 66,
			"versionNonce": 1538397759,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-3,
					-2
				],
				[
					-4,
					-3
				],
				[
					-4,
					-4
				],
				[
					-5,
					-4
				],
				[
					-6,
					-5
				],
				[
					-7,
					-6
				],
				[
					-8,
					-7
				],
				[
					-7,
					-7
				],
				[
					-6,
					-6
				],
				[
					-5,
					-6
				],
				[
					-3,
					-6
				],
				[
					-3,
					-5
				],
				[
					-1,
					-5
				],
				[
					0,
					-4
				],
				[
					1,
					-4
				],
				[
					2,
					-3
				],
				[
					3,
					-2
				],
				[
					4,
					-1
				],
				[
					4,
					0
				],
				[
					4,
					1
				],
				[
					3,
					3
				],
				[
					2,
					5
				],
				[
					2,
					6
				],
				[
					0,
					7
				],
				[
					0,
					8
				],
				[
					-1,
					10
				],
				[
					-3,
					11
				],
				[
					-3,
					12
				],
				[
					-4,
					13
				],
				[
					-4,
					14
				],
				[
					-4,
					15
				],
				[
					-4,
					16
				],
				[
					-3,
					17
				],
				[
					-2,
					18
				],
				[
					-1,
					20
				],
				[
					1,
					21
				],
				[
					2,
					22
				],
				[
					4,
					24
				],
				[
					5,
					25
				],
				[
					6,
					26
				],
				[
					8,
					28
				],
				[
					9,
					29
				],
				[
					10,
					30
				],
				[
					10,
					31
				],
				[
					10,
					32
				],
				[
					10,
					34
				],
				[
					9,
					35
				],
				[
					8,
					35
				],
				[
					7,
					36
				],
				[
					6,
					37
				],
				[
					3,
					38
				],
				[
					1,
					38
				],
				[
					-1,
					39
				],
				[
					-4,
					39
				],
				[
					-8,
					39
				],
				[
					-11,
					39
				],
				[
					-11,
					39
				]
			],
			"pressures": [
				0.31640625,
				0.341796875,
				0.375,
				0.3857421875,
				0.39453125,
				0.423828125,
				0.4501953125,
				0.4755859375,
				0.4853515625,
				0.490234375,
				0.4951171875,
				0.5,
				0.501953125,
				0.5048828125,
				0.5068359375,
				0.5126953125,
				0.5166015625,
				0.5244140625,
				0.53515625,
				0.5390625,
				0.54296875,
				0.552734375,
				0.55859375,
				0.5615234375,
				0.5673828125,
				0.5693359375,
				0.572265625,
				0.57421875,
				0.5751953125,
				0.5751953125,
				0.57421875,
				0.5732421875,
				0.572265625,
				0.5712890625,
				0.5712890625,
				0.572265625,
				0.572265625,
				0.572265625,
				0.576171875,
				0.5859375,
				0.59375,
				0.6142578125,
				0.6416015625,
				0.6708984375,
				0.68359375,
				0.6962890625,
				0.7216796875,
				0.7294921875,
				0.7333984375,
				0.7373046875,
				0.73828125,
				0.7353515625,
				0.7255859375,
				0.7158203125,
				0.6826171875,
				0.625,
				0.533203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-11,
				39
			]
		},
		{
			"id": "3eQoUWkQLqYUSp2KGyCFu",
			"type": "freedraw",
			"x": 7828.164003459888,
			"y": 2324.803113553115,
			"width": 10,
			"height": 12,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 2036618225,
			"version": 21,
			"versionNonce": 13676849,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					2,
					0
				],
				[
					3,
					0
				],
				[
					3,
					1
				],
				[
					4,
					2
				],
				[
					4,
					3
				],
				[
					5,
					5
				],
				[
					6,
					6
				],
				[
					7,
					9
				],
				[
					8,
					10
				],
				[
					10,
					12
				],
				[
					10,
					12
				]
			],
			"pressures": [
				0.1982421875,
				0.2001953125,
				0.220703125,
				0.2626953125,
				0.271484375,
				0.3017578125,
				0.31640625,
				0.337890625,
				0.3466796875,
				0.3583984375,
				0.3583984375,
				0.3359375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				12
			]
		},
		{
			"id": "uqu_8rb0nlfGaX_kFr1FI",
			"type": "freedraw",
			"x": 7852.164003459888,
			"y": 2325.803113553115,
			"width": 17,
			"height": 12,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 987258129,
			"version": 17,
			"versionNonce": 917698143,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-3,
					0
				],
				[
					-4,
					1
				],
				[
					-6,
					2
				],
				[
					-8,
					4
				],
				[
					-9,
					5
				],
				[
					-13,
					8
				],
				[
					-17,
					12
				],
				[
					-17,
					12
				]
			],
			"pressures": [
				0.2421875,
				0.2529296875,
				0.263671875,
				0.2724609375,
				0.27734375,
				0.2783203125,
				0.2841796875,
				0.271484375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-17,
				12
			]
		},
		{
			"id": "Z7ZG6qzuez2OJqS4YUuLV",
			"type": "freedraw",
			"x": 8094.164003459888,
			"y": 2027.803113553115,
			"width": 16,
			"height": 39,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1195840113,
			"version": 32,
			"versionNonce": 2061853457,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					0,
					3
				],
				[
					-1,
					5
				],
				[
					-1,
					6
				],
				[
					-2,
					10
				],
				[
					-3,
					12
				],
				[
					-4,
					16
				],
				[
					-4,
					18
				],
				[
					-5,
					23
				],
				[
					-6,
					27
				],
				[
					-6,
					31
				],
				[
					-6,
					34
				],
				[
					-5,
					35
				],
				[
					-4,
					37
				],
				[
					-3,
					39
				],
				[
					-2,
					39
				],
				[
					1,
					39
				],
				[
					3,
					39
				],
				[
					6,
					38
				],
				[
					7,
					38
				],
				[
					10,
					36
				],
				[
					10,
					36
				]
			],
			"pressures": [
				0.15625,
				0.1640625,
				0.3681640625,
				0.4443359375,
				0.4892578125,
				0.509765625,
				0.5458984375,
				0.5595703125,
				0.58203125,
				0.58984375,
				0.6005859375,
				0.6064453125,
				0.609375,
				0.611328125,
				0.6123046875,
				0.61328125,
				0.6162109375,
				0.6162109375,
				0.615234375,
				0.6044921875,
				0.5712890625,
				0.54296875,
				0.462890625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				36
			]
		},
		{
			"id": "S1DsiCfDD7NFxhSO0N3jA",
			"type": "freedraw",
			"x": 8105.164003459888,
			"y": 2044.803113553115,
			"width": 3,
			"height": 46,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1462399647,
			"version": 24,
			"versionNonce": 451072639,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					2
				],
				[
					0,
					4
				],
				[
					0,
					7
				],
				[
					-1,
					10
				],
				[
					-1,
					14
				],
				[
					-1,
					16
				],
				[
					-1,
					20
				],
				[
					-2,
					25
				],
				[
					-2,
					31
				],
				[
					-2,
					36
				],
				[
					-3,
					41
				],
				[
					-3,
					44
				],
				[
					-3,
					46
				],
				[
					-3,
					46
				]
			],
			"pressures": [
				0.2109375,
				0.2138671875,
				0.248046875,
				0.310546875,
				0.3798828125,
				0.4208984375,
				0.4501953125,
				0.4599609375,
				0.4716796875,
				0.4765625,
				0.46875,
				0.439453125,
				0.390625,
				0.359375,
				0.32421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-3,
				46
			]
		},
		{
			"id": "UEOEeRErKDH9WB7xAj0QG",
			"type": "freedraw",
			"x": 8113.164003459888,
			"y": 2122.803113553115,
			"width": 2,
			"height": 36,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 691939793,
			"version": 26,
			"versionNonce": 390650097,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-1
				],
				[
					1,
					-1
				],
				[
					1,
					0
				],
				[
					1,
					1
				],
				[
					1,
					2
				],
				[
					1,
					3
				],
				[
					1,
					5
				],
				[
					1,
					7
				],
				[
					2,
					11
				],
				[
					2,
					12
				],
				[
					2,
					16
				],
				[
					2,
					20
				],
				[
					2,
					24
				],
				[
					2,
					27
				],
				[
					2,
					31
				],
				[
					2,
					35
				],
				[
					2,
					35
				]
			],
			"pressures": [
				0.2509765625,
				0.26953125,
				0.35546875,
				0.3701171875,
				0.4990234375,
				0.54296875,
				0.5625,
				0.591796875,
				0.6103515625,
				0.619140625,
				0.623046875,
				0.6259765625,
				0.625,
				0.6103515625,
				0.5947265625,
				0.5458984375,
				0.4658203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				2,
				35
			]
		},
		{
			"id": "VvUVFCnQkp_nN5eMmeR-O",
			"type": "freedraw",
			"x": 8120.164003459888,
			"y": 2222.803113553115,
			"width": 16,
			"height": 41,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 8288479,
			"version": 48,
			"versionNonce": 16919199,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-1
				],
				[
					2,
					-1
				],
				[
					2,
					-2
				],
				[
					3,
					-3
				],
				[
					4,
					-4
				],
				[
					6,
					-5
				],
				[
					7,
					-6
				],
				[
					8,
					-6
				],
				[
					9,
					-6
				],
				[
					10,
					-6
				],
				[
					11,
					-5
				],
				[
					12,
					-5
				],
				[
					12,
					-3
				],
				[
					12,
					-1
				],
				[
					12,
					1
				],
				[
					11,
					4
				],
				[
					10,
					8
				],
				[
					9,
					10
				],
				[
					7,
					15
				],
				[
					5,
					19
				],
				[
					3,
					23
				],
				[
					2,
					25
				],
				[
					0,
					28
				],
				[
					-1,
					30
				],
				[
					-2,
					32
				],
				[
					-2,
					33
				],
				[
					-1,
					34
				],
				[
					0,
					34
				],
				[
					1,
					34
				],
				[
					2,
					35
				],
				[
					4,
					35
				],
				[
					6,
					34
				],
				[
					7,
					34
				],
				[
					9,
					34
				],
				[
					11,
					33
				],
				[
					12,
					33
				],
				[
					13,
					32
				],
				[
					14,
					31
				],
				[
					14,
					31
				]
			],
			"pressures": [
				0.12109375,
				0.1201171875,
				0.158203125,
				0.1650390625,
				0.2099609375,
				0.24609375,
				0.3095703125,
				0.3583984375,
				0.3828125,
				0.4326171875,
				0.45703125,
				0.5009765625,
				0.51953125,
				0.5625,
				0.5791015625,
				0.583984375,
				0.5869140625,
				0.5869140625,
				0.5869140625,
				0.5869140625,
				0.587890625,
				0.58984375,
				0.5908203125,
				0.5927734375,
				0.59375,
				0.59375,
				0.5947265625,
				0.5947265625,
				0.59765625,
				0.599609375,
				0.6005859375,
				0.6044921875,
				0.6064453125,
				0.60546875,
				0.599609375,
				0.58203125,
				0.56640625,
				0.54296875,
				0.4677734375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				14,
				31
			]
		},
		{
			"id": "y9U1UI4Fvmd365remhZwh",
			"type": "freedraw",
			"x": 8039.164003459888,
			"y": 2230.803113553115,
			"width": 34,
			"height": 45,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1594963473,
			"version": 50,
			"versionNonce": 662868689,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					0
				],
				[
					-3,
					1
				],
				[
					-5,
					3
				],
				[
					-7,
					4
				],
				[
					-8,
					6
				],
				[
					-10,
					8
				],
				[
					-11,
					12
				],
				[
					-13,
					16
				],
				[
					-14,
					18
				],
				[
					-15,
					22
				],
				[
					-16,
					26
				],
				[
					-16,
					31
				],
				[
					-16,
					33
				],
				[
					-16,
					36
				],
				[
					-15,
					38
				],
				[
					-13,
					41
				],
				[
					-10,
					42
				],
				[
					-7,
					43
				],
				[
					-5,
					43
				],
				[
					-1,
					43
				],
				[
					3,
					42
				],
				[
					6,
					40
				],
				[
					8,
					39
				],
				[
					11,
					36
				],
				[
					14,
					33
				],
				[
					15,
					31
				],
				[
					16,
					28
				],
				[
					17,
					24
				],
				[
					18,
					21
				],
				[
					17,
					19
				],
				[
					17,
					15
				],
				[
					16,
					12
				],
				[
					15,
					9
				],
				[
					14,
					7
				],
				[
					12,
					4
				],
				[
					10,
					2
				],
				[
					8,
					0
				],
				[
					7,
					-1
				],
				[
					6,
					-2
				],
				[
					0,
					0
				]
			],
			"pressures": [
				0.2216796875,
				0.3173828125,
				0.40234375,
				0.4609375,
				0.4892578125,
				0.5009765625,
				0.5224609375,
				0.5419921875,
				0.55859375,
				0.5654296875,
				0.5751953125,
				0.5830078125,
				0.587890625,
				0.58984375,
				0.591796875,
				0.591796875,
				0.591796875,
				0.5927734375,
				0.59375,
				0.5947265625,
				0.59765625,
				0.6044921875,
				0.6123046875,
				0.615234375,
				0.623046875,
				0.630859375,
				0.634765625,
				0.640625,
				0.6455078125,
				0.6494140625,
				0.65234375,
				0.654296875,
				0.6552734375,
				0.654296875,
				0.65234375,
				0.638671875,
				0.6103515625,
				0.55859375,
				0.521484375,
				0.4755859375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				6,
				-2
			]
		},
		{
			"id": "5RW0sNMHaCBbboD_uzV4x",
			"type": "freedraw",
			"x": 8037.164003459888,
			"y": 2251.803113553115,
			"width": 15,
			"height": 20,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 778404383,
			"version": 51,
			"versionNonce": 1975615167,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					-1
				],
				[
					-3,
					-2
				],
				[
					-4,
					-2
				],
				[
					-5,
					-3
				],
				[
					-4,
					-4
				],
				[
					-3,
					-5
				],
				[
					-1,
					-6
				],
				[
					0,
					-7
				],
				[
					1,
					-8
				],
				[
					3,
					-8
				],
				[
					5,
					-8
				],
				[
					5,
					-9
				],
				[
					6,
					-8
				],
				[
					6,
					-7
				],
				[
					6,
					-6
				],
				[
					5,
					-5
				],
				[
					5,
					-3
				],
				[
					4,
					-2
				],
				[
					4,
					-1
				],
				[
					4,
					0
				],
				[
					4,
					1
				],
				[
					4,
					2
				],
				[
					4,
					3
				],
				[
					4,
					4
				],
				[
					5,
					4
				],
				[
					6,
					5
				],
				[
					7,
					6
				],
				[
					7,
					7
				],
				[
					8,
					8
				],
				[
					9,
					8
				],
				[
					9,
					9
				],
				[
					10,
					9
				],
				[
					9,
					10
				],
				[
					8,
					10
				],
				[
					7,
					10
				],
				[
					6,
					10
				],
				[
					4,
					10
				],
				[
					2,
					10
				],
				[
					0,
					11
				],
				[
					-1,
					11
				],
				[
					-4,
					11
				],
				[
					-4,
					11
				]
			],
			"pressures": [
				0.2275390625,
				0.23828125,
				0.2841796875,
				0.3076171875,
				0.34765625,
				0.376953125,
				0.392578125,
				0.408203125,
				0.4130859375,
				0.4189453125,
				0.4228515625,
				0.4345703125,
				0.4375,
				0.443359375,
				0.4482421875,
				0.44921875,
				0.4482421875,
				0.4482421875,
				0.451171875,
				0.4560546875,
				0.45703125,
				0.4560546875,
				0.4560546875,
				0.451171875,
				0.453125,
				0.455078125,
				0.45703125,
				0.45703125,
				0.4580078125,
				0.4697265625,
				0.4873046875,
				0.513671875,
				0.548828125,
				0.6728515625,
				0.685546875,
				0.69140625,
				0.6943359375,
				0.69140625,
				0.677734375,
				0.6435546875,
				0.6162109375,
				0.53515625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4,
				11
			]
		},
		{
			"id": "CHd53Umih211Kz9R4JYNX",
			"type": "freedraw",
			"x": 8108.164003459888,
			"y": 2311.803113553115,
			"width": 11,
			"height": 15,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 443678943,
			"version": 20,
			"versionNonce": 1613369521,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					2
				],
				[
					2,
					3
				],
				[
					3,
					4
				],
				[
					4,
					5
				],
				[
					4,
					6
				],
				[
					5,
					7
				],
				[
					8,
					10
				],
				[
					9,
					11
				],
				[
					10,
					13
				],
				[
					11,
					15
				],
				[
					11,
					15
				]
			],
			"pressures": [
				0.134765625,
				0.1416015625,
				0.15234375,
				0.16015625,
				0.1640625,
				0.166015625,
				0.1708984375,
				0.1787109375,
				0.1806640625,
				0.1806640625,
				0.1767578125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				11,
				15
			]
		},
		{
			"id": "Bw9TEpmGQD7qEvy_AibU_",
			"type": "freedraw",
			"x": 8121.164003459888,
			"y": 2312.803113553115,
			"width": 23,
			"height": 12,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1763106769,
			"version": 19,
			"versionNonce": 465653471,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-3,
					0
				],
				[
					-7,
					1
				],
				[
					-8,
					2
				],
				[
					-10,
					3
				],
				[
					-11,
					4
				],
				[
					-13,
					5
				],
				[
					-18,
					8
				],
				[
					-20,
					10
				],
				[
					-23,
					12
				],
				[
					-23,
					12
				]
			],
			"pressures": [
				0.193359375,
				0.205078125,
				0.224609375,
				0.2314453125,
				0.2421875,
				0.24609375,
				0.255859375,
				0.2685546875,
				0.2705078125,
				0.265625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-23,
				12
			]
		},
		{
			"id": "7-wwdI7VTv07zZplWLjbu",
			"type": "freedraw",
			"x": 6854.164003459888,
			"y": 2427.803113553115,
			"width": 13,
			"height": 45,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 539692817,
			"version": 23,
			"versionNonce": 1994838673,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					-1
				],
				[
					3,
					0
				],
				[
					3,
					1
				],
				[
					3,
					2
				],
				[
					3,
					4
				],
				[
					3,
					7
				],
				[
					2,
					9
				],
				[
					1,
					14
				],
				[
					-1,
					21
				],
				[
					-3,
					27
				],
				[
					-5,
					31
				],
				[
					-7,
					38
				],
				[
					-10,
					44
				],
				[
					-10,
					44
				]
			],
			"pressures": [
				0.1728515625,
				0.1884765625,
				0.2392578125,
				0.30078125,
				0.3251953125,
				0.369140625,
				0.4072265625,
				0.4228515625,
				0.447265625,
				0.462890625,
				0.4736328125,
				0.4765625,
				0.466796875,
				0.421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-10,
				44
			]
		},
		{
			"id": "98LycyzXzwW0sIevjN1wm",
			"type": "freedraw",
			"x": 6867.164003459888,
			"y": 2422.803113553115,
			"width": 5,
			"height": 59,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1758342673,
			"version": 25,
			"versionNonce": 1838291711,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-2
				],
				[
					2,
					-3
				],
				[
					3,
					-2
				],
				[
					3,
					1
				],
				[
					3,
					3
				],
				[
					3,
					7
				],
				[
					3,
					13
				],
				[
					3,
					20
				],
				[
					3,
					24
				],
				[
					3,
					31
				],
				[
					3,
					38
				],
				[
					4,
					42
				],
				[
					4,
					48
				],
				[
					4,
					54
				],
				[
					5,
					56
				],
				[
					5,
					56
				]
			],
			"pressures": [
				0.341796875,
				0.3466796875,
				0.3603515625,
				0.4169921875,
				0.4521484375,
				0.4619140625,
				0.48046875,
				0.498046875,
				0.5126953125,
				0.5185546875,
				0.5263671875,
				0.529296875,
				0.5283203125,
				0.51171875,
				0.46875,
				0.4345703125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				5,
				56
			]
		},
		{
			"id": "fAXjV37WCEhwE2M8bwfEk",
			"type": "freedraw",
			"x": 6859.164003459888,
			"y": 2470.803113553115,
			"width": 37,
			"height": 18,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1851294449,
			"version": 28,
			"versionNonce": 7362673,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-2,
					-3
				],
				[
					-4,
					-5
				],
				[
					-5,
					-6
				],
				[
					-5,
					-7
				],
				[
					-6,
					-8
				],
				[
					-8,
					-9
				],
				[
					-7,
					-9
				],
				[
					-5,
					-8
				],
				[
					-3,
					-7
				],
				[
					-1,
					-7
				],
				[
					2,
					-6
				],
				[
					6,
					-6
				],
				[
					8,
					-6
				],
				[
					13,
					-7
				],
				[
					18,
					-9
				],
				[
					20,
					-11
				],
				[
					25,
					-14
				],
				[
					29,
					-18
				],
				[
					29,
					-18
				]
			],
			"pressures": [
				0.1708984375,
				0.1875,
				0.244140625,
				0.2763671875,
				0.296875,
				0.3251953125,
				0.365234375,
				0.41015625,
				0.43359375,
				0.4453125,
				0.44921875,
				0.453125,
				0.4541015625,
				0.4521484375,
				0.4404296875,
				0.4091796875,
				0.3837890625,
				0.322265625,
				0.24609375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				29,
				-18
			]
		},
		{
			"id": "d2sVYXUqJaWdUmi-Gmebw",
			"type": "freedraw",
			"x": 6901.164003459888,
			"y": 2426.803113553115,
			"width": 30,
			"height": 58,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 44676575,
			"version": 59,
			"versionNonce": 1068786463,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-1
				],
				[
					-2,
					-1
				],
				[
					-3,
					0
				],
				[
					-3,
					1
				],
				[
					-4,
					2
				],
				[
					-4,
					4
				],
				[
					-5,
					7
				],
				[
					-5,
					9
				],
				[
					-6,
					14
				],
				[
					-6,
					19
				],
				[
					-6,
					22
				],
				[
					-6,
					27
				],
				[
					-6,
					32
				],
				[
					-6,
					36
				],
				[
					-6,
					38
				],
				[
					-5,
					41
				],
				[
					-4,
					42
				],
				[
					-3,
					43
				],
				[
					-1,
					43
				],
				[
					1,
					41
				],
				[
					3,
					40
				],
				[
					5,
					36
				],
				[
					8,
					32
				],
				[
					11,
					27
				],
				[
					12,
					24
				],
				[
					14,
					18
				],
				[
					16,
					13
				],
				[
					17,
					10
				],
				[
					18,
					5
				],
				[
					19,
					1
				],
				[
					20,
					-2
				],
				[
					20,
					-4
				],
				[
					20,
					-5
				],
				[
					20,
					-6
				],
				[
					20,
					-5
				],
				[
					19,
					-4
				],
				[
					19,
					-2
				],
				[
					19,
					2
				],
				[
					18,
					4
				],
				[
					18,
					9
				],
				[
					18,
					16
				],
				[
					17,
					19
				],
				[
					17,
					26
				],
				[
					18,
					32
				],
				[
					18,
					39
				],
				[
					19,
					42
				],
				[
					20,
					47
				],
				[
					23,
					51
				],
				[
					24,
					52
				],
				[
					24,
					52
				]
			],
			"pressures": [
				0.1376953125,
				0.1435546875,
				0.16015625,
				0.201171875,
				0.232421875,
				0.25,
				0.291015625,
				0.337890625,
				0.361328125,
				0.40625,
				0.44140625,
				0.455078125,
				0.47265625,
				0.4794921875,
				0.4794921875,
				0.478515625,
				0.4775390625,
				0.474609375,
				0.4638671875,
				0.4404296875,
				0.40625,
				0.3857421875,
				0.341796875,
				0.296875,
				0.26171875,
				0.248046875,
				0.2294921875,
				0.21875,
				0.216796875,
				0.22265625,
				0.2451171875,
				0.2822265625,
				0.3037109375,
				0.3271484375,
				0.376953125,
				0.4521484375,
				0.470703125,
				0.5,
				0.525390625,
				0.5361328125,
				0.5546875,
				0.56640625,
				0.5712890625,
				0.5771484375,
				0.5771484375,
				0.564453125,
				0.55078125,
				0.50390625,
				0.4306640625,
				0.3857421875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				24,
				52
			]
		},
		{
			"id": "dyLzinF4-nIKzCkjsgrdU",
			"type": "freedraw",
			"x": 7024.164003459888,
			"y": 2464.803113553115,
			"width": 25,
			"height": 63,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1943149855,
			"version": 62,
			"versionNonce": 244195921,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					1
				],
				[
					0,
					3
				],
				[
					0,
					4
				],
				[
					0,
					6
				],
				[
					0,
					8
				],
				[
					0,
					10
				],
				[
					0,
					14
				],
				[
					0,
					19
				],
				[
					0,
					24
				],
				[
					-1,
					26
				],
				[
					-2,
					34
				],
				[
					-3,
					40
				],
				[
					-4,
					44
				],
				[
					-5,
					48
				],
				[
					-6,
					50
				],
				[
					-6,
					52
				],
				[
					-6,
					51
				],
				[
					-6,
					48
				],
				[
					-6,
					46
				],
				[
					-5,
					42
				],
				[
					-5,
					39
				],
				[
					-5,
					33
				],
				[
					-4,
					30
				],
				[
					-4,
					24
				],
				[
					-3,
					21
				],
				[
					-2,
					14
				],
				[
					-1,
					8
				],
				[
					1,
					3
				],
				[
					2,
					1
				],
				[
					4,
					-4
				],
				[
					6,
					-7
				],
				[
					8,
					-9
				],
				[
					9,
					-10
				],
				[
					11,
					-11
				],
				[
					13,
					-11
				],
				[
					15,
					-10
				],
				[
					15,
					-9
				],
				[
					17,
					-7
				],
				[
					18,
					-4
				],
				[
					18,
					-2
				],
				[
					19,
					1
				],
				[
					19,
					3
				],
				[
					19,
					6
				],
				[
					19,
					9
				],
				[
					18,
					12
				],
				[
					18,
					13
				],
				[
					17,
					15
				],
				[
					16,
					16
				],
				[
					15,
					16
				],
				[
					14,
					17
				],
				[
					13,
					17
				],
				[
					12,
					17
				],
				[
					12,
					17
				]
			],
			"pressures": [
				0.1162109375,
				0.12109375,
				0.1494140625,
				0.1650390625,
				0.181640625,
				0.2138671875,
				0.2333984375,
				0.2734375,
				0.31640625,
				0.359375,
				0.37890625,
				0.4287109375,
				0.451171875,
				0.46484375,
				0.4736328125,
				0.48046875,
				0.4833984375,
				0.484375,
				0.484375,
				0.482421875,
				0.478515625,
				0.4765625,
				0.4765625,
				0.4775390625,
				0.478515625,
				0.4765625,
				0.474609375,
				0.47265625,
				0.46875,
				0.4658203125,
				0.4609375,
				0.4619140625,
				0.4638671875,
				0.46484375,
				0.4716796875,
				0.4853515625,
				0.501953125,
				0.5107421875,
				0.53125,
				0.5537109375,
				0.564453125,
				0.5830078125,
				0.5908203125,
				0.603515625,
				0.6123046875,
				0.6171875,
				0.6171875,
				0.6162109375,
				0.6044921875,
				0.59375,
				0.5556640625,
				0.5263671875,
				0.4404296875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				12,
				17
			]
		},
		{
			"id": "5BLlKdT4NBiyW47pvRid8",
			"type": "freedraw",
			"x": 7059.164003459888,
			"y": 2455.803113553115,
			"width": 19,
			"height": 26,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 310278897,
			"version": 55,
			"versionNonce": 43558719,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					3,
					-1
				],
				[
					4,
					-1
				],
				[
					4,
					-2
				],
				[
					4,
					-1
				],
				[
					3,
					0
				],
				[
					2,
					0
				],
				[
					2,
					1
				],
				[
					0,
					3
				],
				[
					-2,
					5
				],
				[
					-4,
					8
				],
				[
					-5,
					9
				],
				[
					-6,
					12
				],
				[
					-7,
					15
				],
				[
					-8,
					18
				],
				[
					-8,
					19
				],
				[
					-9,
					21
				],
				[
					-8,
					22
				],
				[
					-8,
					23
				],
				[
					-7,
					24
				],
				[
					-6,
					24
				],
				[
					-5,
					23
				],
				[
					-4,
					22
				],
				[
					-2,
					21
				],
				[
					0,
					19
				],
				[
					1,
					17
				],
				[
					2,
					15
				],
				[
					4,
					13
				],
				[
					5,
					11
				],
				[
					5,
					9
				],
				[
					6,
					8
				],
				[
					6,
					6
				],
				[
					6,
					5
				],
				[
					6,
					6
				],
				[
					6,
					7
				],
				[
					6,
					9
				],
				[
					5,
					11
				],
				[
					5,
					12
				],
				[
					5,
					15
				],
				[
					5,
					17
				],
				[
					5,
					19
				],
				[
					5,
					20
				],
				[
					6,
					22
				],
				[
					7,
					23
				],
				[
					9,
					24
				],
				[
					10,
					24
				],
				[
					10,
					24
				]
			],
			"pressures": [
				0.07421875,
				0.1103515625,
				0.14453125,
				0.1708984375,
				0.1982421875,
				0.2861328125,
				0.2998046875,
				0.3125,
				0.33984375,
				0.3681640625,
				0.3916015625,
				0.4013671875,
				0.416015625,
				0.42578125,
				0.4296875,
				0.4296875,
				0.4287109375,
				0.4267578125,
				0.421875,
				0.408203125,
				0.3857421875,
				0.3720703125,
				0.337890625,
				0.30078125,
				0.2685546875,
				0.244140625,
				0.2353515625,
				0.2255859375,
				0.22265625,
				0.224609375,
				0.228515625,
				0.2392578125,
				0.25390625,
				0.314453125,
				0.32421875,
				0.3330078125,
				0.3369140625,
				0.3369140625,
				0.3388671875,
				0.3359375,
				0.3232421875,
				0.3125,
				0.2861328125,
				0.2529296875,
				0.2080078125,
				0.1826171875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				24
			]
		},
		{
			"id": "JgtyXp0hOxl4B9KY88Fmf",
			"type": "freedraw",
			"x": 7089.164003459888,
			"y": 2460.803113553115,
			"width": 57,
			"height": 79,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 317011953,
			"version": 107,
			"versionNonce": 236433457,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-3
				],
				[
					1,
					-4
				],
				[
					2,
					-5
				],
				[
					2,
					-6
				],
				[
					1,
					-6
				],
				[
					0,
					-6
				],
				[
					-1,
					-5
				],
				[
					-3,
					-3
				],
				[
					-5,
					-1
				],
				[
					-6,
					1
				],
				[
					-8,
					4
				],
				[
					-10,
					7
				],
				[
					-11,
					10
				],
				[
					-11,
					11
				],
				[
					-12,
					14
				],
				[
					-12,
					16
				],
				[
					-11,
					17
				],
				[
					-11,
					18
				],
				[
					-10,
					19
				],
				[
					-8,
					19
				],
				[
					-6,
					18
				],
				[
					-4,
					17
				],
				[
					-3,
					15
				],
				[
					-2,
					14
				],
				[
					0,
					12
				],
				[
					1,
					10
				],
				[
					2,
					8
				],
				[
					2,
					7
				],
				[
					3,
					5
				],
				[
					4,
					3
				],
				[
					4,
					2
				],
				[
					5,
					0
				],
				[
					5,
					-1
				],
				[
					6,
					-1
				],
				[
					6,
					0
				],
				[
					7,
					0
				],
				[
					7,
					3
				],
				[
					8,
					7
				],
				[
					8,
					11
				],
				[
					8,
					14
				],
				[
					8,
					20
				],
				[
					8,
					26
				],
				[
					7,
					34
				],
				[
					7,
					37
				],
				[
					5,
					45
				],
				[
					4,
					52
				],
				[
					1,
					58
				],
				[
					0,
					61
				],
				[
					-2,
					65
				],
				[
					-4,
					68
				],
				[
					-5,
					69
				],
				[
					-7,
					69
				],
				[
					-9,
					68
				],
				[
					-11,
					65
				],
				[
					-11,
					63
				],
				[
					-12,
					58
				],
				[
					-13,
					53
				],
				[
					-12,
					47
				],
				[
					-12,
					44
				],
				[
					-11,
					39
				],
				[
					-9,
					35
				],
				[
					-8,
					33
				],
				[
					-5,
					29
				],
				[
					-2,
					26
				],
				[
					-1,
					25
				],
				[
					2,
					23
				],
				[
					5,
					20
				],
				[
					7,
					19
				],
				[
					10,
					16
				],
				[
					14,
					14
				],
				[
					17,
					10
				],
				[
					19,
					9
				],
				[
					22,
					5
				],
				[
					25,
					2
				],
				[
					27,
					-1
				],
				[
					28,
					-3
				],
				[
					29,
					-6
				],
				[
					30,
					-8
				],
				[
					29,
					-9
				],
				[
					28,
					-10
				],
				[
					27,
					-10
				],
				[
					26,
					-10
				],
				[
					24,
					-9
				],
				[
					22,
					-7
				],
				[
					21,
					-6
				],
				[
					20,
					-3
				],
				[
					19,
					0
				],
				[
					19,
					4
				],
				[
					19,
					6
				],
				[
					20,
					9
				],
				[
					22,
					12
				],
				[
					25,
					14
				],
				[
					27,
					15
				],
				[
					31,
					16
				],
				[
					35,
					16
				],
				[
					41,
					15
				],
				[
					44,
					14
				],
				[
					44,
					14
				]
			],
			"pressures": [
				0.0556640625,
				0.0869140625,
				0.119140625,
				0.1455078125,
				0.208984375,
				0.23828125,
				0.2939453125,
				0.34765625,
				0.3994140625,
				0.44140625,
				0.4580078125,
				0.4814453125,
				0.494140625,
				0.5,
				0.501953125,
				0.5029296875,
				0.501953125,
				0.5009765625,
				0.49609375,
				0.4873046875,
				0.4736328125,
				0.4453125,
				0.423828125,
				0.4033203125,
				0.39453125,
				0.37890625,
				0.3681640625,
				0.3623046875,
				0.361328125,
				0.359375,
				0.357421875,
				0.3583984375,
				0.359375,
				0.3603515625,
				0.3603515625,
				0.359375,
				0.3583984375,
				0.357421875,
				0.3623046875,
				0.3759765625,
				0.3857421875,
				0.41015625,
				0.4404296875,
				0.470703125,
				0.484375,
				0.5078125,
				0.5283203125,
				0.54296875,
				0.5498046875,
				0.5595703125,
				0.5654296875,
				0.5673828125,
				0.56640625,
				0.55859375,
				0.5458984375,
				0.537109375,
				0.5185546875,
				0.5,
				0.482421875,
				0.4755859375,
				0.46484375,
				0.458984375,
				0.4580078125,
				0.458984375,
				0.458984375,
				0.458984375,
				0.458984375,
				0.4599609375,
				0.458984375,
				0.4560546875,
				0.4560546875,
				0.45703125,
				0.45703125,
				0.45703125,
				0.45703125,
				0.4580078125,
				0.45703125,
				0.4580078125,
				0.4609375,
				0.46484375,
				0.4765625,
				0.49609375,
				0.5078125,
				0.533203125,
				0.55859375,
				0.5703125,
				0.5908203125,
				0.60546875,
				0.6162109375,
				0.6201171875,
				0.6259765625,
				0.6279296875,
				0.6220703125,
				0.6162109375,
				0.59375,
				0.552734375,
				0.486328125,
				0.44140625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				44,
				14
			]
		},
		{
			"id": "2uI35K---4swJXYg2b4ua",
			"type": "freedraw",
			"x": 7221.164003459888,
			"y": 2421.803113553115,
			"width": 35,
			"height": 121,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 758950321,
			"version": 40,
			"versionNonce": 1151297375,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-5
				],
				[
					1,
					-6
				],
				[
					1,
					-7
				],
				[
					1,
					-9
				],
				[
					1,
					-10
				],
				[
					1,
					-12
				],
				[
					1,
					-15
				],
				[
					0,
					-17
				],
				[
					-2,
					-19
				],
				[
					-4,
					-21
				],
				[
					-6,
					-21
				],
				[
					-8,
					-20
				],
				[
					-11,
					-18
				],
				[
					-14,
					-14
				],
				[
					-17,
					-9
				],
				[
					-18,
					-6
				],
				[
					-21,
					2
				],
				[
					-23,
					11
				],
				[
					-25,
					21
				],
				[
					-25,
					26
				],
				[
					-27,
					37
				],
				[
					-28,
					49
				],
				[
					-29,
					55
				],
				[
					-30,
					66
				],
				[
					-31,
					72
				],
				[
					-32,
					82
				],
				[
					-33,
					90
				],
				[
					-34,
					96
				],
				[
					-34,
					98
				],
				[
					-34,
					100
				],
				[
					-34,
					100
				]
			],
			"pressures": [
				0.16015625,
				0.1923828125,
				0.2041015625,
				0.232421875,
				0.251953125,
				0.2607421875,
				0.2802734375,
				0.3203125,
				0.3369140625,
				0.3642578125,
				0.38671875,
				0.4091796875,
				0.4189453125,
				0.43359375,
				0.4443359375,
				0.4541015625,
				0.45703125,
				0.4609375,
				0.4638671875,
				0.4658203125,
				0.4658203125,
				0.4677734375,
				0.46875,
				0.4697265625,
				0.4697265625,
				0.4658203125,
				0.4404296875,
				0.396484375,
				0.3349609375,
				0.296875,
				0.2548828125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-34,
				100
			]
		},
		{
			"id": "g9LmM6CAhb_6kpMUKXID0",
			"type": "freedraw",
			"x": 7185.164003459888,
			"y": 2478.803113553115,
			"width": 75,
			"height": 32,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1472833503,
			"version": 150,
			"versionNonce": 1693745681,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-6
				],
				[
					-2,
					-9
				],
				[
					-2,
					-10
				],
				[
					-2,
					-12
				],
				[
					-2,
					-13
				],
				[
					-3,
					-16
				],
				[
					-3,
					-18
				],
				[
					-3,
					-20
				],
				[
					-2,
					-21
				],
				[
					-1,
					-21
				],
				[
					1,
					-22
				],
				[
					2,
					-22
				],
				[
					5,
					-22
				],
				[
					8,
					-23
				],
				[
					10,
					-23
				],
				[
					13,
					-23
				],
				[
					17,
					-24
				],
				[
					20,
					-25
				],
				[
					21,
					-26
				],
				[
					25,
					-27
				],
				[
					27,
					-28
				],
				[
					29,
					-29
				],
				[
					30,
					-30
				],
				[
					31,
					-30
				],
				[
					31,
					-31
				],
				[
					30,
					-30
				],
				[
					28,
					-29
				],
				[
					27,
					-29
				],
				[
					25,
					-27
				],
				[
					23,
					-26
				],
				[
					22,
					-25
				],
				[
					20,
					-23
				],
				[
					19,
					-21
				],
				[
					18,
					-19
				],
				[
					17,
					-18
				],
				[
					17,
					-16
				],
				[
					17,
					-14
				],
				[
					18,
					-13
				],
				[
					18,
					-12
				],
				[
					20,
					-11
				],
				[
					21,
					-10
				],
				[
					23,
					-10
				],
				[
					24,
					-10
				],
				[
					27,
					-11
				],
				[
					29,
					-13
				],
				[
					31,
					-16
				],
				[
					32,
					-17
				],
				[
					33,
					-20
				],
				[
					35,
					-22
				],
				[
					35,
					-24
				],
				[
					36,
					-26
				],
				[
					37,
					-28
				],
				[
					37,
					-30
				],
				[
					37,
					-31
				],
				[
					38,
					-32
				],
				[
					37,
					-32
				],
				[
					37,
					-31
				],
				[
					37,
					-30
				],
				[
					36,
					-29
				],
				[
					36,
					-28
				],
				[
					35,
					-26
				],
				[
					35,
					-23
				],
				[
					34,
					-20
				],
				[
					34,
					-19
				],
				[
					34,
					-16
				],
				[
					34,
					-15
				],
				[
					34,
					-13
				],
				[
					34,
					-11
				],
				[
					35,
					-10
				],
				[
					35,
					-9
				],
				[
					36,
					-8
				],
				[
					37,
					-8
				],
				[
					38,
					-9
				],
				[
					39,
					-9
				],
				[
					40,
					-10
				],
				[
					41,
					-12
				],
				[
					42,
					-12
				],
				[
					43,
					-14
				],
				[
					43,
					-16
				],
				[
					44,
					-18
				],
				[
					44,
					-20
				],
				[
					45,
					-22
				],
				[
					46,
					-24
				],
				[
					46,
					-25
				],
				[
					46,
					-26
				],
				[
					47,
					-27
				],
				[
					47,
					-28
				],
				[
					47,
					-27
				],
				[
					47,
					-26
				],
				[
					47,
					-25
				],
				[
					47,
					-23
				],
				[
					47,
					-22
				],
				[
					46,
					-20
				],
				[
					46,
					-17
				],
				[
					46,
					-15
				],
				[
					46,
					-13
				],
				[
					46,
					-11
				],
				[
					47,
					-9
				],
				[
					47,
					-8
				],
				[
					47,
					-7
				],
				[
					48,
					-6
				],
				[
					49,
					-6
				],
				[
					50,
					-6
				],
				[
					50,
					-7
				],
				[
					51,
					-8
				],
				[
					52,
					-9
				],
				[
					53,
					-10
				],
				[
					54,
					-12
				],
				[
					55,
					-15
				],
				[
					56,
					-17
				],
				[
					56,
					-18
				],
				[
					57,
					-21
				],
				[
					58,
					-22
				],
				[
					58,
					-23
				],
				[
					58,
					-24
				],
				[
					58,
					-25
				],
				[
					58,
					-26
				],
				[
					58,
					-25
				],
				[
					58,
					-24
				],
				[
					57,
					-23
				],
				[
					57,
					-22
				],
				[
					56,
					-20
				],
				[
					56,
					-18
				],
				[
					56,
					-15
				],
				[
					56,
					-13
				],
				[
					56,
					-12
				],
				[
					56,
					-10
				],
				[
					56,
					-8
				],
				[
					56,
					-7
				],
				[
					57,
					-6
				],
				[
					58,
					-5
				],
				[
					59,
					-5
				],
				[
					60,
					-5
				],
				[
					62,
					-7
				],
				[
					62,
					-8
				],
				[
					64,
					-11
				],
				[
					67,
					-14
				],
				[
					69,
					-19
				],
				[
					70,
					-21
				],
				[
					72,
					-24
				],
				[
					72,
					-24
				]
			],
			"pressures": [
				0.1396484375,
				0.1552734375,
				0.1767578125,
				0.18359375,
				0.1943359375,
				0.19921875,
				0.220703125,
				0.23828125,
				0.251953125,
				0.2626953125,
				0.2724609375,
				0.2822265625,
				0.28515625,
				0.2890625,
				0.291015625,
				0.291015625,
				0.291015625,
				0.2919921875,
				0.291015625,
				0.291015625,
				0.2900390625,
				0.2900390625,
				0.2900390625,
				0.2900390625,
				0.2939453125,
				0.2958984375,
				0.296875,
				0.2978515625,
				0.298828125,
				0.30078125,
				0.3017578125,
				0.3017578125,
				0.306640625,
				0.3115234375,
				0.3154296875,
				0.3173828125,
				0.3193359375,
				0.3212890625,
				0.322265625,
				0.32421875,
				0.32421875,
				0.3251953125,
				0.3232421875,
				0.3203125,
				0.310546875,
				0.2978515625,
				0.28515625,
				0.279296875,
				0.267578125,
				0.2578125,
				0.25390625,
				0.24609375,
				0.2392578125,
				0.2333984375,
				0.2314453125,
				0.2265625,
				0.2275390625,
				0.228515625,
				0.2314453125,
				0.2333984375,
				0.2412109375,
				0.2529296875,
				0.2685546875,
				0.2841796875,
				0.291015625,
				0.3037109375,
				0.3076171875,
				0.31640625,
				0.322265625,
				0.322265625,
				0.3212890625,
				0.3212890625,
				0.3203125,
				0.314453125,
				0.3046875,
				0.30078125,
				0.28125,
				0.2734375,
				0.25390625,
				0.232421875,
				0.2109375,
				0.201171875,
				0.185546875,
				0.1748046875,
				0.1708984375,
				0.16796875,
				0.169921875,
				0.171875,
				0.1953125,
				0.2080078125,
				0.2236328125,
				0.2421875,
				0.2529296875,
				0.2744140625,
				0.296875,
				0.3173828125,
				0.326171875,
				0.3388671875,
				0.3466796875,
				0.3486328125,
				0.3505859375,
				0.3525390625,
				0.3525390625,
				0.3525390625,
				0.3515625,
				0.3466796875,
				0.3388671875,
				0.33203125,
				0.3154296875,
				0.2958984375,
				0.2783203125,
				0.2705078125,
				0.2587890625,
				0.251953125,
				0.251953125,
				0.2529296875,
				0.255859375,
				0.2607421875,
				0.26953125,
				0.2822265625,
				0.2880859375,
				0.302734375,
				0.3212890625,
				0.3447265625,
				0.3681640625,
				0.388671875,
				0.3974609375,
				0.412109375,
				0.419921875,
				0.4228515625,
				0.4248046875,
				0.4267578125,
				0.4248046875,
				0.4150390625,
				0.390625,
				0.373046875,
				0.330078125,
				0.27734375,
				0.2158203125,
				0.1865234375,
				0.158203125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				72,
				-24
			]
		},
		{
			"id": "vMuTic-2-m9sDJuLMIRZU",
			"type": "freedraw",
			"x": 7272.164003459888,
			"y": 2417.803113553115,
			"width": 46,
			"height": 67,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 554376881,
			"version": 108,
			"versionNonce": 1947804543,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1,
					-3
				],
				[
					0,
					-3
				],
				[
					-1,
					-2
				],
				[
					-2,
					0
				],
				[
					-2,
					2
				],
				[
					-3,
					5
				],
				[
					-5,
					10
				],
				[
					-5,
					13
				],
				[
					-6,
					19
				],
				[
					-7,
					25
				],
				[
					-8,
					33
				],
				[
					-8,
					40
				],
				[
					-8,
					43
				],
				[
					-8,
					50
				],
				[
					-7,
					55
				],
				[
					-7,
					57
				],
				[
					-6,
					61
				],
				[
					-4,
					63
				],
				[
					-3,
					64
				],
				[
					0,
					64
				],
				[
					3,
					62
				],
				[
					6,
					58
				],
				[
					8,
					56
				],
				[
					11,
					51
				],
				[
					14,
					45
				],
				[
					17,
					39
				],
				[
					19,
					35
				],
				[
					21,
					28
				],
				[
					23,
					22
				],
				[
					24,
					17
				],
				[
					24,
					15
				],
				[
					24,
					11
				],
				[
					24,
					9
				],
				[
					23,
					9
				],
				[
					22,
					12
				],
				[
					21,
					16
				],
				[
					20,
					18
				],
				[
					19,
					24
				],
				[
					17,
					31
				],
				[
					16,
					38
				],
				[
					16,
					41
				],
				[
					15,
					48
				],
				[
					15,
					53
				],
				[
					15,
					58
				],
				[
					16,
					59
				],
				[
					16,
					62
				],
				[
					17,
					63
				],
				[
					18,
					63
				],
				[
					18,
					61
				],
				[
					19,
					59
				],
				[
					19,
					57
				],
				[
					19,
					54
				],
				[
					19,
					52
				],
				[
					18,
					49
				],
				[
					18,
					45
				],
				[
					17,
					41
				],
				[
					17,
					39
				],
				[
					16,
					36
				],
				[
					16,
					33
				],
				[
					17,
					31
				],
				[
					17,
					30
				],
				[
					18,
					28
				],
				[
					19,
					27
				],
				[
					20,
					25
				],
				[
					22,
					24
				],
				[
					23,
					23
				],
				[
					25,
					22
				],
				[
					27,
					21
				],
				[
					29,
					20
				],
				[
					30,
					20
				],
				[
					31,
					19
				],
				[
					32,
					20
				],
				[
					31,
					20
				],
				[
					31,
					22
				],
				[
					30,
					24
				],
				[
					30,
					27
				],
				[
					29,
					28
				],
				[
					29,
					31
				],
				[
					29,
					34
				],
				[
					29,
					36
				],
				[
					29,
					38
				],
				[
					30,
					40
				],
				[
					31,
					43
				],
				[
					32,
					44
				],
				[
					33,
					46
				],
				[
					34,
					47
				],
				[
					35,
					48
				],
				[
					36,
					49
				],
				[
					37,
					50
				],
				[
					38,
					51
				],
				[
					38,
					52
				],
				[
					37,
					52
				],
				[
					35,
					53
				],
				[
					34,
					53
				],
				[
					31,
					53
				],
				[
					28,
					53
				],
				[
					25,
					53
				],
				[
					24,
					52
				],
				[
					24,
					52
				]
			],
			"pressures": [
				0.1435546875,
				0.1796875,
				0.263671875,
				0.37109375,
				0.419921875,
				0.44140625,
				0.4814453125,
				0.515625,
				0.53125,
				0.556640625,
				0.5751953125,
				0.5869140625,
				0.5927734375,
				0.5927734375,
				0.5830078125,
				0.55859375,
				0.5419921875,
				0.4990234375,
				0.443359375,
				0.4130859375,
				0.3515625,
				0.294921875,
				0.2431640625,
				0.21875,
				0.1767578125,
				0.1455078125,
				0.1220703125,
				0.1123046875,
				0.1015625,
				0.1083984375,
				0.1337890625,
				0.150390625,
				0.1884765625,
				0.2333984375,
				0.296875,
				0.3251953125,
				0.349609375,
				0.3603515625,
				0.3798828125,
				0.3974609375,
				0.412109375,
				0.4169921875,
				0.4228515625,
				0.421875,
				0.4091796875,
				0.3994140625,
				0.373046875,
				0.3427734375,
				0.298828125,
				0.2783203125,
				0.2666015625,
				0.263671875,
				0.26171875,
				0.263671875,
				0.271484375,
				0.283203125,
				0.29296875,
				0.298828125,
				0.3095703125,
				0.31640625,
				0.3193359375,
				0.3203125,
				0.326171875,
				0.3291015625,
				0.33203125,
				0.333984375,
				0.3359375,
				0.34375,
				0.353515625,
				0.3720703125,
				0.384765625,
				0.4130859375,
				0.447265625,
				0.46484375,
				0.4765625,
				0.4833984375,
				0.48828125,
				0.4912109375,
				0.4951171875,
				0.498046875,
				0.4990234375,
				0.4990234375,
				0.5009765625,
				0.5078125,
				0.5146484375,
				0.53515625,
				0.548828125,
				0.5859375,
				0.6083984375,
				0.6572265625,
				0.7080078125,
				0.7685546875,
				0.7958984375,
				0.814453125,
				0.8134765625,
				0.8017578125,
				0.771484375,
				0.708984375,
				0.6591796875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				24,
				52
			]
		},
		{
			"id": "YXVrXrP0nx6-DdPoLQ4D0",
			"type": "freedraw",
			"x": 6846.164003459888,
			"y": 2634.803113553115,
			"width": 50,
			"height": 57,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1547819807,
			"version": 48,
			"versionNonce": 1344018417,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-3
				],
				[
					0,
					-5
				],
				[
					0,
					-6
				],
				[
					-1,
					-6
				],
				[
					-1,
					-7
				],
				[
					-2,
					-8
				],
				[
					-4,
					-10
				],
				[
					-6,
					-10
				],
				[
					-7,
					-10
				],
				[
					-10,
					-9
				],
				[
					-12,
					-6
				],
				[
					-14,
					-4
				],
				[
					-16,
					0
				],
				[
					-18,
					6
				],
				[
					-19,
					11
				],
				[
					-20,
					14
				],
				[
					-20,
					20
				],
				[
					-19,
					25
				],
				[
					-17,
					30
				],
				[
					-16,
					32
				],
				[
					-12,
					35
				],
				[
					-8,
					37
				],
				[
					-3,
					37
				],
				[
					-1,
					37
				],
				[
					5,
					35
				],
				[
					8,
					33
				],
				[
					14,
					29
				],
				[
					16,
					27
				],
				[
					22,
					21
				],
				[
					24,
					18
				],
				[
					26,
					14
				],
				[
					29,
					7
				],
				[
					30,
					-1
				],
				[
					29,
					-7
				],
				[
					28,
					-11
				],
				[
					25,
					-16
				],
				[
					23,
					-18
				],
				[
					21,
					-20
				],
				[
					21,
					-20
				]
			],
			"pressures": [
				0.2275390625,
				0.2578125,
				0.3037109375,
				0.3359375,
				0.3505859375,
				0.365234375,
				0.40625,
				0.4599609375,
				0.5048828125,
				0.5244140625,
				0.556640625,
				0.5810546875,
				0.5908203125,
				0.6044921875,
				0.6123046875,
				0.6171875,
				0.6181640625,
				0.6201171875,
				0.6201171875,
				0.6201171875,
				0.6201171875,
				0.6201171875,
				0.619140625,
				0.6201171875,
				0.6201171875,
				0.6220703125,
				0.623046875,
				0.625,
				0.6259765625,
				0.6259765625,
				0.626953125,
				0.626953125,
				0.626953125,
				0.62109375,
				0.60546875,
				0.59375,
				0.5546875,
				0.525390625,
				0.486328125,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				21,
				-20
			]
		},
		{
			"id": "b5DbP6HTQG3bHA_elrZNB",
			"type": "freedraw",
			"x": 6893.164003459888,
			"y": 2641.803113553115,
			"width": 24,
			"height": 58,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1507964881,
			"version": 56,
			"versionNonce": 1632000927,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					4
				],
				[
					3,
					9
				],
				[
					4,
					13
				],
				[
					4,
					14
				],
				[
					4,
					18
				],
				[
					4,
					22
				],
				[
					4,
					29
				],
				[
					4,
					36
				],
				[
					3,
					39
				],
				[
					3,
					45
				],
				[
					2,
					49
				],
				[
					1,
					51
				],
				[
					1,
					52
				],
				[
					0,
					53
				],
				[
					-1,
					52
				],
				[
					-2,
					50
				],
				[
					-2,
					49
				],
				[
					-3,
					45
				],
				[
					-3,
					40
				],
				[
					-4,
					34
				],
				[
					-4,
					31
				],
				[
					-4,
					25
				],
				[
					-3,
					18
				],
				[
					-2,
					12
				],
				[
					-1,
					9
				],
				[
					1,
					4
				],
				[
					4,
					0
				],
				[
					5,
					-1
				],
				[
					8,
					-4
				],
				[
					11,
					-4
				],
				[
					13,
					-5
				],
				[
					14,
					-4
				],
				[
					17,
					-3
				],
				[
					18,
					-1
				],
				[
					19,
					1
				],
				[
					20,
					3
				],
				[
					20,
					6
				],
				[
					19,
					9
				],
				[
					18,
					13
				],
				[
					17,
					14
				],
				[
					16,
					18
				],
				[
					15,
					19
				],
				[
					13,
					22
				],
				[
					11,
					24
				],
				[
					11,
					25
				],
				[
					10,
					26
				],
				[
					10,
					26
				]
			],
			"pressures": [
				0.2080078125,
				0.240234375,
				0.283203125,
				0.3125,
				0.3251953125,
				0.3486328125,
				0.3720703125,
				0.416015625,
				0.451171875,
				0.4658203125,
				0.490234375,
				0.5087890625,
				0.5224609375,
				0.52734375,
				0.533203125,
				0.53515625,
				0.5341796875,
				0.5322265625,
				0.525390625,
				0.5126953125,
				0.5,
				0.4931640625,
				0.4794921875,
				0.466796875,
				0.4609375,
				0.4599609375,
				0.4580078125,
				0.4580078125,
				0.4599609375,
				0.4638671875,
				0.4716796875,
				0.484375,
				0.4912109375,
				0.5078125,
				0.5263671875,
				0.5439453125,
				0.55078125,
				0.5615234375,
				0.5693359375,
				0.5732421875,
				0.57421875,
				0.576171875,
				0.5751953125,
				0.564453125,
				0.529296875,
				0.5,
				0.4638671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				10,
				26
			]
		},
		{
			"id": "kETFur5LH8AyBq1QknE0L",
			"type": "freedraw",
			"x": 6931.164003459888,
			"y": 2630.803113553115,
			"width": 7,
			"height": 33,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 409033919,
			"version": 24,
			"versionNonce": 26603985,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					2,
					-1
				],
				[
					3,
					-1
				],
				[
					3,
					0
				],
				[
					3,
					1
				],
				[
					3,
					3
				],
				[
					3,
					5
				],
				[
					2,
					8
				],
				[
					1,
					13
				],
				[
					1,
					15
				],
				[
					-1,
					20
				],
				[
					-2,
					24
				],
				[
					-3,
					26
				],
				[
					-4,
					29
				],
				[
					-4,
					32
				],
				[
					-4,
					32
				]
			],
			"pressures": [
				0.1435546875,
				0.1591796875,
				0.1748046875,
				0.1962890625,
				0.2216796875,
				0.259765625,
				0.28125,
				0.3232421875,
				0.36328125,
				0.380859375,
				0.4072265625,
				0.41796875,
				0.4140625,
				0.3916015625,
				0.34375,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				-4,
				32
			]
		},
		{
			"id": "WRbi6LlNLLOLbSxGVxMgO",
			"type": "freedraw",
			"x": 6921.164003459888,
			"y": 2645.803113553115,
			"width": 31,
			"height": 15,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 908890545,
			"version": 34,
			"versionNonce": 5738431,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1,
					-2
				],
				[
					-2,
					-3
				],
				[
					-2,
					-4
				],
				[
					-2,
					-5
				],
				[
					-1,
					-5
				],
				[
					-1,
					-6
				],
				[
					0,
					-6
				],
				[
					1,
					-6
				],
				[
					4,
					-7
				],
				[
					5,
					-7
				],
				[
					8,
					-7
				],
				[
					10,
					-7
				],
				[
					13,
					-7
				],
				[
					16,
					-7
				],
				[
					19,
					-7
				],
				[
					21,
					-7
				],
				[
					24,
					-6
				],
				[
					26,
					-6
				],
				[
					27,
					-4
				],
				[
					28,
					-3
				],
				[
					29,
					-1
				],
				[
					29,
					2
				],
				[
					29,
					6
				],
				[
					28,
					8
				],
				[
					28,
					8
				]
			],
			"pressures": [
				0.16796875,
				0.1787109375,
				0.21484375,
				0.2587890625,
				0.3056640625,
				0.3564453125,
				0.3720703125,
				0.3876953125,
				0.4013671875,
				0.4404296875,
				0.4521484375,
				0.4697265625,
				0.4765625,
				0.482421875,
				0.4853515625,
				0.4892578125,
				0.490234375,
				0.4921875,
				0.4951171875,
				0.4990234375,
				0.5,
				0.498046875,
				0.4794921875,
				0.4345703125,
				0.4013671875,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				28,
				8
			]
		},
		{
			"id": "BQnuLipvZljyl5AAULEOy",
			"type": "freedraw",
			"x": 6943.164003459888,
			"y": 2626.803113553115,
			"width": 3,
			"height": 8,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 1313350527,
			"version": 18,
			"versionNonce": 2121895857,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-3
				],
				[
					0,
					-4
				],
				[
					0,
					-5
				],
				[
					0,
					-6
				],
				[
					1,
					-7
				],
				[
					1,
					-8
				],
				[
					2,
					-8
				],
				[
					3,
					-8
				],
				[
					3,
					-8
				]
			],
			"pressures": [
				0.2734375,
				0.3076171875,
				0.3505859375,
				0.3740234375,
				0.4013671875,
				0.3994140625,
				0.384765625,
				0.33984375,
				0.275390625,
				0
			],
			"simulatePressure": false,
			"lastCommittedPoint": [
				3,
				-8
			]
		},
		{
			"id": "x0CiiyEcrjbD_Q9U_KheF",
			"type": "freedraw",
			"x": 6958.164003459888,
			"y": 2632.803113553115,
			"width": 93,
			"height": 63,
			"angle": 0,
			"strokeColor": "#c92a2a",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"strokeSharpness": "round",
			"seed": 471531857,
			"version": 158,
			"versionNonce": 1802321887,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673188626174,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					2
				],
				[
					1,
					4
				],
				[
					1,
					5
				],
				[
					1,
					6
				],
				[
					1,
					8
				],
				[
					1,
					11
				],
				[
					1,
					12
				],
				[
					1,
					16
				],
				[
					1,
					19
				],
				[
					1,
					20
				],
				[
					0,
					22
				],
				[
					0,
					24
				],
				[
					0,
					25
				],
				[
					0,
					26
				],
				[
					1,
					25
				],
				[
					2,
					24
				],
				[
					2,
					23
				],
				[
					3,
					21
				],
				[
					4,
					20
				],
				[
					6,
					17
				],
				[
					7,
					15
				],
				[
					9,
					12
				],
				[
					10,
					8
				],
				[
					11,
					7
				],
				[
					13,
					4
				],
				[
					15,
					2
				],
				[
					16,
					1
				],
				[
					16,
					0
				],
				[
					17,
					0
				],
				[
					17,
					1
				],
				[
					17,
					3
				],
				[
					16,
					4
				],
				[
					16,
					7
				],
				[
					16,
					10
				],
				[
					15,
					13
				],
				[
					15,
					15
				],
				[
					15,
					18
				],
				[
					15,
					20
				],
				[
					15,
					22
				],
				[
					16,
					23
				],
				[
					16,
					24
				],
				[
					17,
					25
				],
				[
					18,
					25
				],
				[
					19,
					24
				],
				[
					20,
					23
				],
				[
					21,
					22
				],
				[
					22,
					20
				],
				[
					24,
					17
				],
				[
					24,
					16
				],
				[
					26,
					13
				],
				[
					27,
					11
				],
				[
					27,
					9
				],
				[
					28,
					7
				],
				[
					29,
					6
				],
				[
					29,
					5
				],
				[
					28,
					7
				],
				[
					28,
					9
				],
				[
					27,
					10
				],
				[
					27,
					13
				],
				[
					27,
					17
				],
				[
					27,
					20
				],
				[
					27,
					21
				],
				[
					29,
					24
				],
				[
					31,
					26
				],
				[
					33,
					26
				],
				[
					35,
					27
				],
				[
					38,
					26
				],
				[
					42,
					25
				],
				[
					46,
					23
				],
				[
					49,
					20
				],
				[
					50,
					19
				],
				[
					53,
					16
				],
				[
					54,
					15
				],
				[
					55,
					12
				],
				[
					56,
					10
				],
				[
					56,
					8
				],
				[
					56,
					7
				],
				[
					56,
					6
				],
				[
					55,
					5
				],
				[
					54,
					6
				],
				[
					53,
					6
				],
				[
					51,
					7
				],
				[
					50,
					10
				],
				[
					49,
					12
				],
				[
					49,
					15
				],
				[
					49,
					18
				],
				[
					49,
					19
				],
				[
					49,
					20
				],
				[
					49,
					23
				],
				[
					49,
					25
				],
				[
					49,
					26
				],
				[
					50,
					28
				],
				[
					51,
					29
				],
				[
					53,
					29
				],
				[
					55,
					28
				],
				[
					56,
					26
				],
				[
					57,
					25
				],
				[
					58,
					22
				],
				[
					59,
					19
				],
				[
					60,
					16
				],
				[
					60,
					15
				],
				[
					60,
					12
				],
				[
					61,
					10
				],
				[
					61,
					9
				],
				[
					61,
					7
				],
				[
					61,
					6
				],
				[
					60,
					6
				],
				[
					60,
					7
				],
				[
					59,
					10
				],
				[
					59,
					12
				],
				[
					59,
					14
				],
				[
					60,
					18
				],
				[
					60,
					21
				],
				[
					62,
					24
				],
				[
					63,
					26
				],
				[
					64,
					28
				],
				[
					66,
					29
				],
				[
					68,
					30
				],
				[
					70,
					30
				],
				[
					73,
					30
				],
				[
					76,
					27
				],
				[
					78,
					25
				],
				[
					82,
					21
				],
				[
					85,
					16
				],
				[
					88,
					9
				],
				[
					90,
					6
				],
				[
					91,
					-1
				],
				[
					93,
					-7
				],
				[
					93,
					-14
				],
				[
					93,
					-20
				],
				[
					92,
					-23
				],
				[
					92,
					-26
				],
				[
					91,
					-30
				],
				[
					90,
					-32
				],
				[
					89,
					-33
				],
				[
					87,
					-33
				],
				[
					86,
					-31
				],
				[
					85,
					-29
				],
				[
					84,
					-25
				],
				[
					83,
					-19
				],
				[
					83,
					-16
				],
				[
					83,
					-9
				],
				[
					84,
					-2
				],
				[
					85,
					2
				],
				[
					86,
					9
				],
				[
					88,
					16
				],
				[
					89,
					19
				],
				[
					90,
					22
				],
				[
					90,
					22
				]
			],
			"pressures": [
				0.130859375,
				0.1376953125,
				0.1806640625,
				0.2119140625,
				0.228515625,
				0.275390625,
				0.3369140625,
				0.365234375,
				0.4150390625,
				0.4501953125,
				0.462890625,
				0.4765625,
				0.4814453125,
				0.4833984375,
				0.4853515625,
				0.4775390625,
				0.4599609375,
				0.4482421875,
				0.41796875,
				0.4013671875,
				0.369140625,
				0.35546875,
				0.3349609375,
				0.3212890625,
				0.3173828125,
				0.3154296875,
				0.3173828125,
				0.3212890625,
				0.3232421875,
				0.3291015625,
				0.341796875,
				0.3740234375,
				0.38671875,
				0.41015625,
				0.43359375,
				0.453125,
				0.458984375,
				0.466796875,
				0.4697265625,
				0.4716796875,
				0.4716796875,
				0.466796875,
				0.453125,
				0.443359375,
				0.416015625,
				0.37890625,
				0.3369140625,
				0.3046875,
				0.28125,
				0.2724609375,
				0.2626953125,
				0.2607421875,
				0.2607421875,
				0.2578125,
				0.2578125,
				0.255859375,
				0.271484375,
				0.2783203125,
				0.2822265625,
				0.2890625,
				0.29296875,
				0.2919921875,
				0.2890625,
				0.2802734375,
				0.2607421875,
				0.2275390625,
				0.2060546875,
				0.1591796875,
				0.1123046875,
				0.0693359375,
				0.0380859375,
				0.02734375,
				0.0166015625,
				0.015625,
				0.0224609375,
				0.041015625,
				0.0654296875,
				0.078125,
				0.1044921875,
				0.126953125,
				0.1435546875,
				0.1513671875,
				0.1806640625,
				0.2255859375,
				0.2705078125,
				0.3173828125,
				0.3583984375,
				0.3779296875,
				0.3955078125,
				0.4228515625,
				0.4345703125,
				0.4365234375,
				0.4375,
				0.4384765625,
				0.421875,
				0.390625,
				0.359375,
				0.3427734375,
				0.30859375,
				0.2802734375,
				0.26171875,
				0.2548828125,
				0.2470703125,
				0.2431640625,
				0.2421875,
				0.2412109375,
				0.2412109375,
				0.2412109375,
				0.251953125,
				0.283203125,
				0.3193359375,
				0.33984375,
				0.384765625,
				0.42578125,
				0.458984375,
				0.4716796875,
				0.490234375,
				0.4951171875,
				0.50390625,
				0.5068359375,
				0.509765625,
				0.5087890625,
				0.5078125,
				0.505859375,
				0.501953125,
				0.4990234375,
				0.4990234375,
				0.498046875,
				0.4970703125,
				0.5,
				0.5078125,
				0.51171875,
				0.517578125,
				0.529296875,
				0.54296875,
				0.5478515625,
				0.560546875,
				0.57421875,
				0.5830078125,
				0.6005859375,
				0.6181640625,
				0.626953125,
				0.6416015625,
				0.6494140625,
				0.650390625,
				0.6396484375,
				0.603515625,
				0.5703125,