#include <string.h>
#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: String to concatenate to
 * @src: String origin
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
