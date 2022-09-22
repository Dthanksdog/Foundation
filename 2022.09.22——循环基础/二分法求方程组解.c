#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//�ö��ַ��󷽳�2x3-4x2+3x-6=0��(-10��10)֮��ĸ���

double f(double x)
{
    return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}
int main()
{
    double a = -10;
    double b = 10;
    double c;
    do
    {
        c = (a + b) / 2;
        if (f(c) * f(a) > 0)
            a = c;
        else
            b = c;

    } while (fabs(f(c)) >= 1e-6);

    printf("%lf", c);
    return 0;

}