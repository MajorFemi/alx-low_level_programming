#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: A pointer to listint_t structure
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tempy;

	while (head)
	{
		tempy = head;
		head = head->next;
		free(tempy);
	}
	free(head);
}
