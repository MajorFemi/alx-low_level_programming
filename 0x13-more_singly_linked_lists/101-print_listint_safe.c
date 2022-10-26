#include "lists.h"

/**
 * print_listint_safe - prints the elements in a linked list
 * @head: pointer to list structure
 * Return: The number of nodes. Exits with 98 on failure
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tempy = NULL;
	const listint_t *printnode = NULL;
	size_t counter = 0;
	size_t newnode;

	tempy = head;
	while (tempy)
	{
		printf("[%p] %d\n", (void *)tempy, tempy->n);
		counter++;
		tempy = tempy->next;
		printnode = head;
		newnode = 0;
		while (newnode < counter)
		{
			if (tempy == printnode)
			{
				printf("-> [%p] %d\n", (void *)tempy, tempy->n);
				return (counter);
			}
			printnode = printnode->next;
			newnode++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
