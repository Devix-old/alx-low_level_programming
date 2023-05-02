#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	if (*head == NULL)
		return (NULL);

	temp = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}

	*head = temp;
	return (temp);
}
