#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int count = 0;
	printf("please type two numbers\n");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
		
	}
	
	for (i = a; i <=b; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}

		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;

		}

	}

	printf("\ncount=%d\n", count);
	return 0;
}
