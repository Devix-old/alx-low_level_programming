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
int a = 0;
int b;

while (a <= 99)
{
b = a + 1;
while (b <= 99)
{
putchar (a / 10 + '0');
putchar (a % 10 + '0');
putchar (' ')
putchar (b / 10 + '0');
putchar (b % 10 + '0');
if (a != 98)
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
}
putchar('\n');
return (0);
}

