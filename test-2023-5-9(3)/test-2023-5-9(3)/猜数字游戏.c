#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("******************\n");
	printf("******1.play******\n");
	printf("******0.exit******\n");
}

void game()
{
	int sum = 0;
	int i = 0;
	int guess = 0;
	int ret = rand()%100+1;
	printf("请猜数字:>");
	while (1)
	{
		do{
			scanf("%d", &guess);
			i++;
			if (guess > ret)
			{
				printf("猜大了\n");
			}
			else if (guess < ret)
			{
				printf("猜小了\n");
			}
			else
			{
				printf("恭喜你，猜对了！");
			}
		} while (guess != ret);
      printf("一共猜了%d次\n",i);
	  break;
	}
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{	
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误请重新输入");
			break;
		}
	} while (input);
	return 0;
}