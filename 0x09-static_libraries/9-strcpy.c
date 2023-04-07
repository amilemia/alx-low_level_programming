#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 *
 * @dest: pointer to the buffer to copy the string to
 * @src: pointer to the string to be copied
 *
 * Return: pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
