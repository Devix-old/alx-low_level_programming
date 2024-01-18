#include "search_algos.h"
#include "math.h"

/**
 * jump_list - Searches for a value in a sorted linked list using jump search
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the linked list
 * @value: Value to search for
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump, i;
	listint_t *L, *R;

	R = list;
	L = list;
	jump = sqrt(size);

	if (list == NULL)
		return (NULL);

	while (value > R->n && R->index < size - 1)
	{
		L = R;
		for (i = 0; i < jump; i++)
			if (R->next)
				R = R->next;
		printf("Value checked at index [%ld] = [%d]\n", R->index, R->n);
	}

	if (R->index >= size)
	{
		return (NULL);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", L->index, R->index);

	while (L != R)
	{
		printf("Value checked at index [%ld] = [%d]\n", L->index, L->n);
		if (L->n == value)
			return (L);
		L = L->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", L->index, L->n);
	return (NULL);
}
