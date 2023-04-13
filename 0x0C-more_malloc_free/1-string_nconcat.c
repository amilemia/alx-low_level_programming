#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * and allocates memory for the result.
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: Pointer to the concatenated string.
 *         If malloc fails, the function returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	if (n > size2)
	n = size2;

	ptr = malloc((size1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	ptr[i] = s1[i];

	for (; i < (size1 + n); i++)
	ptr[i] = s2[i - size1];

	ptr[i] = '\0';

	return (ptr);
}
