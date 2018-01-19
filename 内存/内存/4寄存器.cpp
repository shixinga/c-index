#include<stdio.h>
#include<stdlib.h>

//寄存器在cpu的运算器里面，所以没有内存地址
void main41() {

	int num = 10;
	printf("%x\n",&num);

	//num += 18;

	_asm {
		mov eax,num

		add eax,18

		mov num,eax

	}

	printf("%d\n",num);

	system("pause");
}