#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char killer = '0';
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)//�������Ϊ�棬ֵΪ1����֮����Ϊ0������һ�٣����Ϊ3
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}