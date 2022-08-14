#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("****   1.Add   2.Sub   ****\n");
	printf("****   3.Mul   4.Div   ****\n");
	printf("*********  0.Exit  ********\n");
}

int Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("please enter two number\n");
	scanf("%d %d", &x, &y);
	int ret = pf(x, y);
	printf("ret=%d\n", ret);
}

int main()
{
	int input = 1;

	do
	{
		menu();
		printf("please choose\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("wrong input\n");
		}
	} while (input);
	return 0;
}