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
	if (previous == NULL)
		return (-1);
	if (current == NULL)
		return (-1);
	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	while (index > 0 && current != NULL)
	{
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
