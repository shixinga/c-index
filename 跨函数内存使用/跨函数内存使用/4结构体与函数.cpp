#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct user {

	char name[100];
	int age;
};
typedef struct user u;

u * getP(char * s,int age) {
	u* temp = (struct user*)malloc(sizeof(struct user));
	strcpy(temp->name,s);
	temp->age = age;
	return temp;
}
void main4() {

	u* haha = getP("ni hao", 12);
	printf("%s,%d\n",haha->name,haha->age);
	system("pause");
}