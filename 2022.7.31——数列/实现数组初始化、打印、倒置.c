#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Init(int arr[])
{
	int str[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = str[i];
	}
}

void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while(right>left)
	{
		int tmp = 0;
		tmp=arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		right--;
		left++;

	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*Init(arr);*/
	Print(arr,sz);
	Reverse(arr,sz);
	Print(arr,sz);
	return 0;
}