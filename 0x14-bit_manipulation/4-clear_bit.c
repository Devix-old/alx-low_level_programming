#include "main.h"
#include <stdio.h>
/**
 * cleat_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to get the bit from
 * @index: the index of the bit to sef 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k = 1;
	int add = 1;

	if (index > 31)
		return (-1);

	for (k = 0; k < index; k++)
	{
		add *= 2;
	}
	if ((*n & (1 << index)))
		*n -= add;

	return (1);
}
