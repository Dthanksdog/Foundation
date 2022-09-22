#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;

    for (i = 1; i <= n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            printf("%4d", i + i * j);
        }
        printf("\n");

    }
    return 0;

}
