#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a matrix using malloc
 * @width: Width of matrix
 * @height: Height of matrix
 *
 * Return: Pointer to a 2 dimensional array
 * of integers or NULL if zero or negative
*/

int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **) malloc(height * sizeof(int *));

		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *) malloc(width * sizeof(int));

			if (!ptr[i])
			{
				for (j = 0; j <= i; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
				ptr[a][b] = 0;
		}
		return (ptr);
	}

}
