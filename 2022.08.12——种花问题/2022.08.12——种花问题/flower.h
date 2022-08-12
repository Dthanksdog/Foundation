#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 15
#define COL 15
#define ROWS ROW+1
#define COLS COL+1
#define SEED_NUMBER 1
#define YEAR 1

void Init_field(char field[ROWS][COLS], int row, int col, char set);//初始化田地
void Display_field(char field[ROWS][COLS], int row, int col);//打印田地
void Plant(char field[ROWS][COLS], int row, int col, char set);//种种子
void Grow(char field[ROWS][COLS], char flower_field[ROWS][COLS], int row, int col);
void Reproduction(char field[ROWS][COLS], int row, int col, char set, int i, int j);//繁殖
void Change_field(char field[ROWS][COLS], char flower_field[ROWS][COLS], int row, int col);//更新田地生长状况
void Count_flower(char field[ROWS][COLS], int row, int col);//计算不同品种的花有多少