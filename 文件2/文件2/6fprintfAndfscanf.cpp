#include<stdio.h>
#include<stdlib.h>
//���ո�ʽ����ʽ��д�ļ�
//stdout������Ļ��c���԰������豸�������ļ�

//�ַ����Ķ�ȡ�Կո���߻��з�Ϊ������־
void main64() {
	int num;
	char str[20];
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"r+");
	if(fp == NULL) {
		printf("�ļ���ʧ��\n");
	} else {
		printf("�ļ��򿪳ɹ�\n");
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
		printf("�ļ���ʧ��\n");
	} else {
		printf("�ļ��򿪳ɹ�\n");
		for(int i = 0; i < 9; ++i) {
			fprintf(fp, "������Ϊ: %d\n", i);
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
		printf("�ļ���ʧ��\n");
	} else {
		printf("�ļ��򿪳ɹ�\n");
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
		printf("�ļ���ʧ��\n");
	} else {
		printf("�ļ��򿪳ɹ�\n");
		fprintf(fp, "there are %d boys\n", num);

		fclose(fp);
	}
	
	
	system("pause");
}