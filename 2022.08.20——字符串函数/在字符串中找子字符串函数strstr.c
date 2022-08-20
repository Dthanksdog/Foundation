#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;

	if (*str2 == '\0')
	{
		return (char*)str1;
	}

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[20] = "abbcdef";
	char arr2[] = "bcd";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("arr2 isn't the substring of arr1\n");
	else
		printf("arr2 is the substring of arr1\n");

	return 0;
}
