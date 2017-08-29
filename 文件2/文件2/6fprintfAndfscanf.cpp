#include<stdio.h>
#include<stdlib.h>
//按照格式化方式读写文件
//stdout就是屏幕，c语言把所有设备都当作文件

//字符串的读取以空格或者换行符为结束标志
void main64() {
	int num;
	char str[20];
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"r+");
	if(fp == NULL) {
		printf("文件打开失败\n");
	} else {
		printf("文件打开成功\n");
		for(int i = 0; i < 9; ++i) {
			fscanf(fp, "%s%d", str, &num);
			printf("%s%d\n",str,num);
		}
	}

	system("pause");
}
void main63() {
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"w+");
	if(fp == NULL) {
		printf("文件打开失败\n");
	} else {
		printf("文件打开成功\n");
		for(int i = 0; i < 9; ++i) {
			fprintf(fp, "你的身高为: %d\n", i);
		}
		

		fclose(fp);
	}
	
	
	system("pause");
}

void main62() {
	int num;
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"r+");
	if(fp == NULL) {
		printf("文件打开失败\n");
	} else {
		printf("文件打开成功\n");
		fscanf(fp, "there are %d boys\n", &num);

		fclose(fp);
	}
	
	printf("num=%d\n",num);
	system("pause");
}
void main61() {
	int num = 10;
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"w+");
	if(fp == NULL) {
		printf("文件打开失败\n");
	} else {
		printf("文件打开成功\n");
		fprintf(fp, "there are %d boys\n", num);

		fclose(fp);
	}
	
	
	system("pause");
}