#include<stdio.h>
#include<stdlib.h>


//gets() ��fgets()������
void main73() {

	char arr[10];
	gets(arr);
	puts(arr);
	fgets(arr, sizeof(arr) - 1,stdin);
	puts(arr);
	system("pause");
}

//getchar() ��fgetc()������
void main72() {

	char ch;
	ch = getchar();
	putchar(ch);
	ch = fgetc(stdin);
	putchar(ch);


	printf("\n\n��ȡ���ĵ�ǰ�ַ���%c\n",ch);
	printf("����������Ч������%d\n",stdin->_cnt);
	printf("ָ�򻺳�������ʼָ����%p\n",stdin->_ptr);
	printf("ָ�򻺳�������ʼ��ַ��%p\n",stdin->_base);
	printf("�������Ļ����С��%d\n",stdin->_bufsiz);

	printf("�ļ���ʶ����%d\n",stdin->_file);
	system("pause");
}
void main71() {

	int num;
	scanf("%d\n",&num);
	printf("scanf num=%d\n",num);

	fscanf(stdin, "%d", &num);
	printf("fscanf num=%d\n",num);

	system("pause");
}