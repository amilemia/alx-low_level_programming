#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: Pointer to string duplicated
 *
 * Return: Pointer to duplicated string, NULL
 * if str is NULL or memory is insufficient
*/

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, str_len;

	if (str == NULL)
		return (NULL);

	str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new_str = malloc(sizeof(char) * (str_len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
		new_str[i] = str[i];

	new_str[str_len] = '\0';

	return (new_str);
}
