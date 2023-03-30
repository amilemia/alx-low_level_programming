#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to print
 * @src: string origin
 * @n: max number of bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
	}

	dest[a] = '\0';

	return (dest);
}
