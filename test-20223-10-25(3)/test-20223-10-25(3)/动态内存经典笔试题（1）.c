#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void GetMemory(char* p)
//{
//	p = (char*)malloc(40);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//失败的原因：
//1.GetMemory传参，p只是str的一个临时靠拷贝，有自己独立的空间，str还是空指针
//2.strcpy(str，"hello world"),相当于对str进行解引用，即对空指针进行解引用操作
//3.malloc开辟的空间没有进行释放

//修改后的代码（法一）：
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(40);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//修改后的代码（法二）：
char* GetMemory(char* p)
{
	p = (char*)malloc(40);
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}

int main()
{
	Test();
	return 0;
}
