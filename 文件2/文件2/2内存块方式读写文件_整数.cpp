#include<stdio.h>
#include<stdlib.h>

//���ļ��ж�ȡ���ݵ�һ���ڴ��
void main22() {
	int num[9];
	char path[20] = "e:\\����.txt";
	FILE *fp = fopen(path, "rb");
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n");
		int res = fread(num,sizeof(int),9, fp);
		if(res != 9) {
			printf("��ȡ�ļ�ʧ��\n");
		} else {
			printf("��ȡ�ļ��ɹ�\n");
			for(int i = 0; i < 9; ++i) {
				printf("%d,",num[i]);
			}
		}
		fclose(fp);

	}
	system("pause");
}

//дһ���ڴ�鵽�ļ�
void main21() {
	int num[9];
	for(int i = 0; i < 9; ++i) {
		num[i] = i;
	}
	char path[20] = "e:\\����.txt";
	FILE *fp = fopen(path, "wb");
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n");
		int res = fwrite(num, sizeof(int), 9, fp);
		if(res != 9) {
			printf("д���ļ�ʧ��\n");
		} else {
			printf("д���ļ��ɹ�\n");
		}
		fclose(fp);

	}
	system("pause");
}