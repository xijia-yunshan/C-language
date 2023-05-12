#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "hello swust";
	memset(arr+6, 'x', 5);
	printf("%s\n", arr);
	return 0;
}