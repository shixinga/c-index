#include<stdio.h>
#include<stdlib.h>

void fun(int num,int dataAnd,int n) {
	if(n == 0) {
		return;
	} else {
		if(n % 4 == 0) {
			printf("   ");
		}
		printf("%c",num & dataAnd ? '1': '0');
		
		n--;
		num <<= 1;
		fun(num,dataAnd,n);
	}

}
void main19() {

	int dataAnd = 1 << 31;
	int num = -2;
	fun(num,dataAnd,32);
	printf("\n");
	system("pause");
}