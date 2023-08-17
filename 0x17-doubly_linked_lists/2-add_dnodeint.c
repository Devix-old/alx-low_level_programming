#include "lists.h"
/**
 * add_dnodeint - This function add new node at the begining of a dll
 * @head: pointe to the head of the dll
 * @n: the element of the new node
 * Return: NULL if malloc fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
