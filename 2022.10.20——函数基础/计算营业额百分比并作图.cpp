#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int arr[])
{
	int i;
	for (i = 0; i < 12; i++)
	{
		printf("%2d(%2d%%) ", i + 1, arr[i]);
		int j;
		for (j = 0; j < arr[i]; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

int main()
{
	float a[12];
	int b[12];
	int i;
	for (i = 0; i < 12; i++)
	{
		scanf("%f",&a[i]);
	}
	double sum = 0;
	for (i = 0; i < 12; i++)
	{
		sum += a[i];
	}
	for (i = 0; i < 12; i++)
	{
		b[i]=(int)(a[i]/sum*100+0.5);
	}
	print(b);
	return 0;
}