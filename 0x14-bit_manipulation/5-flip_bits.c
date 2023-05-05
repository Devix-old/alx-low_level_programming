/**
 * flip_bits - returns the number of bits we need to flip 2 n
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, i;

	for (i = 32; i > 0; i--)
	{
		if ((n & (1 << i)) != (m & (1 << i)))
			count++;
	}

	return (count);
}
