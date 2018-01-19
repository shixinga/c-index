#include<stdio.h>
#include<stdlib.h>

//低字节的地址在前面，高字节的地址在后面
//如int i = 1；则在内存中的存储如下
//1
//0
//0
//0
//0
//0
//0
//0
//0000 0000
//0000 0000
//0000 0000
void main() {

	float f = 12.4;
	unsigned char *pch = (unsigned char *)&f;
	printf("%x\n",pch);
	for(int i = 3; i >= 0; --i) { //因为float占用4个字节

		for(int j = 7; j >= 0; --j) { //因为一个字节有8个bit，且高字节的排在后面
			if(pch[i] & (1 << j)) {
				printf("%c",'1');
			} else {
				printf("%c",'0');
			}
		}
		printf("  ");


	}

	system("pause");
}