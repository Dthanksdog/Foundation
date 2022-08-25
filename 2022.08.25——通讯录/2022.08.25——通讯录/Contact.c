#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void menu1()
{
	printf("==================================\n");
	printf("***    1.name        2.sex     ***\n");
	printf("***    3.age         4.tele    ***\n");
	printf("***    5.addr        0.exit    ***\n");
	printf("==================================\n");
}

void menu2()
{
	printf("==================================\n");
	printf("***    1.name        2.age     ***\n");
	printf("***    0.exit                  ***\n");
	printf("==================================\n");
}

//���ͨѶ¼����
void CheckCapacity(Contact* p)
{
	assert(p);
	if (p->cap == p->count)
	{
		PeoInfo* tmp = (PeoInfo*)realloc(p->data, (p->cap + 2) * sizeof(PeoInfo));
		if (p->data != NULL)
		{
			p->data = tmp; 
		}
		else
		{
			perror("CheckCapacity::realloc");
			return;
		}
		p->cap += 2;
		printf("���ݳɹ�\n");
	}
}

//��ʼ��ͨѶ¼
void InitContact(Contact* p)
{
	assert(p);
	p->count = 0;
	p->cap = DEFAULT_SZ;
	p->data = (PeoInfo*)malloc(p->cap * sizeof(PeoInfo));

	if (p->data == NULL)
	{
		perror("InitContact::malloc");
		return;
	}
	memset(p->data, 0, p->cap * sizeof(PeoInfo)); //��PeoInfo��ʼ��Ϊ0
	LoadContact(p);
}

//�����ϵ��
void AddContact(Contact* p)
{
	CheckCapacity(p);
	printf("���������֣�");
	scanf("%s", p->data[p->count].name);
	printf("�������Ա�");
	scanf("%s", p->data[p->count].sex);
	printf("���������䣺");
	scanf("%d", &(p->data[p->count].age));//ע��ȡ��ַ����
	printf("������绰��");
	scanf("%s", p->data[p->count].tele);
	printf("�������ַ��");
	scanf("%s", p->data[p->count].addr);

	p->count++;
	printf("��ӳɹ�");
}

//���ң��ҵ������±꣬�Ҳ�������-1
int FindContact(const Contact* p,char name[])
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//ɾ����ϵ��
void DelContact(Contact* p)
{
	assert(p);
	if (0 == p->count)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��");
		return;
	}
	char name[NAME_MAX] ;
	printf("��������ϵ�����֣�");
	scanf("%s", name);
	int tmp=FindContact(p, name);
	if (tmp == -1)
	{
		printf("�Ҳ�����ϵ��\n");
		return;
	}
	int i = 0;
	for (i = tmp; i < p->count-1; i++) //Ҫɾ������ϵ�˺����ϵ�˶���ǰŲһλ
	{
		p->data[i] = p->data[i + 1];
	}
	p->count--;
	printf("ɾ���ɹ�\n");
}

//������ϵ��
void SearchContact(const Contact* p)
{
	assert(p);
	if (0 == p->count)
	{
		printf("ͨѶ¼�ѿգ��޷�����");
		return;
	}
	char name[NAME_MAX];
	printf("��������ϵ�����֣�");
	scanf("%s", name);
	int tmp = FindContact(p, name);
	if (tmp == -1)
	{
		printf("�Ҳ�����ϵ��\n");
		return;
	}
	printf("\n-----------------------------------------------------\n");
	printf("%-10s %-5s %-5s %-12s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	printf("%-10s %-5s %-5d %-12s %-20s\n", p->data[tmp].name,
		p->data[tmp].sex, p->data[tmp].age, p->data[tmp].tele, p->data[tmp].addr);
    printf("\n----------------------------------------------------\n");
}

