#define _CRT_SECURE_NO_WARNINGS
#include "flower.h"


void Init_field(char field[ROWS][COLS],int row,int col, char set)
{
	int i,j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			field[i][j] = set;
		}
	}
}

void Display_field(char field[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 1; i <= row; i++)
	{
		if(i==1)
		    printf("    %-2d", i);
		else
			printf("  %-2d", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%2d", i);
		for (j = 1; j <= col; j++)
		{
			if(j==1)
				printf("  %c", field[i][j]);
			else
			    printf(" %c ", field[i][j]);
			if (j <= col)
			{
				if(j==1)
					printf(" |");
				else
					printf("|");
			}
				

		}
		printf("\n");

		if (i < row)
		{
			for (j = 1; j <= col; j++)
			{
				if(j==1)
					printf("  |---");
				else
				    printf("|---");
			}
			printf("\n");
		}

	}
	printf("\n");
}

void Plant(char field[ROWS][COLS], int row, int col,char set)
{
	int i,x,y = 1;
	for (i = 1; i <= SEED_NUMBER; i++)
	{
		printf("please enter the coordinate for planting %c seed\n",set);
		printf("you have to plant %d more seeds\n", SEED_NUMBER-i+1);
		scanf("%d,%d", &x, &y);
		if (x <= row && y <= col && x > 0 && y > 0 && field[x][y] == ' ')
		{
			field[x][y] = set;
			system("cls");
			Display_field(field, ROW, COL);
		}
		else
		{
			printf("wrong input, please enter again\n");
			i--;
		}
	}
}

void Grow(char field[ROWS][COLS], char flower_field[ROWS][COLS], int row, int col)
{
	int j, i = 1;
	int x, y = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row; j++)
		{
			if (field[i][j] != ' ')
			{
				switch (field[i][j])
				{
				case 'A':
					Reproduction(flower_field, row, col, 'A',i,j);
					break;
				case 'B':
					Reproduction(flower_field, row, col, 'B', i, j);
					break;
				case 'C':					
					Reproduction(flower_field, row, col, 'C', i, j);
					break;
				}
			}
			
		}
	}
}

void Reproduction(char flower_field[ROWS][COLS], int row, int col, char set, int i, int j)
{
	int x, y = 0;//不同品种的花繁殖方式不同
	if (set == 'A')
	{
		for (x = i - 1; x <= i + 1; x++)
		{
			for (y = j - 1; y <= j + 1; y++)
			{
				if (flower_field[x][y] == ' ' && x > 0 && x <= row && y > 0 && y <= col)
				{
					flower_field[x][y] = 'A';
				}
				else if (x > 0 && x <= row && y > 0 && y <= col)
				{
					if (rand() % 2 == 0)
					{
						flower_field[x][y] = 'A';
					}
				}
				
			}
		}
		flower_field[i][j] = ' ';
	}
	
	else if (set == 'B')
	{
		for (x = i - 2; x <= i + 2; x += 2)
		{
			for (y = j - 2; y <= j + 2; y += 2)
			{
				if (flower_field[x][y] == ' ' && x > 0 && x <= row && y > 0 && y <= col)
				{
					flower_field[x][y] = 'B';
				}
				else if (x > 0 && x <= row && y > 0 && y <= col)
				{
					if (rand() % 2 == 0)
					{
						flower_field[x][y] = 'B';
					}
				}
			}
		}
		flower_field[i][j] = ' ';
	}

	else
	{

		for (x = i - 2, y = j; x <= i + 2; x += 1)
		{
			if (flower_field[x][y] == ' ' && x > 0 && x <= row)
			{
				flower_field[x][y] = 'C';
			}
			else if (x > 0 && x <= row)
			{
				if (rand() % 2 == 0)
				{
					flower_field[x][y] = 'C';
				}
			}
		}
		for (y = j - 2, x = i; y <= j + 2; y += 1)
		{
			if (flower_field[x][y] == ' ' && y > 0 && y <= col)
			{
				flower_field[x][y] = 'C';
			}
			else if (y > 0 && y <= col)
			{
				if (rand() % 2 == 0)
				{
					flower_field[x][y] = 'C';
				}
			}
		}

		flower_field[i][j] = ' ';
	}
	    
}

void Change_field(char field[ROWS][COLS], char flower_field[ROWS][COLS], int row, int col)
{
	int i, j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			field[i][j] = flower_field[i][j];
		}
	}
}

void Count_flower(char field[ROWS][COLS], int row, int col)
{
	int i, j= 0;
	int a = 0;
	int b = 0;
	int c = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (field[i][j] == 'A')
				a++;
			if (field[i][j] == 'B')
				b++;
			if (field[i][j] == 'C')
				c++;
		}
	}
	printf("There are %d A flowers, %d B flowers,and %d C flowers\n", a, b, c);
}