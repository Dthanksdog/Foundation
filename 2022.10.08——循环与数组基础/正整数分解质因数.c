#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    printf("Input an integer:");
    int n;
    scanf("%d", &n);
    printf("%d=", n);
    int i;
    for (i = 2; i <= n; i++)
    {
        while (n != i)
        {
            if (n % i == 0)
            {
                printf("%d*", i);
                n = n / i;
            }
            else
                break;
        }

    }
    printf("%d", n);

    return 0;
}

