#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//��ʽ�������������
//fcanf  fprintf���������������롢�����
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.f, s.arr);
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���⣬����Ҳ����ֱ���������Ļ��
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//
//	/*FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}*/
//
//	//д�ļ�
//	fprintf(stdout, "%d %f %s", s.n, s.f, s.arr);
//
//	//�ر�
//	/*fclose(pf);
//	pf = NULL;*/
//	return 0;
//}

//data.txt�ļ����Ѿ��������ˣ������ܷ����Ƕ�ȡ�����أ�
//��Ȼ���ԣ���ʱ�����Ǿ���Ҫ�õ�fscanf����
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�
//	fscanf(pf, "%d %f %s", &(s.n), &(s.f), &(s.arr));
//	printf("%d %f %s", s.n, s.f, s.arr);
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�Ա�һ�麯��
//scanf����Ա�׼��������stdin���ĸ�ʽ�����뺯��
//printf����Ա�׼�������stdout���ĸ�ʽ���������

//fscanf����������������ĸ�ʽ�����뺯��
//fprintf���������������ĸ�ʽ���������

//sprintf������ʽ��������ת�����ַ���
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//	char arr[20] = { 0 };
//	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//����sscanf��arr����ַ�������ȡ����ʽ��������
struct S
{
	int n;
	float f;
	char arr[20];
};

int main()
{
	struct S s = { 100, 3.14f, "zhangsan" };
	char arr[20] = { 0 };
	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
	printf("%s\n", arr);

	struct S t = { 0 };
	sscanf(arr, "%d %f %s", &(t.n), &(t.f), t.arr);
	printf("%d %f %s\n", t.n, t.f, t.arr);

	return 0;
}