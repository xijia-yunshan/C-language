#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d,b=%d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;//按二进制位异或相同为0，相异为1
	printf("交换后：a=%d,b=%d\n",a,b);
	return 0;
}