---

excalidraw-plugin: parsed
tags: [excalidraw]

---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Text Elements
void print(struct node  * first)
{
    if(first == NULL) return;
    printf("%d\n", node->val);
    print(first->next);
} ^MSk7F8BY

void destroy(struct node * first)
{
    if(first == NULL) return;
    destroy(first->next);
    free(first);
    return;
} ^qnHwUHLK

this code will insert values into a list but it will ensure it will insert
them in ascending order since as the first item will be created as normal
and insert will always return the head of the list and for subsequent 
entries, it will traverse until it reaches a value that is larger or reaches the
end and then inserts it in place. Duplicates are not dealt with however. ^5BIfjLlo

The leak is that the function does not handle duplicates correctly. This is because
there is no comparison for equality in the while loop and if the value to insert is equal, 
then it will not update pred = succ and thus when inserting a duplicate, the old duplicate value 
will have no nodes pointing to it anymore and thus be lost

To amend this, instead of succ->val > val, do succ->val >= val or if no duplicates
allowed at all, if(succ->val == val) return first; ^Jxczhkyz


# Embedded files
30190658c57c5ea1dc556a65b0ca30ee16a8418b: [[OS_SP/exams/Pasted Image 20230107201300_355.png]]
d46b97a318a5fdba245c2330cce4ed014582ca1b: [[OS_SP/exams/Pasted Image 20230107201312_545.png]]
b991de70e788cb037610b518ff524df74fe8c3c3: [[OS_SP/exams/Pasted Image 20230107201944_055.png]]
d734956615dbba2552b30c298b687cc4b2bf3545: [[OS_SP/exams/Pasted Image 20230107202016_206.png]]
fd0b08ddff22aa4a2cb95f274f0c94e3a7dcee97: [[OS_SP/exams/Pasted Image 20230107203526_326.png]]

