#include "function_pointers.h"

/**
 * array_iterator - Applies a given function to each element of an array
 * @array: The array to apply the function to
 * @size: The size of the array
 * @action: The function to apply to each element of the array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
