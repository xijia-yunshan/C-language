#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Find(char* str1, char* str2)
{
	char tmp[1000] = { 0 };
	strcpy(tmp, str1);
	strcat(tmp, str1);
	if (strstr(tmp, str2) != NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char str1[] = { 0 };
	char str2[] = { 0 };

	scanf("%s %s", &str1, &str2);
	int ret = Find(str1, str2);
	printf("%d\n", ret);
	return 0;
}