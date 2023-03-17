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
char STR[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
int i;
for (i = 0 ; i < 26 ; i++)
{
putchar (str[i]);
}
for (i = 0 ; i < 26 ; i++)
{
putchar (STR[i]);
}
putchar('\n');
	return (0);
}
