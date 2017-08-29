#include<stdio.h>
#include<stdlib.h>


//gets() 是fgets()的特例
void main73() {

	char arr[10];
	gets(arr);
	puts(arr);
	fgets(arr, sizeof(arr) - 1,stdin);
	puts(arr);
	system("pause");
}

//getchar() 是fgetc()的特例
void main72() {

	char ch;
	ch = getchar();
	putchar(ch);
	ch = fgetc(stdin);
	putchar(ch);


	printf("\n\n获取到的当前字符是%c\n",ch);
	printf("缓冲区的有效数据是%d\n",stdin->_cnt);
	printf("指向缓冲区的起始指针是%p\n",stdin->_ptr);
	printf("指向缓冲区的起始地址是%p\n",stdin->_base);
	printf("缓冲区的缓冲大小是%d\n",stdin->_bufsiz);

	printf("文件标识符是%d\n",stdin->_file);
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