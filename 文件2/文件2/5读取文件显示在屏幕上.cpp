#include<stdio.h>
#include<stdlib.h>


void main5() {

	char ch;
	char path[20] = "e:\\结构体.txt";
	FILE *fp = fopen(path, "r");
	if(fp == NULL) {
		printf("文件打开失败\n");
	} else {

		ch = fgetc(fp);
		do {
			putchar(ch);
			ch = fgetc(fp);
		} while(ch != EOF);
	}
	
	system("pause");
}