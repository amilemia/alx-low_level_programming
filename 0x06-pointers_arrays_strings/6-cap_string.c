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
		switch (*ptr)
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				capitalize_next = 1;
				break;
			default:

				if (*ptr >= 'a' && *ptr <= 'z' && capitalize_next)
				{
					*ptr = *ptr - 'a' + 'A';
					capitalize_next = 0;
				}
		}
		ptr++;
	}
	return (str);
}
