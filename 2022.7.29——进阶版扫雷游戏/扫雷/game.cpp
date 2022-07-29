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
	int win = 0;
	while (win!=EASY_COUNT)
	{
		printf("please enter the coordinate of mine clearance\n");
		scanf("%d %d", &x, &y);
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
				if (show[x][y] == '0')
				{
					show[x][y] = ' ';
					JudgeAround(mine, show, x, y);
				}
				system("cls");
				DisplayBoard(show, ROW, COL);
			}
				

				
		}
		else
			printf("wrong input,please enter again\n");
		win = Remain(show, ROW, COL);
	}
	if (win ==EASY_COUNT)
	{
		DisplayBoard(mine, ROW, COL);
		printf("congratulation,you succeeded in demining!\n");
	}
		

}


char get_mind_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int sum = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			sum += mine[i][j];
		}
	}
	return sum - 9 * '0';
	
}

void JudgeAround(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (show[i][j] != ' ' && i != 0 && i != ROWS - 1 && j != 0 && j != COLS - 1)
			{
				int count = get_mind_count(mine, i, j);
				show[i][j] = count + '0';
				if (show[i][j] == '0')
				{
					show[i][j] = ' ';
					JudgeAround(mine, show, i, j);
				}
			}
		}
	}
}


int Remain(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	return count;
}
