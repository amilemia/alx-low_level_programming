#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
			--n;
		else if (n < 98)
			++n;
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
