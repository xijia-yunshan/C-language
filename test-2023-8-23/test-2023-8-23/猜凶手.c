#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char killer = '0';
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)//条件如果为真，值为1，反之，则为0；三真一假，相加为3
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}