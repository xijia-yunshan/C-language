#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		perror("calloc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	return 0;
}
//calloc函数和malloc函数的区别在于：calloc函数申请完内存空间以后，会先初始化为0。而malloc函数则不会把申请的空间初始化。
//以后怎么选择两种函数？
//如果只是想申请一块空间，用malloc函数，反之，如果想初始化内存空间，用calloc
//申请完以后，都可以用free来释放
