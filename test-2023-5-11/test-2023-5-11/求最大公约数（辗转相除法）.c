#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	while ((a%b)!= 0)
	{
		c = a%b;
	    a = b;
	    b = c;
	}
	printf("最大公约数为：%d\n", c);
	return 0;
}