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
	size_t count_nodes = 0;

    while (h != NULL)
    {
        count_nodes++;

        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        h = h->next;
    }
	
	return (count_nodes);
}
