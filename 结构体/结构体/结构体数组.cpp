#include<stdio.h>
#include<stdlib.h>

struct  a {
	int n;
	float f;
	char s[4];

}M[3] = {{1,1.0,"1.0"},{2,2.0,"2.0"},{3,3.0,"3.0"}};

void main11() {
	printf("%x,%d,%d\n",M,sizeof(a),sizeof(float));
	printf("%x,%d,%f,%s\n",&M[0],M[0].n,M[0].f,M[0].s);
	printf("%x,%d,%f,%s\n",&M[1],M[1].n,M[1].f,M[1].s);
	printf("%x,%d,%f,%s\n",&M[2],M[2].n,M[2].f,M[2].s);


	getchar();

}