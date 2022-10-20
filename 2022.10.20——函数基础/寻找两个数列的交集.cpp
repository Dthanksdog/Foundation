#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mix(int a[], int b[], int c[])
{
    int i;
    int count = 0;
    for (i = 0; i < 5; i++)
    {
        int j;
        for (j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
            {
                c[count] = a[i];
                count++;
            }

        }

    }
    return count;
}
int main()
{
    int a[5];
    int b[5];
    int c[5];
    printf("Please Enter Array A,5 digits:");
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Please Enter Array B,5 digits:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    int count = mix(a, b, c);
    printf("A B intersection is:");
    for (i = 0; i < count; i++)
        printf("%4d", c[i]);
    return 0;

}
