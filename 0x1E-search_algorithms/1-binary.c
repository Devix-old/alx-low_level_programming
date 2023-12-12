#include "search_algos.h"
#include <stdbool.h>

/**
 * print_array - Prints an array in a given range
 * @array: Pointer to the array
 * @L: Left index of the range
 * @R: Right index of the range
 */
void print_array(int *array, size_t L, size_t R)
{
	size_t i;

	for (i = L; i <= R; i++)
	{
		printf("%d", array[i]);
		if (i < R)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the sorted array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1;
	int m;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		print_array(array, L, R);

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
