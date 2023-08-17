#include "lists.h"
/**
 * dlistint_len - function that count the number of elements of a linked list
 * @h: pointer to the head of the list
 * Return: Number of element in the dll
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t count = 0;

	head = h;
	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}
