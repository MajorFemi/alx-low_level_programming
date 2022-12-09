#include "lists.h"

/**
 * print_dlistint - Print all the values of each node in a `dlistint_t` list
 * @h: head pointer in doubly linked list
 * Return: Number of nodes in LL
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tempy;
	size_t count;

	tempy = h;
	while (tempy && tempy->prev)
		tempy = tempy->prev;

	for (count = 0; tempy; count++, tempy = tempy->next)
		printf("%d\n", tempy->n);

	return (count);
}
