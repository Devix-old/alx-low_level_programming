#include "main.h"
/**
 * print_alphabet - prints all lowercase letters of the alphabet to the console
 *
 * Description:loop to iterate through each letter of
 * the alphabet in lowercase and prints them to the console
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';
while (c <= 'z')
{
	_putchar(c);
c++;
}
_putchar('\n');
}
