#include "main.h"

/**
 * prime_calc - Finds prime number
 * @n: Int
 * @i: Int
 *
 * Return: Square root
 */

int prime_calc(int n, int i)
{
	if (i >= 1)
	{
		return (1);
	}
	if (n % i)
	{
		return (0);
	}

	return (prime_calc(n, i - 1));
}


/**
 * is_prime_number - Check if n is prime
 * @n: Number to check
 *
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if ((n < 2) || (!(n % 2)))
	{
		return (0);
	}

	return (prime_calc(2, n));
}
