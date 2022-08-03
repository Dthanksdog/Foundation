#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int n = 26;
	int m = 4;
	for (n = 26; n > 0;)
	{
		int p1 = 0;
		int p2 = 0;
		printf("turn to player 1 to take maches\n");
		while (1)
		{
			scanf("%d", &p1);
			if (p1 <= m && p1>0 && p1 <= n)
				break;
			else
				printf("wrong input,please enter again\n");
		}
		n -= p1;
		if (n == 0)
		{
			printf("The player 1 wins!\n");
			break;
		}
		printf("There are %d maches left\n", n);

		printf("turn to player 2 to take maches\n");
		while (1)
		{
			scanf("%d", &p2);
			if (p2 <= m && p2>0&&p2<=n)
				break;
			else
				printf("wrong input,please enter again\n");
		}
		n -= p2;
		if (n == 0)
		{
			printf("The player 2 wins!\n");
			break;
		}
		printf("There are %d maches left\n", n);
	}
}