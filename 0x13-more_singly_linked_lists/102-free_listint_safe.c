#include "lists.h"

/**
 * free_listint_safe - free linked list and set head to null
 * @h: pointer to list of structure
 * Description: function should work for circular list
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tempy, *allow;
	size_t nodes = 0;

	tempy = *h;
	while (tempy != NULL)
	{
		nodes++;
		allow = tempy;
		tempy = tempy->next;
		free(allow);

		if (allow < tempy)
			break;
	}
	*h = NULL;

	return (nodes);
}
