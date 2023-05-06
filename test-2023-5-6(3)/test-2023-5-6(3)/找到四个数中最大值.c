#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int max = 0;
	scanf("%d", &max);
	int i = 1;
	int n = 0;
	while (i < 4)
	{
		scanf("%d", &n);
		if (n>max)
		{
			max = n;
		}
		i++;
	}
	printf("%d\n", max);
	return 0;
}