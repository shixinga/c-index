#include<stdio.h>
#include<stdlib.h>
//b��bit����ʾ�������ļ�
//t��text����ʾ�ı��ļ�
//û��bҲû��t�ľͲ�ǿ���Ƕ������ļ������˱��ļ������ձ�����


//a+ģʽ:����ļ���������ᴴ��һ�����ļ�������ļ����ڣ����򿪸��ļ�������ݳ��������ݺ���׷�����ݣ��ɶ���д��
//aģʽ:����ļ���������ᴴ��һ�����ļ�������ļ����ڣ����򿪸��ļ�������ݳ��������ݺ���׷�����ݣ���д���ɶ���
void main() {
	char path[20] = "a.txt";
	FILE * fp = fopen(path, "a+");
	if(fp ==NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n");
		fputs("�����հ��磬���κ�����", fp);

		rewind(fp);
		
		char ch = fgetc(fp);
		if(ch == -1) {
			printf("��ȡʧ��\n");
		} else {
			printf("��ȡ�ɹ�\n");
			while(!feof(fp)) {
				putchar(ch);
				ch = fgetc(fp);
			}
			printf("\n");
		}
		fclose(fp);
	}
	system("pause");
}
//rb+(b��ʾ������)ģʽ:�ļ�����ʱ���ܴ򿪳ɹ����ɶ���д,��д��ʱ��׷�Ӷ��������֮ǰ������
//rb(b��ʾ������)ģʽ���ļ�����ʱ���ܴ򿪳ɹ����ɶ�����д
void main104() {

	char path[20] = "10rb+.txt";
	FILE *fp = fopen(path, "rb+");
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n"); 
		char ch;
		while(!feof(fp)) {
			ch = fgetc(fp);
			putchar(ch);
		}
		//rewind(fp);
		int result = fputc('c', fp);
		printf("the result of writing 'a' to FILE is %d \n", result); //rģʽ:����д�룬ֻ�ܶ�ȡ
		fclose(fp);
	}

	system("pause");
}


//wb+��b��ʾ�����ƣ�ģʽ����������ڸ��ļ���ᴴ�����ļ���������ڸ��ļ���Ὣ���ļ�������գ��ɶ���д
//wb��b��ʾ�����ƣ�ģʽ����������ڸ��ļ���ᴴ�����ļ���������ڸ��ļ���Ὣ���ļ�������գ����ɶ�����д
void main103() {
	char path[20] = "10wb.txt";
	FILE *fp = fopen(path, "wb+"); 
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n");
		float f[5] = {1.1,2.2,3.3,4.4,5.0};
		fwrite(f, 4, 5, fp);

		rewind(fp);//���ļ�ָ������Ϊ��ʼ��ַ

		float fget[5] = {0.0};
		int result = fread(fget,4,5,fp);
		if(result == 5) {//�ɹ���ȡ5��Ԫ��
			printf("��ȡ�ɹ�\n");
			for(int i = 0; i < 5; ++i) {
				printf("%f,",fget[i]);
			}
			printf("\n");
		}else {
			printf("��ȡʧ��\n");
		}
		fclose(fp);
	}
	system("pause");
}

//w+ģʽ�������ڸ��ļ�������´�����������ļ��������Ѹ��ļ����������,�ҿɶ���д
//wģʽ�������ڸ��ļ�������´�����������ļ��������Ѹ��ļ���������գ��ҿ�д���ɶ�
void main102() {
	char path[20] = "10.txt";
	FILE *fp = fopen(path, "w"); 
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n");
		fputs("w+:ѧc��Ϊ��֮����õ�ѧandroid��", fp);

		rewind(fp); //���ļ�ָ��ָ���ļ�����ʼ��ַ,���ҽ�������������д���ļ��У�
		char ch = fgetc(fp);//wģʽ��ֻ����д�ļ�����������ļ�
		printf("ch=%d\n", ch);//ch=-1������ȡʧ��

		fclose(fp);
	}


	system("pause");
}
//r+ģʽ:�ļ�����ʱ���ܴ򿪳ɹ����ɶ���д,��д��ʱ��׷�Ӷ��������֮ǰ������
//rģʽ���ļ�����ʱ���ܴ򿪳ɹ����ɶ�����д
void main101() {

	char path[20] = "3fflush.cpp";
	FILE *fp = fopen(path, "r+");
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		printf("���ļ��ɹ�\n"); 
		char ch;
		while(!feof(fp)) {
			ch = fgetc(fp);
			putchar(ch);
		}

		int result = fputc('a', fp);
		printf("the result of writing 'a' to FILE is %d \n", result); //rģʽ:����д�룬ֻ�ܶ�ȡ
		fclose(fp);
	}

	system("pause");
}