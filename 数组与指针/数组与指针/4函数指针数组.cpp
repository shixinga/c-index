#include<stdio.h>
#include<stdlib.h>

int jia(int a,int b) {
	return a + b;
}

int jian(int a,int b) {
	return a - b;
}
int cheng(int a,int b) {
	return a * b;
}
int chu(int a,int b) {
	return a / b;
}
int yu(int a,int b) {
	return a % b;
}

void main41() {
	int (*f[5])(int,int);
	f[0] = jia;
	f[1] = jian;
	f[2] = cheng;
	f[3] = chu;
	f[4] = yu;
	int X = 100;
	int Y = 20;
	for(int i = 0; i < 5; ++i) {
		printf("%p\n",f[i]);
		//printf("%d",f[i](X,Y));
	}

	system("pause");
}