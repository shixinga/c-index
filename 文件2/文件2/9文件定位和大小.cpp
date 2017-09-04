#include<stdio.h>
#include<stdlib.h>

void main92() {
	char path[20] = "1_access.cpp";
	FILE * fp = fopen(path, "r");
	if(fp == NULL) {
		printf("文件打开失败\n");
		perror("错误信息是：");
	} else {
		fseek(fp, 0, SEEK_END);
		int fileSize = ftell(fp);
		printf("file size is %d bytes", fileSize);
	}
	system("pause");
}

void main91() {

	char path[20] = "1_access.cpp";
	FILE *fp = fopen(path, "r");
	if(fp == NULL) {
		printf("文件打开失败\n");
	} else {
		while(!feof(fp)) {
			char ch = fgetc(fp);
			putchar(ch);
		}
		printf("\n");
		rewind(fp); //将文件指针重置为文件内容的起始位置
		char str[100];
		while(fgets(str, 100,fp) != NULL) {
			puts(str);
		}
		printf("\n");
		fclose(fp);
	}
	system("pause");
}