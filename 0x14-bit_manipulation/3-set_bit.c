/**
 * set_bit - Sets the value of a bit at a given index
 * @n: Pointer to the number
 * @index: Index of the bit to set
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
