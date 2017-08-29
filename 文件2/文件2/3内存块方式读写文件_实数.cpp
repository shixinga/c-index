#include<stdio.h>
#include<stdlib.h>

void main32() {
	double num[9];
	char path[20] = "e:\\实数.txt";
	FILE *fp = fopen(path, "rb");
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n");
		int res  = fread(num, sizeof(double), 9, fp);
		if(res != 9) {
			printf("读取失败\n");
		} else {
			printf("读取成功\n");
			for(int i = 0; i < 9; ++i) {
				printf("%lf\n", num[i]);
			}
		}

		fclose(fp);
	}
	system("pause");
}

//把一个内存块的数据写入到文件中
void main31() {
	printf("%d,%d\n",sizeof(8), sizeof(double));
	double num[9];
	for(int i = 0; i < 9; ++i) {
		num[i] = i + 0.1;
	}
	char path[20] = "e:\\实数.txt";
	FILE *fp = fopen(path, "wb");
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		printf("打开文件成功\n");
		int res  = fwrite(num, sizeof(double), 9, fp);
		if(res != 9) {
			printf("写入失败\n");
		} else {
			printf("写入成功\n");
		}

		fclose(fp);
	}
	system("pause");
}