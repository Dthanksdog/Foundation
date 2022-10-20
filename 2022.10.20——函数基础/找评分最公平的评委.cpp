#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	int a[5];
	int b[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
		scanf("%d", &b[i]);
	}
    for (i = 0; i < 5; i++)
    {
        int j;
        for (j = 0; j < 4; j++)
        {
            if (b[j] > b[j + 1])
            {
                int tmp1;
                tmp1 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp1;
                int tmp2;
                tmp2 = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp2;
            }
        }
    }
    /*for (i = 0; i < 5; i++)
    {
        printf("%d %d\n", a[i],b[i]);
        
    }*/
    int sum = 0;
    for (i = 1; i < 4; i++)
    {
        sum+=b[i];
    }
    float avg = sum / 3.0;
    

    float c[5];
    
    for (i = 1; i < 4; i++)
    {
        c[i] = fabs(b[i] - avg);
    }
    int min=a[1];
    for (i = 1; i < 3; i++)
    {
        if(c[i] > c[i + 1])
          min = a[i + 1];
    }
    for (i = 1; i < 4; i++)
    {
        int j;
        for (j = 1; j < 4; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp1;
                tmp1 = c[j];
                c[j] = c[j + 1];
                c[j + 1] = tmp1;
                int tmp2;
                tmp2 = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp2;
            }
        }
    }
    
    for (i = 1; i < 4; i++)
    {
        if (a[i] == min)
        {
            printf("%.2f\n%d", avg, a[i]);
        }
    }
	return 0;
}