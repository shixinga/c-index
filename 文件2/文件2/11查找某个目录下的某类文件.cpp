#include<stdio.h>
#include<stdlib.h>

void main111() {

	char path[80] = "C:\\Users\\shixing\\Desktop\\"; //ָ����Ҫ������Ŀ¼
	char filename[100] = "*.txt"; //Ҫ���ҵ�ĳ���ļ�
	char cmd[512]; 
	char output[50] = "C:\\Users\\shixing\\Desktop\\output.txt";
	char show[512];
	sprintf(cmd,"for /r \"%s\" %%i in (%s)do @echo %%i >> \"%s\"",path,filename,output);
	system(cmd);

	sprintf(show,"type %s", output);
	system(show);
	system("pause");
}