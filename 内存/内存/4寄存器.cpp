#include<stdio.h>
#include<stdlib.h>

//�Ĵ�����cpu�����������棬����û���ڴ��ַ
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