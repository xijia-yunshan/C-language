#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* pfread = fopen("test.txt", "r");

	if (pfread == NULL)
	{
		perror("fopen");
		return 1;
	}

	FILE* pfwrite = fopen("test2.txt", "w");
	if (pfwrite == NULL)
	{
		perror("fopen");
		fclose(pfread);
		pfread = NULL;//如果pfread打开文件成功，pfwrite打开文件失败，就关闭第一个打开的文件，将pfread重置为NULL
		return 1;
	}

	//拷贝
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputc(ch, pfwrite);
	}

	//关闭
	fclose(pfread);
	pfread = NULL;
	
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}