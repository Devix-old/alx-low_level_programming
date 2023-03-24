#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	long largest_factor = 0;

	while (num % 2 == 0)
	{
		largest_factor = 2;
		num /= 2;
	}

	for (long i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}

	if (num > 2)
	{
		largest_factor = num;
	}

	printf("%ld\n", largest_factor);

	return (0);
}
