#include "lists.h"

size_t count_nodes(const listint_t *head);

/**
 * count_nodes - Counts the number of nodes in a linked list
 * @head: Pointer to the head node of the list
 *
 * Return: Number of nodes in the list
 */

size_t count_nodes(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}

/**
 * print_listint_safe - Prints a linked list, even if it has a loop
 * @head: Pointer to the head node of the list
 *
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *loop_node = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current >= current->next)
		{
			loop_node = current->next;
			while (loop_node >= current)
			{
				count++;
				printf("[%p] %d\n", (void *)loop_node, loop_node->n);
				if (loop_node == current)
					break;
				loop_node = loop_node->next;
			}
			break;
		}
		current = current->next;
	}

	printf("-> [%p] %d\n", (void *)current, current->n);
	count++;

	return (count);
}
