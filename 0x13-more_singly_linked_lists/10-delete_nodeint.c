#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;

	previous = *head;
	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	while (index > 0)
	{
		if (current->next == NULL)
			return (-1);
		previous = current;
		current = current->next;
		index--;
	}
	if (current == NULL)
	{
		previous->next = NULL;
		free(current);
		return (1);
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
