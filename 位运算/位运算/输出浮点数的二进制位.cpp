#include<stdio.h>
#include<stdlib.h>

//���ֽڵĵ�ַ��ǰ�棬���ֽڵĵ�ַ�ں���
//��int i = 1�������ڴ��еĴ洢����
//1
//0
//0
//0
//0
//0
//0
//0
//0000 0000
//0000 0000
//0000 0000
void main() {

	float f = 12.4;
	unsigned char *pch = (unsigned char *)&f;
	printf("%x\n",pch);
	for(int i = 3; i >= 0; --i) { //��Ϊfloatռ��4���ֽ�

		for(int j = 7; j >= 0; --j) { //��Ϊһ���ֽ���8��bit���Ҹ��ֽڵ����ں���
			if(pch[i] & (1 << j)) {
				printf("%c",'1');
			} else {
				printf("%c",'0');
			}
		}
		printf("  ");


	}

	system("pause");
}