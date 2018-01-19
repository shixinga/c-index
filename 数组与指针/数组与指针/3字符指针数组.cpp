#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main31() {
	char *str[5] = {"calc","tasklist","notepad","cmd","cnm"};
	char **p = str;
	for(;p < str + 5;p++) {
		puts(*p);
	}
	system("pause");
}
void main3() {

	char * c[5] = {"calc","tasklist","notepad","cmd","cnm"};
	printf("%d\n",sizeof(c));
	for(int i = 0; i < 5; ++i) {

		printf("%s,%c\n",c[i],*c[i]);
	}

	for(int i = 0; i < 5 - 1; ++i) {
		for(int j = 0; j < 5 - 1 - i; ++j) {
			if(strcmp(c[j],c[j+1]) > 0) {
				char * temp = c[j];
				c[j] = c[j+1];
				c[j+1] = temp;
			}
		}

	}

	printf("after sorting \n\n");
	for(int i = 0; i < 5; ++i) {

		printf("%s,%c\n",c[i],*c[i]);
	}

	system("pause");
}