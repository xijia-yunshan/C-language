#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum color
{
	RED = 1,
	GREEN = 2,
	BLUE = 1
};

int main()
{
	enum color clr = GREEN;//使用枚举常量给枚举变量赋值

	enum color clr2 = 2;//C语言环境下不会报错，但是在c++环境下会报错，因为c++语法检查比较严格

	printf("%d\n", sizeof(clr));//枚举类型的大小是4个字节，因为枚举里面是可能的取值，不是枚举里面就存3个整型值，只需要4个字节就可以了

	return 0;
}