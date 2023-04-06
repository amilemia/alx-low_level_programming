#include "main.h"

/**
 * wildcmp - Compare two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if strings identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (1);
		}
		else
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
	return (0);
}
