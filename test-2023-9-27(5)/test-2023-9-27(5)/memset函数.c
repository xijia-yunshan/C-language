#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//memset函数——只需要知道如何用就行了
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//注意点：memset是以字节为单位设置内存值的
	memset(arr, 1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
