#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a `dlistint_t` list
 * @head: double pointer to head node
 * @n: value to store in node
 * Return: address of new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (temp == NULL)
		new->next = NULL;
	else
	{
		while (temp->prev)
			temp = temp->prev;

		temp->prev = new;
		new->next = temp;
	}
	*head = new;

	return (*head);
}
