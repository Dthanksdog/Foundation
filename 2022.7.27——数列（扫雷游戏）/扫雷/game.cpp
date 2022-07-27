#define _CRT_SECURE_NO_WARNINGS


#include "game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 1; i <= row; i++)
	{
		printf("  %d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j <= col)
				printf("|");

		}
		printf("\n");

		if (i < row)
		{
			for (j = 1; j <= col; j++)
			{
				printf("|---");
			}
			printf("\n");
		}

	}
	printf("\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
		
	}
	
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("please enter the coordinate of mine clearance\n");
	scanf("%d,%d", &x, &y);
	while (ret< row * col - EASY_COUNT)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == 1)
			{
				printf("I'm sorry you got blown up\n");
				break;
			}
			else
			{
				int count=get_mind_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				ret++;
			}
				

				
		}
		else
			printf("wrong input,please enter again\n");
	}
	if (ret == row * col - EASY_COUNT)
	{
		DisplayBoard(mine, ROW, COL);
		printf("congratulation,you succeeded in demining\n");
	}
		

}


char get_mind_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x-1][y-1] + mine[x+1][y+1] + mine[x][y-1] + 
		mine[x][y+1] + mine[x-1][y] + mine[x+1][y] +
		mine[x-1][y+1] + mine[x+1][y-1] - 8 * '0';
}