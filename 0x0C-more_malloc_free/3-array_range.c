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
if (min > max){
return (NULL);
}
len = max - min + 1;
arr = malloc(sizeof(int) * len);
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
arr[i] = min + i;
}
return (arr);
}
