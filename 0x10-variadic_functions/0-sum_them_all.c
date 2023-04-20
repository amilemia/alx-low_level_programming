#include "variadic_functions.h"

/**
 * sum_them_all - Compute the sum of a variable number of integers
 *
 * @n: The number of integers to sum
 * @...: The integers to sum
 *
 * Return: The sum of the integers, or 0 if @n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
