#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int m)
{
	int i = 0;
	printf("odd numbers of bits:");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("even numbers of bits:");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}

int main()
{
	unsigned int m;
	scanf("%d", &m);
	print(m);
	return 0;
}