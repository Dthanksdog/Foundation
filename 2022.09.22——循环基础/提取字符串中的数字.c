#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[40];
    char num[20];
    scanf("%s", &str);
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        if (isdigit(str[i]))
        {
            num[j] = str[i];
            j++;
        }
        i++;
    }
    int x = 0;
    for (x = 0; x < strlen(num); x++)
    {
        printf("%c ", num[x]);


    }

    printf("\n");

    printf("There are %d digits!\n", x);    
    return 0;

}



