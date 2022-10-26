#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list structure
 * @idx: index to be inserted at
 * @n: integer data for inserted node
 * Return: address of new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	prev = *head;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (temp != NULL)
	{
		if (i == idx)
		{
			new->next = temp;
			prev->next = new;
			return (new);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (idx == i)
	{
		prev->next = new;
		return (new);
	}

	free(new);
	return (NULL);
}
