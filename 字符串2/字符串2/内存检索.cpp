#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

void main7() {

	char s[30] = "himamazhenhaoa!!";
	char ch = '!';
	char *p = (char*)memchr(s,ch,30);
	if(p == NULL) {
		puts("cannot find it");
	} else {
		printf("%c µÄµØÖ·ÊÇ%x\n",*p, p);
	}


	system("pause");
}
