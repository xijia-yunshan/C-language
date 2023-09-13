#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	//isupper_用来判断参数是否为大写字母
	//如果是大写字母，返回非零的字，不是就返回0

	int ret = isupper('C');
	printf("%d\n", ret);
	return 0;
}
