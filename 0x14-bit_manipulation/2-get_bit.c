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
	if (!n || index > 31)
		return (-1);
	return (n & (1 << index) ? 1 : 0);
}
