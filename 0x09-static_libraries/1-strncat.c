#include "main.h"

/**
 * _strncat - concatenates two strings up to n characters
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
    char *p = dest;
    while (*p)
        p++;
    while (n-- > 0 && *src)
        *p++ = *src++;
    *p = '\0';
    return dest;
}