#include <stdio.h>
/**
 * _puts - Prints a string
 * @str: The string to be printed
 */

void _puts(char *str)
{
int i = 0;
int x = 100;
while (x != 0)
{
putchar(str[i]);
x = str[i];
i++;
}
putchar('\n');
}
