#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//使用fgetc从标准输入流中读取数据
int main()
{
	int ch = fgetc(stdin);//fgetc从标准输入流中读取数据，并返回对应的ASCII值，如果没有读取成功，就返回EOF！
	//int ch = getchar();//当fgetc传递的是stdin时，等同于getchar
	
	printf("%c\n", ch);

	return 0;
}
