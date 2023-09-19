#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	char* ret = strncpy(arr2, arr1, 2);
	printf("%s\n", ret);
	return 0;
}