#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c;
	dlistint_t *temp, *prev, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (temp = *h, c = 1; temp && c < idx; c++, temp = temp->next)
		prev = temp;
	if (idx == 0)
	{
		*h = new; new->prev = NULL;
		new->next = (temp == NULL) ? NULL : temp;
		return (new);
	}
	if (idx == 1)
	{
		prev = *h;
		temp = ((*h)->next == NULL) ? NULL : (*h)->next;
		new->prev = prev; new->next = temp; prev->next = new;
		if (temp)
			temp->prev = new;
		return (new);
	}
	if (idx == c && temp == NULL)
	{
		if (prev != NULL)
		{
			new->prev = prev; new->next = NULL;
			prev->next = new; return (new);
		}
		free(new); return (NULL);
	}
	else if (idx != c && temp == NULL)
	{
		free(new); return (NULL);
	}
	prev = temp; temp = temp->next; new->prev = prev;
	new->next = temp; prev->next = new; temp->prev = new;
	return (new);
}
