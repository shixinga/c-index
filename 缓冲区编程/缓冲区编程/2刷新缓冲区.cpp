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
	fflush(stdin); //刷新键盘的输入缓冲区，so第4个getchar()要重新输入

	ch = getchar();
	printf("ch=%c\n",ch);

	system("pause");
}

void main21() {

	char buffer[4096];
	setvbuf(stdout,buffer,_IOFBF,4096);
	printf("我要fflush stdout缓冲区，so能显示出来\n");
	fflush(stdout);
	while(1) {};
	system("pause");
}