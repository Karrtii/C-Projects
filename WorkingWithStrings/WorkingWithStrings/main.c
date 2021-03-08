
#include <stdio.h>
#include "my_string_func.h"
#define MAX_LENGTH 1000
int main()
{
	char line[MAX_LENGTH];
	char upper[MAX_LENGTH];
	int line_length;


	/* Use a while loop to read input lines as long as there are any.
	 For each input line, print the length of the line as well as
	 the upper case version of the line
	 NOTE You are NOT allowed to use the standard toupper(…)
	 function in string.h
	 */

	printf("Enter something:\n");
	scanf_s(line);
	
	while (line != NULL)
	{
		my_to_upper(&line, &upper);
		line_length = read_line_length(line);
		printf("%s %d", upper, line_length);

		for (int i = 0; i < line_length; i++)
		{
			line[i] = NULL;
			upper[i] = NULL;
		}
	}

	return 0;
}