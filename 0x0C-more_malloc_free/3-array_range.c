#include <stdlib.h>

/**
 * array_range - create an array of integers from min to max (inclusive)
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
    int *arr;
    int i, len;

    /* If min > max, return NULL */
    if (min > max)
        return (NULL);

    /* calculate the length of the array */
    len = max - min + 1;

    /* allocate memory for the array */
    arr = malloc(sizeof(int) * len);

    /* If malloc fails, return NULL */
    if (arr == NULL)
        return (NULL);

    /* populate the array with values from min to max */
    for (i = 0; i < len; i++)
        arr[i] = min + i;

    /* return a pointer to the newly created array */
    return (arr);
}
