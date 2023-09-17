#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//strcat—字符串追加
//1.目标空间中得有\0（从哪里开始追加），源头字符串中得有\0（追加什么时候结束）
//2.目标空间要足够大，目标可以修改

int main()
{
	char arr1[20] = "hello ";
	char* p = "world";

	strcat(arr1, p);
	printf("%s\n", arr1);
	return 0;
}