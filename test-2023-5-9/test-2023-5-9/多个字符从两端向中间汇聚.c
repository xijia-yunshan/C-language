#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "welcome to swust!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1)-1;//right=sizeof(arr2)/sizeof(arr2[0])-2
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);//清空屏幕
		system("cls");//system是一个库函数，可以执行系统命令
		left++;
		right--;
		printf("%s\n", arr2);
	}
	return 0;
}