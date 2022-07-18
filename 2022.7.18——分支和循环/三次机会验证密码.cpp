#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	int n = 0;
	char password [20] = { 0 };
	printf("please type the password:");
	for(i =1; i<=3; i++) 
	{ 
		scanf("%s", password);
		n = 3 - i;
		if (i == 3)
		{
		  if (strcmp(password, "666888") == 0)
		  {
			printf("the password is correct\n");
			break;
		  }
		    else
			printf("run out of chances,please try it later\n");
		    break;
		}
		if (strcmp(password, "666888") == 0)
		{
			printf("the password is correct\n");
			break;
		}
		
		else
		{
			printf("the password is wrong\n");
			printf("please type the password again:\n");
			printf("you have %d more chances\n", n);

		}

	}
	
	return 0;
}