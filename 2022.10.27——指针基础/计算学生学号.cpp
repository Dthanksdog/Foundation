#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



struct students
{
    char str1[10];
    char str2[20];
};

void f(char *str1, char* str2)
{
    printf("The number %s student's score name is %s\n", str1, str2);
}



int main()
{
    struct students s[3];
    s[0] = { "1001","ZhangLi" };
    s[1] = { "1002","WangWu" };
    s[2] = { "1003","LiYan" };

    int i;
    for (i = 0; i < 3; i++)
    {
        f(s[i].str1, s[i].str2);

    }
    return 0;
}

