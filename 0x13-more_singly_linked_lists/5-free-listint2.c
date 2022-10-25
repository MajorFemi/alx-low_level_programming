#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to listint_t structure
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tempy;

	if (head == NULL)
		return;

	tempy = *head;
	while (*head)
	{
		tempy = *head;
		(*head) = (*head)->next;
		free(tempy);
	}
	*head = NULL;
}
