#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Allocate memory for a 2D array
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: Pointer to the allocated 2D array, or NULL if width or height is <= 0
 */
int **alloc_grid(int width, int height)
{
int **tab;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
tab = malloc(height * sizeof(int *));
if (tab == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
tab[i] = malloc(sizeof(int) * width);
if (tab[i] == NULL)
{
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
tab[i][j] = 0;
}
}
return (tab);
}
