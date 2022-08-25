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
#define DEFAULT_SZ 3 //ͨѶ¼��ʼ������С

enum Option  //test�������õ�ö��
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

enum Modify  //modify�������õ�ö��
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
	PeoInfo* data; //�����ϵ�˵���Ϣ����̬�汾��*data����̬�汾��data[]��
	int count; //ͨѶ¼�Ѿ���ŵ���ϵ������
	int cap; //ͨѶ¼��ǰ�������
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