#define _CRT_SECURE_NO_WARNINGS

struct
{
	char a;
	int c;
	float d;
}s = { 0 };//匿名结构体只能用一次，而且只能在其后面创建变量

struct
{
	char a;
	int c;
	float d;
}*ps;

int main()
{
	ps = &s;//err - 虽然结构类型的成员一模一样，但是编译器依然认为 = 两边是不同的指针类型
	return 0;
}