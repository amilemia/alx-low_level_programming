#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: String to concatenate to
 * @src: String origin
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; dest[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
