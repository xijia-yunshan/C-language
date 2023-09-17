#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//dest指向的空间是需要改变的，但是src指向的空间是不期望被改变的
void my_strcpy(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	
	//拷贝的是'\0'之前的字符
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}