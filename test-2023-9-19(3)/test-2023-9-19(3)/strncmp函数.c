#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abcwert";
	char arr2[] = "abcrytg";
	int ret = strncmp(arr1, arr2, 5);
	printf("%d\n", ret);
	return 0;
}