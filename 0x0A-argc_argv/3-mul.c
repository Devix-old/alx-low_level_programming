#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies command line arguments and prints the result
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;
int mul = 1;
for (i = 1; i < argc; i++)
{
mul = atoi(argv[i]) * mul;
}
printf("%d\n", mul);
return (0);
}
