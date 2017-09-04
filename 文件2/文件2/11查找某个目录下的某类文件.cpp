#include<stdio.h>
#include<stdlib.h>

void main111() {

	char path[80] = "C:\\Users\\shixing\\Desktop\\"; //指定的要搜索的目录
	char filename[100] = "*.txt"; //要查找的某类文件
	char cmd[512]; 
	char output[50] = "C:\\Users\\shixing\\Desktop\\output.txt";
	char show[512];
	sprintf(cmd,"for /r \"%s\" %%i in (%s)do @echo %%i >> \"%s\"",path,filename,output);
	system(cmd);

	sprintf(show,"type %s", output);
	system(show);
	system("pause");
}