#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct students
{
    char str1[10];
    char str2[20];
    int a;
    int b;
    int c;
};

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}


int main()
{
    struct students student[10];
    printf("Input n:");
    int n;
    scanf("%d", &n);
    printf("Input the student's number,name and course scores\n");
    int i;

    for (i = 1; i <= n; i++)
    {
        printf("No.%d:", i);
        scanf("%s %s %d %d %d", &student[i].str1, &student[i].str2, &student[i].a, &student[i].b, &student[i].c);
        float avg = average(student[i].a, student[i].b, student[i].c);
        printf("num:%s,name:%s,average:%.2f\n", &student[i].str1, &student[i].str2, avg);
    }
    return 0;

}

