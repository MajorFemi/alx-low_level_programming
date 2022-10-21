#include "lists.h"
#include <string.h>

/**
 * add_node - adds node to the linked list head
 * @head: head
 * @str: string
 * Return: pointer to new head of list, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tempy;
	int length = 0;

	tempy = malloc(sizeof(list_t));
	if (tempy == NULL)
		return (NULL);

	while (str[length])
		length++;

	tempy->len = length;
	tempy->str = strdup(str);
	tempy->next = *head;
	*head = tempy;
	return (tempy);
}
