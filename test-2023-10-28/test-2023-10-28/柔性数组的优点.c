#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//不使用柔性数组的情况下，st_type使用下面这种结构，也能达到同样的效果

struct st_type
{
	int i;
	int* a;
};

int main()
{
	struct st_type* p = (struct st_type*)malloc(sizeof(struct st_type));
	if (p == NULL)
	{
		perror("malloc");
		return;
	}

	p->i = 100;
	p->a = (int*)malloc(10 * sizeof(int));
	if (p->a == NULL)
	{
		perror("malloc");
		return;
	}
	for (int i = 0; i < 10; i++)
	{
		p->a[i] = i;
	}
	//希望a指向的空间为60个字节
	struct st_type* ptr = (struct st_type*)realloc(p->a, 15 * sizeof(int));
	if (ptr == NULL)
	{
		perror("realloc");
		return;
	}
	else
	{
		p = ptr;
		ptr = NULL;
	}
	//使用
	//...
	//释放
	free(p->a);
	free(p);
	p = NULL;

	return 0;
}

//柔性数组的优点：

//第⼀个好处是：⽅便内存释放
//未使用柔性数组需要两次或多次释放内存

//第⼆个好处是：这样有利于访问速度
//柔性数组是连续存放，而非柔性数组不是连续的，他们之间存在空隙，即内存碎片