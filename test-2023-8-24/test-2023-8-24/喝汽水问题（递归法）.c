#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_count(int count, int empty)
{
	if (empty <= 1)
	{
		return count;
	}
	else
	{
		return count + get_count(empty / 2, empty / 2 + empty % 2);
	}
}

int main()
{
	int money = 0;
	scanf("%d", &money);

	int count = money;
	int empty = money;
	int ret = get_count(count, empty);
	printf("%d\n", ret);
	return 0;
}