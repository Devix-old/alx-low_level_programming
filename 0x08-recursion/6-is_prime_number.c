/**
 * is_prime_helper - checks if an integer is a prime number
 * @n: the integer to check
 * @i: the divisor to test
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
    if (n < 2)  /* 0 and 1 are not prime */
        return (0);

    if (i * i > n)  /* no divisor found up to sqrt(n) */
        return (1);

    if (n % i == 0)  /* n is divisible by i */
        return (0);

    return (is_prime_helper(n, i + 1));  /* test next divisor */
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
    return (is_prime_helper(n, 2));  /* start with divisor 2 */
}
