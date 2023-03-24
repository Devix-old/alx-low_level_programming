include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 * Return: 1 if @c is uppercase, 0 otherwise
 */
#include <stdio.h>
int main(void) {
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else if (i % 3 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar(' ');
}
else if (i % 5 == 0)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
putchar(' ');
}
else
{
printf("%d ", i);
}
}
putchar('\n');
return (0);
}
