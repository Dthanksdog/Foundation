#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define A 12

int main()
{
	int arr[A][A] = { 0 };
	int i, j = 0;
	for (i = 0; i < A; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < A; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}