#include "main.h"
#include <stdlib.h>

/**
 * str_len - Returns the length of a string
 * @s: String to measure
 *
 * Return: Length of the string
 */

unsigned int str_len(char *s)
{
	unsigned int s_len = 0;

	if (s == NULL)
		return (0);

	while (*s != '\0')
	{
		s_len++;
		s++;
	}

	return (s_len);
}

/**
 * str_copy - Copies a string to a new memory location
 * @src: String to copy
 *
 * Return: Pointer to a newly allocated string that
 * contains a copy of src
 */

char *str_copy(char *src)
{
	unsigned int len = str_len(src);
	char *dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
		return (NULL);

	for (unsigned int i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string, to add at end of s1
 *
 * Return: Pointer to a newly allocated space
 * which contains the contents of s1 followed
 * by s2 and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len, s2_len, size, i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = str_len(s1);
	s2_len = str_len(s2);
	size = s1_len + s2_len;

	new_str = malloc((sizeof(char) * size) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		new_str[i] = s1[i];

	for (j = 0; j <= s2_len; j++)
		new_str[i + j] = s2[j];

	return (new_str);
}
