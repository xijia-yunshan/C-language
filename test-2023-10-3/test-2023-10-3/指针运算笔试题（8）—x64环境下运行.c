#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[4] = { 1, 2, 3, 4 };

	int *ptr1 = (int *)(&a + 1);

	int *ptr2 = (int *)((long long)a + 1);

	printf("%x, %x", ptr1[-1], *ptr2);
	//x64�����£�ָ��Ĵ�С��8���ֽڣ�
	//���Ǽ���a�ĵ�ַ��0x0012ff4020304050��intֻռ4���ֽڣ�ǿ��ת����ᷢ���ضϣ��������0x20304050������ɷǷ����� ����> long long
	return 0;
}