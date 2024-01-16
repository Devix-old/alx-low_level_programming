#include "search_algos.h"
/**
 * binary_search - Function that search for a value inside an array using
 * Binary search
 * @array: Pointer to the first element of the array to search in
 * @size: The size of the array
 * @value: The searched value
 * Return: return the value searched
*/
int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = size - 1, M;

	if (array == NULL)
		return (-1);
	while (R >= L)
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
