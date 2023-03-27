#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int i;
for (i = _strlen(s) - 1; i >= 0; i--)
putchar(s[i]);
putchar('\n');
}}
