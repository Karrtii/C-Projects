#include <stdio.h>
#include "myStr.h"

#define STRING_ONE "Hello World"
#define STRING_TWO "Hello World"
#define STRING_THREE "World Hello"
#define STRING_FOUR ""


int main()
{
	const char str1[] = STRING_ONE;
	const char str2[] = STRING_TWO;
	const char str3[] = STRING_THREE;
	const char str4[] = STRING_FOUR;
	char str5[15];
	char* str6;
	int length = 0;
	int compare = 0;

	length = my_strlen(&str1);
	compare = my_strcmp(&str1, &str2);
	my_strcpy(&str5, &str1);
	str6 = my_strdup(&str3);

	printf("The length of the string is %d\n", length);
	printf("Identical?: %d\n", compare);
	printf("The copied source is %s and the copied destination is %s\n", str1, str5);
	printf("The duplicate value is %s", str6);

	return 0;
}