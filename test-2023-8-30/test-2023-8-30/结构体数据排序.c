#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
	char name[20];
	int age;
};
//按名字来排序
int com_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

//按年龄来排序
int com_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

void print_stu(struct stu s[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", s[i].name, s[i].age);
	}
}


void test()
{
	struct stu s[] = { { "zhangsan", 20 }, { "lisi", 16 }, { "wangwu", 30 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), com_stu_by_name);
	print_stu(s, sz);
	qsort(s, sz, sizeof(s[0]), com_stu_by_age);
	print_stu(s, sz);
}

int main()
{
	test();
	return 0;
}