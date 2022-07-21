#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//swap1≤ªø…”√
//void swap1(int x,int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//
//}

void swap2(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	swap2(&a,&b);
	printf("a=%d,b=%d\n", a, b);

	return 0;
}