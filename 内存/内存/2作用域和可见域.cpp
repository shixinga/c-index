#include<stdio.h>
#include<stdlib.h>


void main21() {

	int num = 18; //该变量的作用域是7-18行，可见域是7-10行和15-18行
	printf("out num=%d\n",num);
	{
		printf("out num=%d\n",num);
		int num = 99; //外面的num在该语句块中不可见
		printf("inner num=%d\n",num);

	}

	printf("after out num=%d\n",num);
	system("pause");
}