#include<stdio.h>
#include<stdlib.h>


void main8() {

	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path, "w"); //ֻд���ɶ�
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		fputs("hello world", fp);
		rewind(fp); //���ļ�ָ������Ϊ�ļ����ݵ���ʼ��ַ
		char ch = fgetc(fp);
		if(ch == EOF) {
			if(feof(fp)) {
				printf("��ȡ���ļ�ĩβ\n");
				clearerr(fp); //�����ļ�����״̬,��������״̬
			}
			if(ferror(fp)) { //����ֵΪ��0��ζ�Ų����ļ�����
				printf("�����ļ�����\n");
				clearerr(fp); //�����ļ�����״̬����������״̬
			}

		}
		fclose(fp);
	}
	system("pause");
}