#include "lists.h"

/**
 * sum_listint - sums of sll the data of linked list
 * @head: pointer to list structure
 * Return: sum of all data otherwise if empty, 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
