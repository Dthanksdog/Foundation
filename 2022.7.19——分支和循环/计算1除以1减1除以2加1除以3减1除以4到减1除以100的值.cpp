#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	double i = 0;
//	double ret1 = 0;
//	double ret2 = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		ret1 = ret1 + 1/i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		ret2 = ret2- 1/i;
//	}
//	sum = ret1 + ret2;
//	printf("sum=%lf\n", sum);
//	return 0;
//}


int main()
{
	double i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum+1 / i * flag;
		flag = -flag;
	}
	printf("sum=%lf\n", sum);
	return 0;
}