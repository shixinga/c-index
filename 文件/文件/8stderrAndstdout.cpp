#include<stdio.h>
#include<stdlib.h>

void main8() {

	//stderr输出到显示器上,不会冲定向到磁盘上
	fprintf(stderr, "stderr num=%d,str=%s\n",3, "你好啊");
	//stdout默认是输出到显示器上，如果冲定向到磁盘上，则会输出到磁盘上
	fprintf(stdout, "stdout num=%d,str=%s\n",3, "你好啊");
	system("pause");
}