#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>



void fun(int a) {

	printf("ʱ�������%d��\n",a);
}

typedef void (*p)(int); //�Ѻ�������void (*p)(int) ����Ϊp
#define pPrintf(X) void (*X)(int)
void main52() {
	/*p pParams = fun;
	pParams(100);*/ //��ʽһ��typedef��ʽ

	/*pPrintf(p) = fun;
	p(102);*/  //��ʽ����define��ʽ

	/*void (*p)(int) = fun;
	p(103);*/  //��ʽ����ԭʼģʽ


	system("pause");
}


#define dbd double*   //��ֻ���滻,so��д define ���Ϸ������� main
typedef double* dbt;   //ȡ������,ֻ�����ڱ������ͣ�so����д typedef main haha;

void main51() {
	dbd d1,d2; //double *d1,d2;
	dbt d3,d4; //double *d3,*d4
	printf("d1=%d,d2=%d\n",sizeof(d1),sizeof(d2));
	printf("d3=%d,d4=%d\n",sizeof(d3),sizeof(d4));


	system("pause");
}