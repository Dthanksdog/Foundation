#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)

    {
        int x, y;
        for (x = 0; x < n - i; x++)
        {
            printf(" ");
        }
        for (y = 0; y < 2 * i - 1; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        int x, y;
        for (x = 0; x < i; x++)
        {
            printf(" ");
        }
        for (y = 0; y < 2 * (n - i) - 1; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

