#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int* p = (int*)malloc(100);
	if (p != NULL)
	{
		//业务处理
	}
	else
	{
		perror("main");
	}
	int* ptr = NULL;
	ptr= realloc(p,1000);
	if (ptr != NULL)
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	return 0;
}