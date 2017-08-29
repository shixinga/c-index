#include<stdio.h>
#include<stdlib.h>

#define 整数1 num1
typedef int INTEGER;
typedef float FLOAT;


void go() {
	system("calc");
}

void main5() {

	void (*p)()  = go;
	p();
}
//定义函数指针
void main4() {
	/*void (*GO)() = go;
	GO();*/
	//等价于上面两行
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

	INTEGER 整数1 = 192;
	printf("%d\n",num1);
	system("pause");
}