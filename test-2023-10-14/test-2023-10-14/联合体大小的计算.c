#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
union Un1
{
	char c[5];//5 —> 对齐数按成员来算 1 8 1
	int i;//4                          4 8 4
};
union Un2
{
	short c[7];//14 —> 对齐数按成员来计算 2 8 2
	int i;//4                              4 8 4
};
int main()
{
	//下⾯输出的结果是什么？
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}//联合体的大小，是其中最大成员的大小（这句话是错误的）