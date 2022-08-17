#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py-1;
	while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if(arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;

}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int x = 3;
	int y = 3;
	int k = 0;
	printf("please enter a number\n");
	scanf("%d", &k);
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("it's found\n");
	}
	else
	{
		printf("it doesn't exist \n");
	}
	return 0;
}