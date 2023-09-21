#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* my_strncpy(char* str1, const char* str2, size_t num)
{
	char* cp = str1;
	while (num)
	{
		*str1++ = *str2++;
		num--;
	}
	return cp;
}

int main()
{
	char arr1[] = "hello ";
	char arr2[] = "world";
	char* ret = my_strncpy(arr1, arr2, 3);
	printf("%s\n", ret);
	return 0;
}