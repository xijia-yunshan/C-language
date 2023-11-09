#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//写一行
	fputs("hello world", pf);
	fputs("hehe", pf);

	//关闭
	fclose(pf);
	pf = NULL;

	return 0;
}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写一行
//	char arr[20] = "xxxxxxxxxxxxxxx";
//	fgets(arr, 20, pf);
//	printf("%s", arr);
//
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}