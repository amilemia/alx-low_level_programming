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
	const listint_t *slow = head, *fast = head;

	if (head == NULL)
		exit(98);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("%d\n", slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("%d\n", slow->n);
			count++;
			break;
		}
	}

	return (count);
}
