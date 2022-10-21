#include "lists.h"

/**
 * list_len - Returns the number of elements in linked list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	const list_t *present;
	size_t f;

	f = 0;
	present = h;
	while (present != NULL)
	{
		present = present ->next;
		f++;
	}
	return (f);
}
