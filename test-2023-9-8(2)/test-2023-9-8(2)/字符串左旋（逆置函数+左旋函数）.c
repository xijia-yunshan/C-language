#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char* str, int left, int right)
{
	while (left < right)
	{
		char tmp = str[right];
		str[right] = str[left];
		str[left] = tmp;
		left++;
		right--;
	}
}

void leftRound(char* str, int k)
{
	int len = strlen(str);
	int time = k % len;
	reverse(str, 0, time - 1);
	reverse(str, time, len - 1);
	reverse(str, 0, len - 1);

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