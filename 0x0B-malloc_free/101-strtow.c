#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: Pointer to the string
 *
 * Return: The number of words in the string
 */
int word_count(char *str)
{
	int word = 0, i, j;

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
 * strtow - Splits a string into words
 * @str: Pointer to the string
 *
 * Return: Pointer to an array of strings, NULL on failure
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
				matrix[k++] = tmp - c;
				c = 0;
			}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	if (k == 0)
	{
		free(matrix);
		return (NULL);
	}
	return (matrix);
}
