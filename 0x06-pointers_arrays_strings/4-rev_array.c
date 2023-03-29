#include <string.h>
#include <stdio.h>
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, j, temp;
temp = 0;
j = 0;
for (i = n - 1; i >= n / 2; i--, j++)
{
temp = a[j];
a[j] = a[i];
a[i] = temp;
}
}
