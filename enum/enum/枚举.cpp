#include<stdio.h>
#include<stdlib.h>

enum level {
	司令, 军长, 排长
};

void main1() {
	enum level haha = 司令;
	printf("%d\n",haha);

	system("pause");

}