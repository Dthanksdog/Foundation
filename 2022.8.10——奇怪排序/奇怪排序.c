#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��дһ���㷨����������˳��������ֵ��������:��Сֵ��
//���ֵ���ڶ�Сֵ���ڶ���ֵ��


int main()
{
	int arr[] = { 14 , 24 , 8 , 20 , 9 , 99 , 77 , 45 , 39 , 88 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		switch(i % 2)
		{
			case 0:
				if (i + 1 < sz)
				{
					int z = i + 1;
					for (z = i + 1; z < sz; z++)
					{
						if (arr[i] < arr[z])
						{
							int tmp = arr[i];
							arr[i] = arr[z];
							arr[z] = tmp;
						}

					}
				}
				printf("%d,", arr[i]);
				break;
			case 1:
			{
				if (i + 1 < sz)
				{
					int j =i+1;
					for (j = i + 1; j < sz; j++)
					{
						if (arr[i] > arr[j])
						{
							int tmp = arr[i];
							arr[i] = arr[j];
							arr[j] = tmp;
						}
					}
				}
				printf("%d,", arr[i]);
			}
				
				
		}
			
		

	}
	return 0;
	
}