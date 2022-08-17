#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int if_left_rotate(char* str1, char* str2)
{
	int n = strlen(str1)-1;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		int tmp = *str1;
		for (j = 0; j < n; j++)
		{
			*(str1 + j) = *(str1 + j +1);
		}
		*(str1 + n) = tmp;
		if (strcmp(str1, str2) == 0)
		{
			return 1;
			break;
		}
			
	}
	return 0;
}


int main()
{
	char arr1[] = "ABCDEFGH";
	char arr2[] = "CDEFGHAB";
	int ret = if_left_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
		printf("no\n");

}