#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "abcde")==0)
		{
			printf("��½�ɹ�");
			break;
		}
		else
		{
			printf("�������\n");
		}
		
	}
	if (i == 3)
		{
			printf("��������˳�����\n");
		}
	return 0;
}