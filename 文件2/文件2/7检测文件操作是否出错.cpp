#include<stdio.h>
#include<stdlib.h>

//打印文件操作的错误信息
void main72() {
	char str[20];
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"w"); //记得"选中haha.txt->右键->属性->把只读勾上"
	if(fp == NULL) {
		printf("打开文件失败\n");
		perror("错误信息是：");
	} else {
		printf("打开文件成功\n");
		fclose(fp);
	}
	system("pause");

}
//检测文件操作是否出错
void main71() {

	char str[20];
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"r");
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n");
		int res = ferror(fp);
		if(res != 0) {
			printf("文件操作失败\n");
		} else {
			printf("文件操作成功\n");
		}
		fputs("put a to haha.txt",fp);
		res = ferror(fp);
		if(res != 0) {
			printf("文件操作失败\n"); //r为可读不可写
		} else {
			printf("文件操作成功\n");
		}

		fclose(fp);
	}
	system("pause");
}