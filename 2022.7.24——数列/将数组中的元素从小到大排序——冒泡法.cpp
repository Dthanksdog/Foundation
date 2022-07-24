#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[] = { 88,66,45,34,89,91,69,96,16,19,8,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	for (left = 0; left <= right; left++)
//	{
//		int tmp1 = left + 1;
//		for (tmp1 = left + 1; tmp1 <= right; tmp1++)
//		{
//			if (arr[tmp1] < arr[left])
//			{
//				int tmp2 = arr[left];
//				arr[left] = arr[tmp1];
//				arr[tmp1] = tmp2;
//			}
//		}
//		printf("%d,", arr[left]);
//	}
//	return 0;
//}



//º¯Êý·¨
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[]= { 88,66,45,34,89,91,69,96,16,19,8,6 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,sz);
	int i = 0;
    for(i=0;i<sz;i++)
    {
	printf("%d ", arr[i]);
    }
	return 0;
}