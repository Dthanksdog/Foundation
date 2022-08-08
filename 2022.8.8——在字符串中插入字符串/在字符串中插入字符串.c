#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n, t1, t2, i;
	char str1[100], str2[100], str3[200];
	printf("please enter a string\n");
	gets(str1);
	printf("please enter a string which you want to insert\n");
	gets(str2);
	printf("you want to insert the string after the n character\n");
	scanf("%d", &n);
	t1 = strlen(str1);
	t2 = strlen(str2);
	for (i = 0; i < t1 + t2; i++)
	{
		if (i < n)
		str3[i] = str1[i];

		else if (i >= n && i < n + t2)
		str3[i] = str2[i - n];
		
		else
		str3[i] = str1[i - t2];
		
	}
	str3[i] = '\0';
	printf("%s\n", str3);
}
