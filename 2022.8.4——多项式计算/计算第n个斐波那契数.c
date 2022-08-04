#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int ret = 0;
//	int n = 0;
//	printf("please enter a number\n");
//	again:
//	scanf("%d", &n);
//	if (n>0&&n<=2)
//	{
//		ret = 1;
//	}
//	else if (n <= 0)
//	{
//		printf("wrong input, please enter again\n");
//		goto again;
//	}
//
//	else
//	{
//		int i = 0;
//		int ret1 = 1;
//		int ret2 = 1;
//		for (i = 0; i <= n - 3; i++)
//		{
//			ret = ret1 + ret2;
//			ret1 = ret2;
//			ret2 = ret;
//		}
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	printf("please enter a number\n");
	again:
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("wrong input,please enter again\n");
		goto again;
	}
		
	int ret=Fib(n);
	printf("ret=%d\n", ret);
}

