#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiplies command line arguments and prints the result
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i, len, j;
int sum = 0;
if (argc == 0)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
len = strlen(argv[i]);
for (j = 0; j < len; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
}
sum = atoi(argv[i]) + sum;
}
printf("%d\n", sum);
return (0);
}
