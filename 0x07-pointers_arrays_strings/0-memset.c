#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Starting address of memory block
 * @b: The value to be stored
 * @n: Number of bytes to change
 *
 * Return: Changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
