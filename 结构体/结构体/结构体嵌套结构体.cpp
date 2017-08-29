#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct parent {

	int n1;
	char name1[20];
	struct child {
		int n2;
		char name2[20];

	}child2;
};
void main2() {
	struct parent m;
	m.n1 = 10;
	sprintf(m.name1,"haha");

	m.child2.n2 = 22;
	strcpy(m.child2.name2,"lsls");
	printf("parent name = %s,n = %d\n",m.name1,m.n1);
	printf("child name = %s,n = %d\n", m.child2.name2, m.child2.n2);


	getchar();
}