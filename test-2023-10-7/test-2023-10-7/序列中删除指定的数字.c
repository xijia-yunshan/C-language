#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int num = 0;
	int del = 0;
	int arr[1000] = { 0 };
	scanf("%d", &num);
	
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	scanf("%d", &del);

	for (int i = 0; i<num; i++)
	{
		if (arr[i] != del)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

	return 0;
}