#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(int arr[])
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int tmp[5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		tmp[i] = arr[i];
		arr[i] = arr2[i];
		arr2[i] = tmp[i];
		
	}
	Print(arr);
	Print(arr2);

}
