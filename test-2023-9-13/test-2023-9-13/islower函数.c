#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	//islower_�����жϲ����Ƿ�ΪСд��ĸ
	//�����Сд��ĸ�����ط�����֣����Ǿͷ���0

	int ret = islower('C');
	printf("%d\n", ret);
	return 0;
}
