#include "main.h"

/**
 * cap_string - Capitalize each word in a sentence
 * @str: Input string
 * Return: Pointer to string
 */

char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}')
		{
			capitalize_next = 1;
		} else if (*ptr >= 'a' && *ptr <= 'z' && capitalize_next)
		{
			*ptr -= 32;
			capitalize_next = 0;
		}
		ptr++;
	}
	return (str);
}
