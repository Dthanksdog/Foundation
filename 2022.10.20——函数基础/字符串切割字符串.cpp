#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>


int main()

{
    char str[100];
    char cut[100];
    int a = 0;
    gets_s(str);
    gets_s(cut);
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        int j;
        for (j = 0; j < strlen(cut); j++)
        {
            if (str[i] == cut[j] || str[i] == ' ')
            {
                if (a == 0)
                {
                    a = 1;
                }
                break;
            }
        }
        if (j == strlen(cut))
        {
            if (a == 1)
            {
                printf("\n%c", str[i]);
                a = 0;
            }
            else
                printf("%c", str[i]);
        }
    }
    return 0;
}
