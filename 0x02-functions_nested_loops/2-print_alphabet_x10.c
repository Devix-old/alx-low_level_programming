#include "main.h"
/**
 * print_alphabet - prints all lowercase letters of the alphabet to the console
 *
 * Description: This functionate through each letter of
 * the alphabet in lowercase and prints them to the con
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
