#include "main.h"

/**
 * _strstr - Find substring in string
 * @haystack: Where to find
 * @needle: What to find
 *
 * Return: Always 0 (Succ)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
