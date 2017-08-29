#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct My {
	char a[20];
};
void main1() {
	struct My m1;
	struct My m2 = {"haha"};
	printf("%x,%x,m1.a=%s\n",&m1,&m2,m1.a);
	m1 = m2;

	printf("%x,%x,m1.a=%s\n",&m1,&m2,m1.a);

	getchar();

}