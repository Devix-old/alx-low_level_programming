#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 *
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The sum of all the data in the linked list or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	if (head == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
