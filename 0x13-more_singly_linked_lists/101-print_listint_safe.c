#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			count++;

			while (tortoise != head)
			{
				head = head->next;
				tortoise = tortoise->next;
				printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
				count++;
			}
			printf("-> [%p] %d\n", (void *)head, head->n);
			count++;
			return (count);
		}
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}

	return (count);
}
