#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;
	int s1 = 0;
	int s2 = 0;
	int tmp1 = 0;
	int tmp2 = 0;
	int diff = 0;
	int h3 = 0;
	int m3 = 0;
	int s3 = 0;
	printf("please type a time ( )h( )min( )s\n");
again1:
	scanf("%d %d %d", &h1, &m1, &s1);
	if (h1 >= 24 || h1 < 0 || m1 >= 60 || m1 <0|| s1 >= 60 || s1 < 0)
	{
		printf("wrong input,please enter again\n");
		goto again1;
	}
	printf("please type another time ( )h( )min( )s\n");
again2:
	scanf("%d %d %d", &h2, &m2, &s2);
	if (h2 >= 24 || h2 < 0 || m2 >= 60 || m2 < 0 || s2 >= 60 || s2 < 0)
	{
		printf("wrong input,please enter again\n");
		goto again2;
	}

	tmp1 = h1 * 3600 + m1 * 60 + s1;
	tmp2 = h2 * 3600 + m2 * 60 + s2;
	if (tmp1 > tmp2)
		diff = tmp1 - tmp2;
	else
		diff = tmp2 - tmp1;
	h3 = diff / 3600;
	m3 = (diff % 3600) / 60;
	s3 = diff % 60;
	printf("the duration is %d h %d min %d s\n", h3, m3, s3);

	return 0;
}
