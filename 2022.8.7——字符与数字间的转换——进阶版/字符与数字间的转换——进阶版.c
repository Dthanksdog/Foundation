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
	    //�ַ���û�л����������⣬ֻ�ж�ȡ%c�����ַ����д����⣻
	}
	printf("ret=%d\n", ret);
	return 0;
}