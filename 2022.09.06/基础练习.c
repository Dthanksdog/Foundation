#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int chicken,rabbit ;
//    int a ,b;
//    scanf("%d %d", &a, &b);
//    int i = 0;
//    for (chicken = 1; i <= a; chicken++)
//    {
//        rabbit = a - chicken;
//        if (chicken * 2 + rabbit * 4 == b)
//        {
//            break;
//        }
//    }
//
//    if (chicken <= a)
//    {
//        printf("chicken=%d,rabbit=%d\n", chicken, rabbit);
//    }
//    else
//        printf("no result!\n");
//
//    return 0;
//
//}

//int main()
//{
//
//    float r = 0;
//    float s = 0;
//    printf("请输入圆的半径：");
//    scanf("%f", &r);
//    /*scanf("请输入圆的半径：%f", &r);*/
//    s = r * r * 3.1415926;
//    /*printf("%.2f\n", s);*/
//    printf("圆的面积为：%.2f\n", s);
//    return 0;
//}

//int main()
//{
//	char ch;
//	ch=getchar();
//	putchar(ch);
//	return 0;
//}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int sum = 1;
	int i = 1;
	for (i = 1; i <= a; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
	return 0;
}