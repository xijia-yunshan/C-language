#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//atoi函数的使用
//int main()
//{
//	char arr1[] = "abcd1233";
//	char arr2[] = "+1233";
//	char arr3[] = "-1233";
//	char arr4[] = "  1233";
//	char arr5[] = " ";
//
//	int ret1 = atoi(arr1);
//	int ret2 = atoi(arr2);
//	int ret3 = atoi(arr3);
//	int ret4 = atoi(arr4);
//	int ret5 = atoi(arr5);
//	
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	printf("%d\n", ret3);
//	printf("%d\n", ret4);
//	printf("%d\n", ret5);
//	
//	return 0;
//}

//atoi函数模拟实现
int my_atoi(const char* str)
{
	//1.空指针
	if (str == NULL)
	{
		return 0;
	}
	//2.字符串长度为0
	if (*str == '\0')
	{
		return 0;
	}
	//3.字符串前面有空格
	while (*str == ' ')
	{
		str++;
	}
	//4.字符串是否有+、-
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	//5.str遇字母和\0结束
	int ret = 0;
	while (*str != '\0')
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0')*flag;
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
			str++;
		}
		else
		{
			return ret;
		}
	}
	return ret;
}

int main()
{
	char arr[] = " -159abc"; 
	int ret = my_atoi(arr);
	printf("%d\n", ret);
	return 0;
}