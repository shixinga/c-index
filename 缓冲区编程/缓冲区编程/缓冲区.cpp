#include<stdio.h>
#include<stdlib.h>


void main4() {
	setvbuf(stdout,NULL,_IONBF,0); //_IONBF��ʾ�޻�����
	printf("_IONBF ��ʾ�޻�����\n");
	while(1){};
	system("pause");
}

//windows��֧���л���,��linux֧���л���
void main3() {
	char buffer[4096];
	setvbuf(stdout,buffer,_IOLBF,4096);
	printf("windows ��֧���л��壬so���в����\n");
	while(1){}
	system("pause");
}

void main2() {
	char buffer[4096];
	setvbuf(stdout,buffer,_IOFBF,4096); //_IOFBF��ʾȫ��������4096��ʾ�������Ĵ�С
	printf("setvbuf �������������ȫ������,so����û�����\n");
	while(1){}
	system("pause");
}

void main1() {

	 //��δ���ŵ�linux��û���������Ϊlinux��printfĬ����ȫ�������������������˲Ż��������Ļ�ϣ�
	printf("windows ��printfû�л�����������ֱ�����\n");
	while(1) {}
	system("pause");
}