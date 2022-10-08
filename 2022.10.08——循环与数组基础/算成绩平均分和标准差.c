#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double arr[20];
	int i;
	for (i = 0; i < 20; i++)
	{
		scanf("%lf", &arr[i]);
	}
	double sum = 0;
	for (i = 0; i < 20; i++ )
	{
		sum = sum + arr[i];
	}
	double av = sum / 20.0;
	double tmp=0;
	for (i = 0; i < 20; i++)
	{
		tmp = tmp + (arr[i] - av) * (arr[i] - av);
	}
	double std = sqrt(tmp / 20);
	printf("average=%f,std=%f", av, std);
	return 0;
}