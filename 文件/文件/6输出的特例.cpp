#include<stdio.h>
#include<stdlib.h>


void main63() {

	puts("��hao");
	fputs("��hao", stdout);
	system("pause");
}
//putchar() ��fputc()������
void main62() {

	putchar('a');
	fputc('a',stdout);
	system("pause");
}
//printf �� fprintf������
void main61() {

	printf("�㰡");
	fprintf(stdout, "�㰡");
	system("pause");
}