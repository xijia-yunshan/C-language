#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	//isupper_�����жϲ����Ƿ�Ϊ��д��ĸ
	//����Ǵ�д��ĸ�����ط�����֣����Ǿͷ���0

	int ret = isupper('C');
	printf("%d\n", ret);
	return 0;
}
