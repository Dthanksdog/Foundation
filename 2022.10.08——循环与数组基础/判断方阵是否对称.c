#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5][5];
	int i;
	for (i = 0; i < 5; i++)
	{
		int j;
		{
			for (j = 0; j < 5; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		int j;
		{
			for (j = 0; j < 5; j++)
			{
				if (arr[i][j] != arr[j][i])
				{
					printf("no");
					goto finish;
				}
					
			}
		}
	}
	printf("yes");
finish:
	return 0;
}