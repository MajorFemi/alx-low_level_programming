#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index of linked list
 * @head: pointer to list structures
 * @index: index of the node
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempy, *delete;
	unsigned int i = 0;

	tempy = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		delete = tempy;
		if (tempy->next)
			tempy = tempy->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = tempy->next;
	else if (tempy->next)
		delete->next = tempy->next;
	else
		delete->next = NULL;

	free(tempy);
	return (1);
}
