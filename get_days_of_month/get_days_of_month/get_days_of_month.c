#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include "is_leap_year.h" 

int get_days_of_month(int y, int m)
{
	int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int days = month[m - 1];
	if (is_leap_year(y) && m == 2)
	{
		days = days + 1;
	}
	return days;
}