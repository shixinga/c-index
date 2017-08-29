#include<stdio.h>
#include<stdlib.h>

union info {
	short a;
	double b[5];
};

void main() {
	union info info1;
	printf("union = %d,union parameter=%d\n",sizeof(union info),sizeof(info1));


	getchar();

}