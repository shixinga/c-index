#include<stdio.h>
#include<stdlib.h>

void main2() {

	int a[5] = {1,3,2,4,5};
	int * p[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
	int **pp = p;
	for(int i = 0;pp < p + 5; pp++,i++) {
		printf("%d,",**pp);
	}

	for(int i = 0; i < 5 - 1; ++i) {

		for(int j = 0; j < 5 - 1 - i; ++j) {

			if(*p[j] < *p[j + 1]) {
				int *t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}

	for(int k = 0;k < 5; k++) {
		printf("\n%d,",*p[k]);
	}
	printf("\n");
	for(int l = 0; l < 5; ++l) {
		printf("%d,",a[l]);
	}
	system("pause");
}
void main1() {

	int a[3][5];
	printf("a=%d,*a=%d,**a=%d\n",sizeof(a),sizeof(*a),sizeof(**a));
	printf("&a=%d,*&a=%d\n",sizeof(&a),sizeof(*&a));
	system("pause");
}