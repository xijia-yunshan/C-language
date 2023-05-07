#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int weight = 0;
	int high = 0;
	scanf("%d %d", &weight, &high);
	float bmi = weight / (high/100.0) / (high/100.0);
	printf("%.2f\n", bmi);
	return 0;
}