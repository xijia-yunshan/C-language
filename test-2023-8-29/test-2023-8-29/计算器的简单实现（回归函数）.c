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

void calc(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个数：");
	scanf("%d %d", &x, &y);
	ret = p(x, y);
	printf("%d\n", ret);
}

int main()
{
	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(add);
			break;
		case 2:
			calc(sub);
			break;
		case 3:
			calc(mul);
			break;
		case 4:
			calc(div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}
