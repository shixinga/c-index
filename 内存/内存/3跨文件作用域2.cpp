#include<stdio.h>
#include<stdlib.h>

//����dataΪ�ⲿ����
extern int data;
//int data; �Ǵ�ģ���Ϊ���¶����˱���

//extern int num; �Ǵ�ģ���Ϊnum��static���ͣ���ֻ����num���������ļ�����ʹ�ã�


void main32() {

	printf("data=%d\n",data);

	//printf("num=%d\n",num);
	system("pause");
}