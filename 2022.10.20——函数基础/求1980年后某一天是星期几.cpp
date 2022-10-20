#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isleap(int n)
{
    if (n % 400 == 0)
        return 1;
    else if (n % 4 == 0 && n % 100 != 0)
        return 1;
    else
        return 0;
}

int main()
{
    int y, m, d;
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    
    scanf("%d-%d-%d", &y, &m, &d);
    int i;
    int day = 0;
    if (isleap(y) == 1)
        arr[1] = 29;
    for (i = 0; i < m - 1; i++)
    {
        day += arr[i];
    }
    day += d;
    for (i = 1980; i < y; i++)
    {
        day = day + isleap(i) + 365;
    }
    int week = day % 7;
    switch (week)
    { 
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    
    }
    return 0;

}
