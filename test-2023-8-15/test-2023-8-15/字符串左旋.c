#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void left_move(char*arr, int k)
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}

int main()
{
	char arr[100] = "0";
	printf("×Ö·û´®£º");
	scanf("%s", &arr);

	int k = 0;
	printf("×óÒÆ¸öÊý£º");
	scanf("%d", &k);

	left_move(arr, k);

	printf("%s\n", arr);

	return 0;
}