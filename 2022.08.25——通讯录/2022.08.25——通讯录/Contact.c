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

//检查通讯录容量
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
		printf("增容成功\n");
	}
}

//初始化通讯录
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
	memset(p->data, 0, p->cap * sizeof(PeoInfo)); //把PeoInfo初始化为0
	LoadContact(p);
}

//添加联系人
void AddContact(Contact* p)
{
	CheckCapacity(p);
	printf("请输入名字：");
	scanf("%s", p->data[p->count].name);
	printf("请输入性别：");
	scanf("%s", p->data[p->count].sex);
	printf("请输入年龄：");
	scanf("%d", &(p->data[p->count].age));//注意取地址符号
	printf("请输入电话：");
	scanf("%s", p->data[p->count].tele);
	printf("请输入地址：");
	scanf("%s", p->data[p->count].addr);

	p->count++;
	printf("添加成功");
}

//查找，找到返回下标，找不到返回-1
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

//删除联系人
void DelContact(Contact* p)
{
	assert(p);
	if (0 == p->count)
	{
		printf("通讯录已空，无法删除");
		return;
	}
	char name[NAME_MAX] ;
	printf("请输入联系人名字：");
	scanf("%s", name);
	int tmp=FindContact(p, name);
	if (tmp == -1)
	{
		printf("找不到联系人\n");
		return;
	}
	int i = 0;
	for (i = tmp; i < p->count-1; i++) //要删除的联系人后的联系人都往前挪一位
	{
		p->data[i] = p->data[i + 1];
	}
	p->count--;
	printf("删除成功\n");
}

//查找联系人
void SearchContact(const Contact* p)
{
	assert(p);
	if (0 == p->count)
	{
		printf("通讯录已空，无法查找");
		return;
	}
	char name[NAME_MAX];
	printf("请输入联系人名字：");
	scanf("%s", name);
	int tmp = FindContact(p, name);
	if (tmp == -1)
	{
		printf("找不到联系人\n");
		return;
	}
	printf("\n-----------------------------------------------------\n");
	printf("%-10s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	printf("%-10s %-5s %-5d %-12s %-20s\n", p->data[tmp].name,
		p->data[tmp].sex, p->data[tmp].age, p->data[tmp].tele, p->data[tmp].addr);
    printf("\n----------------------------------------------------\n");
}

//修改联系人信息
void ModifyContact(Contact* p)
{
	assert(p);
	if (0 == p->count)
	{
		printf("通讯录已空，无法修改");
		return;
	}
	int input = 0;
	char name[NAME_MAX];
	printf("请输入联系人的名字：");
	scanf("%s", name);
	int tmp = FindContact(p, name);
	if (tmp != -1)
	{
		printf("\n-----------------------------------------------------\n");
		printf("%-10s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-10s %-5s %-5d %-12s %-20s\n", p->data[tmp].name,
			p->data[tmp].sex, p->data[tmp].age, p->data[tmp].tele, p->data[tmp].addr);
		printf("\n----------------------------------------------------\n");
		do {
			menu1();
			printf("请输入要修改的选项：");
			scanf("%d", &input);

			switch (input)
			{
			case NAME:
				printf("请修改名字：");
				scanf("%s", p->data[tmp].name);
				printf("修改成功\n");
				break;
			case SEX:
				printf("请修改性别：");
				scanf("%s", p->data[tmp].sex);
				printf("修改成功\n");
				break;
			case AGE:
				printf("请修改年龄：");
				scanf("%s", p->data[tmp].age);
				printf("修改成功\n");
				break;
			case TELE:
				printf("请修改电话：");
				scanf("%s", p->data[tmp].tele);
				printf("修改成功\n");
				break;
			case ADDR:
				printf("请修改地址：");
				scanf("%s", p->data[tmp].addr);
				printf("修改成功\n");
				break;
			case EXIT0:
				printf("退出修改\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
			}
		} while (input);
	}
	else
	{
		printf("找不到联系人\n");
		return;
	}

}

//排序
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
	printf("请选择排序方式：");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		qsort(p->data, p->count, sizeof(PeoInfo), cmp_name);
		printf("按名字排序成功\n");
		break;
	case 2:
		qsort(p->data, p->count, sizeof(PeoInfo), cmp_age);
		printf("按名字排序成功\n");
		break;
	case 0:
		printf("退出排序\n");
		break;
	default:
		printf("输入错误，请重新输入\n");
		goto again;
		break;
	}
	
}

//打印通讯录
void PrintContact(const Contact* p)
{
	assert(p);
	int i = 0;
	printf("\n-----------------------------------------------------\n");
	printf("%-10s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < p->count; i++)
	{
		printf("%-10s %-5s %-5d %-12s %-20s\n", p->data[i].name,
			p->data[i].sex, p->data[i].age, p->data[i].tele, p->data[i].addr);
	}
	printf("\n----------------------------------------------------\n");
}

//销毁通讯录
void DestroyContact(Contact* p)
{
	free(p->data);
	p->data = NULL;
	p->cap = 0;
	p->count = 0;
	printf("销毁成功\n");
}

//加载文件信息到通讯录中
void LoadContact(Contact* p)
{
	FILE* pf = fopen("contact.data.txt", "r");//r:打开文字文件只读
	if (pf == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//读文件
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

//保存通讯录的信息到文件
void SaveContact(const Contact* p)
{

	FILE* pf = fopen("contact.data.txt", "w");//w:打开文字文件只写
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