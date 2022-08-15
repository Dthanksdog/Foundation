#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(char*buf1, char*buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//arr[j] arr[j+1] 两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;  //强制类型转换为int*; 
}




void test1()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);


	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);  //返回正数为e1,返回负数为e2;
	print_arr(arr, sz);
}
struct Stu
{
	char name[20];
	int age;
};

void print_arr1(struct Stu tmp[], int sz)
{

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s,%d ", tmp[i].name, tmp[i].age);
	}
	printf("\n");
}

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;  //强制类型转换为struct Stu*
}
int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	struct Stu s[3] = { {"Tony",10},{"Jenny",8}, {"Gogo",5} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	print_arr1(s, sz);
	bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	print_arr1(s, sz);
}

int main()
{
	test1();
	test2();
	return 0;
}