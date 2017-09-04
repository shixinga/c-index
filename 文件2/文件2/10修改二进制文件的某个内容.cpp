#include<stdio.h>
#include<stdlib.h>

void main101() {
	char path[20] = "haha.bin";
	FILE * fp = fopen(path, "wb+");
	if(fp == NULL) {
		printf("打开文件失败\n");
	} else {
		double db[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.2};
		fwrite(db,sizeof(double), 10,fp);

		//修改倒数第二个数
		{
			double temp = 22.22;
			fseek(fp, -16, SEEK_END); //从文件内容最后的位置向前移动16个字节.
			fwrite(&temp,sizeof(double), 1, fp);
		}

		rewind(fp); //将指针设置为文件内容首地址


		double db2[10];
		fread(db2,sizeof(double),10, fp);
		for(int i = 0; i < 10; ++i) {
			printf("%f\n", db2[i]);
		}

		fclose(fp);
	}
	system("pause");
}