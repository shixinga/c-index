#include<stdio.h>
#include<stdlib.h>

void main141() {

	char path[100] = "C:\\Users\\shixing\\Desktop\\output_allfile.txt";
	char destWorld[40] = "你好啊";
	char CMD[100];
	//查找output_allfile.txt中包含“你好啊”的行号和该行的输出
	sprintf(CMD,"find /n \"%s\"  %s",destWorld,path);

	system(CMD);
	system("pause");
}