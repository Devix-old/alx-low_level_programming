#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of a listint_t linked list at a
 *                        given index.
 *
 * @head: Pointer to the head node of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: Pointer to the node at the specified index, or NULL if the index
 *         is out of range or the list is empty.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;
	if (head == NULL)
	{
		return (0);
	}
	while (i != index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
