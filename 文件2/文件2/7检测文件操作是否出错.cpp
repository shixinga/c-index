#include<stdio.h>
#include<stdlib.h>

//��ӡ�ļ������Ĵ�����Ϣ
void main72() {
	char str[20];
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"w"); //�ǵ�"ѡ��haha.txt->�Ҽ�->����->��ֻ������"
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
		perror("������Ϣ�ǣ�");
	} else {
		printf("���ļ��ɹ�\n");
		fclose(fp);
	}
	system("pause");

}
//����ļ������Ƿ����
void main71() {

	char str[20];
	char path[20] = "e:\\haha.txt";
	FILE * fp = fopen(path,"r");
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n");
		int res = ferror(fp);
		if(res != 0) {
			printf("�ļ�����ʧ��\n");
		} else {
			printf("�ļ������ɹ�\n");
		}
		fputs("put a to haha.txt",fp);
		res = ferror(fp);
		if(res != 0) {
			printf("�ļ�����ʧ��\n"); //rΪ�ɶ�����д
		} else {
			printf("�ļ������ɹ�\n");
		}

		fclose(fp);
	}
	system("pause");
}