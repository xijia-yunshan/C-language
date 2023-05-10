#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("请注意，你的电脑将在2分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}