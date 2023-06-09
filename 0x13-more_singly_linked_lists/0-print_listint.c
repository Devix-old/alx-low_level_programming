#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of listint_t list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
