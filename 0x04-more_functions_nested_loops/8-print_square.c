#include "main.h"
/**
 * print_square - prints a triangle, followed by a new line
 * @size:  is the size of the triangle
 */
void print_square(int size)
{
	int i, j;
if (size <= 0)
{
putchar ('\n');
}
else
{
for (j = 0; j < size; j++)
{
for (i = 0; i < size; i++)
{
putchar('#');
}
putchar('\n');
}
}
}
