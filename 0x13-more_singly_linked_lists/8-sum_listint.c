#include "lists.h"
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;
	if (head == NULL)
		return (0);

	while (node != NULL)
	{
		sum = node->n + sum;
		node = node->next;
	}
	return (sum);
}
