#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum color
{
	RED = 1,
	GREEN = 2,
	BLUE = 1
};

int main()
{
	enum color clr = GREEN;//ʹ��ö�ٳ�����ö�ٱ�����ֵ

	enum color clr2 = 2;//C���Ի����²��ᱨ��������c++�����»ᱨ����Ϊc++�﷨���Ƚ��ϸ�

	printf("%d\n", sizeof(clr));//ö�����͵Ĵ�С��4���ֽڣ���Ϊö�������ǿ��ܵ�ȡֵ������ö������ʹ�3������ֵ��ֻ��Ҫ4���ֽھͿ�����

	return 0;
}