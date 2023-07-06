#include "main.h"
/**
 * print_binary - This function convert from decimal to binary
 * @n: variable containing the decimal to convert
 */
void print_binary(unsigned long int n)
{

	unsigned long int current;
	int i = 31;
	int count = 0;

	while (i >= 0)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
