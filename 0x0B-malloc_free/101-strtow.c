#include "main.h"
#include <stdlib.h>

/**
 * word_count - Count number of words in a string
 * @str: Pointer to string
 *
 * Return: Integer
 */

int word_count(char *str)
{
	int word, i, j;

	word = 0;
	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			j++;
		}
	}
	return (j);
}

/**
 * strtow - Split string into words
 * @str: Pointer to string
 *
 * Return: Pointer to array of strings, NULL on failure
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	while (*(str + len))
		len++;
	words = word_count(str);

	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					free(matrix);
					return (NULL);
				}
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}
