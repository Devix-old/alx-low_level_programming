#include <stdio.h>
#include <string.h>
/**
 * print_array - Prints the elements of an integer array.
 *
 * @a: The integer array to be printed.
 * @n: The number of elements in the array.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{

printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
