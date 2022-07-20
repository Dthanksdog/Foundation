#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("注意！你的电脑将会在1分钟后关机，想取消请输入：我是猪\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
