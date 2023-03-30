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
int dest_len = 0;
int i, j;

while (dest[dest_len] != '\0')
{
dest_len++;
}

for (i = 0, j = dest_len; i < n && src[i] != '\0'; i++, j++)
{
dest[j] = src[i];
}

dest[j] = '\0';

return dest;
}
