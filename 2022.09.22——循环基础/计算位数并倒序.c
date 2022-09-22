#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int x = 0;
    printf("Please input the number:");
    scanf("%d", &n);
    int i = n;
    int j = 1;
    do
    {
        j++;
        i /= 10;
    } while (i / 10 != 0);
    int y = j;
    do
    {
        x = x + (n % 10) * pow((double)10, j - 1);
        n /= 10;
        j--;
    } while (j >= 0);

    printf("Inversed number is: %d\n", x);
    printf("It has %d bits.\n", y);
    return 0;

}