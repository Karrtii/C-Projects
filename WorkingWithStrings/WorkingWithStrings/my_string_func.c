
#include <stdio.h>
#include "my_string_func.h"
/* read_line: read a line into s, return length */
/*
int read_line(char s[])
{

	int c = 0;
	int i = 0;
	int done = 0;
	do
	{
		c = getchar();
		if (c == EOF || c == '\n')
		{
			done = 1;
		}
		else
		{
			s[i++] = c;
		}
	} while (!done);
	s[i] = '\0';
	return i;
}
*/

//because the method above is shit
int read_line_length(char s[])
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return counter;
}

void my_to_upper(char* str_in, char* str_out)
{

	/* You must implement your own version of toupper using the two strings
 str_in and str_out.
 Loop over the str_in (as long as it "contains" something).
 Look at the "current" character and check if its a lowercase letter.
 If it is, convert it to the upper case version and add that to the
 str_out character array
*/

	while (*str_in)
	{
		if (*str_in >= 97 && *str_in <= 122)
		{
			*str_out = (char)(*str_in - 32);
		}
		else
		{
			*str_out = *str_in;
		}
		++str_in;
		++str_out;
	}

}
