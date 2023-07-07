/**
 * clear_bit - Clears a bit at a given index
 * @n: Pointer to the number
 * @index: Index of the bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1UL << index;
	if (index > 63)
		return (-1);

	if ((*n & i) != 0)
		*n ^= i;
	return (1);
}
