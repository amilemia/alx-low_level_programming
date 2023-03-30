#include "main.h"

/**
* *_strncpy - Copies a string
* @dest: String dest
* @src: Origin to copy
* @n: Number of chars to copy over
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
