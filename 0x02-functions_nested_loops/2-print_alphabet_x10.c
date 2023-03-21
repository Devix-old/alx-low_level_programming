#include "main.h"
/**
 * print_alphabet_x10 - prints all lowercase
 *letters of the alphabet to the console
 *
 * Description: This function iterates through each letter of the alphabet
 * ten times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 97;
int counter = 0;
while (counter < 10)
{
while (i < 123)
{
_putchar(i);
i++;
}
_putchar('\n');
i = 97;
counter++;
}
}
