#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//定义一个学生结构体
struct stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct stu s1 = { "zhangsan", 20, 98.5f };
	struct stu s2 = { "lisi", 23, 68.5f };
	struct stu s4 = { .age = 22, .name = "ruhua", .score = 59.5f };

	printf("%s %d %.1f\n", s1.name, s1.age, s1.score);
	printf("%s %d %.1f\n", s4.name, s4.age, s4.score);
	return 0;
}