#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void left_rotate(char* arr, int k)
{
	int i = 0;
	int n = strlen(arr);
	for (i = 0; i < k; i++)
	{
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < n; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + n - 1) = tmp;
	}
}

int main()
{
	char arr[] = "ABCDEFG";
	int k = 0;
	printf("please enter the numbers of the character you want to rotate\n");
	scanf("%d", &k);
	left_rotate(arr, k);
	printf("%s", arr);
	return 0;
}