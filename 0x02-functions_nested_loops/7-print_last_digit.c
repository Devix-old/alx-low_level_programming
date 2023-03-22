#include "main.h"
/**
* print_last_digit -print last digit
* @r: The integer value to be checked.
* Return: The last digit
*/
int print_last_digit(int r)
{
int res;
if (r < 0)
	r = r * -1;
res = r % 10;
if (res < 0)
	res = r * -1;
_putchar(res + '0');
return (res);
}
