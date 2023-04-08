#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the minimum number of coins
 *        required to give a specific amount of change
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int coins = 0;
int i;
int t_coins[] = {25, 10, 5, 2, 1};
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
for (i = 0; i < 5; i++)
{
while (cent / t_coins[i] > 0)
{
cent = cent - t_coins[i];
coins++;
}
}
printf("%d", coins);
}
return (0);
}
