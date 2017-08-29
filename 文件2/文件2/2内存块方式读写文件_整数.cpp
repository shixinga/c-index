#include<stdio.h>
#include<stdlib.h>

//从文件中读取数据到一个内存块
void main22() {
	int num[9];
	char path[20] = "e:\\整数.txt";
	FILE *fp = fopen(path, "rb");
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n");
		int res = fread(num,sizeof(int),9, fp);
		if(res != 9) {
			printf("读取文件失败\n");
		} else {
			printf("读取文件成功\n");
			for(int i = 0; i < 9; ++i) {
				printf("%d,",num[i]);
			}
		}
		fclose(fp);

	}
	system("pause");
}

//写一个内存块到文件
void main21() {
	int num[9];
	for(int i = 0; i < 9; ++i) {
		num[i] = i;
	}
	char path[20] = "e:\\整数.txt";
	FILE *fp = fopen(path, "wb");
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n");
		int res = fwrite(num, sizeof(int), 9, fp);
		if(res != 9) {
			printf("写入文件失败\n");
		} else {
			printf("写入文件成功\n");
		}
		fclose(fp);

	}
	system("pause");
}