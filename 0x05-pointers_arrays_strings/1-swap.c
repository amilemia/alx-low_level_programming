#include "main.h"

/**
 * swap_int - Swaps values of two integers
 * @a: Pointer of integer value
 * @b: Pointer of integer value
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
