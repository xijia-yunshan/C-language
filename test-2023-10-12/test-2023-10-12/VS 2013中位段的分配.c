#define _CRT_SECURE_NO_WARNINGS

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };

	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}