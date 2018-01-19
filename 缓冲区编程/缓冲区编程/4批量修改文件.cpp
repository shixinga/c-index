#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main41() {

	char change[100] = "末位追加：男足加油！！";
	char path[100] = "E:\\1";
	char CMD[200];
	char list[100];
	sprintf(list,"%s\\list.txt",path);
	sprintf(CMD,"dir /b %s\\*.txt>%s",path,list);
	system(CMD);
	FILE *listFp = fopen(list,"r");
	if(listFp == NULL) {

		perror("打开文件失败的原因是:");
		return;
	}
	char buff[100];
	while(fgets(buff,100,listFp)) { //fgets()读取一行数据，即遇到换行就结束一行的读取，但是她连回车符也读进去了！！！！
		
		char tempFile[100];
		sprintf(tempFile,"%s\\%s",path,buff);
		tempFile[strlen(tempFile) - 1] = '\0'; //把fgets()读取到的内容的最后一个字符（换行符）删掉
		/*FILE *temp = fopen("E:\\1\\1.txt","w+");
		if(temp != NULL) {
			puts("succeed");
		} else {
			puts("failed");
		}*/

		FILE *temp = fopen(tempFile,"a+");
		if(temp != NULL) {
			fseek(temp,0,SEEK_END);
			fputs(change,temp);
			fclose(temp);
			puts("success");
		} else {
			puts("fail");
		}
	}


	system("pause");
}