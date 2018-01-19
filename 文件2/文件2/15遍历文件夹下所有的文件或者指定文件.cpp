#include<stdio.h>
#include<stdlib.h>

void main151() {
	char path[100] = "C:\\Users\\shixing\\Desktop\\";
	char CMD[100];
	//sprintf(CMD,"dir \"%s\"",path);
	// /a:-d 排除查找文件夹下的子目录
	sprintf(CMD,"dir /a:-d \"%s\" ", path);
	system(CMD);
	system("pause");
}