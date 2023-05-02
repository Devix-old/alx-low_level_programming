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
	listint_t *ptr = *head, *ptr2;
	unsigned int len = 0;

	if (!head)
		return (NULL);
	ptr2 = malloc(sizeof(listint_t));
	if (!ptr2)
		return (NULL);
	ptr2->n = n;
	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}
	while (ptr && len < idx - 1)
	{
		ptr = ptr->next;
		len++;
	}
	if (!ptr)
	{
		free(ptr2);
		return (NULL);
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
