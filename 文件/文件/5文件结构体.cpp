#include<stdio.h>
#include<stdlib.h>

//input abcde
void main5() {

	char ch;
	printf("缓冲区的有效数据是%d\n",stdin->_cnt);
	printf("指向缓冲区的起始指针是%p\n",stdin->_ptr);
	printf("指向缓冲区的起始地址是%p\n",stdin->_base);
	printf("缓冲区的缓冲大小是%d\n",stdin->_bufsiz);
	printf("文件标识符是%d\n",stdin->_file);

	ch = getchar();
	printf("\n\n获取到的当前字符是%c\n",ch);
	printf("缓冲区的有效数据是%d\n",stdin->_cnt);
	printf("指向缓冲区的起始指针是%p\n",stdin->_ptr);
	printf("指向缓冲区的起始地址是%p\n",stdin->_base);
	printf("缓冲区的缓冲大小是%d\n",stdin->_bufsiz);
	printf("文件标识符是%d\n",stdin->_file);

	ch = getchar();
	printf("\n\n获取到的当前字符是%c\n",ch);
	printf("缓冲区的有效数据是%d\n",stdin->_cnt);
	printf("指向缓冲区的起始指针是%p\n",stdin->_ptr);
	printf("指向缓冲区的起始地址是%p\n",stdin->_base);
	printf("缓冲区的缓冲大小是%d\n",stdin->_bufsiz);
	printf("文件标识符是%d\n",stdin->_file);

	ch = getchar();
	printf("\n\n获取到的当前字符是%c\n",ch);
	printf("缓冲区的有效数据是%d\n",stdin->_cnt);
	printf("指向缓冲区的起始指针是%p\n",stdin->_ptr);
	printf("指向缓冲区的起始地址是%p\n",stdin->_base);
	printf("缓冲区的缓冲大小是%d\n",stdin->_bufsiz);
	printf("文件标识符是%d\n",stdin->_file);

	//fflush(stdin);//有效数据清零，指针又回到了起始地址
	//rewind(stdin);//有效数据清零，指针又回到了起始地址
	//等价于上面两个函数
	stdin->_ptr = stdin->_base; //指针回到起始地址
	stdin->_cnt = 0;//有效数据清零

	printf("\nflush后\n获取到的当前字符是%c\n",ch);
	printf("缓冲区的有效数据是%d\n",stdin->_cnt);
	printf("指向缓冲区的起始指针是%p\n",stdin->_ptr);
	printf("指向缓冲区的起始地址是%p\n",stdin->_base);
	printf("缓冲区的缓冲大小是%d\n",stdin->_bufsiz);
	printf("文件标识符是%d\n",stdin->_file);


	system("pause");
}