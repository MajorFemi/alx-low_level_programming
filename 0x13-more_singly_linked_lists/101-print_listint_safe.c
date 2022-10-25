#include "lists.h"

/**
 * print_listint_safe - prints linked list
 * @head: pointer to list structure
 * Return: number of nodes. Exits with 98 when fails.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *print, *tempy;

	tempy = head;
	if (tempy == NULL)
		exit(98);

	while (tempy != NULL)
	{
		print = tempy;
		tempy = tempy->next;
		nodes++;
		printf("[%p] %d\n", (void *)print, print->n);


		if (print < tempy)
		{
			printf("-> [%p] %d\n", (void *)tempy, tempy->n);
			break;
		}
	}

	return (nodes);
}
