#include<stdio.h>
#include<stdlib.h>
void jiami(char *pathr,char *pathw,int offset) {
	FILE *fpr = fopen(pathr,"r");
	FILE *fpw = fopen(pathw,"w");
	if(fpr == NULL || fpw == NULL) {
		perror("�ļ���ʧ��:\n");
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
		perror("�ļ���ʧ��:\n");
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

	//����
	char pathr[100] = "C:\\Users\\shixing\\Desktop\\output_allfile.txt";
	char pathw[100] = "C:\\Users\\shixing\\Desktop\\�����ļ�.txt";
	jiami(pathr,pathw,2);

	//����
	char pathr1[100] = "C:\\Users\\shixing\\Desktop\\�����ļ�.txt";
	char pathw2[100] = "C:\\Users\\shixing\\Desktop\\�����ļ�.txt";
	jiemi(pathr,pathw,2);
	system("pause");
}