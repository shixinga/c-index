#include<stdio.h>
#include<stdlib.h>

void main101() {
	char path[20] = "haha.bin";
	FILE * fp = fopen(path, "wb+");
	if(fp == NULL) {
		printf("���ļ�ʧ��\n");
	} else {
		double db[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.2};
		fwrite(db,sizeof(double), 10,fp);

		//�޸ĵ����ڶ�����
		{
			double temp = 22.22;
			fseek(fp, -16, SEEK_END); //���ļ���������λ����ǰ�ƶ�16���ֽ�.
			fwrite(&temp,sizeof(double), 1, fp);
		}

		rewind(fp); //��ָ������Ϊ�ļ������׵�ַ


		double db2[10];
		fread(db2,sizeof(double),10, fp);
		for(int i = 0; i < 10; ++i) {
			printf("%f\n", db2[i]);
		}

		fclose(fp);
	}
	system("pause");
}