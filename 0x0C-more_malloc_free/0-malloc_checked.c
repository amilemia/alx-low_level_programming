#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and checks for errors.
 *
 * @b: The number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 * If malloc fails, the function
 * terminates the program with exit status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
