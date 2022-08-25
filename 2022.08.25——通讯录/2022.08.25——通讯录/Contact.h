#pragma once
#include <stdio.h>
#include <assert.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 13
#define ADDR_MAX 30
#define DEFAULT_SZ 3 //通讯录初始容量大小

enum Option  //test函数所用的枚举
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

enum Modify  //modify函数所用的枚举
{
	EXIT0,
	NAME,
	SEX,
	AGE,
	TELE,
	ADDR
};

typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];

}PeoInfo;

typedef struct Contact
{
	PeoInfo* data; //存放联系人的信息（动态版本是*data，静态版本是data[]）
	int count; //通讯录已经存放的联系人人数
	int cap; //通讯录当前最大容量
}Contact;

void InitContact(Contact* p);
void LoadContact(Contact* p);
void CheckCapacity(Contact* p);
void AddContact(Contact* p);
void PrintContact(const Contact* p);
int FindContact(const Contact* p, char name[]);
void SearchContact(const Contact* p);
void SortContact(const Contact* p);
void DestroyContact(Contact* p);
void SaveContact(const Contact* p);