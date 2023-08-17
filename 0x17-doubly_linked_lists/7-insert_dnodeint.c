#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *next, *new_node;

	current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current != NULL && idx > 1)
	{
		current = current->next;
		idx--;
	}
	if (idx != 0)
		return (NULL);
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	next = current->next;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current->next = new_node;
	new_node->prev = current;
	new_node->next = next;
	next->prev = new_node;

	return (new_node);
}
