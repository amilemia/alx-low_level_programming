#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be found
 *
 * Return: a pointer to the beginning of the located substring,
 * or a pointer to the terminating null byte
 * of the string if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
