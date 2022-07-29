#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>



#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
char get_mind_count(char mine[ROWS][COLS], int x, int y);
void JudgeAround(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
int Remain(char show[ROWS][COLS], int row, int col);