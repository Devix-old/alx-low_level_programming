#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{

	int count = 0;

	if (head == NULL)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}

	return (count);
}
