#include<stdio.h>
#include<stdlib.h>

//input abcde
void main5() {

	char ch;
	printf("����������Ч������%d\n",stdin->_cnt);
	printf("ָ�򻺳�������ʼָ����%p\n",stdin->_ptr);
	printf("ָ�򻺳�������ʼ��ַ��%p\n",stdin->_base);
	printf("�������Ļ����С��%d\n",stdin->_bufsiz);
	printf("�ļ���ʶ����%d\n",stdin->_file);

	ch = getchar();
	printf("\n\n��ȡ���ĵ�ǰ�ַ���%c\n",ch);
	printf("����������Ч������%d\n",stdin->_cnt);
	printf("ָ�򻺳�������ʼָ����%p\n",stdin->_ptr);
	printf("ָ�򻺳�������ʼ��ַ��%p\n",stdin->_base);
	printf("�������Ļ����С��%d\n",stdin->_bufsiz);
	printf("�ļ���ʶ����%d\n",stdin->_file);

	ch = getchar();
	printf("\n\n��ȡ���ĵ�ǰ�ַ���%c\n",ch);
	printf("����������Ч������%d\n",stdin->_cnt);
	printf("ָ�򻺳�������ʼָ����%p\n",stdin->_ptr);
	printf("ָ�򻺳�������ʼ��ַ��%p\n",stdin->_base);
	printf("�������Ļ����С��%d\n",stdin->_bufsiz);
	printf("�ļ���ʶ����%d\n",stdin->_file);

	ch = getchar();
	printf("\n\n��ȡ���ĵ�ǰ�ַ���%c\n",ch);
	printf("����������Ч������%d\n",stdin->_cnt);
	printf("ָ�򻺳�������ʼָ����%p\n",stdin->_ptr);
	printf("ָ�򻺳�������ʼ��ַ��%p\n",stdin->_base);
	printf("�������Ļ����С��%d\n",stdin->_bufsiz);
	printf("�ļ���ʶ����%d\n",stdin->_file);

	//fflush(stdin);//��Ч�������㣬ָ���ֻص�����ʼ��ַ
	//rewind(stdin);//��Ч�������㣬ָ���ֻص�����ʼ��ַ
	//�ȼ���������������
	stdin->_ptr = stdin->_base; //ָ��ص���ʼ��ַ
	stdin->_cnt = 0;//��Ч��������

	printf("\nflush��\n��ȡ���ĵ�ǰ�ַ���%c\n",ch);
	printf("����������Ч������%d\n",stdin->_cnt);
	printf("ָ�򻺳�������ʼָ����%p\n",stdin->_ptr);
	printf("ָ�򻺳�������ʼ��ַ��%p\n",stdin->_base);
	printf("�������Ļ����С��%d\n",stdin->_bufsiz);
	printf("�ļ���ʶ����%d\n",stdin->_file);


	system("pause");
}