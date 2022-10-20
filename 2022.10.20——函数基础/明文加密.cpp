#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void srt(char* p)
{
	if (*p >= 97 && *p <= 122)
	   *p = (*p-3-97+26) % 26 + 97;
	else
		*p = (*p-3-65+26) % 26 + 65;
}

int main()
{
	char a[80];
	gets_s(a);
	int i;
	for (i = 0; i < strlen(a); i++)
	{
		if ((a[i] >= 97 && a[i] <= 122) || (a[i] >= 65 && a[i] <= 90))
		{
			srt(&a[i]);
		}

	}
	for (i = strlen(a) - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	 }
	return 0;
}