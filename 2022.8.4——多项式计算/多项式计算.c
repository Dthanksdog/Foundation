#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//3n^2 + 1≤A, 求n 的最小值整数

//int main()
//{
//	int n = 0;
//	int A = 0;
//	printf("please enter a number\n");
//	scanf("%d", &A);
//	while (3 * n * n + 1 < A)
//	{
//		n++;
//	}
//	printf("n=%d\n", n);
//}

//In(1 + x) ≈ x - x ^ 2 / 2 + x ^ 3 / 3+ x ^ 4 / 4……,估计In(1 + x)的值

//int main()
//{
//	double x = 0;
//	int N = 10000;
//	double tmp1 = 1;
//    double ret = 0;
//	int i = 1;
//	printf("please enter a number\n");
//	scanf("%lf", &x);
//	for (i = 1; i <= N; i++)
//	{
//		double tmp2 = 1;
//		int j = 0;
//		int a = 1;
//		for (j = 0; j < i; j++)
//		{
//			tmp2 = tmp2 * x;
//		}
//		if (i == 2)
//		{
//			a = -a;
//		}
//		tmp1 = a * tmp2 / i;
//		ret = ret + tmp1;
//	}
//	printf("In(x+1)≈%lf\n", ret);
//	
//	return 0;
//}


//计算n!/(p!(n-p)!)

//int Fac(m)
//{
//	int i = 0;
//	int tmp = 1;
//	for (i = 1; i <= m; i++)
//	{
//		tmp = tmp * i;
//	}
//	return tmp;
//}

int Fac(int m)
{
	if (m <= 1)
		return 1;
	else
		return m* Fac(m - 1);
	
}


int main()
{
	int n = 0;
	int p = 0;
	printf("please enter two numbers\n");
	again:
	scanf("%d%d", &n, &p);
	if (p >= 0 && n > p)
	{
		int a = Fac(n);
		int b = Fac(p);
		int c = Fac(n - p);
		int ret = a / (b * c);
      printf("ret=%d",ret);
	}
	else
	{
		printf("wrong input,please enter again\n");
		goto again;
	}

	return 0;
}

