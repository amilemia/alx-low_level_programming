#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: A pointer to the first element of the list_t list
 *
 * Return: The number of nodes in the list_t list
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		node_count++;
	}
	return (node_count);
}
