#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", arr[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}