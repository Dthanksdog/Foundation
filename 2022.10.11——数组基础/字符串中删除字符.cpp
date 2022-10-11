#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()

{
    printf("Enter a string:");
    char arr[20];
    gets_s (arr);
    int n = strlen(arr);
    char ch;
    ch = getchar();
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ch)
        {
            int j = i;
            for (j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }
    printf("%s\n", arr);

    return 0;



}

