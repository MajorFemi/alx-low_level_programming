#include "lists.h"

/**
 * free_listint_safe - free linked list and set head to null
 * @h: pointer to list of structure
 * Description: function should work for circular list
 * Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	int diff;
	listint_t *tempy;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tempy = (*h)->next;
			free(*h);
			*h = tempy;
			nodes++;
		}
		else
		{
			free(*h);
			*h = NULL;
			nodes++;
			break;
		}
	}

	*h = NULL;

	return (nodes);
}
