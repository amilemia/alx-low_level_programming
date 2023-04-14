#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		printf("0\n");
		return (0);
	}

	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (0);
	}

	if ((atol(argv[1]) * atol(argv[2])) > ULONG_MAX)
	{
		printf("Error\n");
		return (98);
	}

	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
