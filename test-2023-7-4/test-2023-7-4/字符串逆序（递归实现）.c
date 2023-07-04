#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
	{
		reverse_string(arr + 1);
	}
		*(arr + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(&arr);
	printf("%s\n", arr);
	return 0;
}