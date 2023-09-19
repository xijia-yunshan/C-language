#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "gqipeng@yeah.net";//@ . 分割符
	char buf[30] = { 0 };
	strcpy(buf, arr);
	char* p = "@.";
	//1.strtok(arr, p);arr是被p中的字符分割的字符串
	//2.strtok会将arr中的@改成'\0'，并返回g的地址
	//3.strtok会改变原arr数组，因此使用前需要创建一份临时拷贝
	//4.传给strtok函数的buf是首元素地址，为非空，strtok会将@改为\0，并返回g的地址并打印，同时sretok会记住\0的位置，下次再调用strtok函数的时侯，传空指针就可以了
	//5.给strtok函数传NULL，函数将在同⼀个字符串中被保存的位置开始，查找下⼀个标记
	char* r = NULL;
	for (r = strtok(buf, p); r != NULL; r = strtok(NULL, p))
	{
		printf("%s\n", r);
	}

	return 0;
}