#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//A˵:������; B˵:��C; C˵:��D; D˵:C�ں�˵;  ��֪3����˵���滰��1����˵���Ǽٻ�,�ҳ����֡�

int main()
{
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
			break;
	}
	printf("the killer is %c\n", killer);
}