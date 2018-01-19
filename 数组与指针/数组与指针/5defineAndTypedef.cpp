#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>



void fun(int a) {

	printf("时光飞逝了%d年\n",a);
}

typedef void (*p)(int); //把函数类型void (*p)(int) 别名为p
#define pPrintf(X) void (*X)(int)
void main52() {
	/*p pParams = fun;
	pParams(100);*/ //方式一：typedef方式

	/*pPrintf(p) = fun;
	p(102);*/  //方式二：define方式

	/*void (*p)(int) = fun;
	p(103);*/  //方式三：原始模式


	system("pause");
}


#define dbd double*   //就只是替换,so能写 define 给老夫跑起来 main
typedef double* dbt;   //取个别名,只适用于变量类型，so不能写 typedef main haha;

void main51() {
	dbd d1,d2; //double *d1,d2;
	dbt d3,d4; //double *d3,*d4
	printf("d1=%d,d2=%d\n",sizeof(d1),sizeof(d2));
	printf("d3=%d,d4=%d\n",sizeof(d3),sizeof(d4));


	system("pause");
}