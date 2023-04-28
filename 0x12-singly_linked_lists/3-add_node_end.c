#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the new node or NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	int len = strlen(str);
	list_t *new,*temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	return (new);
}
