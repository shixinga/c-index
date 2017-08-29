#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main9() {

	char s[] = "1234587";
	int sum = 0;
	int i;
	for(i = 0; i < strlen(s); ++i) {
		sum = sum * 10 + (s[i] - '0');
	}
	
	
	printf("sum=%d\n",sum);
	system("pause");
}