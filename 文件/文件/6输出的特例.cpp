#include<stdio.h>
#include<stdlib.h>


void main63() {

	puts("你hao");
	fputs("你hao", stdout);
	system("pause");
}
//putchar() 是fputc()的特例
void main62() {

	putchar('a');
	fputc('a',stdout);
	system("pause");
}
//printf 是 fprintf的特例
void main61() {

	printf("你啊");
	fprintf(stdout, "你啊");
	system("pause");
}