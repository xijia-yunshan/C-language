#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char password[20] = { 0 };
	printf("«Î ‰»Î√‹¬Î£∫");
	scanf("%s", password);
	int ch = 0;
	while ((ch = getchar()) != '\n');
	{
		;
	}

	printf("«Î»∑»œ√‹¬Î(Y/N)£∫");
	int ret = getchar();
	if (ret == 'Y')
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}