#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<ctype.h>
#include <stdlib.h>

int main()
{
	char str[20] = "aaaaaa";
	int ret = 0;
	printf("please enter a string\n");
	while (1)
	{
		scanf("%s", str);
		if (isdigit(str[0]))
		{
			ret = atoi(str);
			break;
		}
		else
		{
			printf("wrong input,please enter again\n");
		}
	    //字符串没有缓冲区的问题，只有读取%c单个字符才有此问题；
	}
	printf("ret=%d\n", ret);
	return 0;
}