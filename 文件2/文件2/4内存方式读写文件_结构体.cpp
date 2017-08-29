#include<stdio.h>
#include<stdlib.h>
struct name {
	char first[10];
	char second[10];
	char third[10];
} info[9] = {
	{"c1","s1", "x1"},
	{"c2","s2", "x2"},
	{"c3","s3", "x3"},
	{"c4","s4", "x4"},
	{"c5","s5", "x5"},
	{"c6","s6", "x6"},
	{"c7","s7", "x7"},
	{"c8","s8", "x8"},
	{"c9","s9", "x9"}
};


void main42() {
	struct name getName[9];
	char path[20] = "e:\\结构体.txt";
	FILE * fp = fopen(path, "rb");
	if(fp == NULL) {
		printf("文件打开失败\n");
	} else {
		printf("文件打开成功\n");
		int res = fread(getName, sizeof(struct name), 9, fp);
		if(res != 9) {
			printf("文件读取失败\n");
		} else {
			printf("文件读取成功\n");
			for(int i = 0; i < 9; ++i) {
				printf("%s,%s,%s\n",getName[i].first, getName[i].second, getName[i].third);
			}
		}

		fclose(fp);
	}
	system("pause");
}

void main41() {

	char path[20] = "e:\\结构体.txt";
	FILE * fp = fopen(path, "wb");
	if(fp == NULL) {
		printf("文件打开失败\n");
	} else {
		printf("文件打开成功\n");
		int res = fwrite(info, sizeof(struct name), 9, fp);
		if(res != 9) {
			printf("文件写入失败\n");
		} else {
			printf("文件写入成功\n");
		}

		fclose(fp);
	}
	system("pause");
}