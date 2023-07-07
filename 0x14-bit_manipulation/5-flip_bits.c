/**
 * flip_bits - Counts the number of bits to flip to get from n to m
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = n ^ m;
	unsigned int count = 0;

	while (y != 0)
	{
		count += y & 1;
		y >>= 1;
	}
	return (count);
}
