#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string consists only of digits.
 * @s: The string to check.
 *
 * Return: 1 if the string consists only of digits, 0 otherwise.
 */

int is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * multiply - Multiplies two numbers represented as strings.
 * @s1: The first number to multiply.
 * @s2: The second number to multiply.
 *
 * Return: A pointer to the result of the multiplication as an array of integers.
 */

int *multiply(char *s1, char *s2)
{
	int size_1 = 0, size_2 = 0, *result;
	int digit_1, digit_2, carry;
	int i, j;

	while (s1[size_1])
		size_1++;
	while (s2[size_2])
		size_2++;

	result = malloc(sizeof(int) * (size_1 + size_2));
	if (result == 0)
		return (0);

	for (i = 0; i < size_1 + size_2; i++)
		result[i] = 0;

	for (i = size_1 - 1; i >= 0; i--)
	{
		digit_1 = s1[i] - '0';
		carry = 0;

		for (j = size_2 - 1; j >= 0; j--)
		{
			digit_2 = s2[j] - '0';
			carry += result[i + j + 1] + (digit_1 * digit_2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[i] = carry;
	}

	return (result);
}

/**
 * main - Adds two numbers represented as strings.
 * @ac: The number of command-line arguments.
 * @av: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */

int main(int ac, char **av)
{
	int *result;
	int check = 0;
	int i;

	if (ac != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!(is_digit(av[1]) && is_digit(av[2])))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(av[1], av[2]);
	if (result == 0)
		return (0);

	for (i = 0; i < strlen(av[1]) + strlen(av[2]); i++)
	{
		if (result[i])
			check = 1;
		if (check)
			putchar(result[i] + '0');
	}

	if (check == 0)
		putchar('0');

	putchar('\n');

	free(result);

	return (0);
}
