#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//一般循环法
//double pow(int n, int k)
//{
//	int i = 0;
//	double sum = 1;
//	if (k == 0)
//		return 1;
//	else if (k < 0)
//	{
//		for (i = 0; i < -k; i++)
//		{
//			sum = sum * n;
//		}
//		return 1.0/sum;
//	}
//	else
//	{
//		for (i = 0; i < k; i++)
//		{
//			sum = sum * n;
//		}
//		return sum;
//	}
//}


//递归法
double pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k < 0)
		return (1.0 / (pow(n, -k)));
	else
		return n * pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret=pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}