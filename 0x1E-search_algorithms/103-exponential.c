#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints the elements of an array between indices L and R
 * @array: Pointer to the array
 * @L: Lower index
 * @R: Upper index
 */
void print_array(int *array, int L, int R)
{
	int i;

	printf("Searching in array: ");
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
 * @array: Pointer to the array
 * @L: Lower index
 * @R: Upper index
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search(int *array, int L, int R, int value)
{
	int M;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		print_array(array, L, R);
		M = (R + L) / 2;

		if (array[M] == value)
			return (M);
		if (value > array[M])
			L = M + 1;
		else
			R = M - 1;
	}

	return (-1);
}

/**
 * find_min - Finds the minimum of two values
 * @a: First value
 * @b: Second value
 *
 * Return: The minimum value
 */
int find_min(int a, int b)
{
	return ((a < b) ? a : b);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 * exponential search
 * @array: Pointer to the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%ld] and [%d]\n", i / 2, find_min(
		i, size - 1));
	return (binary_search(array, i / 2, find_min(i, size - 1), value));
}
