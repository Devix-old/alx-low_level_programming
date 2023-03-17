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
int i = 0;
for (i = 0 ; i < 26 ; i++)
{
putchar (str[i]);
}
putchar('\n')
	return (0);

}
