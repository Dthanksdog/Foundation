#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr1[20];
	int arr2[20];
	int i=0;
	int n;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr1[i]);
	}
	arr2[0] = arr1[0];
	int k = 0;
	for (i = 1; i < n;i++)
	{
		int j;
		int a = 0;
		for (j = 0; j <= k; j++)
		{
			if (arr1[i] == arr2[j])
			{
				a = 1;
				break;	
			}
		}
		if (a == 0)
		{
			k++;
			arr2[k] = arr1[i];
			
		}

	}
	for (i = 0; i <=k; i++)
	{
		printf("%d ",arr2[i]);
	}
	

	return 0;
}