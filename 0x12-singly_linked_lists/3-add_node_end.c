#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to the end of linked list
 * @head: head
 * @str: string
 * Return: pointer to new element of list, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tempy;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	new_node->len = length;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		tempy = *head;
		while (tempy->next)
			tempy = tempy->next;
		tempy->next = new_node;
	}
	return (new_node);
}
