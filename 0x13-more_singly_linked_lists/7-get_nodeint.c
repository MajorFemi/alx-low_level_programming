#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: pointer to list structure
 * @index: index of the node
 * Return: nth node otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
