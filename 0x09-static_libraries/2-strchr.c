#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to the string to be searched
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or 0 if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
