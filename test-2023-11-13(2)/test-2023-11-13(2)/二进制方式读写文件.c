#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//fwrite fread
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(arr, sizeof(int), 7, pf);
//
//	fclose(pf);
//	pf = NULL;
//}

//我们发现数据已经写入，但是我们看不懂
//要检查数据正确与否，我们需要用到fread函数
int main()
{
	int arr[10] = { 0 };

	FILE* pf = fopen("data.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fread(arr, sizeof(int), 7, pf);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	fclose(pf);
	pf = NULL;
}