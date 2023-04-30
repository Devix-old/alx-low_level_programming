#include "lists.h"

int pop_listint(listint_t **head)
{
	int num;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	ptr = *head;

	*head = (*head)->next;
	num = ptr->n;
	free(ptr);
	return (num);
}
