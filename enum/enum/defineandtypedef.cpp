#include<stdio.h>
#include<stdlib.h>

#define ����1 num1
typedef int INTEGER;
typedef float FLOAT;


void go() {
	system("calc");
}

void main5() {

	void (*p)()  = go;
	p();
}
//���庯��ָ��
void main4() {
	/*void (*GO)() = go;
	GO();*/
	//�ȼ�����������
	typedef void(*GO)();
	GO go1= go;
	go1();
}

void main3() {

	typedef int A[100]; 
	A array; //is equal to int array[100];
	for(int i = 0; i < 100; ++i) {
		array[i] = i;
		printf("%d\n",array[i]);
	}

	system("pause");
}

void main2() {

	INTEGER ����1 = 192;
	printf("%d\n",num1);
	system("pause");
}