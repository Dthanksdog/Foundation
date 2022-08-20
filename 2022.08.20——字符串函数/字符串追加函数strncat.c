#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strncat(char* dest, char* src,size_t count)
{
	assert(dest && src);
	char* start = dest;
	while (*dest++)
	{
		;
	}
	dest--;
	while (count--)
	{
		if ((*dest++ = *src++) == '\0')
		{
			return start;
		}
	}
	*dest = '\0';
	return start;
}


int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	my_strncat(arr1, arr2,4);
	printf("%s\n", arr1);
	return 0;
}