#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int nums[1000] = { 0 };

	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
	}

	int* ans = (int*)malloc(2 * n * sizeof(int));
	if (ans == NULL)
	{
		perror("malloc");
		return 1;
	}

	for (i = 0; i < n; i++)
	{
		ans[i] = nums[i];
		ans[i + n] = nums[i];
	}

	for (i = 0; i < 2 * n; i++)
	{
		printf("%d ", ans[i]);
	}

	free(ans);
	ans = NULL;
	return 0;
}