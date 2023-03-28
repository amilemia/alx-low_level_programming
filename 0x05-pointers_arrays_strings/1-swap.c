#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: pointer to first int
 * @b: pointer to second int
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
