#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    gets_s(a);
    int i;
    for (i = 0; i < strlen(a); i++)
    {
        int j;
        for (j = 0; j < strlen(a) - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
               int tmp;
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    char b[20] = { 0 };
    int c[20];
    int k=0;
    
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
        {
            int j;
            int flag = 0;
            for (j = 0; j <= k; j++)
            {
                if (a[i] == b[j])
                {
                    c[j]++;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                b[k] = a[i];
                c[k] = 1;
                k++;
            }          
        }
    }
    if (b[0] == 0)
    {
        printf("None\n");
    }
        for (i = 0; i < k; i++)
        {
            printf("%c:%d\n", b[i],c[i]);
        }
        
	return 0;
}