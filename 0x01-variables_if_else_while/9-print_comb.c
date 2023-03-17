#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there*/
/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0 ; i < 9 ; i++)
{
putchar (i + '0');
putchar(',');
putchar(' ');
}
putchar(9 + '0');
return (0);
}
