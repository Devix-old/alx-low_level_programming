#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        using interpolation search algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 * @value: The searched value
 *
 * Return: Return the index of the value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (low < high)
	{
		pos = low + (((double)(high - low) / (
			array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
