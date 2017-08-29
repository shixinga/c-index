#include<stdio.h>
#include<stdlib.h>
//int and  struct ¹²Ïímemory
struct bits {

	unsigned char c1 : 1;
	unsigned char c2 : 1;
	unsigned char c3 : 1;
	unsigned char c4 : 1;
	unsigned char c5 : 1;
	unsigned char c6 : 1;
	unsigned char c7 : 1;
	unsigned char c8 : 1;
};
void main14() {
	struct bits *pbits = (struct bits*)malloc(sizeof(struct bits) * 4);
	printf("size of pbits=%d\n", sizeof(pbits));
	int *pint = (int *)pbits;
	*pint = 0;
	scanf_s("%d",pint);
	for(int i = 3; i >= 0; i--) {

		printf("%d%d%d%d%d%d%d%d ",
			pbits[i].c8,
			pbits[i].c7,
			pbits[i].c6,
			pbits[i].c5,
			pbits[i].c4,
			pbits[i].c3,
			pbits[i].c2,
			pbits[i].c1);
	}

	system("pause");

}