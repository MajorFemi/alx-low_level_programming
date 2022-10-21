#include "lists.h"

/**
 * free_list - frees all elements in linked list
 * @head: head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tempy;

	tempy = head;
	while (head)
	{
		tempy = head;
		head = head->next;
		free(tempy->str);
		free(tempy);
	}
	free(head);
}
