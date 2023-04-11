#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and initialise it with char
 * @size: Size of array
 * @c: Char to initialise array
 * 
 * Return: NULL if fail or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}