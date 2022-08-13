#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		int sum = 0;
		tmp = i;
		while (tmp)
		{
			sum = sum+pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}