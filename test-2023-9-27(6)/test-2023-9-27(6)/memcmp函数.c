#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//memcmp函数—— 一个字节一个字节比较
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abqwertyuio";
//	int ret = memcmp(arr1, arr2, 5);
//	printf("%d\n", ret);
//}

//memcmp除了被用来比较字符和字符串以外，还可以被用来比较其他类型的数据
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 1, 3, 5, 7, 9 };
	int ret = memcmp(arr1, arr2, 4);
	printf("%d\n", ret);
	return 0;
}