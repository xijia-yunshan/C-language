#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//memcpy函数模拟实现
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	int i = 0;
	while (num)
	{
		//拷贝1个字节
		*(char*)dest = *(char*)src;//转化是临时的
		dest = (char*)dest + 1;
		src = (char*)src + 1;
		num--;
	}
	return ret;
}


//不建议这样写
//my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	int i = 0;
//	while (num)
//	{
//		//拷贝1个字节
//		*(char*)dest = *(char*)src;//转化是临时的
//		++(char*)dest;
//		++(char*)src;//一些编译器会报错
//		num--;
//	}
//	return ret;
//}

int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	//拷贝前5个整数，一个整数是4个字节，一共20个字节
	my_memcpy(arr1, arr2, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;

}