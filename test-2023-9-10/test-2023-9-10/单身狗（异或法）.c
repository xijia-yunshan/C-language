#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Findnum(int arr[], int len, int* pnum1, int* pnum2)
{
	//1.整体异或
	int ret = 0;
	int i = 0;
	for (i = 0; i < len; i++)
	{
		ret = ret^arr[i];
	}
	//从右往左，遇到一个1，就记录下来位置
	int pos = -1;
	for (i = 0; i < 32; i++)
	{
		if ((ret & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < len; i++)
	{
		if ((arr[i] >> pos) & 1)
		{
			*pnum1 = *pnum1^arr[i];
		}
		else
		{
			*pnum2 = *pnum2^arr[i];
		}
	}
}

int main()
{
	int ret1 = 0;
	int ret2 = 0;
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Findnum(arr, len, &ret1, &ret2);
	printf("%d %d\n", ret1, ret2);
}