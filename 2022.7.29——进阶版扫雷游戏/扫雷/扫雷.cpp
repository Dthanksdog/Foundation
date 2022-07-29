#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("******    1. play      *******\n");
	printf("******    0. exit      *******\n");
	printf("******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show,ROW, COL);
}



int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("please choose");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			printf("exit the game\n");
			break;
		default:
			printf("wrong choice,please choose again£¡\n");
			break;
		}
	} while (input);
	return 0;
}
