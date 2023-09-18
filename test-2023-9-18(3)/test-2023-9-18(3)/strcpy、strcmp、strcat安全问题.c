#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//strcpy、strcmp、strcat—长度不受限制的字符串函数，不关心目标空间放不放的下，存在安全性问题
int main()
{
	char arr1[3] = { 0 };
	char arr2[] = "abcdef";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}