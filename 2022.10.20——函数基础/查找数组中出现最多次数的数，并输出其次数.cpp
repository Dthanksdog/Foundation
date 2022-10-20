#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int arr1[100];
    scanf("%d", &n);
    int i;
    int arr2[10] = { 0 };
    int arr3[10] = { 0 };
    for (i = 0; i < 10; i++)
    {
        arr3[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n-1;j++)
        {
            if (arr1[j]>arr1[j+1])
            {
                int tmp;
                tmp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=tmp;
            }
        }
    }
    
    arr2[0] = arr1[0];
    int j;
    int k = 0;
    arr3[0] = 1;
    for (i = 1; i < n; i++)
    {
        int flag = 0;
        {
            for (j = 0; j <=k; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    arr3[j]++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                k++;
                arr3[k]++;
                arr2[k] = arr1[i];
            }
        }
    }
    

    int max1= arr2[0];
    int max2 = arr3[0];
    
    for (i = 0; i <=k; i++)
    {
        if (max2 < arr3[i])
        {
            max1 = arr2[i];
            max2 = arr3[i];
        }
    }
    
    for (i = 0; i <= k; i++)
    {
        if (arr3[i]==max2)
        {
            
            printf("%d %d\n", arr2[i], arr3[i]);
        }
        
    }
    return 0;
}

