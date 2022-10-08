#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int  main()
{
    char str[10];
    int l = 0;
    int b = 0;
    int d = 0;
    int o = 0;
    printf("Input 10 characters: ");
    gets(str);
    int i;
    for (i = 0; i < 10; i++)
    {
        if (isalpha(str[i]))
            l++;
        else if (isdigit(str[i]))
            d++;
        else if (str[i] == ' ')
            b++;
        else
            o++;

    }
    printf("letter=%d,blank=%d,digit=%d,other=%d", l, b, d, o);
    return 0;
}

