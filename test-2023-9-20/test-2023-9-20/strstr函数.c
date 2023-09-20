#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//strstrº¯Êý
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "defq";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("ÕÒ²»µ½\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}