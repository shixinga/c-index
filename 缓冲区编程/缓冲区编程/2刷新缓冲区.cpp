#include<stdio.h>
#include<stdlib.h>

//input abcde
void main22() {

	char ch = getchar();
	printf("ch=%c\n",ch);

	ch = getchar();
	printf("ch=%c\n",ch);

	ch = getchar();
	printf("ch=%c\n",ch);
	fflush(stdin); //ˢ�¼��̵����뻺������so��4��getchar()Ҫ��������

	ch = getchar();
	printf("ch=%c\n",ch);

	system("pause");
}

void main21() {

	char buffer[4096];
	setvbuf(stdout,buffer,_IOFBF,4096);
	printf("��Ҫfflush stdout��������so����ʾ����\n");
	fflush(stdout);
	while(1) {};
	system("pause");
}