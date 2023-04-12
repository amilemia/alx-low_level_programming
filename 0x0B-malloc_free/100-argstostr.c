#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all args
 * @ac: Args count
 * @av: Pointer to array of size ac
 *
 * Return: NULL if ac or av NULL or on fail,
 * Pointer to new string otherwise
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;

		size++;
	}

	args = malloc(sizeof(char) * (size + 1));
	if (args == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args[k] = av[i][j];
			k++;
		}
		args[k] = '\n';
		k++;
	}
	args[k] = '\0';

	return (args);
}
