#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1&&arr2);
	while (*arr1 == *arr2)
	{
		if (*arr1 =='\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	return *arr1 - *arr2;
}

int main()
{
	char p[] = "abcdefg";
	char q[] = "abcdefg";
	int ret = my_strcmp(p, q);
	if (ret == 0)
		printf("p=q\n");
	else if (ret > 0)
		printf("p>q\n");
	else
		printf("p<q");
	return 0;
}