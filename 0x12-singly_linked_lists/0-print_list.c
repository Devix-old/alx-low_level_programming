#include "lists.h"
/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	printf("[%d] %s\n", h->len, h->str);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
