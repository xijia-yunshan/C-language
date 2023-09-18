#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <assert.h>

//strcmp模拟实现
int my_strcmp(char* str1, char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	//return *str1 - *str2;
	//如果*str1 == *str2，就进入到循环里面去

}

int main()
{
	int ret = my_strcmp("abcdef", "abc");
	if (ret > 0)
	{
		printf(">\n");
	}
	else if (ret == 0)
	{
		printf("==\n");
	}
	else
	{
		printf("<\n");
	}
	printf("%d\n", ret);

	return 0;
}
