#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number as a string.
 *
 * Return: converted number or 0 if b is NULL or contains non-binary digits.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int k = 1;
	int len;

	for (len = 0; b[len] != '\0'; len++)
		;
	if (!b)
		return (0);

	while (len > 0)
	{
		if (b[len - 1] != '1' && b[len - 1] != '0')
			return (0);

		if (b[len - 1] == '1')
			dec += k;

		k *= 2;
		len--;
	}
	return (dec);
}
