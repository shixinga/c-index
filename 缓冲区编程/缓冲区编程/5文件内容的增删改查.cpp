#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main() {

	char path[100] = "E:\\1\\list.txt";
	FILE *fp = fopen(path,"r");
	if(fp == NULL) {
		perror("�ļ���ʧ��\n");
		return;

	}
	char tempFile[100] = "E:\\1\\temp.txt";
	
	FILE *tfp = fopen(tempFile,"w+");
	if(tfp == NULL) {
		puts("��ʱ�ļ���ʧ��");
		system("pause");
		return;
	}
	char destWorld[100] = "����";
	char buffer[100];
	
	while(fgets(buffer,100,fp)) {

		char *p = strstr(buffer,destWorld); //���ļ�������
		if(p != NULL) {
			puts(buffer);
		} else { //ɾ������ ����������������
			fputs(buffer,tfp);
		}
	}

	fclose(fp);
	fclose(tfp);
	remove(path);
	rename(tempFile,path);
	system("pause");
}
