#include "lists.h"
/**
 * add_node - Adds a new node to the beginning of a linked list.
 * @head: A pointer to the head of the list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
