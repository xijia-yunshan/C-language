#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int money = 0;
	printf("请输入多少钱：");
	scanf("%d", &money);
	int drink = money;
	int empty = money;
	while (empty >= 2)
	{
		drink = drink + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("最多可以喝%d瓶汽水\n", drink);
	return 0;
}