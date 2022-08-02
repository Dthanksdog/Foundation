#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct stu
{
	char name[20];
	char sex[20];
	char tele[20];
	char id[20];
	int age;
	
}stu;

void Print1(stu tmp)
{
	printf("%s\n", tmp.name);
	printf("%s\n", tmp.sex);
	printf("%s\n", tmp.tele);
	printf("%s\n", tmp.id);
	printf("%d\n", tmp.age);


}

void Print2(stu *ps)
{

	printf("%s\n", ps->sex);
	printf("%s\n", ps->tele);
	printf("%s\n", ps->id);
	printf("%d\n", ps->age);


}

int main()
{
	stu s = { "Reine" ,"Female","18066889966","2188886669",20 };
	Print1(s);
	Print2(&s);
	
}