#include <stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 *
 * @s: The string to be printed
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
}
putchar(*s);
s--;
}
