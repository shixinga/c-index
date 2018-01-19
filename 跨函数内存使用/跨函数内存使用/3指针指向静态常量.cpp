#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char * getMemStatic() {

	char * p = "12345678";
	

	return p;

}

void main3() {

	char * pStr = NULL;

	pStr = getMemStatic();

	if(pStr != NULL) {

		puts(pStr);

		strcpy(pStr,"hi world....");

		puts(pStr);
	}


	system("pause");
}