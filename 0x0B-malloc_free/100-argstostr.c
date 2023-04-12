#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all args
 * @ac: Args count
 * @av: Pointer to array of size ac
 *
 * Return: NULL if ac or av NULL or on fail
 * Pointer to new string
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *args;

	size = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;

	while (i < ac)
	{
		j = 0;

		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}

	args = malloc((sizeof(char) * size) + 1);

	if (args == NULL)
		return (NULL);

	i = 0;

	while (i < ac)
	{
		j = 0;

		while (av[i][j])
		{
			args[k] = av[i][j];
			j++;
			k++;
		}
		args[k] = '\n';
		k++;
		i++;
	}
	args[k] = '\0';

	return (args);
}