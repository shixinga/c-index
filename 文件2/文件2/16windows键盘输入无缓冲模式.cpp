#include<stdio.h>
#include<stdlib.h>

//输入 123 然后回车
//接着输入abcdef
void main() {

	char c = getchar();
	printf("第1次输入的是%c\n",c);
	//每当设置缓冲的时候，会自动刷新，清空缓冲区
	setvbuf(stdin,NULL,_IONBF,0); //设置键盘没有缓冲（然而“键盘没有缓冲”就是双字节缓冲）
	printf("缓冲区大小%d\n",stdin->_bufsiz);
	printf("缓冲区保存的字符是%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("缓冲区未读的字符数是%d\n",stdin->_cnt);
	printf("缓冲区的基地址是%p\n",stdin->_ptr);
	printf("缓冲区当前内容是%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("第2次输入的是%c\n",c);
	printf("缓冲区大小%d\n",stdin->_bufsiz);
	printf("缓冲区保存的字符是%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("缓冲区未读的字符数是%d\n",stdin->_cnt);
	printf("缓冲区的基地址是%p\n",stdin->_ptr);
	printf("缓冲区当前内容是%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("第3次输入的是%c\n",c);
	printf("缓冲区大小%d\n",stdin->_bufsiz);
	printf("缓冲区保存的字符是%c,%d\n",stdin->_charbuf >> 8,stdin->_charbuf);
	printf("缓冲区未读的字符数是%d\n",stdin->_cnt);
	printf("缓冲区的基地址是%p\n",stdin->_ptr);
	printf("缓冲区当前内容是%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("第4次输入的是%c\n",c);
	printf("缓冲区大小%d\n",stdin->_bufsiz);
	printf("缓冲区保存的字符是%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("缓冲区未读的字符数是%d\n",stdin->_cnt);
	printf("缓冲区的基地址是%p\n",stdin->_ptr);
	printf("缓冲区当前内容是%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("第5次输入的是%c\n",c);
	printf("缓冲区大小%d\n",stdin->_bufsiz);
	printf("缓冲区保存的字符是%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("缓冲区未读的字符数是%d\n",stdin->_cnt);
	printf("缓冲区的基地址是%p\n",stdin->_ptr);
	printf("缓冲区当前内容是%c\n\n\n",stdin->_ptr);

	c = getchar();
	printf("第6次输入的是%c\n",c);
	printf("缓冲区大小%d\n",stdin->_bufsiz);
	printf("缓冲区保存的字符是%c,%d\n",stdin->_charbuf,stdin->_charbuf);
	printf("缓冲区未读的字符数是%d\n",stdin->_cnt);
	printf("缓冲区的基地址是%p\n",stdin->_ptr);
	printf("缓冲区当前内容是%c\n\n\n",stdin->_ptr);
	system("pause");
}
