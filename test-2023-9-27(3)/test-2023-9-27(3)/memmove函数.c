#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//源头的数据和目标数据重叠会出现问题
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//1 2 1 2 3 4 5 8 9 10
	//1 2 1 2 1 2 1 8 9 10？

	//为什么会出现上面的结果？
	//memcpy函数可以处理不重叠的内存之间的数据拷贝
	//内存之间如果有数据重叠，可以使用memmove函数
	//my_memcpy(arr+2, arr, 20);

	memmove(arr + 2, arr, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;

}