#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binary_research(int arr1[], int x, int y)
{
	int left = 0;
	int right = y - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr1[mid] > x)
		{
			right = mid - 1;
		}
		else if (arr1[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=binary_research(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}