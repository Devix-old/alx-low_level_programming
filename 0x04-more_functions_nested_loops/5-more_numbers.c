#include "main.h"
/**
 * more_numbers - prints 10 times from 0 to 14, followed by a new line
 */
void more_numbers(void)
{
int i;
int y = 0;
for (i = 0; i < 10; i++)
{
for (y = 0; y < 15; y++)
{
if (y > 9){
_putchar(y / 10 + '0');
}
_putchar(y % 10 + '0');
}
_putchar('\n');
}
}
