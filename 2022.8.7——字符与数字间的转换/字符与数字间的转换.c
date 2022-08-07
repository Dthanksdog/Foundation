#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch1 = 0;
	char ch2 = 0;
	char ch3 = 0;
	printf("please enter three number character()-()-()\n");
	while (1)
	{
	    scanf("%c-%c-%c", &ch1, &ch2, &ch3);
		if (isdigit(ch1) && isdigit(ch2) && isdigit(ch3))
		{
			break;
		}
		else
		{
			printf("wrong input,please enter again\n");
		}
		getchar();//缓冲区留有一个\0,getchar每次只读取一个字符，需要将\0读取掉，以免被scanf读取跳过一次；
	}

	int a = ch1 - '0';
	int b = ch2 - '0';
	int c = ch3 - '0';

	printf("ret=%d\n", a * 100 + b * 10 + c);
	return 0;
}