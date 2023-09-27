#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//memcpy函数
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	//拷贝前5个整数，一个整数是4个字节，一共20个字节
	memcpy(arr1, arr2, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	char arr3[] = "xxxxxxxxxx";
	char arr4[] = "yyyyyyyy";
	memcpy(arr3, arr4, 3);

	return 0;

}