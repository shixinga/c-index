#include<stdio.h>
#include<stdlib.h>


void main5() {

	char ch;
	char path[20] = "e:\\�ṹ��.txt";
	FILE *fp = fopen(path, "r");
	if(fp == NULL) {
		printf("�ļ���ʧ��\n");
	} else {

		ch = fgetc(fp);
		do {
			putchar(ch);
			ch = fgetc(fp);
		} while(ch != EOF);
	}
	
	system("pause");
}