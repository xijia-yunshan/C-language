#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6

	printf("%d\n", sizeof(arr + 0));//arr是数组首元素的地址，arr+0还是首元素的地址，地址大小就是4/8个字节

	printf("%d\n", sizeof(*arr));//arr还是首元素的地址，*arr就是首元素，就占1个字节
	
	printf("%d\n", sizeof(arr[1]));//arr[1]就是数组的第二个元素，大小是1个字节
	
	printf("%d\n", sizeof(&arr));//&arr是数组的地址，数组的地址也是地址，大小就是4/8个字节
	
	printf("%d\n", sizeof(&arr + 1));//跳过一个数组后的地址，是地址就是4/8个字节
	
	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址

	return 0;
}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("%d\n", strlen(arr));//随机值，因为数组中没有明确给出\0
//
//	printf("%d\n", strlen(arr + 0));//随机值
//
//	printf("%d\n", strlen(*arr));//*arr -> 'a' -> 97//非法访问   int strlen(const char* str)
//
//	printf("%d\n", strlen(arr[1]));//非法访问
//
//	printf("%d\n", strlen(&arr));//随机值
//	//&arr               const char*
//	//char (*p)[6]       const char*
//	
//	printf("%d\n", strlen(&arr + 1));//随机值（与前面随机值差6）
//	
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//[a b c d e f \0]
//	printf("%d\n", sizeof(arr));//7
//	
//	printf("%d\n", sizeof(arr + 0));//arr表示首元素的地址，arr + 0还是首元素的地址，大小就是4/8个字节
//	
//	printf("%d\n", sizeof(*arr));//arr表示首元素的地址，*arr就是首元素，大小是1个字节
//
//	printf("%d\n", sizeof(arr[1]));//arr[1]就是数组的第二个元素，大小也是1个字节
//	
//	printf("%d\n", sizeof(&arr));//&arr是数组的地址，数组的地址也是地址，大小就是4/8个字节
//
//	printf("%d\n", sizeof(&arr + 1));//跳过一个数组后的地址，是地址就是4/8个字节
//
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址，大小是4/8个字节
//	
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//[a b c d e f \0]
//	printf("%d\n", strlen(arr));//6   arr是首元素的地址
//
//	printf("%d\n", strlen(arr + 0));//6 //arr + 0也是首元素的地址
//
//	//printf("%d\n", strlen(*arr));//err - 非法访问
//
//	//printf("%d\n", strlen(arr[1]));//err - 非法访问
//
//	printf("%d\n", strlen(&arr));//6  &arr是数组的地址，但是这个地址也是指向数组的起始位置
//	//strlen就从起始位置开始向后找0
//
//	printf("%d\n", strlen(&arr + 1));//跳过整个数组后的地址，从这里开始找\0,就是随机值
//
//	printf("%d\n", strlen(&arr[0] + 1));//第二个元素的地址，长度是5
//	
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	//[a b c d e f \0]
//	printf("%d\n", sizeof(p));//p是一个指针变量，大小是4/8个字节
//
//	printf("%d\n", sizeof(p + 1));//第二个元素b的地址，大小是4/8个字节
//
//	printf("%d\n", sizeof(*p));//*p指向第一个元素a，大小是1个字节
//
//	printf("%d\n", sizeof(p[0]));//p[0] --> *(p+0)，其实就是字符串中的首字符，大小是1个字节
//	//字符串可以看成是一个数组，p是数组首元素a的地址，p[0]其实就是访问数组中的元素a，大小是1个字节
//
//	printf("%d\n", sizeof(&p));//&p是p的地址，地址大小就是4/8个字节
//	
//	printf("%d\n", sizeof(&p + 1));//&p + 1也是地址，&p + 1跳过p变量后的地址
//
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 - 第二个元素b的地址
//
//	return 0;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	
//	printf("%d\n", strlen(p));//6 - 字符串中有\0，从p中存放的是a的地址，从a的地址开始向后访问
//
//	printf("%d\n", strlen(p + 1));//5 - 从b的地址开始向后访问
//
//	//printf("%d\n", strlen(*p));//err - 非法访问
//
//	//printf("%d\n", strlen(p[0]));//err - 非法访问  p[0] == *(p + 0) == *p
//
//	printf("%d\n", strlen(&p));//随机值，&p是p的地址，从p所占空间的起始位置查找
//
//	printf("%d\n", strlen(&p + 1));//随机值
//
//	printf("%d\n", strlen(&p[0] + 1));//5
//	
//	return 0;
//}