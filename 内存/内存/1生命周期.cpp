#include<stdio.h>
#include<stdlib.h>

int b[] = {6,7,8,9,10}; //��̬���ı����������������ڹ�����
void go() {

	int a[] = {1,2,3,4,5}; //ջ�ϵı����������ڵĺ���������
	printf("&a[]=%p\n",a);
}

void main11() {
	printf("&b[]=%p\n",b);

	go();

	printf("\n");

	go();

	printf("\n");

	system("pause");
}


int * getMem() {
	int * p = (int*)malloc(sizeof(int) * 8);
	printf("%p\n",p);
	return p;
}
void main12() {

	int * pp = getMem();

	for(int i = 0; i < 8; ++i) {
		pp[i] = i + 1;
	}

	printf("\n");

	free(pp);

	printf("\n");

	system("pause");
}