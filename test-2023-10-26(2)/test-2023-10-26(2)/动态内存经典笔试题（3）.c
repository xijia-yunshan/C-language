#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
	return *p;
}

void Test()
{
	char* str = NULL;
	str = GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}

int main()
{
	Test();
	return 0;
}

//乍一看，上面的代码好像没什么问题，事实上，存在一些细节问题
//malloc创建动态内存空间后，没有进行释放，会发生内存泄露
//修改：
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char* GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//	return *p;
//}
//
//void Test()
//{
//	char* str = NULL;
//	str = GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
