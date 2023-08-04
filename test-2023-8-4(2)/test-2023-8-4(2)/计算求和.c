#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>




int main()
{
	int n = 0;
	int a = 0;
	int sum = 0;
	int i = 0;
	int arr[1000] = { 0 };
	printf("请问求前几项的和:>");
	scanf("%d", &n);
	printf("请问a为多少:>");
	scanf("%d", &a);
	if (a > 0 && a < 10)
	{
		arr[0] = a;
		for (i = 1; i < n; i++)
		{
			arr[i] = arr[i - 1] * 10 + a;
		}
		i = 0;
		for (i = 0; i < n; i++)
		{
			sum = sum + arr[i];
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("输入错误，请重新输入！\n");
	}
	return 0;
}