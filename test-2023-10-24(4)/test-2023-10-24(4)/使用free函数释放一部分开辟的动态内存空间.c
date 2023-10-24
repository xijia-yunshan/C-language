#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//使用free函数释放一部分开辟的动态内存空间
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p = i + 1;
		p++;
	}
	//1 2 3 4 5 [] [] [] [] []
	free(p);//free释放的是空间的起始位置
	p = NULL;
	return 0;
}