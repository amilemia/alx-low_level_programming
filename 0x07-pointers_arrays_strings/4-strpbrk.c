#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to find bytes
 * @accept: Bytes to find
 *
 * Return: Always 0 (Succ)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
