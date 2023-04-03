#include "main.h"

/**
 * _strch - Locates a character in a string
 * @s: String to search
 * @c: Character to find
 *
 * Return: Always 0 (Succ)
 */

char *_strch(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
