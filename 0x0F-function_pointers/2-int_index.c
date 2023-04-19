#include <stdio.h>
/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to an integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that compares integers.
 *
 * Return: Index of the first integer that matches the comparison function,
 *         or -1 if no match is found or if input is invalid.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
