#include<stdio.h>
#include<stdlib.h>

//���� 123 Ȼ��س�
//��������abcdef
void main() {

	char c = getchar();
	printf("��1���������%c\n",c);
	//ÿ�����û����ʱ�򣬻��Զ�ˢ�£���ջ�����
	setvbuf(stdin,NULL,_IONBF,0); //���ü���û�л��壨Ȼ��������û�л��塱����˫�ֽڻ��壩
	printf("��������С%d\n",stdin->_bufsiz);
	printf("������������ַ���%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("������δ�����ַ�����%d\n",stdin->_cnt);
	printf("�������Ļ���ַ��%p\n",stdin->_ptr);
	printf("��������ǰ������%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("��2���������%c\n",c);
	printf("��������С%d\n",stdin->_bufsiz);
	printf("������������ַ���%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("������δ�����ַ�����%d\n",stdin->_cnt);
	printf("�������Ļ���ַ��%p\n",stdin->_ptr);
	printf("��������ǰ������%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("��3���������%c\n",c);
	printf("��������С%d\n",stdin->_bufsiz);
	printf("������������ַ���%c,%d\n",stdin->_charbuf >> 8,stdin->_charbuf);
	printf("������δ�����ַ�����%d\n",stdin->_cnt);
	printf("�������Ļ���ַ��%p\n",stdin->_ptr);
	printf("��������ǰ������%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("��4���������%c\n",c);
	printf("��������С%d\n",stdin->_bufsiz);
	printf("������������ַ���%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("������δ�����ַ�����%d\n",stdin->_cnt);
	printf("�������Ļ���ַ��%p\n",stdin->_ptr);
	printf("��������ǰ������%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("��5���������%c\n",c);
	printf("��������С%d\n",stdin->_bufsiz);
	printf("������������ַ���%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("������δ�����ַ�����%d\n",stdin->_cnt);
	printf("�������Ļ���ַ��%p\n",stdin->_ptr);
	printf("��������ǰ������%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("��6���������%c\n",c);
	printf("��������С%d\n",stdin->_bufsiz);
	printf("������������ַ���%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("������δ�����ַ�����%d\n",stdin->_cnt);
	printf("�������Ļ���ַ��%p\n",stdin->_ptr);
	printf("��������ǰ������%c\n\n\n",stdin->_ptr);
	system("pause");
}
