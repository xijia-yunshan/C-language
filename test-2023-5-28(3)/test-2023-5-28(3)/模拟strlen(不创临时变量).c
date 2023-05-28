#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}

int main()
{
	char arr[] = "abc";
	int ret = my_strlen("abc");
	printf("%d\n", ret);
	return 0;
}
//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c");
//1+1+1+my_strlen("\0");
//1+1+1+0.