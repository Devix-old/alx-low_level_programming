#include "main.h"
/**
* jack_bauer - print 24 hours with seconds and minutes
* @r: The integer value to be checked.
* Return: return 0
*/
void jack_bauer(void)
{
int x = 0;
int y = 0;
while (y < 24)
{
while (x < 60)
{
putchar(y / 10 + '0');
putchar(y % 10 + '0');
putchar(':');
putchar(x / 10 + '0');
putchar(x % 10 + '0');
putchar('\n');
x++;
}
x = 0;
y++;
}
return (0);
}
