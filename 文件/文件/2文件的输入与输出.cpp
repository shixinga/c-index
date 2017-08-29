#include<stdio.h>
#include<stdlib.h>


void readFile(char *fpath) {
	FILE* fp = fopen(fpath, "rb");
	char ch;
	if(fp == NULL) {
		puts("打开读取的文件失败");
	} else {
		fread(&ch,1,1,fp);
		while(!feof(fp)) {
			printf("%d ", ch);
			fread(&ch,1,1,fp);
		}
		fclose(fp);
	}
	printf("\n");
}
void main2() {

	char buffer[5] = {10,10,10,10,10}; // \n的ASCII值
	//puts(buffer);
	char *fa = "e:\\a.c";
	char *fb = "e:\\b.c";
	//以文本形式写入文件,windows平台下会把\n转换成\r\n ，即13 10
	FILE * pfa = fopen(fa, "w");
	//以二进制形式写入文件
	FILE * pfb = fopen(fb, "wb");
	if(pfa == NULL) {

		puts("打开a文件失败");
	} else {
		fwrite(buffer,1,5,pfa);
		fclose(pfa);
	}

	if(pfb == NULL) {

		puts("打开b文件失败");
	} else {
		fwrite(buffer,1,5,pfb);
		fclose(pfb);
	}

	//raed a.c
	puts("文本文件读取的内容");
	readFile(fa);

	//read b.c
	puts("二进制文件读取的内容");
	readFile(fb);
	system("pause");
}