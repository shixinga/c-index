#include<stdio.h>
#include<stdlib.h>

void main141() {

	char path[100] = "C:\\Users\\shixing\\Desktop\\output_allfile.txt";
	char destWorld[40] = "��ð�";
	char CMD[100];
	//����output_allfile.txt�а�������ð������кź͸��е����
	sprintf(CMD,"find /n \"%s\"  %s",destWorld,path);

	system(CMD);
	system("pause");
}