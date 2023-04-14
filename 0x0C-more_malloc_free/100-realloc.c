#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: Size of the new memory block.
 *
 * Return: Pointer to the new memory block, or NULL if it fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	relloc = malloc(new_size);

	if (relloc == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	relloc[i] = clone[i];

	free(ptr);

	return (relloc);
}
