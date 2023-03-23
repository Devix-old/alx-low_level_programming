#include "main.h"
/**
 * print_numbers - Prints the digits from 0 to 9 using _putchar.
 * exept 2 and 4
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if ((i != 2) || (i != 4))
_putchar(i + '0');
}
_putchar('\n');
}
