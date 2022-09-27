#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main()

{

    int m, n;

    printf("Input m,n:");

again:

    scanf("%d%d", &m, &n);
    if (m < 1 || n < 1)
    {
        printf("Input again!\n");
        goto again;
    }
    int i = m;
    for (i = m; i > 0; i++)
    {
        if (i % m == 0 && i % n == 0)
            break;
    }
    int tmp1 = m;
    int tmp2 = n;
    int tmp3 = 0;
    if (tmp1 > tmp2)
    {
        int a;
        a = tmp1;
        tmp1 = tmp2;
        tmp2 = a;
    }
    while (tmp1 % tmp2)

    {
        tmp3 = tmp1 % tmp2;
        tmp1 = tmp2;
        tmp2 = tmp3;
    }
    printf("%d和%d的最大公约数:%d\n", m, n, tmp3);
    printf("%d和%d的最小公倍数:%d\n", m, n, i);
    return 0;
}