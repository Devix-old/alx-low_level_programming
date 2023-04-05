#include <stdio.h>
/**
 * _puts_recursion - Prints a string using recursion.
 * @s: The string to print.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
return;
int i = 0;
putchar(*(s + i));
s++;
_puts_recursion(s);
}
