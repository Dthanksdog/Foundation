#define _CRT_SECURE_NO_WARNINGS
#include "flower.h"

int main()
{
	srand((unsigned int)time(NULL));
	char field[ROWS][COLS] = { 0 };//¾ÉÌïµØ
	char flower_field[ROWS][COLS] = { 0 };//ÐÂÌïµØ
	Init_field(field, ROWS, COLS, ' ');
	Init_field(flower_field, ROWS, COLS, ' ');
	Display_field(field, ROW, COL);
	Plant(field, ROW, COL, 'A');
	Plant(field, ROW, COL, 'B');
	Plant(field, ROW, COL, 'C');
	
	int i = 0;
	for (i = 0; i < YEAR; i++)
	{
		Grow(field, flower_field, ROW, COL);
	    Change_field(field, flower_field, ROW, COL);
	}
	Display_field(flower_field, ROW, COL);
	Count_flower(field, ROW, COL);
	return 0;
}