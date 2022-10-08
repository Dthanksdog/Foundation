#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[100];
	int i = 0;
	while (arr[i] != -1)
	{
		i++;
		scanf("%d", &arr[i]);
	}
	int j;
	int a, b, c, d, e;
	a = b = c = d = e = 0;
	for (j = 0; j < i; j++)
	{
		switch (arr[j])
		{
		case 1:
			a++;
			break;
		case 2:
			b++;
			break;
		case 3:
			c++;
			break;
		case 4:
			d++;
			break;
		case 5:
			e++;
			break;
		}

	}
	printf("1 candidate:%d tickets\n", a);
	printf("2 candidate:%d tickets\n", b);
	printf("3 candidate:%d tickets\n", c);
	printf("4 candidate:%d tickets\n", d);
	printf("5 candidate:%d tickets\n", e);
	return 0;
}