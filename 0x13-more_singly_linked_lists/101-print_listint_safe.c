#include "lists.h"

/**
 * print_listint_safe - prints the elements in a linked list
 * @head: pointer to list structure
 * Return: The number of nodes. Exits with 98 on failure
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tempy;
	size_t nodes;
	const listint_t *hold;

	tempy = head;
	if (tempy == NULL)
		exit(98);

	while (tempy != NULL)
	{
		hold = tempy;
		tempy = tempy->next;
		nodes++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < tempy)
		{
			printf("-> [%p] %d\n", (void *)tempy, tempy->n);
			break;
		}
	}

	return (nodes);
}
