#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to fill
 * @b: the byte to fill with
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
    char *p = s;
    while (n-- > 0)
        *p++ = b;
    return s;
}