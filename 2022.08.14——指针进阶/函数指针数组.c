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

int main()
{
	int input = 1;
	
	do
	{
		menu();
		int(*calcu[5])(int, int) = { NULL,Add,Sub,Mul,Div };
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("please choose\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("please enter two number\n");
			scanf("%d %d", &x, &y);
			ret = (calcu[input])(x, y);
			printf("ret=%d\n", ret);
		}
		else if (input == 0)
		{
			printf("exit\n");
			break;
		}
		else
		{
			printf("wrong input\n");
		}
		
	} while (input);
	return 0;
}