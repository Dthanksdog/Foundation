#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int  main()
{
    float h, m, d;
    scanf("%f:%f", &h, &m);
    if (h > 12)
    {
        h = h - 12;
    }

    h = h * 30 + m * 0.5;
    m = m * 6;
    d = fabs(h - m);
    if (d > 180)
    {
        d = 360 - d;
    }
    printf("%.3f", d);
    return 0;
}

