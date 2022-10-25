#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to list structures
 * Return: pointer to the first node of the rev.list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
