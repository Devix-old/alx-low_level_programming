#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: number of elements to allocate.
 * @size: size in bytes of each element.
 *
 * Return: Pointer to the allocated memory or NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *tab;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
tab = malloc(nmemb * size);
if (tab == NULL) 
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
tab[i] = 0;
}
return (tab);
}
