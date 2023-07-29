#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr1[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr1[j]>arr1[j + 1])
			{
				int tmp = 0;
				tmp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < m; i++)
	{
		arr1[n + i] = arr2[i];
	}

	bubble_sort(arr1, n + m);
	for (i = 0; i < n + m; i++)
	{
		printf("%d ", arr1[i]);
	}
	
	return 0;
}