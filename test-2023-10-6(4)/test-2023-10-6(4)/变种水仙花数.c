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
			a = ret % c;//�������
			b = ret / c;//������ǰ��
			sum = sum + a*b;//ÿһ��ĺ�
			c = c * 10;//��ָ�λ��ʮλ����λ......
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

