#include<stdio.h>
#include<stdlib.h>

void main3() {

	FILE *fp = fopen("e:\\flush.txt", "w");
	if(fp == NULL) {
		puts("���ļ�ʧ��");
	} else {
		puts("���ļ��ɹ�");
		fputs("���",fp);
		fflush(fp);
		fputs("haha", fp);

		fclose(fp);
	}
	system("pause");
}