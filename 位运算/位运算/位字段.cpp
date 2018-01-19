#include<stdio.h>
#include<stdlib.h>

struct data {

	unsigned int day : 25;
	unsigned int month : 4;
	unsigned int year : 25;
};
void main12() {
	printf("%d\n",sizeof(struct data));
	/*struct data d1;
	d1.day = 16;
	d1.month = 8;
	d1.year = 2017;
	printf("%u,%d,%d\n",d1.day,d1.month, d1.year);
	struct data * p = (struct data*)malloc(sizeof(struct data));
	p->day = 15;
	p->month = 6;
	p->year = 2018;
	printf("%d,%d,%d\n",p->day, p->month, p->year);*/

	getchar();
}