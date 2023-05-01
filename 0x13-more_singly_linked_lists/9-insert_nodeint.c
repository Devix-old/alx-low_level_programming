#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be stored in the new node.
 * Return: The address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *ptr2, *counter;
	unsigned int len = 0;

	counter = *head;
	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	if (head == NULL || *head == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;
	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}
	while (counter->next != NULL)
	{
		counter = counter->next;
		len++;
	}
	if (len == idx)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = ptr2;
		return (ptr2);
	}
	idx--;
	while (idx > 0 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}
	if (ptr == NULL)
		return (NULL);
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
