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
	char *dest_end = dest;

	while (*dest_end != '\0')
{
		dest_end++;
}

	char *src_end = src;

	while (*src_end != '\0' && n > 0)
{
		*dest_end++ = *src_end++;
			n--;
}
	*dest_end = '\0';
	return (dest);
}
