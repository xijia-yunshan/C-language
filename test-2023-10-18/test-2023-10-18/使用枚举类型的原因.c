#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//为什么使用枚举？
//增加代码的可读性和可维护性
//例如：我们之前模拟实现计算器的代码
//
//void menu()
//{
//	printf("************************\n");
//	printf("******1.add  2.sub******\n");
//	printf("******3.mul  4.div******\n");
//	printf("******** 0.exit ********\n");
//	printf("************************\n");
//}
//
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		
//			break;
//		case 2:
//			
//			break;
//		case 3:
//			
//			break;
//		case 4:
//			
//			break;
//		case 0:
//
//			break;
//		default:
//
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
//我们发现，我们很难将0、1、2、3、4这样的数字与加、减、乘、除运算联系起来，但是如果我们采用枚举，就可以解决这个问题

void menu()
{
	printf("************************\n");
	printf("******1.add  2.sub******\n");
	printf("******3.mul  4.div******\n");
	printf("******** 0.exit ********\n");
	printf("************************\n");
}

enum option
{
	EXIT,
	ADD,
	SUB,
	MUL,
	DIV
};

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
		
			break;
		case SUB:
			
			break;
		case MUL:
			
			break;
		case DIV:
			
			break;	
		default:

			break;

		}
	} while (input);
	return 0;
}