#include "lists.h"
/**
 * listint_len - function return the number of elements
 * @h: pointer to head of listint_t list
 *
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
