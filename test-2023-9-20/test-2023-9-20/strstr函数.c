#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//strstr����
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "defq";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}