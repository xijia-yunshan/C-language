#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//�������������ά����Ĵ�С����λ���ֽڡ�48

	printf("%d\n", sizeof(a[0][0]));//a[0][0]-��һ��Ԫ�صĴ�С����С��4���ֽ�

	printf("%d\n", sizeof(a[0]));//16 - a[0]��ʵ�ǵ�һ�е��������������һ�е���������������sizeof�ڲ��ˣ�������ǵ�һ�еĴ�С

	printf("%d\n", sizeof(a[0] + 1));//
	//a[0]�ǵ�һ������������������������������û�е�������sizeof�ڲ���������������ʾ������Ԫ�صĵ�ַ��Ҳ����a[0][0]�ĵ�ַ��a[0] + 1�ǵ�һ�еڶ���Ԫ�أ�a[0][1]���ĵ�ַ

	printf("%d\n", sizeof(*(a[0] + 1)));//a[0] + 1�ǵ�һ�еڶ���Ԫ�أ�a[0][1]���ĵ�ַ
	//*(a[0] + 1)�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�

	printf("%d\n", sizeof(a + 1));//a�Ƕ�ά�������������û�е�������sizeof���ڲ�������a����������Ԫ�صĵ�ַ��Ҳ���ǵ�һ�еĵ�ַ
	//a + 1���ǵڶ��еĵ�ַ
	//a -- int (*)[4]
	//a + 1 -- int (*)[4]

	printf("%d\n", sizeof(*(a + 1)));//16 --> *(a + 1) == a[1]


	printf("%d\n", sizeof(&a[0] + 1));//�ڶ��еĵ�ַ���ǵ�ַ��С����4/8���ֽ�
	//a[0]�ǵ�һ�е���������&a[0]ȡ�����ǵ�һ�еĵ�ַ��&a[0] + 1�õ��ľ��ǵڶ��еĵ�ַ

	printf("%d\n", sizeof(*(&a[0] + 1)));//16

	printf("%d\n", sizeof(*a));//16��������a����������Ԫ�صĵ�ַ��Ҳ���ǵ�һ�еĵ�ַ��*a���ǵ�һ�еĴ�С
	//*a == *(a + 0) == a[0]

	printf("%d\n", sizeof(a[3]));//16
	//arr[3] == arr[0]
	return 0;
}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//6
//
//	printf("%d\n", sizeof(arr + 0));//arr��������Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ��С����4/8���ֽ�
//
//	printf("%d\n", sizeof(*arr));//arr������Ԫ�صĵ�ַ��*arr������Ԫ�أ���ռ1���ֽ�
//	printf("%d\n", sizeof(arr[1]));//arr[1]��������ĵڶ���Ԫ�أ���С��1���ֽ�
//	printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����С����4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//����һ�������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(arr));//���ֵ����Ϊ������û����ȷ����\0
//	printf("%d\n", strlen(arr + 0));//���ֵ
//
//	printf("%d\n", strlen(*arr));//*arr -> 'a' -> 97//�Ƿ�����   int strlen(const char* str)
//	printf("%d\n", strlen(arr[1]));//�Ƿ�����
//
//	printf("%d\n", strlen(&arr));//���ֵ
//	//&arr               const char*
//	//char (*p)[6]       const char*
//	printf("%d\n", strlen(&arr + 1));//���ֵ����ǰ�����ֵ��6��
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//[a b c d e f \0]
//	printf("%d\n", sizeof(arr));//7
//	
//	printf("%d\n", sizeof(arr + 0));//arr��ʾ��Ԫ�صĵ�ַ��arr + 0������Ԫ�صĵ�ַ����С����4/8���ֽ�
//	
//	printf("%d\n", sizeof(*arr));//arr��ʾ��Ԫ�صĵ�ַ��*arr������Ԫ�أ���С��1���ֽ�
//
//	printf("%d\n", sizeof(arr[1]));//arr[1]��������ĵڶ���Ԫ�أ���СҲ��1���ֽ�
//	
//	printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����С����4/8���ֽ�
//
//	printf("%d\n", sizeof(&arr + 1));//����һ�������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ����С��4/8���ֽ�
//	
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//[a b c d e f \0]
//	printf("%d\n", strlen(arr));//6   arr����Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(arr + 0));//6 //arr + 0Ҳ����Ԫ�صĵ�ַ
//
//	//printf("%d\n", strlen(*arr));//err - �Ƿ�����
//
//	//printf("%d\n", strlen(arr[1]));//err - �Ƿ�����
//
//	printf("%d\n", strlen(&arr));//6  &arr������ĵ�ַ�����������ַҲ��ָ���������ʼλ��
//	//strlen�ʹ���ʼλ�ÿ�ʼ�����0
//
//	printf("%d\n", strlen(&arr + 1));//�������������ĵ�ַ�������￪ʼ��\0,�������ֵ
//
//	printf("%d\n", strlen(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ��������5
//	
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	//[a b c d e f \0]
//	printf("%d\n", sizeof(p));//p��һ��ָ���������С��4/8���ֽ�
//
//	printf("%d\n", sizeof(p + 1));//�ڶ���Ԫ��b�ĵ�ַ����С��4/8���ֽ�
//
//	printf("%d\n", sizeof(*p));//*pָ���һ��Ԫ��a����С��1���ֽ�
//
//	printf("%d\n", sizeof(p[0]));//p[0] --> *(p+0)����ʵ�����ַ����е����ַ�����С��1���ֽ�
//	//�ַ������Կ�����һ�����飬p��������Ԫ��a�ĵ�ַ��p[0]��ʵ���Ƿ��������е�Ԫ��a����С��1���ֽ�
//
//	printf("%d\n", sizeof(&p));//&p��p�ĵ�ַ����ַ��С����4/8���ֽ�
//	
//	printf("%d\n", sizeof(&p + 1));//&p + 1Ҳ�ǵ�ַ��&p + 1����p������ĵ�ַ
//
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 - �ڶ���Ԫ��b�ĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	char *p = "abcdef";
//	
//	printf("%d\n", strlen(p));//6 - �ַ�������\0����p�д�ŵ���a�ĵ�ַ����a�ĵ�ַ��ʼ������
//
//	printf("%d\n", strlen(p + 1));//5 - ��b�ĵ�ַ��ʼ������
//
//	//printf("%d\n", strlen(*p));//err - �Ƿ�����
//
//	//printf("%d\n", strlen(p[0]));//err - �Ƿ�����  p[0] == *(p + 0) == *p
//
//	printf("%d\n", strlen(&p));//���ֵ��&p��p�ĵ�ַ����p��ռ�ռ����ʼλ�ò���
//
//	printf("%d\n", strlen(&p + 1));//���ֵ
//
//	printf("%d\n", strlen(&p[0] + 1));//5
//	
//	return 0;
//}