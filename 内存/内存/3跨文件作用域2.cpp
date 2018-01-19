#include<stdio.h>
#include<stdlib.h>

//声明data为外部变量
extern int data;
//int data; 是错的，因为重新定义了变量

//extern int num; 是错的，因为num是static类型（即只能在num所声明的文件里面使用）


void main32() {

	printf("data=%d\n",data);

	//printf("num=%d\n",num);
	system("pause");
}