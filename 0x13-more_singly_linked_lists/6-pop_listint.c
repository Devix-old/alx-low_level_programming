#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns the head node's data (n).
 *
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The data of the head node that was deleted, or 0 empty.
 */
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
