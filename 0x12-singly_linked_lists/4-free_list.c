#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the head node of the linked list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
