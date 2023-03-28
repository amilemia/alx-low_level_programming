#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string
 * Return: Length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
