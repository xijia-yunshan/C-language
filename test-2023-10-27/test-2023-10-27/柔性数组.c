#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//柔性数组：
//C99中，结构中最后一个元素是未知大小的数组，这就叫做[柔性数组]成员

//要点：
//1. 在结构体中
//2. 最后一个成员
////4. 未知大小的数组（柔性数组）
//配合动态内存管理来使用
//
//struct st_type
//{
//	int i = 0;
//	int a[0];
//};
//
//struct st_type
//{
//	int i;
//	int a[];//柔性数组成员
//};

//柔性数组的特点：
//1.结构中的柔性数组成员前⾯必须⾄少⼀个其他成员。
//2.sizeof 返回的这种结构⼤⼩不包括柔性数组的内存。
//3.包含柔性数组成员的结构⽤malloc()函数进⾏内存的动态分配，并且分配的内存应该⼤于结构的⼤⼩，以适应柔性数组的预期⼤⼩。
struct st_type
{
	int i;
	int a[0];//柔性数组成员
};

int main()
{
	//printf("%d\n", sizeof(struct st_type));
	//malloc(sizeof(struct st_type))//不包含柔性数组结构体前面的大小
	struct st_type* p = (struct st_type*)malloc(sizeof(struct st_type) + 10 * sizeof(int));

	if (p == NULL)
	{
		perror("malloc");
		return;
	}

	//使用
	int i = 0;

	p->i = 100;//结构体里面的i
	for (i = 0; i < 10; i++)
	{
		p->a[i] = i;
	}
	//我们希望结构中的a数组变长为60个字节
	struct st_type* ptr = (struct st_type*)realloc(p, sizeof(struct st_type) + 15 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
		ptr = NULL;
	}
	else
	{
		perror("realloc");
		return 1;
	}
	//释放
	free(p);
	p = NULL;
	return 0;
}