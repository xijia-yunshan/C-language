#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(5 * sizeof(int));

	if (p == NULL)
	{
		perror("maalloc");
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;
	}

	/*for (i = 0; i < 5; i++)
	{
	printf("%d ", *(p + i));
	}
	*/
	//调整申请的堆上的内存
	int* ptr = realloc(p, 40);//最好不要用p来接收，因为如果realloc函数一旦扩容失败，就会返回一个空指针，即p就会变成空指针，p原来存放的内容也会为空
	if (ptr != NULL)
	{
		p = ptr;
		ptr = NULL;//注意不要free(ptr)
	}
	else
	{
		perror("realloc");
		return 1;
	}

	//使用
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}


	//释放
	free(p);
	p = NULL;
	return 0;
}
