#include<stdio.h>
#include<stdlib.h>
#include<memory.h>


void main5() {
	char s1[30] = "hi nimeialiebiao";
	char s2[20] = "ni haha e";
	puts(s1);
	memccpy(s1,s2,'e',10);
	puts(s1);
	system("pause");

}

void main4() {

	int a[] = {1,3,5,7,9};
	int b[] = {2,4,6,8,10};
	for(int i = 0; i < 5; ++i) {
		printf("a[%d]=%d,",i,a[i]);
	}
	printf("\n");
	memcpy(a,b,8);
	for(int i = 0; i < 5; ++i) {
		printf("a[%d]=%d,",i,a[i]);
	}
	printf("\n");

	system("pause");
}

//char copy
void main3() {

	char str[40] = "hi chenshixing sa";
	char str2[20] = "dui a ni mei";
	puts(str);
	memcpy(str,str2,5);
	puts(str);

	system("pause");
}