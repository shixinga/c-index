#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int i;
	char c1[11];
	char c2[11];
	char c3[11];
	//char c4[11];

} info;

typedef struct {
	char c;
	short s;
	double d;
	int i;
	char ca[8];
	//char c4[11];

} info1;

//#pragma pack(1)
typedef struct {
	char c;
	int i;
	short s;

}info2;
//#pragma pack()
void main() {
	/*info1 tempInfo;
	printf("c:%x,s:%x,d:%x,i:%x,ca:%x\n",&tempInfo.c, &tempInfo.s, &tempInfo.d, &tempInfo.i, &tempInfo.ca);
	printf("%d\n",sizeof(info1));*/


	printf("%d\n",sizeof(info2));
	
	system("pause");
}