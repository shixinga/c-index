#include<stdio.h>
#include<stdlib.h>

//extern int x; //�ⲿ��������������ȫ�ֱ����ķ�Χ
void fun();
void main51() {
	extern int x;//�ⲿ��������������ȫ�ֱ����ķ�Χ
	printf("main x= %d\n",x);

	fun();
	system("pause");
}

int x = 22;

void fun() {

	printf("fun x = %d\n",x);
}