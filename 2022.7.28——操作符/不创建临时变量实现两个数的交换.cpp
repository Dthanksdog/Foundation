#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������ʱ����ʵ���������Ľ���

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a -b;
//	printf("a=%d,b=%d\n", a, b);
//}

int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n", a, b);
}