#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//A说:不是我; B说:是C; C说:是D; D说:C在胡说;  已知3个人说了真话，1个人说的是假话,找出凶手。

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