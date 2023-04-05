/**
 * factorial - Computes the factorial of a number.
 * @n: The number whose factorial is to be computed.
 *
 * Return: If n is greater than or equal to 0, the function returns n!.
 *         Otherwise, the function returns -1 to indicate an error.
 */
int factorial(int n)
{
if (n == 1 || n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
