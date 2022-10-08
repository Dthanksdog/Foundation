#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 1000; i++)
    {
        int j;
        int sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%6d", i);
        }
    }

    return 0;
}

