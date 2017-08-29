#include<stdio.h>
#include<stdlib.h>

void main92() {

	putchar('a');
	putchar('a');
	putchar('a');
	putchar('a');
	putchar('\n');
	putw('a',stdout);//putw()是一口气输出4个字节的，'a'只占1个字节，后面会用3个空字符填满
	system("pause");
}
void main91() {

	//getw()获取4个字节
	//一个汉字两个字节，如果输入‘你好’，则输出正常
	//如果输入1后回车，回车也是一个字符，再输入2后回车，然后输出的结果是
	//1
	//2
	int w = getw(stdin);
	putw(w, stdout);//putw() 是一口气输出4个字符的
	
	system("pause");
}