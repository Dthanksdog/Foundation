#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()

{
    printf("Enter a string:");
    char arr[20];
    scanf("%s", &arr);
    int n = strlen(arr);
    int m;
    scanf("%d", &m);
    getchar();
    char ch;
    ch = getchar();
    int i;
    if (m = n)
    {
        arr[m] = ch;
        arr[m + 1] = '\0';
        puts(arr);
        return 0;
    }
    
    for (i = n; i >m; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[m] = ch;
    puts(arr);

    return 0;



}

