#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a = 3;
	int b = 5;
	printf("����ǰ��a=%d,b=%d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;//��������λ�����ͬΪ0������Ϊ1
	printf("������a=%d,b=%d\n",a,b);
	return 0;
}