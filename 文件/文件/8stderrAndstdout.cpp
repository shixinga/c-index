#include<stdio.h>
#include<stdlib.h>

void main8() {

	//stderr�������ʾ����,����嶨�򵽴�����
	fprintf(stderr, "stderr num=%d,str=%s\n",3, "��ð�");
	//stdoutĬ�����������ʾ���ϣ�����嶨�򵽴����ϣ���������������
	fprintf(stdout, "stdout num=%d,str=%s\n",3, "��ð�");
	system("pause");
}