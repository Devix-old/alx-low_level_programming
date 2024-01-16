#include "search_algos.h"

/**
 * print_array - Prints elements of an array within a given range.
 * @array: Pointer to the array.
 * @L: Left index of the range.
 * @R: Right index of the range.
 *
 * Description: This function prints the elements of the array within
 * the specified range [L, R].
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
 * binary_search - Searches for a value inside an array using Binary search.
 * @array: Pointer to the first element of the array to search in.
 * @size: The size of the array.
 * @value: The searched value.
 *
 * Return: Index of the value in the array; -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = size - 1, M;

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
