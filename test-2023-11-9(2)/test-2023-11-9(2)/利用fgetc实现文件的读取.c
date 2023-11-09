#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//打开文件
	FILE* pf = fopen("test.txt", "r");

	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//读文件
	int ch = fgetc(pf);
	printf("%c\n", ch);

	ch = fgetc(pf);
	printf("%c\n", ch);

	ch = fgetc(pf);
	printf("%c\n", ch);

	ch = fgetc(pf);
	printf("%d\n", ch);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}
