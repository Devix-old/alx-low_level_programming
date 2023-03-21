#include "main.h"
/**
* print_sign - checks number if <0 or ==0 or >0.
* @n: The integer n to be checked.
* Return: 1 0 -1 .
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('=');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
