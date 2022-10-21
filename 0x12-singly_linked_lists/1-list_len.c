#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in linked list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
