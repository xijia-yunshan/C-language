#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//fseek����
//int fseek ( FILE * stream, long int offset, int origin );������ƫ��������ʼλ
//int main()
//{
//	int arr[10] = { 0 };
//	
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�
//	//��λ�ļ�ָ��
//	//fseek(pf, 6, SEEK_SET);
//	//fseek(pf, -3, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fseek(pf, 5, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//g
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell�����������������ʼλ�õ�ƫ����
//int main()
//{
//	int arr[10] = { 0 };
//	
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�
//	//��λ�ļ�ָ��
//	//fseek(pf, 6, SEEK_SET);
//	//fseek(pf, -3, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fseek(pf, 5, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//g
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���ļ�ָ��ص���ʼλ��
int main()
{
	int arr[10] = { 0 };

	FILE* pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//���ļ�
	//��λ�ļ�ָ��
	//fseek(pf, 6, SEEK_SET);
	//fseek(pf, -3, SEEK_END);
	int ch = fgetc(pf);
	printf("%c\n", ch);//a

	fseek(pf, 5, SEEK_CUR);

	ch = fgetc(pf);
	printf("%c\n", ch);//g

	int pos = ftell(pf);
	printf("%d\n", pos);

	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);//a

	//�ر�
	fclose(pf);
	pf = NULL;
	return 0;
}
