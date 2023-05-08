#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	int k = 0;
	scanf("%d", &k);
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= sz; i++)
	{
		if (arr[i] == k)
		{
            printf("找到了，下标是：%d\n", i);
			break;
		}	
	}
	if (i > sz)
	{
		printf("找不到\n");
	}
	return 0;
}