%%
# Drawing
```json
{
	"type": "excalidraw",
	"version": 2,
	"source": "https://excalidraw.com",
	"elements": [
		{
			"id": "ZGZWPZ2DZZlfxdC2foDpF",
			"type": "image",
			"x": -435.2102803738318,
			"y": -905.5,
			"width": 844.4205607476636,
			"height": 724.2725450901804,
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
			"seed": 2371911,
			"version": 265,
			"versionNonce": 2075320327,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673122378839,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "30190658c57c5ea1dc556a65b0ca30ee16a8418b",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "q3j5MWT64I70OOTw9mkA7",
			"type": "image",
			"x": -439.5,
			"y": -152,
			"width": 845.275590551181,
			"height": 226,
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
			"seed": 1976656585,
			"version": 144,
			"versionNonce": 714414695,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673122391568,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "d46b97a318a5fdba245c2330cce4ed014582ca1b",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "MSk7F8BY",
			"type": "text",
			"x": -427,
			"y": 105.5,
			"width": 307,
			"height": 150,
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
			"seed": 812956167,
			"version": 167,
			"versionNonce": 342564199,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673122609164,
			"link": null,
			"locked": false,
			"text": "void print(struct node  * first)\n{\n    if(first == NULL) return;\n    printf(\"%d\\n\", node->val);\n    print(first->next);\n}",
			"rawText": "void print(struct node  * first)\n{\n    if(first == NULL) return;\n    printf(\"%d\\n\", node->val);\n    print(first->next);\n}",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 143,
			"containerId": null,
			"originalText": "void print(struct node  * first)\n{\n    if(first == NULL) return;\n    printf(\"%d\\n\", node->val);\n    print(first->next);\n}"
		},
		{
			"id": "opr4AAkbbF73puDWW-hox",
			"type": "image",
			"x": -439.5,
			"y": 291,
			"width": 711,
			"height": 101,
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
			"seed": 790340295,
			"version": 75,
			"versionNonce": 918016905,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673122620550,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "b991de70e788cb037610b518ff524df74fe8c3c3",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "qnHwUHLK",
			"type": "text",
			"x": -418,
			"y": 430.5,
			"width": 327,
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
			"seed": 268944775,
			"version": 126,
			"versionNonce": 825362601,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673122774739,
			"link": null,
			"locked": false,
			"text": "void destroy(struct node * first)\n{\n    if(first == NULL) return;\n    destroy(first->next);\n    free(first);\n    return;\n}",
			"rawText": "void destroy(struct node * first)\n{\n    if(first == NULL) return;\n    destroy(first->next);\n    free(first);\n    return;\n}",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 168,
			"containerId": null,
			"originalText": "void destroy(struct node * first)\n{\n    if(first == NULL) return;\n    destroy(first->next);\n    free(first);\n    return;\n}"
		},
		{
			"id": "an_li9-_DDCAxBo88jxxM",
			"type": "image",
			"x": -432,
			"y": 622,
			"width": 718,
			"height": 199,
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
			"seed": 2099055497,
			"version": 81,
			"versionNonce": 676330119,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673122789825,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "d734956615dbba2552b30c298b687cc4b2bf3545",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "5BIfjLlo",
			"type": "text",
			"x": -432,
			"y": 883.5,
			"width": 780,
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
			"seed": 1937392839,
			"version": 508,
			"versionNonce": 12645737,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673123343037,
			"link": null,
			"locked": false,
			"text": "this code will insert values into a list but it will ensure it will insert\nthem in ascending order since as the first item will be created as normal\nand insert will always return the head of the list and for subsequent \nentries, it will traverse until it reaches a value that is larger or reaches the\nend and then inserts it in place. Duplicates are not dealt with however.",
			"rawText": "this code will insert values into a list but it will ensure it will insert\nthem in ascending order since as the first item will be created as normal\nand insert will always return the head of the list and for subsequent \nentries, it will traverse until it reaches a value that is larger or reaches the\nend and then inserts it in place. Duplicates are not dealt with however.",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 118,
			"containerId": null,
			"originalText": "this code will insert values into a list but it will ensure it will insert\nthem in ascending order since as the first item will be created as normal\nand insert will always return the head of the list and for subsequent \nentries, it will traverse until it reaches a value that is larger or reaches the\nend and then inserts it in place. Duplicates are not dealt with however."
		},
		{
			"id": "uk_-QFIuMoEbT6zhR8dYW",
			"type": "image",
			"x": -476,
			"y": 1040,
			"width": 890.3626943005181,
			"height": 240,
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
			"seed": 2108710985,
			"version": 256,
			"versionNonce": 829408231,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673123731853,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "fd0b08ddff22aa4a2cb95f274f0c94e3a7dcee97",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "Jxczhkyz",
			"type": "text",
			"x": -470,
			"y": 1305.5,
			"width": 964,
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
			"seed": 897529383,
			"version": 674,
			"versionNonce": 1907774055,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1673124861394,
			"link": null,
			"locked": false,
			"text": "The leak is that the function does not handle duplicates correctly. This is because\nthere is no comparison for equality in the while loop and if the value to insert is equal, \nthen it will not update pred = succ and thus when inserting a duplicate, the old duplicate value \nwill have no nodes pointing to it anymore and thus be lost\n\nTo amend this, instead of succ->val > val, do succ->val >= val or if no duplicates\nallowed at all, if(succ->val == val) return first;",
			"rawText": "The leak is that the function does not handle duplicates correctly. This is because\nthere is no comparison for equality in the while loop and if the value to insert is equal, \nthen it will not update pred = succ and thus when inserting a duplicate, the old duplicate value \nwill have no nodes pointing to it anymore and thus be lost\n\nTo amend this, instead of succ->val > val, do succ->val >= val or if no duplicates\nallowed at all, if(succ->val == val) return first;",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 168,
			"containerId": null,
			"originalText": "The leak is that the function does not handle duplicates correctly. This is because\nthere is no comparison for equality in the while loop and if the value to insert is equal, \nthen it will not update pred = succ and thus when inserting a duplicate, the old duplicate value \nwill have no nodes pointing to it anymore and thus be lost\n\nTo amend this, instead of succ->val > val, do succ->val >= val or if no duplicates\nallowed at all, if(succ->val == val) return first;"
		},
		{
			"id": "eAd1YjxmrBNqS8YoZBkbN",
			"type": "text",
			"x": -417,
			"y": 846.5,
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
			"seed": 1084757353,
			"version": 3,
			"versionNonce": 1941143625,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673122816046,
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
			"id": "dyjHaWobOkVI_vJjmt413",
			"type": "text",
			"x": -464,
			"y": 1300.5,
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
			"seed": 827068937,
			"version": 3,
			"versionNonce": 1945037033,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1673124653886,
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
		"currentItemStrokeColor": "#000000",
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