/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *ptr;

	ptr = (char *)&num;
	num = 1;
	if (*ptr)
		return (1);
	else
		return (0);
}
