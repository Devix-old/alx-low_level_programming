#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 * Interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);
	pos = low + (((double)(high - low) / (
		array[high] - array[low])) * (value - array[low]));
	while (low <= high && value >= array[low] && value <= array[high])
	{

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) / (
			array[high] - array[low])) * (value - array[low]));
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	return (-1);
}
