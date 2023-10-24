#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//对NULL指针解引用
//malloc
//calloc
//realloc
//在开辟/调整空间失败的时候，会返回空指针

int main()
{
	int* p = (int*)malloc(40);
	//if（p==NULL）
	//{
	//	perror("malloc");
	//	return 1;
	//}
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;//NULL+0仍然为空指针
	}
	return 0;
}