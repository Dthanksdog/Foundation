#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()

{

    int n = 0;
    int* p;
    printf("Input n:");
    scanf("%d", &n);
    p = (int*)malloc(sizeof(int) * n * n);
    
    int i;
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &p[i*n+j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j <n; j++)
        {
            printf("%4d", p[i * n + j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j <=i; j++)
        {
            printf("%4d", p[i * n + j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (j < i)
                printf("    ");
            else
                printf("%4d", p[i * n + j]);
        }
        printf("\n");
    }
    free (p);
    return 0;

}