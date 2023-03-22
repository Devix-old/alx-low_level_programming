#include "main.h"
/**
* print_last_digit - print last digit of a number
* @r: The number value to be checked.
* Return: The last digit
*/
int main(void)
{
int r;
print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
