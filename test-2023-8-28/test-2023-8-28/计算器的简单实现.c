int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************\n");
	printf("*****1.add****\n");
	printf("*****2.sub****\n");
	printf("*****3.mul****\n");
	printf("*****4.div****\n");
	printf("*****0.exit****\n");
	printf("**************\n");
}
int main()
{
	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	do{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������������");
			scanf("%d %d", &x, &y);
			ret = add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("��������������");
			scanf("%d %d", &x, &y);
			ret = sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("��������������");
			scanf("%d %d", &x, &y);
			ret = mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("��������������");
			scanf("%d %d", &x, &y);
			ret = div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}
