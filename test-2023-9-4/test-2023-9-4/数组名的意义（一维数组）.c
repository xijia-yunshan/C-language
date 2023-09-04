#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//数组a的大小

	printf("%d\n", sizeof(a + 0));//数组名a并没有单独放在sizeof()内部，也没有&;
	//所以a就是数组首元素的地址，是地址就是4/8个字节

	printf("%d\n", sizeof(*a));//a就是首元素的地址, a = &a[0]
	//*a就是第一个元素，也就是a[0]，大小就是4个字节

	printf("%d\n", sizeof(a + 1));//4或8—a就是数组首元素的地址（&a[0]—int*），a+1-->&a[1]
	//a+1就是第二个元素的地址

	printf("%d\n", sizeof(a[1]));//4—计算第二个元素的大小，单位是字节

	printf("%d\n", sizeof(&a));//&a—取出的是数组的地址，但是数据的地址也是地址，地址的大小就是4/8个字节

	printf("%d\n", sizeof(*&a));//第一种解读：相当于printf("%d\n", sizeof(a))—16
	//第二种解读：
	//&a—int (*p)[4]
	//*p 访问一个数组的大小
	//p+1 跳过一个数组的大小

	printf("%d\n", sizeof(&a + 1));//跳过一个数组后的地址，是地址就是4/8个字节

	printf("%d\n", sizeof(&a[0]));//首元素的地址，4/8

	printf("%d\n", sizeof(&a[0] + 1));//第二个元素的地址
	//&a[1]
	//&a[0] - int*
	return 0;
}
