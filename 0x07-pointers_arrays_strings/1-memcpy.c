#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: Destination to copy to
 * @src: Source to copy from
 * @n: Number of bytes
 *
 * Return: Copied memory with bytes copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
