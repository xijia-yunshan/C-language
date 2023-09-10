#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void find(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			else if (arr[i] == arr[j])
			{
				flag = 0;
			}
		}
		if (flag == 1)
		{
			printf("%d ", arr[i]);
		}
	}
}


int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	find(arr, n);
	return 0;
}