#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a `dlistint_t` list
 * @head: double pointer to head node
 * @n: value to store in new node
 * Return: Address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	while (temp && temp->next)
		temp = temp->next;

	if (temp)
	{
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
