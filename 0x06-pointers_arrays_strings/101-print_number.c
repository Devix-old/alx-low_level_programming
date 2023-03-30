#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n > 9 || n < -9)
{
print_number(n / 10);
}
putchar(n % 10 + '0');
}
