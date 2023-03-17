#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there*/
/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0 ; i < 26 ; i++)
{
putchar (str[i]);
}
	return (0);

}
