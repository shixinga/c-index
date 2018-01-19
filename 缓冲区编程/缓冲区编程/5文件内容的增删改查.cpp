#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {

	char path[100] = "E:\\1\\list.txt";
	FILE *fp = fopen(path,"r");
	if(fp == NULL) {
		perror("文件打开失败\n");
		return;

	}
	char tempFile[100] = "E:\\1\\temp.txt";
	
	FILE *tfp = fopen(tempFile,"w+");
	if(tfp == NULL) {
		puts("临时文件打开失败");
		system("pause");
		return;
	}
	char destWorld[100] = "阳痿";
	char buffer[100];
	
	while(fgets(buffer,100,fp)) {

		char *p = strstr(buffer,destWorld); //查文件的内容
		if(p != NULL) {
			puts(buffer);
		} else { //删除包含 “阳痿”的行内容
			fputs(buffer,tfp);
		}
	}

	fclose(fp);
	fclose(tfp);
	remove(path);
	rename(tempFile,path);
	system("pause");
}
