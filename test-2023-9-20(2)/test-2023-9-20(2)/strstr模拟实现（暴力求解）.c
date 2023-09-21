#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <assert.h>


const char* my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	const char* cp = str1;
	const char* s1 = NULL;
	const char* s2 = NULL;

	//如果字符串是空字符串，直接返回str1
	if (*str2 == '\0')
	{
		return str1;
	}

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abcddefabcdef";
	char arr2[] = "gwz";
	const char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}