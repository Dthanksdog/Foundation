#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("********************************\n");
	printf("*****   1.play    2.exit   *****\n");
	printf("********************************\n");

}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("guess a number\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("your guess is bigger\n");
		}
		else if (guess < ret)
		{
			printf("your guess is smaller\n");
		}
		else if (guess== ret)
		{
			printf("you guessed it!\n");
			break;
		}
		
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please choose\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("exit the game\n");
			break;
		default:
			printf("wrong choice,please choice again");
			break;
		}

	} while (input==1);
	return 0;
}