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

//էһ��������Ĵ������ûʲô���⣬��ʵ�ϣ�����һЩϸ������
//malloc������̬�ڴ�ռ��û�н����ͷţ��ᷢ���ڴ�й¶
//�޸ģ�
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
