#include "lists.h"

/**
 * pop_listint - del the head of linked list
 * @head: pointer to list structure
 * Return: head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node - (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
