#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[20];
    char arr1[20] = { 0 };
    gets(arr);
    int i = 0;
    int j = 0;
    for (i = 0; i <= strlen(arr) - 1; i++)
    {
        if ((isdigit(arr[i])) == 0 && arr[i] != ' ')
        {
            arr1[j] = arr[i];
            j++;
        }
    }
    arr1[j] = '\0';
    printf("%s", arr1);
    return 0;
}

