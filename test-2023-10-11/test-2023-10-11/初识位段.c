#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//6.1 什么是位段

//位段的声明和结构是类似的，有两个不同：
//1. 位段的成员必须是 int、unsigned int 或signed int ，在C99中位段成员的类型也可以选择其他类型。
//2. 位段的成员名后边有⼀个冒号和⼀个数字。

struct A
{
	int _a : 2;//只占2个二进制位
	int _b : 5;//只占5个二进制位
	int _c : 10;//只占10个二进制位
	int _d : 30;//只占30个二进制位
};//47bit —> 6type ——> 实际是8type

struct B
{
	int _a;
	int _b;
	int _c;
	int _d;
};//16type

int main()
{
	printf("%d\n", sizeof(struct A));
	printf("%d\n", sizeof(struct B));
	return 0;
}