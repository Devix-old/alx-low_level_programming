#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - calculates the minimum number of coins
 *        required to give a specific amount of change
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int coins = 0;
int cent = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (cent < 0)
{
printf("0\n");
}
else
{
while (cent / 25 > 0)
{
cent = cent - 25;
coins++;
}
while (cent / 10 > 0)
{
coins++;
cent = cent - 10;
}
while (cent / 5 > 0)
{
coins++;
cent = cent - 5;
}
while (cent / 2 > 0)
{
coins++;
cent = cent - 2;
}
while (cent / 1 > 0)
{
coins++;
cent = cent - 1;
}
printf("%d\n", coins);
}
return (0);
}
