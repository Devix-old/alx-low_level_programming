#include <string.h>
#include <stdio.h>
/**
 * diagonal_sum - calculates the sum of the diagonal elements in a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0, i, y;
for (i = 0, y = size - 1; i < size; i++, y--)
{
sum1 = *(a + size * i + i) + sum1;
sum2 = *(a + size * i + y) + sum2;
}
printf("%d, ", sum1);
printf("%d", sum2);
printf("\n");
}
