#include<stdio.h>
#include<stdlib.h>
#include<memory.h>


void main8() {

	char s[20] = "ABCDE123";
	char s2[22] = "abcde456";
	int num = _memicmp(s,s2,5);
	if(num == 0) {
		puts("�ַ������");
	} else {
		puts("�ַ�������");
	}

	system("pause");
}