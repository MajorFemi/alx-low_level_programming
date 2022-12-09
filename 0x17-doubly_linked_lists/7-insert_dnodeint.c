#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a node
 * @h: The double pointer to the head.
 * @idx: The index to insert new node at.
 * @n: The data to add to new node.
 * Return: A pointer to new element, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = NULL;
	unsigned int c = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (!h || !(*h))
		*h = new;
	else
	{
		temp = *h;
		while (idx != c++ && temp->next)
			temp = temp->next;
		if (temp->next)
			new->prev = temp->prev;
		else
			new->prev = temp;
		if (idx == c)
			temp->next = new, new->prev = temp;
		else if (idx == c - 1)
		{
			if (temp->prev)
				temp->prev->next = new;
			else
				*h = new;
			temp->prev = new;
			new->next = temp;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}

	return (new);
}
