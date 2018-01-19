#include<stdio.h>
#include<stdlib.h>


void main4() {
	setvbuf(stdout,NULL,_IONBF,0); //_IONBF表示无缓冲区
	printf("_IONBF 表示无缓冲区\n");
	while(1){};
	system("pause");
}

//windows不支持行缓冲,而linux支持行缓冲
void main3() {
	char buffer[4096];
	setvbuf(stdout,buffer,_IOLBF,4096);
	printf("windows 不支持行缓冲，so该行不输出\n");
	while(1){}
	system("pause");
}

void main2() {
	char buffer[4096];
	setvbuf(stdout,buffer,_IOFBF,4096); //_IOFBF表示全缓冲区，4096表示缓冲区的大小
	printf("setvbuf 中设置了输出的全缓冲区,so该行没有输出\n");
	while(1){}
	system("pause");
}

void main1() {

	 //这段代码放到linux会没有输出，因为linux的printf默认是全缓冲区（即缓冲区满了才会输出的屏幕上）
	printf("windows 的printf没有缓冲区，所以直接输出\n");
	while(1) {}
	system("pause");
}