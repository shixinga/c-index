#include<stdio.h>
#include<stdlib.h>


void readFile(char *fpath) {
	FILE* fp = fopen(fpath, "rb");
	char ch;
	if(fp == NULL) {
		puts("�򿪶�ȡ���ļ�ʧ��");
	} else {
		fread(&ch,1,1,fp);
		while(!feof(fp)) {
			printf("%d ", ch);
			fread(&ch,1,1,fp);
		}
		fclose(fp);
	}
	printf("\n");
}
void main2() {

	char buffer[5] = {10,10,10,10,10}; // \n��ASCIIֵ
	//puts(buffer);
	char *fa = "e:\\a.c";
	char *fb = "e:\\b.c";
	//���ı���ʽд���ļ�,windowsƽ̨�»��\nת����\r\n ����13 10
	FILE * pfa = fopen(fa, "w");
	//�Զ�������ʽд���ļ�
	FILE * pfb = fopen(fb, "wb");
	if(pfa == NULL) {

		puts("��a�ļ�ʧ��");
	} else {
		fwrite(buffer,1,5,pfa);
		fclose(pfa);
	}

	if(pfb == NULL) {

		puts("��b�ļ�ʧ��");
	} else {
		fwrite(buffer,1,5,pfb);
		fclose(pfb);
	}

	//raed a.c
	puts("�ı��ļ���ȡ������");
	readFile(fa);

	//read b.c
	puts("�������ļ���ȡ������");
	readFile(fb);
	system("pause");
}