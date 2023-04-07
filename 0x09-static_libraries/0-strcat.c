#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
    char *p = dest;
    while (*p)
        p++;
    while (*src)
        *p++ = *src++;
    *p = '\0';
    return dest;
}