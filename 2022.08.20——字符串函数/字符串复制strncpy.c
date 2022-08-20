#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strncpy(char* dest, const char* src,size_t count)
{
	assert(dest && src);
	char* start = dest;
	while (count && (*dest++ = *src++) != '\0');
	{
		count--;
	}
	if (count)
	{
		while (--count)
			*dest++ = '\0';
	}
	return start;
}

int main()
{
	char arr1[20] = "hello";
	char arr2[] = "world";
	//my_strncpy(arr1, arr2, 6);
	strncpy(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}