#include<stdio.h>
#include<stdlib.h>

int data = 123;
static int num = 456; //static 表示该变量只能在该文件使用


void main31() {

	printf("data=%d\n",data);
	printf("num=%d\n",num);

	system("pause");
}