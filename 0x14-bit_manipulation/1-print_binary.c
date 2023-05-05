#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 31;
	int first_one = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			first_one++;
		}
		else if (first_one)
			_putchar('0');
		i--;
	}
}

