#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to list structure
 * @idx: index of the list where new node should be added
 * @n: int data for new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *tempy;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}

	tempy = *head;
	while (i < idx)
	{
		tempy = tempy->next;
		i++
	}

	new_node->n = n;
	new_node->next = tempy->next;
	tempy->next = new_node;
	return (new_node);
}
