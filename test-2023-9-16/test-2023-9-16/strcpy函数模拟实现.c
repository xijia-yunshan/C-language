#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void my_strcpy(char* dest, char* src)
{
	//��������'\0'֮ǰ���ַ�
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	//����'\0'�ַ�
	*dest = *src;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}


