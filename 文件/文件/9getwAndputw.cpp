#include<stdio.h>
#include<stdlib.h>

void main92() {

	putchar('a');
	putchar('a');
	putchar('a');
	putchar('a');
	putchar('\n');
	putw('a',stdout);//putw()��һ�������4���ֽڵģ�'a'ֻռ1���ֽڣ��������3�����ַ�����
	system("pause");
}
void main91() {

	//getw()��ȡ4���ֽ�
	//һ�����������ֽڣ�������롮��á������������
	//�������1��س����س�Ҳ��һ���ַ���������2��س���Ȼ������Ľ����
	//1
	//2
	int w = getw(stdin);
	putw(w, stdout);//putw() ��һ�������4���ַ���
	
	system("pause");
}