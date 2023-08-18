#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] % 2 == 0 && arr[j + 1] % 2 != 0)
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int i = 0;
	int n = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}