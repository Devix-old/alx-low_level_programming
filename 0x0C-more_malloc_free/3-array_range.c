#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create an array of integers from min to max (inclusive)
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int len, *tab, i;
if (min > max)
{
return (NULL);
}
len = max - min;
tab = malloc((len * sizeof(int)) + 1);
if (tab == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
tab[i] = min + i;
}
tab[i + 1] = '\0';
return (tab);
}
