#include<stdio.h>
#include<stdlib.h>

//extern int x; //外部变量声明，扩大全局变量的范围
void fun();
void main51() {
	extern int x;//外部变量声明，扩大全局变量的范围
	printf("main x= %d\n",x);

	fun();
	system("pause");
}

int x = 22;

void fun() {

	printf("fun x = %d\n",x);
}