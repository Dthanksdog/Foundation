#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || b + c <= a || a + c <= b || b + a <= c)
    {
        printf("not triangle\n");
        return 0;

    }
    if (a == b || b == c || c == a)
    {
        if (a == b && b == c)
        {
            printf("equilateral triangle\n");
        }
        else
            printf("isosceles triangle\n");
    }
    else if (a * a == b * b + c * c || c * c == a * a + b * b || b * b == a * a + c * c)
        //else if(pow(a,2)==pow(b,2)+pow(c,2)||pow(c,2)==pow(a,2)+pow(b,2)||pow(b,2)==pow(a,2)+pow(c,2))
    {
        printf("right triangle\n");
    }
    else
        printf("arbitrary triangle\n");
    return 0;
}

