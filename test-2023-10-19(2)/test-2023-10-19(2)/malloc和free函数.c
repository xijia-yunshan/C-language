#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//malloc—申请内存
//free—释放内存

int main()
{
	//申请10个整型空间—40个字节
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	//使用空间
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	//0 1 2 3 4 5 6 7 8 9
	//打印
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}

	//释放
	free(p);//free只能释放动态申请的空间
	p = NULL;
	return 0;
}
//malloc函数申请的空间怎么回收?
//1.free回收
//2.自己不释放的时候，程序结束后，也会由操作系统回收
//3.malloc是在堆区上申请内存