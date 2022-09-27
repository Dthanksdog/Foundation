#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);
    int odd = 0;
    int even = 0;
    double sum1 = 0;
    double sum2 = 0;
    while (n != 0)
    {
        if (n % 2 != 0)
        {
            odd++;
            sum1 = sum1 + n;
        }
        else
        {
            even++;
            sum2 = sum2 + n;
        }
        scanf("%d", &n);
    }
    printf("Number of even:%d;Average of even:%.2lf\n", even, sum2 / even);
    printf("Number of odd:%d;Average of odd:%.2lf", odd, sum1 / odd);

    return 0;
}