#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_strlen(char* str)
{
	int counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return counter;
}

int main()
{
	char arr[] = "abc";
	int ret = my_strlen("abc");
	printf("%d\n", ret);
	return 0;
}