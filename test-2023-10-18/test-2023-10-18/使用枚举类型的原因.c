#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Ϊʲôʹ��ö�٣�
//���Ӵ���Ŀɶ��ԺͿ�ά����
//���磺����֮ǰģ��ʵ�ּ������Ĵ���
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
//		printf("��ѡ��\n");
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
//���Ƿ��֣����Ǻ��ѽ�0��1��2��3��4������������ӡ������ˡ���������ϵ����������������ǲ���ö�٣��Ϳ��Խ���������

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
		printf("��ѡ��\n");
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