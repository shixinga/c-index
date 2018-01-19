#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char * getMemHeap() {

	char *p = (char *)malloc(100*sizeof(char));

	for(int i = 0; i < 100; ++i) {

		p[i] = 0;
	}

	return p;
}

void main2() {

	char * pStr = NULL;
	pStr = getMemHeap();

	if(pStr != NULL) {

		strcpy(pStr,"hello world !");

		printf("%s\n",pStr);

		free(pStr);
	}

	system("pause");
}