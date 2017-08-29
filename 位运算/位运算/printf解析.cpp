#include<stdio.h>
#include<stdlib.h>

void main11() {

	char ch = -3;
	int num = -12;
	//1111 1101
	//0000 0000 0000 0000 0000 0000 1111 1101
	//1111 1111 1111 1111 1111 1111 1111 0100
	printf("%d\n",ch &num);
	system("pause");
}
void main8() {

	unsigned char ch = 9;
	int num = 12;
	//0000 1001
	//0000 0000 0000 0000 0000 0000 0000 1001
	//0000 0000 0000 0000 0000 0000 0000 1100
	printf("%d\n",num&ch); 
	system("pause");
}
void main7() {

	unsigned char ch = 1;
	ch = ch <<8;
	printf("%d\n",ch);
	system("pause");
}
void main6() {


	unsigned int x = -1; //-1 整数在内存中都是以补码方式存储，所以-1在内存中以 1111 1111 1111 1111 1111 1111 1111 1111存储
	int y = 4294967295;
	printf("%d,%u\n",x,x);
	printf("%d,%u\n",y,y);
	system("pause");
}