#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int If_leap(int y)
{
	if (y % 4 == 0 && y % 100 != 0)
		return 1;
	else
		return 0;
}

int If_rea(int y, int m, int d)
{
	int leap = If_leap(y);
	if (y > 1900 && m > 0 && m <= 12)
	{
		if (m == 1 || 3 || 5 || 7 || 8 || 10 || 12)
		{
			if (d > 0 && d <= 31)
				return 0;
			else
				return 1;
		}
		else if (m == 4 || 6 || 9 || 11)
		{
			if (d > 0 && d <= 30)
				return 0;
			else
				return 1;
		}
		else if (m == 2 && leap == 1)
		{
			if (d > 0 && d <= 28)
				return 0;
			else
				return 1;
		}
		else if (m == 2 && leap == 0)
		{
			if (d > 0 && d <= 29)
				return 0;
			else
				return 1;
		}

	}
	else return 1;
}


int Days(int arr, int leap)
{
	if (arr == 1 || 3 || 5 || 7 || 8 || 10 || 12)
		return 31;
	else if (arr == 4 || 6 || 9 || 11)
		return 30;
	else if (leap == 1 && arr == 2)
		return 28;
	else
		return 29;

}


int main()
{
	int by = 0;
	int bm = 0;
	int bd = 0;
	int y = 0;
	int m = 0;
	int d = 0;
	int leap = 0;
	printf("please enter your birthday---(day)/(month)/(year)\n");
	int rea = 1;
	while (1)
	{
		scanf("%d.%d.%d", &by, &bm, &bd);
		rea = If_rea(by, bm, bd);
		if (rea == 1)
			printf("wrong input,please enter again\n");
		else
			break;
	}
	printf("please enter today'date---(day)/(month)/(year)\n");
	while (1)
	{
		scanf("%d.%d.%d", &y, &m, &d);
		rea = If_rea(y, m, d);
		if (rea == 1)
			printf("wrong input,please enter again\n");
		else
			break;
	}





	int arr[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int ret = 0;
	int can = 0;
	leap = If_leap(y);
	if (bm > m)
	{
		int diff = 0;
		int j = 0;
		for (i = m; i < bm; i++)
		{
			j = 0;
			j = Days(arr[i - 1], leap);
			diff += j;
		}
		ret = diff - bd + d;
		printf("Your birthday is in %d days\n", ret);
		can = y - by;
	}
	else if (bm < m || (bm == m && bd < d))
	{
		int diff1 = 0;
		int diff2 = 0;
		int j = 0;
		for (i = m; i <= 12; i++)
		{
			j = 0;
			j = Days(arr[i - 1], leap);
			diff1 += j;
		}
		for (i = 1; i < bm; i++)
		{
			int j = 0;
			j = Days(arr[i - 1], leap);
			diff2 += j;
		}
		can = y - by+1;
		ret = diff1 + diff2 - bd  + d;
		printf("Your birthday is in %d days\n", ret);
	}
	else
	{
		if (bd == d)
			printf("Today is your birthday,happy birthday to you!!\n");
		else
		{
			ret = bd - d;
			printf("Your birthday is in %d days\n", ret);
		}
		can = y - by;
	}
	
	printf("You can put in %d candles\n", can);

	return 0;
}