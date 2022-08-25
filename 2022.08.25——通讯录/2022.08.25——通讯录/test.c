#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void menu()
{
	printf("==================================\n");
	printf("************ CONTACT *************\n");
	printf("***     1.add        2.del     ***\n");
	printf("***     3.search     4.modify  ***\n");
	printf("***     5.sort       6.print   ***\n");
	printf("***     0.exit                 ***\n");
	printf("==================================\n");
}

int main()
{
	int input = 0;
	Contact con; //����ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}
