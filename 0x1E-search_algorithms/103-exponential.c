#include "search_algos.h"
#include <stdio.h>

/**
 * binarysearch - Searches for a value in a sorted array using binary search
 * @array: Pointer to the sorted array
 * @L: Left index of the range
 * @R: Right index of the range
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binarysearch(int *array, size_t L, size_t R, int value)
{
	int m;
	size_t i;

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		m = (L + R) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			R = m - 1;
		else
			L = m + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                     using exponential search algorithm
 * @array: Pointer to the sorted array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound - 1);

	return (binarysearch(
		array, bound / 2, (bound < size - 1) ? bound : size - 1, value));
}
