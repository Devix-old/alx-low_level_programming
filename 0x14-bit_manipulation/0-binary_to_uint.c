#include <stdio.h>
#include "main.h"
#include <string.h>

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
	int len = strlen(b);

	if (b == NULL)
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
