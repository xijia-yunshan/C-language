#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


bublle_arr(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}


int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}






void test1()
{
	int arr[] = { 7, 5, 3, 6, 9, 8, 1, 2, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bublle_arr(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


struct stu
{
	char name[20];
	int age;
};


int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}


void test2()
{
	struct stu s[] = { { "zhangsan", 33 }, { "lisi", 45 }, { "wangwu", 25 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bublle_arr(s, sz, sizeof(s[0]), cmp_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d", s[i].name, s[i].age);
		printf("\n");
	}
}

int main()
{
	//整型数据
	test1();
	//结构体数据
	test2();
	return 0;
}