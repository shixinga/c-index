#include<stdio.h>
#include<stdlib.h>
#include<io.h>

//6：判断文件是否可读可写
void main15() {
	char path[20] = "e:\\2.txt";
	int isReadAndWrite = _access(path, 6);
	if(isReadAndWrite != 0) {
		printf("文件不可读不可写\n");
	} else {
		printf("文件可读可写\n");
	}
	system("pause");
}

//4：判断文件是否可读
void main14() {

	char path[20] = "e:\\2.txt";
	int isRead = _access(path, 4);
	if(isRead != 0) {
		printf("文件不可读\n");
	} else {
		printf("文件可读\n");
	}
	system("pause");
}


//2表示文件是否可写
void main13() {
	char path[20] = "e:\\2.txt";
	int isWrited = _access(path, 2);
	if(isWrited != 0) {
		fputs("文件不可写\n", stdout);
	} else {
		fputs("文件可写\n", stdout);
	}

	system("pause");
}

//0判断文件或文件夹是否存在
//判断文件是否存在:返回0表示存在，返回-1表示不存在
void main12() {
	char path[20] = "e:\\2.txt";
	int isExit = _access(path, 0);
	if(isExit != 0) {
		fputs("文件不存在\n", stdout);
	} else {
		fputs("文件存在啊\n", stdout);
	}
	system("pause");
}

//判断文件夹是否存在:返回0表示存在，返回-1表示不存在
void main11() {

	char path[20] = "e:\\fold";
	int isExit = _access(path, 0); 
	printf("%d\n", isExit);
	if(isExit != 0) {
		puts("文件夹不存在");
	} else {
		puts("文件夹存在");
	}
	system("pause");
}