#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int money = 0;
	printf("���������Ǯ��");
	scanf("%d", &money);
	int drink = money;
	int empty = money;
	while (empty >= 2)
	{
		drink = drink + empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("�����Ժ�%dƿ��ˮ\n", drink);
	return 0;
}