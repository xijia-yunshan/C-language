#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		int tmp = 0;
		for (tmp = 1; tmp < 10 - i; tmp++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}