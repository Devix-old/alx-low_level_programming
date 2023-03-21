#include <unistd.h>
#include "main.h"
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there*/
/**
 * main - prints all alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i = 97;
while (i < 123)
{
	_putchar(i);
	i++;
}
_putchar('\n');

}
print_alphabet();
int main(void){
return (0);
}
