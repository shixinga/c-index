#include<stdio.h>
#include<stdlib.h>

void main16() {

	char ch1 = 3;
	unsigned char ch2 = 255;
	printf("%d,%d\n",ch2,ch1&ch2);
	printf("%x\n",&ch2);


	system("pause");
}

void main15() {

	float f = 12.3;
	unsigned char *p = (unsigned char*)&f;
	printf("p=%p\n",p);
	for(int i = 3; i >= 0; --i) {

		unsigned char ch = p[i];
		for(int j = 7; j >=0 ; --j) {
			if(ch  & (1 << j)) {
				printf("1");
			} else {
				printf("0");
			}
		}
		printf(" ");
	}
	puts("\n");

	system("pause");
}

void priCode(int num,int data, int count) {
	if(count <= 32) {
		printf("%c",num & data ? '1': '0');
		num = num<<1;

		if (count % 4 == 0) {
			printf(" ");
		}
		priCode(num, data, count + 1);
	}

}

void main13() {
	int data = 1 << 31;
	int num = -2;
	priCode(num, data, 1);

	system("pause");
}
void main4() {
	//±»4Õû³ý
	unsigned char ch = 71;
	ch = ch - (ch&~3);
	printf("ch=%d\n",ch);
	system("pause");
}
void main2() {

	unsigned char c = 73;
	unsigned short s = 16385;
	unsigned char cc = c&~1;
	unsigned short cs = s&~1;
	printf("c=%d,s=%d\n",c,s);
	printf("cc=%d,cs=%d\n",cc,cs);
	system("pause");
}

void main1() {
	char ch = 15;
	char ch2 = 241;
	printf("%d\n",ch&ch2);

	system("pause");
}