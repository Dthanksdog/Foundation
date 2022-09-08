#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//
//    printf("****\n");
//    printf("***\n");
//    printf("**\n");
//    printf("*\n");
//    return 0;
//}

//int main()
//{
//    double x, y;
//    scanf("%lf%lf", &x, &y);
//    printf("%.2f %.2f\n", x * y, x / y);
//
//    return 0;
//}

//int main()
//{
//    int num;
//    scanf("%d", &num);
//    int ret = 1;
//    ret = num % 10 * 100 + (num / 10) % 10 * 10 + num / 100;
//    printf("%d\n", ret);
//}

//int main()
//{
//    char al;
//    scanf("%c", &al);
//    printf("%c\n", al + 32);
//
//}

//int main()
//{
//    char al;
//    printf("Input a lowercase letter:");
//    al = getchar();
//    printf("A capital letter:");
//    putchar(al - 32);
//    return 0;
//
//}

int main()
{
    char ch;
    int x;
    int y;
    float ret1;
    int ret2;
    scanf("%d%c%d", &x, &ch, &y);

    if (ch == '+')
    {
        ret2 = x + y;
        printf("%d%c%d=%d", x, ch, y, ret2);
    }
    else if (ch == '-')
    {

        ret2 = x - y;
        printf("%d%c%d=%d", x, ch, y, ret2);
    }
    else if (ch == '*')
    {

        ret2 = x * y;
        printf("%d%c%d=%d", x, ch, y, ret2);
    }
    else
    {
        if (y == 0)
        {
            printf("data error");
        }
        else
        {
            ret1 = (float)x / (float)y;
            printf("%d%c%d=%.1f", x, ch, y, ret1);
        }

    }

    return 0;

}

