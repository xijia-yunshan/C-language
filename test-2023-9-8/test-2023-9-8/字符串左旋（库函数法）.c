#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void leftRound(char* str, int k)
{
	int len = strlen(str);
	int time = k % len;
	char tmp[1000] = { 0 };
	//����
	strcpy(tmp, str + time);

	//ƴ�ӵ�ָ��λ��tmp����str��ʼƴ��k��
	strncat(tmp, str, time);
	strcpy(str, tmp);
}

int main()
{
	int k = 0;
	char str[] = "abcde";

	scanf("%d", &k);
	leftRound(str, k);
	printf("%s\n", str);
	return 0;
}