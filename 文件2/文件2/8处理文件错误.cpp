#include<stdio.h>
#include<stdlib.h>


void main8() {

	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path, "w"); //只写不可读
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		fputs("hello world", fp);
		rewind(fp); //把文件指针重置为文件内容的起始地址
		char ch = fgetc(fp);
		if(ch == EOF) {
			if(feof(fp)) {
				printf("读取到文件末尾\n");
				clearerr(fp); //重置文件流的状态,清除错误的状态
			}
			if(ferror(fp)) { //返回值为非0意味着操作文件出错
				printf("操作文件出错\n");
				clearerr(fp); //重置文件流的状态，清除错误的状态
			}

		}
		fclose(fp);
	}
	system("pause");
}