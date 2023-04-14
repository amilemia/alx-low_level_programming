#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * containing all values from min to max.
 *
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: Pointer to the created array.
 * If malloc fails or min is greater than max, the function returns NULL.
 */

int *array_range(int min, int max)
{
	int *array, i = 0, j = min;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
		return (NULL);

	while (i <= max - min)
		array[i++] = j++;

	return (array);
}
