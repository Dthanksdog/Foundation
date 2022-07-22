#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int n)
{
	if (n > 9)
	{   
		print(n/10);
	
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 0;
	printf("please import a number\n");
	scanf("%d", &num);
	print(num);
	return 0;
}