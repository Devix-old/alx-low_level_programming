#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at the given index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = n;
	int first_one = 0;
	int i = 31;

	while (first_one == 0)
	{
		if (temp & 1)
			first_one++;
		i--;
	}
	if (index > i || index > 31)
		return (-1);
	temp = n >> index;
	return (temp & 1);
}
