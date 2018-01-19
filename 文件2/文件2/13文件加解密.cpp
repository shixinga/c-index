#include<stdio.h>
#include<stdlib.h>
void jiami(char *pathr,char *pathw,int offset) {
	FILE *fpr = fopen(pathr,"r");
	FILE *fpw = fopen(pathw,"w");
	if(fpr == NULL || fpw == NULL) {
		perror("文件打开失败:\n");
	}
	int readCh;
	while(!feof(fpr)) {
		readCh = fgetc(fpr);
		readCh = readCh + offset;
		fputc(readCh,fpw);
	}
	fclose(fpr);
	fclose(fpw);
}

void jiemi(char * pathr,char *pathw,int offset) {

	FILE *fpr = fopen(pathr,"r");
	FILE *fpw = fopen(pathw,"w");
	if(fpr == NULL || fpw == NULL) {
		perror("文件打开失败:\n");
	}
	int readCh;
	while(!feof(fpr)) {
		readCh = fgetc(fpr);
		readCh = readCh - offset;
		fputc(readCh,fpw);
	}
	fclose(fpr);
	fclose(fpw);
}

void main131() {

	//加密
	char pathr[100] = "C:\\Users\\shixing\\Desktop\\output_allfile.txt";
	char pathw[100] = "C:\\Users\\shixing\\Desktop\\加密文件.txt";
	jiami(pathr,pathw,2);

	//解密
	char pathr1[100] = "C:\\Users\\shixing\\Desktop\\加密文件.txt";
	char pathw2[100] = "C:\\Users\\shixing\\Desktop\\解密文件.txt";
	jiemi(pathr,pathw,2);
	system("pause");
}