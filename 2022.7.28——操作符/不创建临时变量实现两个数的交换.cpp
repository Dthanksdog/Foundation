#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//不创建临时变量实现两个数的交换

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