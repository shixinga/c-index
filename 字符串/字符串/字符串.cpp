#include<stdio.h>
#include<stdlib.h>

char * findbychar(char *s, char ch) {
	if(s == NULL) {
		return NULL;
	}

	while(*s != '\0') {
		if(*s == ch) {
			break;
		}
		s++;

	}

	return s;

}
void main() {

	char * s = "hahaop";
	char * str = findbychar(s, 'k');
	if(str != NULL) {
		printf("%s\n",str);
	} else {
		printf("canot find\n");
	}
	system("pause");
}