#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int i, y;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('\\');
_putchar('\n');
for (y = 0; y <= i; y++)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
