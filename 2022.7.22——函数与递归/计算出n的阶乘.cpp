#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int factorial(int n)
{
	if (n > 1)
	{
		return n* factorial(n-1);
	}
	else 
		return 1;
}
int main()
{
	int num = 0;
	printf("import a number\n");
	scanf("%d", &num);
	int sum = factorial(num);
	printf("%d\n", sum);
	
	return 0;
}