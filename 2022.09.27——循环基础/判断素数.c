#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main()

{
    int i, j;
    scanf("%d", &i);
    for (j = 2; j <= sqrt((double)i); j++)
    {
        if (i % j == 0)
        {
            break;
        }
    }
    if (j > sqrt((double)i))
        printf("YES");
    else
        printf("NO");
    return 0;

}