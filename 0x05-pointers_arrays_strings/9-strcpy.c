#include "main.h"

/**
 * *_strcpy - Copies the string pointed
 * @dest: The string to copy to
 * @src: The string to copy from
 * Return: dest the string that has src content
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
