#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int If_leap(int y)//测试是否为闰年
{
	if (y % 4 == 0 && y % 100 != 0)
		return 1;
	else
		return 0;
}

int If_rea(int y, int m, int d)//测试输入日期是否合理
{
	int leap = If_leap(y);
	int arr[12] = { 31,28 + leap,31,30,31,30,31,31,30,31,30,31 };
	if (y > 1900 && m > 0 && m <= 12)
	{
		if (d > 0 && d <= arr[m - 1])
			return 0;
		else
			return 1;

	}
	else
		return 1;
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
again:
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
	if (by > y || (by == y && bm > m) || (by == y && bm == m && bd < d))
	{
		printf("wrong input,please enter again\n");
		goto again;
	}
		

	int i = 0;
	int ret = 0;
	int can = 0;
	leap = If_leap(y);
	int arr[] = { 31,28 + leap,31,30,31,30,31,31,30,31,30,31 };
	
	if (bm > m)
	{
		int diff = 0;
		for (i=m; i < bm; i++)
		{
			diff += arr[i-1];
		}
		
		ret = diff + bd - d;
		can = y - by;
		printf("Your birthday is in %d days\n", ret);

	}
	else if (bm < m || (bm == m && bd < d))
	{
		int diff1 = 0;
		int diff2 = 0;
		for (i = m; i <= 12; i++)
		{
			diff1 += arr[i - 1]; ;
		}
		for (i = 1; i < bm; i++)
		{

			diff2 += arr[i - 1];
		}
		ret = diff1 + diff2 - d+ bd;
		can = y - by + 1;
		
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
