#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the n elements of an array of integers
 * @a: The array to print
 * @n: Number of elements in the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
