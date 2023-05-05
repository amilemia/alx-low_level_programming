#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, j;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
