#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

void reverse(char* left, char* right)
{
	assert(right);
	assert(left);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_rotate(char* arr, int k)
{
	int n = strlen(arr);
	if (k > n)
	{
		k = k % n;
	}
	reverse(arr, arr + k-1);//×óµ¹Ğò
	reverse(arr+k, arr + n-1);//ÓÒµ¹Ğò
	reverse(arr, arr + n-1);//ÕûÌåµ¹Ğò
}

int main()
{
	char arr[] = "ABCDEFG";
	int k = 0;
	printf("please enter the numbers of the character you want to rotate\n");
	scanf("%d", &k);
	left_rotate(arr, k);
	printf("%s", arr);
	return 0;
}