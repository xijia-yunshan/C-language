#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//feof函数
//牢记：在文件读取过程中，不能用feof函数的返回值来直接判断文件是否结束
//feof的作用：当文件结束的时候，判断读取结束的原因是否是：遇到文件尾结束

//文件读取结束的原因：1.文件遇到末尾；2.文件读取错误。

//1、文本文件读取是否结束，判断返回值是否为EOF（fgetc），或者NULL（fgets）
//2、二进制文件的读取（fread）结束判断，判断返回值是否小于要读的个数

//ferror函数—判断文件读取是否是因为遇到错误而读取结束

//文本文件的例子：
//int main()
//{
//	int c = 0;
//
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("FILE opening failed");
//		return EXIT_FAILURE;//1
//	}
//	//当fgetc读取失败的时候或遇到文件结束，都会返回EOF
//
//	while ((c = fgetc(fp)) != EOF)
//	{
//		putchar(c);
//	}
//
//	//判断什么原因导致文件读取结束
//	if (ferror(fp))
//	{
//		puts("I/O error when reading");
//	}
//	else if (feof(fp))
//	{
//		puts("End of File reached successfully");
//	}
//	 
//	//关闭文件
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//二进制文件的例子：
enum { SIZE = 5 };

int main()
{
	double a[SIZE] = { 1., 2., 3., 4., 5. };
	FILE *fp = fopen("test.bin", "wb");//必须⽤⼆进制模式
	fwrite(a, sizeof (*a), SIZE, fp);//写double的数组		
	fclose(fp);

	double b[SIZE];
	fp = fopen("test.bin", "rb");
	size_t ret_code = fread(b, sizeof (*b), SIZE, fp);//读double的数组

	if (ret_code == SIZE)
	{
		puts("Array read successfully, contents: ");
		for (int n = 0; n < SIZE; ++n)
		{
			printf("%f ", b[n]);
			putchar('\n');
		}
	}
	else
	{
		if (feof(fp))
		{
			printf("Error reading test.bin: unexpected end of file\n");
		}
		else if (ferror(fp))
		{
			perror("Error reading test.bin");
		}
	}
}
