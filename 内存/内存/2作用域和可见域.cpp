#include<stdio.h>
#include<stdlib.h>


void main21() {

	int num = 18; //�ñ�������������7-18�У��ɼ�����7-10�к�15-18��
	printf("out num=%d\n",num);
	{
		printf("out num=%d\n",num);
		int num = 99; //�����num�ڸ������в��ɼ�
		printf("inner num=%d\n",num);

	}

	printf("after out num=%d\n",num);
	system("pause");
}