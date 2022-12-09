#include "lists.h"

/**
 * free_dlistint - free a `dlistint_t` doubly linked list
 * @head: head of LL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *hold;

	if (head == NULL)
		return;

	temp = head;
	while (temp->prev)
		temp = temp->prev;
	while (temp)
	{
		hold = temp;
		temp = temp->next;
		free(hold);
	}
}
