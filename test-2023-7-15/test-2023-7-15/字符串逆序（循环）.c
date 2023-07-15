#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 2;
	while (right > left)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("%s\n", arr);
	return 0;
}