#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initialized with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the created array, or NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *tableau;
tableau = malloc(sizeof(c) * size);
if (size == 0 || tableau == NULL)
return (NULL);
for (i = 0; i < size; i++)
tableau[i] = c;
return (tableau);
}
