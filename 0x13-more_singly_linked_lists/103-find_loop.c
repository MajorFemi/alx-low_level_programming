#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: pointer to list of structure
 * Return: Address of node where loop start, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *two = head;

	if (!head)
		return (NULL);

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;

		if (one == two)
		{
			one = head;
			while (one != two)
			{
				one = one->next;
				two = two->next;
			}
			return (two);
		}
	}
	return (NULL);
}
