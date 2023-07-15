#define _CRT_SECURE_NO_WARNINGS


int my_strlen(char* arr)
{
	int counter = 0;
	while (*arr != '\0')
	{
		counter++;
		arr++;
	}
	return counter;
}

void reverse(char arr[], int left, int right)
{
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	if (left < right)
	{
		reverse(arr, left + 1, right - 1);

	}
}
int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);
	int left = 0;
	int right = ret - 1;
	reverse(arr, left, right);
	printf("%s\n", arr);
	return 0;
}