#include<stdio.h>
#include<stdlib.h>

void main92() {
	char path[20] = "1_access.cpp";
	FILE * fp = fopen(path, "r");
	if(fp == NULL) {
		printf("�ļ���ʧ��\n");
		perror("������Ϣ�ǣ�");
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
		printf("�ļ���ʧ��\n");
	} else {
		while(!feof(fp)) {
			char ch = fgetc(fp);
			putchar(ch);
		}
		printf("\n");
		rewind(fp); //���ļ�ָ������Ϊ�ļ����ݵ���ʼλ��
		char str[100];
		while(fgets(str, 100,fp) != NULL) {
			puts(str);
		}
		printf("\n");
		fclose(fp);
	}
	system("pause");
}