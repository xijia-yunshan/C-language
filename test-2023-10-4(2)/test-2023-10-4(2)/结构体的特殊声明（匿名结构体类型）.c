#define _CRT_SECURE_NO_WARNINGS

struct
{
	char a;
	int c;
	float d;
}s = { 0 };//�����ṹ��ֻ����һ�Σ�����ֻ��������洴������

struct
{
	char a;
	int c;
	float d;
}*ps;

int main()
{
	ps = &s;//err - ��Ȼ�ṹ���͵ĳ�Աһģһ�������Ǳ�������Ȼ��Ϊ = �����ǲ�ͬ��ָ������
	return 0;
}