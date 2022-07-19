#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { -1,-2,-6,-8,-10,1,5,6,9,16,22};
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i <= sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}