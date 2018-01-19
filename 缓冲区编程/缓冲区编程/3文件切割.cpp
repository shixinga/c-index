#include<stdio.h>
#include<stdlib.h>

void main31() {

	char path[100] = "E:\\";
	char fileName[100] = "haha.mp3";
	char localFile[100];
	sprintf(localFile,"%s%s",path,fileName);
	long eachFileSize = 1024 * 1024;
	FILE * fp = fopen(localFile,"rb");
	fseek(fp,0,SEEK_END);
	long length = ftell(fp);
	printf("length=%ld\n",length);
	int fileCount = 0;
	if(length % eachFileSize == 0) {
		fileCount = length / eachFileSize;
	} else {
		fileCount = length / eachFileSize + 1;

	}

	printf("fileCount=%d\n",fileCount);
	rewind(fp);
	for(int i = 0; i < fileCount; ++i) {
		char tempFileStr[100];
		sprintf(tempFileStr,"%s%d.mp3",path,i);
		FILE * tempFp = fopen(tempFileStr,"wb");
		int ch;
		if(i != fileCount - 1) {

			for(int j = 0; j < eachFileSize; ++j) {

				ch = fgetc(fp);
				fputc(ch,tempFp);
			}
		} else {
			for(int j = 0; j < length - i*eachFileSize; ++j) {
				ch = fgetc(fp);
				fputc(ch,tempFp);
			}
		}
		fclose(tempFp);

	}

	system("pause");
}