#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu()
{
	printf("*****************************\n");
	printf("*****  1.play   2.exit  *****\n");
	printf("*****************************\n");
}


void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		IsWin(board, ROW, COL);
		ret= IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		IsWin(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("player wins\n");
	if (ret == '#')
		printf("computer wins\n");
	if (ret == 'Q')
		printf("the game is a draw\n");
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
			printf("exited the game\n");
			break;
		default:
			printf("wrong choice,please choose again\n");
			break;
		}
	} while (input != 2);

	return 0;
}