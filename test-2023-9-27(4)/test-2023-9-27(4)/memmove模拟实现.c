#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//my_memmove µœ÷
void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}

	}
	return ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	my_memmove(arr + 2, arr, 20);
	
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
