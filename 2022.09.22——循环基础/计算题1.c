#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Çó1+1/(1+2)+1/(1+2+3)+...+1/(1+2+...+50);

int main()
{
    double sum = 0;
    double i;
    double j = 0;
    for (i = 1; i <= 50; i++)
    {
        j = j + i;
        sum = sum + 1.0 / j;

    }
    printf("sum=%f", sum);
    return 0;

}
