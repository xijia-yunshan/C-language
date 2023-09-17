#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = "hello \0xxxxxx";
	strcat(arr1, arr1);

	printf("%s\n", arr1);
	return 0;
}