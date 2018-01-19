#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<Windows.h>

void msg(void * p) {

	MessageBoxA(NULL,"hha","tetete", 0);
}
void msg2(void * p) {

	MessageBoxA(NULL,"hha22","tetete22", 0);
}
void msg3(void * p) {

	MessageBoxA(NULL,"hha333","tetete333", 0);
}
void main1() {
	
	/*_beginthread(msg,0, NULL);
	_beginthread(msg2,0, NULL);
	_beginthread(msg3,0, NULL);*/

	/*msg(NULL);
	msg2(NULL);
	msg3(NULL);*/
	system("pause");
}