#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//strcmp—string compare，比较字符串的大小
//比较两个字符串中对应位置上的字符—按字典序比较

int main()
{
	//比较2个字符
	int ret = strcmp("abwdef", "abq");
	if (ret > 0)
	{
		printf(">\n");
	}
	else if (ret == 0)
	{
		printf("==\n");
	}
	else
	{
		printf("<\n");
	}//这里不能用ret == 1 / ret == -1来判断，因为strcmp函数return的是大于/小于0的随机数。

	printf("%d\n", ret);
	return 0;
}