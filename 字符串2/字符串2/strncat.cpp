#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>



void strrev1(char *p) {
	int length = strlen(p);
	for(int i = 0; i < length / 2; ++i) {
		char a = p[i];
		 p[i] = p[length - 1 - i];
		 p[length - 1 - i] = a;
	}
}

void change(char *p) {
	int length = strlen(p);
	for(int i = 0; i < length; ++i) {
		if(*p >= 'a' && *p <= 'z' ) {
			*p = *p - 32;
		} else if(*p >= 'A' && *p <= 'Z') {
			*p = *p + 32;
		}
		p++;
	}
}

char * mystrstr(char* s1,char *s2) {
	if(s1 == NULL || s2 == NULL) {
		return NULL;
	}

	char *moves1 = s1;
	//int flag = 0;
	char *dests2 = s2;
	while(*s1 != '\0') {
		moves1 = s1;
		dests2 = s2;
		while(*moves1 != '\0' && *dests2 != '\0') {
			if(*moves1 == *dests2) {
				dests2++;
				moves1++;
			} else {
				break;
			}
		}
		if(*dests2 == '\0') {
			return s1;
		}
		s1++;
	}

	return NULL;
}
void main1() {
	char s1[20] = "womama";
	char s2[10] = "ma";
	char *p = mystrstr(s1,s2);
	if(p == NULL) {
		printf("cannot find the string\n");
	} else {
		printf("%s\n",p);
	}
	
	system("pause");
}

//memset
void main2() {

	char s[100] = "hi haha chengshixing aa low";
	puts(s);
	memset(s,'A',10);
	puts(s);
	memset(s + 1, 'B',14);
	puts(s);
	memset(s+5,'0',strlen(s));
	puts(s);

	system("pause");
}