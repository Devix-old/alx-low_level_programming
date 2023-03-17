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
int y;
int x;
for (i = 0; i < 10 ; i++)
{
for (y = x ; y < 10 ; y++)
{
if ((i + '0') != (y + '0'))
{
putchar(i + '0');
putchar(y + '0');
putchar (',');
putchar (' ');
}
}
x = x + 1;
}
putchar('\n');
return (0);
}
