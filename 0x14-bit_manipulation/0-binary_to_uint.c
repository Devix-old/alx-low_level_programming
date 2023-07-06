#include <string.h>

/**
 * binary_to_unit - Convert binary to decimal
 * @b: string containing the binary number
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 1;
	unsigned int dec = 0;
	int len_b = strlen(b) - 1;

	if (b == NULL)
		return (0);
	while (len_b >= 0)
	{
		if (b[len_b] == '1')
			dec = dec + i;
		if (b[len_b] != '1' && b[len_b] != '0')
			return (0);
		len_b--;
		i = i * 2;
	}
	return (dec);
}
