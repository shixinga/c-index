#include<stdio.h>
#include<stdlib.h>

void main32() {
	double num[9];
	char path[20] = "e:\\ʵ��.txt";
	FILE *fp = fopen(path, "rb");
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n");
		int res  = fread(num, sizeof(double), 9, fp);
		if(res != 9) {
			printf("��ȡʧ��\n");
		} else {
			printf("��ȡ�ɹ�\n");
			for(int i = 0; i < 9; ++i) {
				printf("%lf\n", num[i]);
			}
		}

		fclose(fp);
	}
	system("pause");
}

//��һ���ڴ�������д�뵽�ļ���
void main31() {
	printf("%d,%d\n",sizeof(8), sizeof(double));
	double num[9];
	for(int i = 0; i < 9; ++i) {
		num[i] = i + 0.1;
	}
	char path[20] = "e:\\ʵ��.txt";
	FILE *fp = fopen(path, "wb");
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n");
		int res  = fwrite(num, sizeof(double), 9, fp);
		if(res != 9) {
			printf("д��ʧ��\n");
		} else {
			printf("д��ɹ�\n");
		}

		fclose(fp);
	}
	system("pause");
}