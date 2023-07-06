#include <string.h>
#include <math.h>
unsigned int binary_to_uint(const char *b)
{
	int i = 1;
	unsigned int dec = 0;
	int len_b = strlen(b) - 1;

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
