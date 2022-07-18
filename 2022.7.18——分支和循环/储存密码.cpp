#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("please type in the password:\n");
	for (;;)
	{
		scanf("%s", password);
		while ((ch = getchar()) != '\n')
		{
			;
		}
		printf("please comfirm(Y/N):\n");
		ret = getchar();
		if (ret == 'Y')
		{
			printf("comfirmed successfully\n");
			break;
		}
		else
		{
			printf("unconfirm\n");
			printf("please type the password again\n");
		}
	}
	return 0;
}