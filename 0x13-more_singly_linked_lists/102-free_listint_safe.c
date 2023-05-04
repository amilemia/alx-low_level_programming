#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to pointer to the head of the list
 *
 * Return: Size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;

		if (next >= current)
		{
			*h = NULL;
			break;
		}

		current = next;
	}

	return (count);
}
