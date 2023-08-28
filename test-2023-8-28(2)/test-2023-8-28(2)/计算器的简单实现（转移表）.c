#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("****************\n");
	printf("*****1.add******\n");
	printf("*****2.sub******\n");
	printf("*****3.mul******\n");
	printf("*****4.div******\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}
int main()
{
	//函数指针的数组
	int(*parr[])(int, int) = { 0, add, sub, mul, div };

	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个数：");
			scanf("%d %d", &x, &y);
			ret = parr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出计算器\n");
		}
		else
		{
			printf("选择错误，重新选择\n");
		}
	} while (input);
}
