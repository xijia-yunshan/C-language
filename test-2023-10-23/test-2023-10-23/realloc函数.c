#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(5 * sizeof(int));

	if (p == NULL)
	{
		perror("maalloc");
		return 1;
	}
	//ʹ��
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;
	}

	/*for (i = 0; i < 5; i++)
	{
	printf("%d ", *(p + i));
	}
	*/
	//��������Ķ��ϵ��ڴ�
	int* ptr = realloc(p, 40);//��ò�Ҫ��p�����գ���Ϊ���realloc����һ������ʧ�ܣ��ͻ᷵��һ����ָ�룬��p�ͻ��ɿ�ָ�룬pԭ����ŵ�����Ҳ��Ϊ��
	if (ptr != NULL)
	{
		p = ptr;
		ptr = NULL;//ע�ⲻҪfree(ptr)
	}
	else
	{
		perror("realloc");
		return 1;
	}

	//ʹ��
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}


	//�ͷ�
	free(p);
	p = NULL;
	return 0;
}
