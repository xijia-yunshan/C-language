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

//ʧ�ܵ�ԭ��
//1.GetMemory���Σ�pֻ��str��һ����ʱ�����������Լ������Ŀռ䣬str���ǿ�ָ��
//2.strcpy(str��"hello world"),�൱�ڶ�str���н����ã����Կ�ָ����н����ò���
//3.malloc���ٵĿռ�û�н����ͷ�

//�޸ĺ�Ĵ��루��һ����
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

//�޸ĺ�Ĵ��루��������
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
