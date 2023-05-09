#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:>");
		scanf("%s", password);
		if (strcmp(password, "abcde")==0)
		{
			printf("µÇÂ½³É¹¦");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
		
	}
	if (i == 3)
		{
			printf("ÃÜÂë´íÎó£¬ÍË³ö³ÌĞò\n");
		}
	return 0;
}