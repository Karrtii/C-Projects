#include <stdio.h>
#include "myStr.h"

int my_strlen(const char* str)
{
	unsigned int counter = 0;

	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return counter;
}

int my_strcmp(const char* str1, const char* str2)
{
	while ((*str1 != '\0' && *str2 != '\0') && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	if (*str1 == *str2)
	{
		return 0;
	}

	else
	{
		return *str1 - *str2;
	}
}

char* my_strcpy(char* dest, const char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return dest;
}

char* my_strdup(const char* str)
{
	int strSize;
	char* duplicate;
	char* duplicateOffset;

	strSize = my_strlen(str);
	duplicate = malloc(sizeof(char) * strSize + 1);
	if (duplicate == NULL)
	{
		return NULL;
	}

	duplicateOffset = duplicate;
	while (*str != '\0')
	{
		*duplicateOffset = *str;
		duplicateOffset++;
		str++;
	}

	*duplicateOffset = '\0';

	return duplicate;
}