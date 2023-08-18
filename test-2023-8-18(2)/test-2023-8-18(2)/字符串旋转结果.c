#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int compare(char str1[], char str2[])
{
	int ret1 = strlen(str1);
	int ret2 = strlen(str2);
	
	if (ret1 != ret2)
	{
		return 0;
	}
	else
	{
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
		else
		{
			int i = 0;
			for (i = 0; i < ret2; i++)
			{
				int j = 0;
				char tmp = *(str2);
				for (j = 0; j < ret2 - 1; j++)
				{
					*(str2 + j) = *(str2 + j + 1);
				}
				*(str2 + ret2 - 1) = tmp;
				if (strcmp(str1, str2) == 0)
				{
					return 1;
				}
			}
			return 0;
		}
	}
}

int main()
{
	char str1[10] = { 0 };
	char str2[10] = { 0 };

	scanf("%s", &str1);
	scanf("%s", &str2);

	int ret = compare(str1, str2);

	if (ret == 1)
	{
		printf("str2是str1旋转后的字符\n");
	}
	else
	{
		printf("str2不是str1旋转后的字符\n");
	}

	return 0;
}