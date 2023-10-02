#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 9;//整型存储方式，补码
	//00000000000000000000000000000001—9的补码
	//
	float *pFloat = (float *)&n;

	printf("n的值为：%d\n", n);//
	printf("*pFloat的值为：%f\n", *pFloat);
	//0 00000000 00000000000000000001001
	//E为全0
	//（-1）^0 * 0.00000000000000000001001 * 2^(-126) ——> 0.000000

	*pFloat = 9.0;
	//1001.0
	//(-1)^0 * 1.001 * 2^3
	//S = 0
	//M = 1.001
	//E = 3
	//01000001000100000000000000000000 ——> 1091567616   
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}