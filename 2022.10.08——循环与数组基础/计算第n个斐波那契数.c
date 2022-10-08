#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()

{
    printf("Please select I number to be printed:");
    int n;
    scanf("%d", &n);
    
    int arr[100];
    arr[0] = 1;
    arr[1] = 1;
    if (n == 0 || n == 1)
    {
        printf("%d", 1);
        return 0;
    }
    int i;
    for (i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("The number is %d", arr[n-1]);
    return 0;
}