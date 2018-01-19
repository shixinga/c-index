#include<stdio.h>
#include<stdlib.h>

void main121() {

	char path[100] = "C:\\Users\\shixing\\Desktop\\1\\";
	char output[100] = "C:\\Users\\shixing\\Desktop\\output_allfile.txt";
	char content[100] = "haha"; //指定要查找的内容
	char cmd[512];
	char show[512];
	//sprintf(cmd, "for /r %s %%a in (*) do @findstr /im %s %%a >> %s",path,content,output);
	sprintf(cmd, "for /r \"%s\" %%a in (*.txt) do @findstr /im \"%s\" %%a >> \"%s\"",path,content,output);
	system(cmd);

	sprintf(show,"type %s", output);
	system(show);
	system("pause");
}