#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//���ļ�
	FILE* pf = fopen("test.txt", "r");

	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//���ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);

	ch = fgetc(pf);
	printf("%c\n", ch);

	ch = fgetc(pf);
	printf("%c\n", ch);

	ch = fgetc(pf);
	printf("%d\n", ch);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}
