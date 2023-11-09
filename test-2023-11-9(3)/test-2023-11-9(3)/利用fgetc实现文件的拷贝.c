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
		pfread = NULL;//���pfread���ļ��ɹ���pfwrite���ļ�ʧ�ܣ��͹رյ�һ���򿪵��ļ�����pfread����ΪNULL
		return 1;
	}

	//����
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputc(ch, pfwrite);
	}

	//�ر�
	fclose(pfread);
	pfread = NULL;
	
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}