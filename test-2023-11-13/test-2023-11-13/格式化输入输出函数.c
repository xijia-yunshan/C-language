#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//格式化输入输出函数
//fcanf  fprintf—适用于所有输入、输出流
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fprintf(pf, "%d %f %s", s.n, s.f, s.arr);
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//另外，我们也可以直接输出到屏幕上
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//
//	/*FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}*/
//
//	//写文件
//	fprintf(stdout, "%d %f %s", s.n, s.f, s.arr);
//
//	//关闭
//	/*fclose(pf);
//	pf = NULL;*/
//	return 0;
//}

//data.txt文件中已经有数据了，我们能否将它们读取出来呢？
//当然可以，这时候我们就需要用到fscanf函数
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	fscanf(pf, "%d %f %s", &(s.n), &(s.f), &(s.arr));
//	printf("%d %f %s", s.n, s.f, s.arr);
//
//	//关闭
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//对比一组函数
//scanf—针对标准输入流（stdin）的格式化输入函数
//printf—针对标准输出流（stdout）的格式化输出函数

//fscanf—针对所有输入流的格式化输入函数
//fprintf—针对所有输出流的格式化输出函数

//sprintf—将格式化的数据转换成字符串
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//	char arr[20] = { 0 };
//	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//利用sscanf从arr这个字符串中提取出格式化的数据
struct S
{
	int n;
	float f;
	char arr[20];
};

int main()
{
	struct S s = { 100, 3.14f, "zhangsan" };
	char arr[20] = { 0 };
	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
	printf("%s\n", arr);

	struct S t = { 0 };
	sscanf(arr, "%d %f %s", &(t.n), &(t.f), t.arr);
	printf("%d %f %s\n", t.n, t.f, t.arr);

	return 0;
}