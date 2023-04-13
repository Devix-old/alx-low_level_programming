#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 *         Exit with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
void *tab = malloc(b);
if (tab == NULL)
{
exit(98);
}
return (tab);
}
