#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main41() {

	char change[100] = "ĩλ׷�ӣ�������ͣ���";
	char path[100] = "E:\\1";
	char CMD[200];
	char list[100];
	sprintf(list,"%s\\list.txt",path);
	sprintf(CMD,"dir /b %s\\*.txt>%s",path,list);
	system(CMD);
	FILE *listFp = fopen(list,"r");
	if(listFp == NULL) {

		perror("���ļ�ʧ�ܵ�ԭ����:");
		return;
	}
	char buff[100];
	while(fgets(buff,100,listFp)) { //fgets()��ȡһ�����ݣ����������оͽ���һ�еĶ�ȡ�����������س���Ҳ����ȥ�ˣ�������
		
		char tempFile[100];
		sprintf(tempFile,"%s\\%s",path,buff);
		tempFile[strlen(tempFile) - 1] = '\0'; //��fgets()��ȡ�������ݵ����һ���ַ������з���ɾ��
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