#include "main.h"

/**
 * print_diagonal - draws a diagonal line in terminal
 *
 * @n: int
 */
void print_diagonal(int n)
{
	int i, j;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
}
}
