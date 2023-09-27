#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//memcpy����ģ��ʵ��
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	int i = 0;
	while (num)
	{
		//����1���ֽ�
		*(char*)dest = *(char*)src;//ת������ʱ��
		dest = (char*)dest + 1;
		src = (char*)src + 1;
		num--;
	}
	return ret;
}


//����������д
//my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	int i = 0;
//	while (num)
//	{
//		//����1���ֽ�
//		*(char*)dest = *(char*)src;//ת������ʱ��
//		++(char*)dest;
//		++(char*)src;//һЩ�������ᱨ��
//		num--;
//	}
//	return ret;
//}

int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	//����ǰ5��������һ��������4���ֽڣ�һ��20���ֽ�
	my_memcpy(arr1, arr2, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;

}