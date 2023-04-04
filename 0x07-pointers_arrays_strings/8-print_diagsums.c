#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print sum of two diagonals in matrice
 * @a: 2D Array
 * @size: Length of the array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[k];
			}

			if ((i + j) == size - 1)
			{
				sum2 += a[k];
			}
			k++;
		}
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
