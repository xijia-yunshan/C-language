#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float r = 0.0f;
	scanf("%f", &r);
	float v = 4.0 / 3 * 3.1415926*r*r*r;
	printf("%f\n", v);
	return 0;
}