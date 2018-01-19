#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * getMemStack() {

	char p[100] = "1234567";

	return p;
}


void main() {


	char *pStr = NULL;


	pStr = getMemStack();

	if(pStr != NULL) {

		strcpy(pStr,"ÄãºÃ°¡£¡£¡£¡");

		printf("%s\n",pStr);
	}


	system("pause");
}