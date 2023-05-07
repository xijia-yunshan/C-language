#define _CRT_SECURE_NO_WARNINGS
int main()
{
	double r = 0.0;
	double v = 0.0;
	scanf("%lf", &r);
	v = 4.0 / 3 * 3.1415926*r*r*r;
	printf("%.3lf\n", v);
	return 0;
}