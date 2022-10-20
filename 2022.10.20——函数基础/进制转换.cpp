#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void sixteen(int a)
{
    int i;
    char arr[100];
    for (i = 0; a != 0; i++)
    {
        if (a % 16 == 10)
            arr[i] = 'A';
        else if (a % 16 == 11)
            arr[i] = 'B';
        else if (a % 16 == 12)
            arr[i] = 'C';
        else if (a % 16 == 13)
            arr[i] = 'D';
        else if (a % 16 == 14)
            arr[i] = 'E';
        else if (a % 16 == 15)
            arr[i] = 'F';
        else
            arr[i] = (a % 16) + '0';
        a /= 16;
    }
    arr[i] = '\0';
    printf("the converted the number is:");
    for (i = strlen(arr) - 1; i >= 0; i--)
        printf("%c", arr[i]);
    printf("\n");
}
int main()
{
    int a, b;
    int arr[20];
    scanf("%d%d", &a, &b);
    if (b == 16)
    {
        sixteen(a);
        return 0;
    }
    int count = 0;
    do
    {
        arr[count++] = a % b;
        a /= b;
    } while (a != 0);
    int i;


    printf("the converted the number is:");
    for (i = count - 1; i >= 0; i--)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}
