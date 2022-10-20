#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int isleap(int n)
{
    if (n % 4 == 0 && n % 100 != 0)
        return 1;
    else
        return 0;
}
int main()
{
    int y, m, d;
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    printf("Enter year moth day:");
    scanf("%d%d%d", &y, &m, &d);
    int i;
    int day = 0;
    if (isleap(y) == 1)
        arr[1] = 29;
    for (i = 0; i < m - 1; i++)
    {
        day += arr[i];
    }
    day += d;
    printf("day of year is %d", day);
    return 0;

}