//�޸���ϵ����Ϣ
void ModifyContact(Contact* p)
{
	assert(p);
	if (0 == p->count)
	{
		printf("ͨѶ¼�ѿգ��޷��޸�");
		return;
	}
	int input = 0;
	char name[NAME_MAX];
	printf("��������ϵ�˵����֣�");
	scanf("%s", name);
	int tmp = FindContact(p, name);
	if (tmp != -1)
	{
		printf("\n-----------------------------------------------------\n");
		printf("%-10s %-5s %-5s %-12s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-10s %-5s %-5d %-12s %-20s\n", p->data[tmp].name,
			p->data[tmp].sex, p->data[tmp].age, p->data[tmp].tele, p->data[tmp].addr);
		printf("\n----------------------------------------------------\n");
		do {
			menu1();
			printf("������Ҫ�޸ĵ�ѡ�");
			scanf("%d", &input);

			switch (input)
			{
			case NAME:
				printf("���޸����֣�");
				scanf("%s", p->data[tmp].name);
				printf("�޸ĳɹ�\n");
				break;
			case SEX:
				printf("���޸��Ա�");
				scanf("%s", p->data[tmp].sex);
				printf("�޸ĳɹ�\n");
				break;
			case AGE:
				printf("���޸����䣺");
				scanf("%s", p->data[tmp].age);
				printf("�޸ĳɹ�\n");
				break;
			case TELE:
				printf("���޸ĵ绰��");
				scanf("%s", p->data[tmp].tele);
				printf("�޸ĳɹ�\n");
				break;
			case ADDR:
				printf("���޸ĵ�ַ��");
				scanf("%s", p->data[tmp].addr);
				printf("�޸ĳɹ�\n");
				break;
			case EXIT0:
				printf("�˳��޸�\n");
				break;
			default:
				printf("�����������������\n");
				break;
			}
		} while (input);
	}
	else
	{
		printf("�Ҳ�����ϵ��\n");
		return;
	}

}

//����
int cmp_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
int cmp_age(const void* e1, const void* e2)
{
	return (((PeoInfo*)e1)->age-((PeoInfo*)e2)->age);
}
void SortContact(const Contact* p)
{
	assert(p);
	int input = 0;
again:
	menu2();
	printf("��ѡ������ʽ��");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		qsort(p->data, p->count, sizeof(PeoInfo), cmp_name);
		printf("����������ɹ�\n");
		break;
	case 2:
		qsort(p->data, p->count, sizeof(PeoInfo), cmp_age);
		printf("����������ɹ�\n");
		break;
	case 0:
		printf("�˳�����\n");
		break;
	default:
		printf("�����������������\n");
		goto again;
		break;
	}
	
}

//��ӡͨѶ¼
void PrintContact(const Contact* p)
{
	assert(p);
	int i = 0;
	printf("\n-----------------------------------------------------\n");
	printf("%-10s %-5s %-5s %-12s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < p->count; i++)
	{
		printf("%-10s %-5s %-5d %-12s %-20s\n", p->data[i].name,
			p->data[i].sex, p->data[i].age, p->data[i].tele, p->data[i].addr);
	}
	printf("\n----------------------------------------------------\n");
}

//����ͨѶ¼
void DestroyContact(Contact* p)
{
	free(p->data);
	p->data = NULL;
	p->cap = 0;
	p->count = 0;
	printf("���ٳɹ�\n");
}

//�����ļ���Ϣ��ͨѶ¼��
void LoadContact(Contact* p)
{
	FILE* pf = fopen("contact.data.txt", "r");//r:�������ļ�ֻ��
	if (pf == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//���ļ�
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(p);
		p->data[p->count] = tmp;
		p->count++;
	}
	fclose(pf);
	pf = NULL;
}

//����ͨѶ¼����Ϣ���ļ�
void SaveContact(const Contact* p)
{

	FILE* pf = fopen("contact.data.txt", "w");//w:�������ļ�ֻд
	if (pf == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		fwrite(p->data + i, sizeof(PeoInfo), 1, pf);
	}
	
	fclose(pf);
	pf = NULL;
}