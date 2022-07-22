#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//设定临时变量法
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	
//		return count;
//}
//
//int main()
//{
//	char arr[] = { "Reine"};
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


int my_strlen(char* p)
{
	if (*p != '\0')
	{
		return 1 + my_strlen(p + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = { "Reine"};
	int len=my_strlen(arr);
	printf("%d\n", len);

	return 0;
}