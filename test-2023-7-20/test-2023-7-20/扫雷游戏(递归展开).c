#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
	return 0;
}