#include "main.h"

/**
 * factorial - Calculate factorial of a number
 * @n: Number
 *
 * Return: Int
 */

int factorial(int n);
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
