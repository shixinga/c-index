#include<stdio.h>
#include<stdlib.h>
#include<io.h>

//6���ж��ļ��Ƿ�ɶ���д
void main15() {
	char path[20] = "e:\\2.txt";
	int isReadAndWrite = _access(path, 6);
	if(isReadAndWrite != 0) {
		printf("�ļ����ɶ�����д\n");
	} else {
		printf("�ļ��ɶ���д\n");
	}
	system("pause");
}

//4���ж��ļ��Ƿ�ɶ�
void main14() {

	char path[20] = "e:\\2.txt";
	int isRead = _access(path, 4);
	if(isRead != 0) {
		printf("�ļ����ɶ�\n");
	} else {
		printf("�ļ��ɶ�\n");
	}
	system("pause");
}


//2��ʾ�ļ��Ƿ��д
void main13() {
	char path[20] = "e:\\2.txt";
	int isWrited = _access(path, 2);
	if(isWrited != 0) {
		fputs("�ļ�����д\n", stdout);
	} else {
		fputs("�ļ���д\n", stdout);
	}

	system("pause");
}

//0�ж��ļ����ļ����Ƿ����
//�ж��ļ��Ƿ����:����0��ʾ���ڣ�����-1��ʾ������
void main12() {
	char path[20] = "e:\\2.txt";
	int isExit = _access(path, 0);
	if(isExit != 0) {
		fputs("�ļ�������\n", stdout);
	} else {
		fputs("�ļ����ڰ�\n", stdout);
	}
	system("pause");
}

//�ж��ļ����Ƿ����:����0��ʾ���ڣ�����-1��ʾ������
void main11() {

	char path[20] = "e:\\fold";
	int isExit = _access(path, 0); 
	printf("%d\n", isExit);
	if(isExit != 0) {
		puts("�ļ��в�����");
	} else {
		puts("�ļ��д���");
	}
	system("pause");
}