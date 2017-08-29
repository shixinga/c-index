#include<stdio.h>
#include<stdlib.h>


void main43() {

	char s[10];
	fscanf(stdin,"%s",s);
	fprintf(stdout,"%s",s);
	system("pause");
}
void main42() {
	char cmd[100] = {0};
	int num =0;
	char * fpath = "C:\\文档\\c\\文件\\Debug\\1.txt";
	FILE * fp = fopen(fpath, "r");
	if(fp == NULL) {
		puts("打开文件失败");
	} else {
		puts("打开文件成功");
		fscanf(fp,"for /l %%i in (1,1,%d) do %s",&num,cmd);
		printf("num=%d,cmd=%s\n",num,cmd);
		system(cmd);

	}
	system("pause");
}
//写入文件
void main41() {
	char cmd[100] = {"tasklist"};
	int num = 3;
	char * fpath = "C:\\文档\\c\\文件\\Debug\\1.txt";

	FILE * fp = fopen(fpath, "w");
	if(fp == NULL) {
		puts("打开文件失败");
	} else {
		puts("打开文件成功");
		fprintf(fp,"for /l %%i in (1,1,%d) do %s", num, cmd);
		fclose(fp);
	}

	system("pause");
	fclose(fp);
	
	system("pause");
}
void main4() {

	char cmd[100] = {0};
	scanf("%s",cmd);
	system(cmd);
	system("pause");
}