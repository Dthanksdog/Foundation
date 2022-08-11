#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int if_palindrome(char* arr)
{
	int i = 0;
	int j = strlen(arr)-1;
	int tmp = 0;
	for (; i <= j;i++,j-- )
	{
		while (*(arr + i) == ' ')
		{
			i++;
		}
		while (*(arr + j) == ' ')
		{
			j--;
		}
		if (*(arr + i) != *(arr + j))
		{
			tmp = 1;
			break;
		}
		
	}
	if (tmp==1)
		return 0;
	else
		return 1;
}

int main()
{
	char arr[10000];
	printf("please enter a string\n");
	gets(arr);
	int tmp=if_palindrome(arr);
	if (tmp == 0)
		printf("不是回文\n");
	else
		printf("是回文\n");

	return 0;
}