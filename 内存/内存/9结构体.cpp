#include<stdio.h>
#include<stdlib.h>

void funStruct();
struct info {

	char str[30];
	int age;

};
struct info i1;
void main() {

	i1.age = 20;

	funStruct();

	printf("main %d\n", i1.age);
	system("pause");
}