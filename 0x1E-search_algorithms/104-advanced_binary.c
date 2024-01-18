#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * advanced_binary - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in
 * @start: Starting index of the subarray to search in
 * @end: Ending index of the subarray to search in
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t i;
	size_t mid;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");

	mid = start + (end - start) / 2;

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary_recursive(array, start, mid, value));
		else
			return (mid);
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, end, value));
	else
		return (advanced_binary_recursive(array, start, mid - 1, value));
}
