#include "search_algos.h"
#include <math.h>
#include "search_algos.h"
#include <stdbool.h>

/**
 * jump_search - Jump search algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 * @value: The searched value
 * Return: Return the index of the value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t r = 0, l;
	int square = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[r] < value && r < size)
	{
		printf("Value checked array[%ld] = [%d]\n", r, array[r]);
		r += square;
	}
	l = r - square;
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);
	for (; l <= r; l++)
	{
		if (r <= size)
		{
			printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		}
		if (array[l] == value)
			return ((int)l);
	}
	return (-1);
}
