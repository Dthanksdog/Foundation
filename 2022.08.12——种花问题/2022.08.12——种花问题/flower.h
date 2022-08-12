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

void Init_field(char field[ROWS][COLS], int row, int col, char set);//��ʼ�����
void Display_field(char field[ROWS][COLS], int row, int col);//��ӡ���
void Plant(char field[ROWS][COLS], int row, int col, char set);//������
void Grow(char field[ROWS][COLS], char flower_field[ROWS][COLS], int row, int col);
void Reproduction(char field[ROWS][COLS], int row, int col, char set, int i, int j);//��ֳ
void Change_field(char field[ROWS][COLS], char flower_field[ROWS][COLS], int row, int col);//�����������״��
void Count_flower(char field[ROWS][COLS], int row, int col);//���㲻ͬƷ�ֵĻ��ж���