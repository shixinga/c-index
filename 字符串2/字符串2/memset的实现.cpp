#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void *memset(void * p, int ch, int length) {

	if(p == NULL) {
		return NULL;
	}

	char * px = (char *)p;
	while(length>0) {
		*px = (char)ch;
		px++;
		length--;
	}
	return p;
}
void main10() {
	char s[] = "hello";
	puts(s);
	memset(s,'t',5);

	int n[5] = {1,2,3,4,5};
	for(int i = 0; i < 5; ++i) {
		printf("%d\n",n[i]);
	}

	memset(n,3,20);
	for(int i = 0; i < 5; ++i) {
		printf("%d\n",n[i]);
	}

	system("pause");
}


void main() {

	char s[60] = "i loca haha loc cc dd";
	
	char a[5] = "loc";
	char *p = strstr(s,a);
	puts(s);
	int temp = strlen(a);
	char *tempp,*tempp2;
	while(p != NULL) {
		tempp = p;
		tempp2 = p + temp;
		while(*tempp2 != '\0') {

			*tempp++ = *tempp2++; 
		}
		*tempp = '\0';
		p = strstr(s,a);
	}

	puts(s);
	system("pause");
}