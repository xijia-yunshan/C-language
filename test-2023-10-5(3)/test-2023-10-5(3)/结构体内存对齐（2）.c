#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S3
{
	double d;
	char c;
	int i;
};
//- 16���ֽ�/

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
//- 32���ֽ�

int main()
{

	printf("%d\n", sizeof(struct S4));
}