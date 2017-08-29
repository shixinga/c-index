#include<stdio.h>
#include<stdlib.h>
//b（bit）表示二进制文件
//t（text）表示文本文件
//没有b也没有t的就不强调是二进制文件还是人本文件，即普遍适用


//a+模式:如果文件不存在则会创建一个新文件。如果文件存在，则会打开该文件并会根据程序在内容后面追加内容，可读可写。
//a模式:如果文件不存在则会创建一个新文件。如果文件存在，则会打开该文件并会根据程序在内容后面追加内容，可写不可读。
void main() {
	char path[20] = "a.txt";
	FILE * fp = fopen(path, "a+");
	if(fp ==NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n");
		fputs("锄禾日傍午，汗滴禾下土", fp);

		rewind(fp);
		
		char ch = fgetc(fp);
		if(ch == -1) {
			printf("读取失败\n");
		} else {
			printf("读取成功\n");
			while(!feof(fp)) {
				putchar(ch);
				ch = fgetc(fp);
			}
			printf("\n");
		}
		fclose(fp);
	}
	system("pause");
}
//rb+(b表示二进制)模式:文件存在时才能打开成功，可读可写,且写入时是追加而不是清空之前的内容
//rb(b表示二进制)模式：文件存在时才能打开成功，可读不可写
void main104() {

	char path[20] = "10rb+.txt";
	FILE *fp = fopen(path, "rb+");
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n"); 
		char ch;
		while(!feof(fp)) {
			ch = fgetc(fp);
			putchar(ch);
		}
		//rewind(fp);
		int result = fputc('c', fp);
		printf("the result of writing 'a' to FILE is %d \n", result); //r模式:不能写入，只能读取
		fclose(fp);
	}

	system("pause");
}


//wb+（b表示二进制）模式：如果不存在该文件则会创建该文件，如果存在该文件则会将该文件内容清空，可读可写
//wb（b表示二进制）模式：如果不存在该文件则会创建该文件，如果存在该文件则会将该文件内容清空，不可读但可写
void main103() {
	char path[20] = "10wb.txt";
	FILE *fp = fopen(path, "wb+"); 
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n");
		float f[5] = {1.1,2.2,3.3,4.4,5.0};
		fwrite(f, 4, 5, fp);

		rewind(fp);//将文件指针设置为起始地址

		float fget[5] = {0.0};
		int result = fread(fget,4,5,fp);
		if(result == 5) {//成功读取5个元素
			printf("读取成功\n");
			for(int i = 0; i < 5; ++i) {
				printf("%f,",fget[i]);
			}
			printf("\n");
		}else {
			printf("读取失败\n");
		}
		fclose(fp);
	}
	system("pause");
}

//w+模式：不存在该文件则会重新创建，如果该文件存在则会把该文件的内容清空,且可读可写
//w模式：不存在该文件则会重新创建，如果该文件存在则会把该文件的内容清空，且可写不可读
void main102() {
	char path[20] = "10.txt";
	FILE *fp = fopen(path, "w"); 
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n");
		fputs("w+:学c是为了之后更好的学android！", fp);

		rewind(fp); //将文件指针指向文件的起始地址,并且将缓冲区的内容写到文件中！
		char ch = fgetc(fp);//w模式：只允许写文件，不允许读文件
		printf("ch=%d\n", ch);//ch=-1，即读取失败

		fclose(fp);
	}


	system("pause");
}
//r+模式:文件存在时才能打开成功，可读可写,且写入时是追加而不是清空之前的内容
//r模式：文件存在时才能打开成功，可读不可写
void main101() {

	char path[20] = "3fflush.cpp";
	FILE *fp = fopen(path, "r+");
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n"); 
		char ch;
		while(!feof(fp)) {
			ch = fgetc(fp);
			putchar(ch);
		}

		int result = fputc('a', fp);
		printf("the result of writing 'a' to FILE is %d \n", result); //r模式:不能写入，只能读取
		fclose(fp);
	}

	system("pause");
}