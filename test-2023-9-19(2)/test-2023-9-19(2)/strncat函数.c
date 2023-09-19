#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[10] = "abc \0xxxxx";
	char arr2[] = "abc";
	strncat(arr1, arr2, 2);
	printf("%s\n", arr1);
	return 0;
}