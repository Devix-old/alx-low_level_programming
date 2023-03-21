#include "main.h"
/**
 * print_alphabet - prints all lowercase letters of the alphabet to the console
 *
 * Description: This functionate through each letter of
 * print_alphabet_x10
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
