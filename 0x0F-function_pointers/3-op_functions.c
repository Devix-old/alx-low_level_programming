#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the addition
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the subtraction
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First integer (numerator)
 * @b: Second integer (denominator)
 *
 * Return: Result of the division
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Computes the modulo of two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: Result of the modulo operation
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error");
exit(100);
}
return (a % b);
}
