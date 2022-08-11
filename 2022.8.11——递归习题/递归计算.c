#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b)
{
	int ret = 0;
	if (a != 0 && b != 0)
	{
		return gcd(b, a % b);
	}
	else
		return a;
	

}

int main()
{
	int a, b = 0;
	printf("please enter two numbers\n");
	scanf("%d%d", &a, &b);
	int ret=gcd(a, b);
	printf("ret=%d\n", ret);
	return 0;
}