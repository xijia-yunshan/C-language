#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//ʹ��fgetc�ӱ�׼�������ж�ȡ����
int main()
{
	int ch = fgetc(stdin);//fgetc�ӱ�׼�������ж�ȡ���ݣ������ض�Ӧ��ASCIIֵ�����û�ж�ȡ�ɹ����ͷ���EOF��
	//int ch = getchar();//��fgetc���ݵ���stdinʱ����ͬ��getchar
	
	printf("%c\n", ch);

	return 0;
}
