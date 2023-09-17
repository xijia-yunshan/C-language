#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

void my_strcat(char* dest, char* src)
{
	//NULL
	assert(dest);
	assert(src);
	//找到目标空间中的\0
	while (*dest != '\0')
	{
		dest++;
	}
	//2.拷贝数据
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[20] = "hello \0xxxxxx";
	my_strcat(arr1, arr1);

	printf("%s\n", arr1);
	return 0;
}