#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//strcmp��string compare���Ƚ��ַ����Ĵ�С
//�Ƚ������ַ����ж�Ӧλ���ϵ��ַ������ֵ���Ƚ�

int main()
{
	//�Ƚ�2���ַ�
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
	}//���ﲻ����ret == 1 / ret == -1���жϣ���Ϊstrcmp����return���Ǵ���/С��0���������

	printf("%d\n", ret);
	return 0;
}