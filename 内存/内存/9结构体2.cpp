#include<stdio.h>
struct info {

	char str[30];
	int age;

};
extern struct info i1;
void funStruct() {

	printf("fun %d\n",i1.age);

	i1.age = 45;
}