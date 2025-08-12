#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

#include "get_days_of_month.h"

#pragma comment(lib,"get_days_of_month.lib")

int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	int days = get_days_of_month(year, month);
	printf("%d\n", days);
	return 0;
}