#include "main.h"

/**
 * sqn - Calculates square root of n
 * @n: Number to calculate square root of
 * @i: Divisor to check
 *
 * Return: The square root of n, or -1 if n doesn't have a natural square root
 */

int sqn(int n, int i)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (sqn(n, i + 1));
}


/**
 * _sqrt_recursion - Calculates the natural square root of number
 * @n: Number to calculate
 *
 * Return: The square root of n, or -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqn(n, 1));
}
