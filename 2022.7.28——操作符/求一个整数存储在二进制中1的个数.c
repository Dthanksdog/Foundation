#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//方法一
//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{ 
//			count++;
//		}
//			num = num / 2;
//		
//		    
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//方法二
//int main()
//{
//	int num = 10;
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (num & (1 << i))
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//方法三
int main()
{
	int num = 10;
	int count = 0;
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("count=%d\n", count);
	return 0;
}

