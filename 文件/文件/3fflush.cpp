#include<stdio.h>
#include<stdlib.h>

void main3() {

	FILE *fp = fopen("e:\\flush.txt", "w");
	if(fp == NULL) {
		puts("打开文件失败");
	} else {
		puts("打开文件成功");
		fputs("你好",fp);
		fflush(fp);
		fputs("haha", fp);

		fclose(fp);
	}
	system("pause");
}