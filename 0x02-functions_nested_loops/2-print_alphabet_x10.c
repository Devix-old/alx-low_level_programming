#include <unistd.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there*/
/**
 * main - prints all alphabet in lower case x 10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int print_alphabet()
{
int i = 97;
while (i < 123)
{
_putchar(i);
i++;
}
}
int y = 0;
for (y = 0; y <= 9 ; y++)
{
print_alphabet();
_putchar('\n');
}
return (0);
}
