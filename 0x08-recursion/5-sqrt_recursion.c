/**
 * helper - Finds the square root of a number recursively
 * @n: The number to find the square root of
 * @i: The current value to be squared
 *
 * Return: -1 if n does not have a natural square root
 */
int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - Finds the square root of a number using recursion
 * @n: The number to find the square root of
 *
 * Return: or -1 if n is negative or does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0));
}
