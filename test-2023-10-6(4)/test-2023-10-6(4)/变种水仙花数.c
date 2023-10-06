#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 10000; i < 100000; i++)
	{
		int a = 0;
		int b = 0;
		int c = 10;
		int sum = 0;
		const int ret = i;
		while (ret / c != 0)
		{
			a = ret % c;//除法后后部
			b = ret / c;//除法后前部
			sum = sum + a*b;//每一项的和
			c = c * 10;//拆分个位、十位、百位......
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

