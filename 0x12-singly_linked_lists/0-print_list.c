#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all element of list_t list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *present;
	size_t f;

	f = 0;
	present = h;
	while (present != NULL)
	{
		printf("[%d] %s\n", present->len, present->str);
		present = present->next;
		f++;
	}

	return (f);
}
