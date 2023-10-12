#define _CRT_SECURE_NO_WARNINGS

struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main()
{
	struct A sa = { 0 };
	scanf("%d", &sa._b);//这是错误的

	//正确的⽰范
	int b = 0;
	scanf("%d", &b);
	sa._b = b;
	return 0;
}