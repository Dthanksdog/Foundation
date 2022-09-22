#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入n, 求s=1+(1+20.5）+（1+20.5+30.5）+…+(1+20.5+30.5+…+n0.5)的和

int main()
{
    int n;
    scanf("%d", &n);
    float s = 0;
    int i;
    float j = 1;
    for (i = 1; i <= n; i++)
    {

        s = s + j;
        j = j + 0.5 + (i + 1) * 10;

    }
    printf("sum=%f", s);
    return 0;

}
