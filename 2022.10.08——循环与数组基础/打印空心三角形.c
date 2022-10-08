#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()

{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 1; i < n; i++)
    {
        printf("* ");

    }
    printf("*");
    printf("\n");
    for (i = 0; i < n - 1; i++)
    {
        int j;
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        printf("*");
        int k;
        for (k = 0; k < n - 2 * i; k++)
        {
            printf(" ");
        }
        if (k == 0)
            break;
        printf("*");
        printf("\n");
    }
    printf("\n");

    return 0;
}

