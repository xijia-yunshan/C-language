#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret ^= arr[i];
	}
	printf("%d\n", ret);
	return 0;
}
