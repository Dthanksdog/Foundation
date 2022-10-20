#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(char *arr)
{
	int i;
	for (i = 0; i < 6; i++)
	{
		if (arr[i] == 'A')
		{
			printf("%d", i + 1);
			return 0;
		}
	}
	printf("%d",0);
	return 0;
}
int main()
{
	char a[7], b[7], c[7], d[7], e[7], f[7];
	gets_s(a);
	gets_s(b);
	gets_s(c);
	gets_s(d);
	gets_s(e);
	gets_s(f);
	
	check(a);
	check(b);
	check(c);
	check(d);
	check(e);
	check(f);
	


	return 0;
}