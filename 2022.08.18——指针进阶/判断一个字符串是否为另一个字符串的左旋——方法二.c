#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int if_left_rotate(char* str1, char* str2)
{
	if (strlen(str1) == strlen(str2))
	{
		int len = strlen(str1);
		strncat(str1, str1, len);//��str1��׷��һ��str1��
		char* ret = strstr(str1, str2);//�ж�str2�Ƿ�Ϊstr1�����ַ�����
		return ret != NULL;
	}
	else
		return 0;
}

int main()
{
	char arr1[20] = "ABCDEFGH";
	char arr2[] = "CDEFGHAB";
	int ret = if_left_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else 
	{
		printf("no\n");
	}
		
	return 0;
}