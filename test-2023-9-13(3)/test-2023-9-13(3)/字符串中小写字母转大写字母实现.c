#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[] = "I am a Student";
	//1.�����ַ���
	//2.����Сд��ĸת��д
	int len = strlen(str);//14(0~13)
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = str[i] - 32;
		}
	}
	printf("%s\n", str);
	return 0;
}
