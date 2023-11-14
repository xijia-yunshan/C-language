#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//fseek函数
//int fseek ( FILE * stream, long int offset, int origin );—流、偏移量、起始位
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
//	//读文件
//	//定位文件指针
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
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell函数—返回相对于起始位置的偏移量
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
//	//读文件
//	//定位文件指针
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
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//让文件指针回到起始位置
int main()
{
	int arr[10] = { 0 };

	FILE* pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//读文件
	//定位文件指针
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

	//关闭
	fclose(pf);
	pf = NULL;
	return 0;
}
